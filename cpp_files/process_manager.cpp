#include "../headers/process_manager.h"


//contructor for executing command. 
process_manager::process_manager(){
    return;
}


//Will run a single command.
void process_manager::run(command com){

    current_proc = new process(com);

    current_proc->preform_task();

}

//Shows current process running. This may not be used.
void process_manager::show_current(){

}

//Shows backgrounded processes.
void process_manager::show_backgrounded(){

}

