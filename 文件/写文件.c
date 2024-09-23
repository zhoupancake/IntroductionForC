int saveUser(char* filePath, UNode *head){
    FILE* file = fopen(filePath, "w");
    if(NULL == file)
        return 1;
    if(NULL == head)
        return 2;
    UNode *p = head->next;
    while(p){
        fprintf(file, "User %s %s %s %s\n", p->user.name, p->user.id, p->user.phone, p->user.password);
        p = p->next;
    }
    fclose(file);
    return 0;
}