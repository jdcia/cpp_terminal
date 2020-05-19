#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_h

#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "process.h"

typedef void (*function_pointer)(command com); //function pointer type def

class process_manager{ 
    public:
        //constructor
        process_manager();

        //variables:
        process *current_proc; //current process id

        std::vector<command> history;

        std::vector<process> background_procs; //holds the ids of back process.

        std::map <std::string, function_pointer> built_in;

    
        //functions:

        void run(command com);

        void show_current();

        void show_backgrounded();

        void print_history();


};



void preform_cd(command com);

void preform_ls(command com);

void preform_mkdir(command com);
    
void preform_rm(command com);

void preform_rmdir(command com);
    
void preform_pwd(command com);


#endif