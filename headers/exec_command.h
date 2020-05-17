#ifndef EXEC_COMMAND_H
#define EXEC_COMMAND_h

#include <stdlib.h>
#include <iostream>
#include <string>
#include "parser.h"

class exec_command{
    public:
        //constructor
        exec_command();

        //functions
        void run(command com);

        void show_current();

        void show_backgrounded();




};

#endif