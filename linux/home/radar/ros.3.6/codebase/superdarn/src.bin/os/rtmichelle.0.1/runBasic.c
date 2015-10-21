//My code file
#include <stdio.h>
#include <Python.h>

int main(int argc, char *argv[])
{
    FILE* file;
    int i = 0;
    int len = argc -1;
    char *arg[len];
    for (i = 1; i < argc; i++)
        arg[i-1] = argv[i];
 

    Py_SetProgramName(arg[0]);
    Py_Initialize();
    PySys_SetArgv(len, arg);
    file = fopen(arg[0],"r");
    PyRun_SimpleFile(file, arg[0]);
    Py_Finalize();
    //system("bash restart_server.sh");
    return 0;
}
