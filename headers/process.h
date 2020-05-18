#ifndef PROCESS_H
#define PROCESS_h

#include "parser.h"


//base class. To be inherited by other class
class process{

    public:
        int process_id;

        command com;

        //this will be overided class who inherits this
        process(command com);
        void preform_task();

};

//built in functions

class cd : public process{
    void preform_task();
};

class ls : public process{
    void preform_task();
};

class mkdir : public process{
    void preform_task();
};

class rm : public process{
    void preform_task();
};

class rmdir : public process{
    void preform_task();
};

class pwd : public process{
    void preform_task();
};

//none built in function
class other_program : public process{};

#endif