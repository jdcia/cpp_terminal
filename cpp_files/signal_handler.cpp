#include "../headers/signal_handler.h"


//constructor
signal_handler::signal_handler(){


    handler = signal(SIGINT, handle_signal);
    return;
}

void handle_signal(int s){
    std::cout << s << "\n";
    return;
}