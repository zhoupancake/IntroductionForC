# !bin/sh
gcc helloWorld.c
#上述代码编译之后会产生一个名为a.exe的可执行文件
#可以用下面这行代码设定编译后的名字
#gcc helloWorld.c -o helloWorld
./a.exe HelloWorld
#.表示当前的目录，用于在当前目录下寻找到a.exe并且运行他
#./helloWorld HelloWorld