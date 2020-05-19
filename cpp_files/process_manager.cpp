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


    if(built_in.find(com.program) != built_in.end()){
        built_in[com.program](); //call built in function
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

