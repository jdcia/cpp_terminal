#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include "main.h"

#ifndef PARSER_H
#define PARSER_h


class parser{

    public:
        parser();

        command parser_line(std::string line);

        
    private:

        int history_max_size = 50; //history will only hold the last 50 commands.

        std::string *history;
};




#endif /*PARSER_H*/