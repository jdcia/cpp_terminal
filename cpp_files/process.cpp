#include "../headers/process.h"

//Base class-------------------------------------------------------

process::process(command c){
    com = c;
}

void process::preform_task(){
    //this will be for not built infunction
    std::cout << "To be executed: " << com.program << "\n";
}

//Built in functions-----------------------------------------------

void preform_cd(){
    std::cout << "cd" << "\n";
}

void preform_ls(){
    std::cout << "ls" << "\n";
}

void preform_mkdir(){
    std::cout << "mkdir" << "\n";
}

void preform_rm(){
    std::cout << "rm" << "\n";
}

void preform_rmdir(){
    std::cout << "rmdir" << "\n";
}

void preform_pwd(){
    std::cout << "pwd" << "\n";
}

//Non built in program----------------------------------------------