//My code file
#include <stdio.h>
#include </usr/include/python2.7/Python.h>

void main(int argc, char *argv[])
{
    FILE* file;


    Py_SetProgramName(argv[0]);
    Py_Initialize();
    PySys_SetArgv(argc, argv);
    file = fopen("/home/mrsimon/SuperDARN_MSI_ROS/linux/home/radar/ros.3.6/bin/server.py","r");
    PyRun_SimpleFile(file, "/home/mrsimon/SuperDARN_MSI_ROS/linux/home/radar/ros.3.6/bin/server.py");
    Py_Finalize();
    //system("bash restart_server.sh");
    return;
}
