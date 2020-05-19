#include "../headers/process.h"

//Base class-------------------------------------------------------

process::process(command c){
    com = c;
}

void process::preform_task(){
    //this will be for not built infunction
    std::cout << "To be executed: " << com.program << "\n";
}
