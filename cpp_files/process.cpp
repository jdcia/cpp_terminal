#include "../headers/process.h"

//Base class-------------------------------------------------------

process::process(command c){
    com = c;
}

void process::preform_task(){
    std::cout << "To be executed: " << com.program << "\n";
}

//Built in functions-----------------------------------------------



//Non built in program----------------------------------------------