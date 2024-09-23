int loadUser(char* filePath, UNode *head){
    FILE* file = fopen(filePath, "r");
    if(NULL == file)
        return 1;
    if(NULL == head)
        return 2;
    while(!feof(file)){
        char buf[5][60];
        //char *name, char *id, char *phone, char *password
        for(int i = 0; i < sizeof(buf); i++)
            fscanf(file, "%s", buf[i]);
        if(!strcmp(buf[0], "User"))
            insertUser_list(initUser_load(buf[1], buf[2], buf[3], buf[4]), head);
        else
            return 3;
    }
    fclose(file);
    return 0;
}