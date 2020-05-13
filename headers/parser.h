#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>

#ifndef PARSER_H
#define PARSER_h

struct command{

    std::string program;
    std::vector <std::string> args;

};

class parser{

    public:
        parser();

        command parse_line(std::string line);

        
    private:

        int history_max_size = 50; //history will only hold the last 50 commands.

        std::string *history;
};




#endif /*PARSER_H*/