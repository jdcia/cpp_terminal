#include "../headers/process.h"

//Base class-------------------------------------------------------

process::process(command c){
    com = c;
}

void process::preform_task(){
    std::cout << "To be executed: " << com.program << "\n";
}

//Built in functions-----------------------------------------------

void cd::preform_task(){
    std::cout << "cd" << "\n";
}

void ls::preform_task(){
    std::cout << "ls" << "\n";
}

void mkdir::preform_task(){
    std::cout << "mkdir" << "\n";
}

void rm::preform_task(){
    std::cout << "rm" << "\n";
}

void rmdir::preform_task(){
    std::cout << "rmdir" << "\n";
}

void pwd::preform_task(){
    std::cout << "pwd" << "\n";
}

//Non built in program----------------------------------------------