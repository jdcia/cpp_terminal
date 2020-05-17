#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_h

#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include "process.h"

class process_manager{
    public:
        //constructor
        process_manager();

        //variables:
        process *current_proc; //current process id

        std::vector<process> background_procs; //holds the ids of back process.

        //functions:
        void run(command com);

        void show_current();

        void show_backgrounded();

};

#endif