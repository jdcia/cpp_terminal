#include "../headers/parser.h"

/*
This file will parse an input line to the terminal.

Args: line is the input line

Return: Command structure to be executed.
*/

//contructor
parser::parser(){
    return;
}

command parser::parse_line(std::string line){

    //TODO: CHECK FOR MODIFIERS SUCH AS | , << , >>, >, <
    //This could create an offset or checks before parsing program.

    command result;

    int last_space = 0;
    int next_space = line.find(" ");

    if(next_space != std::string::npos){

        //find program call
        result.program = line.substr(last_space, next_space);

        last_space = next_space;
        next_space = line.find(" ", last_space + 1);


        //get arguements.
        while(next_space != std::string::npos){
            result.args.push_back(line.substr(last_space + 1 , next_space - last_space - 1));


            last_space = next_space;
            next_space = line.find(" ", last_space + 1);
        }
        result.args.push_back(line.substr(last_space + 1, line.length() - last_space));
    }
    else{
        result.program = line;
    }

    return result;
    
}