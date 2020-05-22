#include "../headers/process_manager.h"


//contructor for executing command. 
process_manager::process_manager(){

    needs_update = false;

    //Initialize built in functions into hash map.
    built_in["cd"] = &preform_cd;
    built_in["ls"] = &preform_ls;
    built_in["mkdir"] = &preform_mkdir;
    built_in["rm"] = &preform_rm;
    built_in["rmdir"] = &preform_rmdir;
    built_in["pwd"] = &preform_pwd;
    built_in["history"] = &print_history;
    return;
}



//Will run a single command.
void process_manager::run(command com){ 

    history.push_back(com);

    if(built_in.find(com.program) != built_in.end()){
        built_in[com.program](this, com); //call built in function
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

void print_history(process_manager *manager, command com){
    for(command i : manager->history){
        std::cout << i.program << " ";

        for(std::string arg: i.args){
            std::cout << arg << " ";
        }

        std::cout << "\n";
    }
}

//Built in functions-----------------------------------------------

void preform_cd(process_manager *manager, command com){
    // std::cout << "cd" << "\n";

    //add checks here for arguements

    manager->needs_update = true;

    chdir(const_cast<char *>(com.args[0].c_str()));

}

void preform_ls(process_manager *manager, command com){
    std::cout << "ls" << "\n";
}

void preform_mkdir(process_manager *manager, command com){
    std::cout << "mkdir" << "\n";
}

void preform_rm(process_manager *manager, command com){
    std::cout << "rm" << "\n";
}

void preform_rmdir(process_manager *manager, command com){
    std::cout << "rmdir" << "\n";
}

//may not support being that path is always shown.
void preform_pwd(process_manager *manager, command com){

    //add checks to make sure.
    
    char cwd[FILENAME_MAX];
    getcwd(cwd, FILENAME_MAX );

    std::cout << cwd << "\n";
}

