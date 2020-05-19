#ifndef SIGNAL_HANDLER_H
#define SIGNAL_HANDLER_h

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef void (*function_pointer)(int);
//This class will handle signals such as ctrl-c and ctrl-b;
class signal_handler{
    

    public:
        //constructor
        signal_handler();
        function_pointer handler;
        

};

void handle_signal(int s);


#endif