#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_h

#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "process.h"
#include <unistd.h>


class process_manager{ 
    typedef void (*function_pointer)(process_manager *manager, command com); //function pointer type def

    public:
        //constructor
        process_manager();

        //variables:
        std::string current_directory;

        bool needs_update;

        process *current_proc; //current process id

        std::vector<command> history;

        std::vector<process> background_procs; //holds the ids of back process.

        std::map <std::string, function_pointer> built_in;

    
        //functions:

        void run(command com);

        void show_current();

        void show_backgrounded();

};


//built in functions/syscalls
void preform_cd(process_manager *manager, command com);

void preform_ls(process_manager *manager, command com);

void preform_mkdir(process_manager *manager, command com);
    
void preform_rm(process_manager *manager, command com);

void preform_rmdir(process_manager *manager, command com);
    
void preform_pwd(process_manager *manager, command com);

void print_history(process_manager *manager, command com);

#endif