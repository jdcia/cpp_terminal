#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_h

#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "process.h"

typedef void (*function_pointer)(void); //function pointer type def

class process_manager{
    public:
        //constructor
        process_manager();

        //variables:
        process *current_proc; //current process id

        std::vector<process> background_procs; //holds the ids of back process.

        std::map <std::string, function_pointer> built_in;

        //functions:
        void run(command com);

        void show_current();

        void show_backgrounded();

};

#endif