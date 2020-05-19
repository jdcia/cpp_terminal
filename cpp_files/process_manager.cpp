#include "../headers/process_manager.h"


//contructor for executing command. 
process_manager::process_manager(){
    //Initialize built in functions into hash map.
    built_in["cd"] = &preform_cd;
    built_in["ls"] = &preform_ls;
    built_in["mkdir"] = &preform_mkdir;
    built_in["rm"] = &preform_rm;
    built_in["rmdir"] = &preform_rmdir;
    built_in["pwd"] = &preform_pwd;
    return;
}



//Will run a single command.
void process_manager::run(command com){ 

    history.push_back(com);

    //TODO try to find way to put into map
    if(com.program.compare("history") == 0){
        print_history();
    }
    else if(built_in.find(com.program) != built_in.end()){
        built_in[com.program](com); //call built in function
    }
    else{
        //function not found
        std::cout << "Program not found\n"; 
    }



}

//Shows current process running. This may not be used.
void process_manager::show_current(){

}

//Shows backgrounded processes.
void process_manager::show_backgrounded(){

}

void process_manager::print_history(){
    for(command i : history){
        std::cout << i.program << " ";

        for(std::string arg: i.args){
            std::cout << arg << " ";
        }

        std::cout << "\n";
    }
}

//Built in functions-----------------------------------------------

void preform_cd(command com){
    std::cout << "cd" << "\n";
}

void preform_ls(command com){
    std::cout << "ls" << "\n";
}

void preform_mkdir(command com){
    std::cout << "mkdir" << "\n";
}

void preform_rm(command com){
    std::cout << "rm" << "\n";
}

void preform_rmdir(command com){
    std::cout << "rmdir" << "\n";
}

void preform_pwd(command com){
    std::cout << "pwd" << "\n";
}

