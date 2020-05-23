#include "../headers/process_manager.h"


//contructor for executing command. 
process_manager::process_manager(){

    needs_update = false;

    //Initialize built in functions into hash map.
    built_in["cd"] = &preform_cd;
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
        //execute the function with execv.
        char *args[com.args.size() + 2];
        args[0] = const_cast<char *>(com.program.c_str());

        for(int i = 1; i < com.args.size(); i++){
            args[i] = const_cast<char *>(com.args[i].c_str());
        }

        args[com.args.size() + 1] = NULL;

        pid_t pid = fork();

        if(pid == -1){
            std::cout << "failed fork\n";
        }
        else if(pid > 0){
            //parent
            int status;
            waitpid(pid, &status, 0);            
        }
        else{
            execv(const_cast<char *>(com.program.c_str()), args);
            _exit(-1);
        }   

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

//may not support being that path is always shown.
void preform_pwd(process_manager *manager, command com){

    //add checks to make sure.
    
    char cwd[FILENAME_MAX];
    getcwd(cwd, FILENAME_MAX );

    std::cout << cwd << "\n";
}

