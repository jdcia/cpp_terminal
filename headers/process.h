#ifndef PROCESS_H
#define PROCESS_h

#include "parser.h"


//base class. To be inherited by other class
class process{

    public:
        int pid; //since these will be full processes we need to keep track on the pid
        command com;

        //this will be overided class who inherits this
        process(command com);
        void preform_task();

};

#endif