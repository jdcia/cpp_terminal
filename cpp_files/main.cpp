#include "../headers/main.h"


//print the values in the command struct. This is used for testing purposes.
void print_struct(command com){
    
    cout << com.program << " ";

    for(string i : com.args){
        cout << "|" << i << "|" << " ";
    }
    cout << "\n";
}

int main(){

    string line;

    parser *p = new parser();

    command com;

    process_manager *manager = new process_manager();

    //main while loop
    while(true){
        cout << "terminal:";

        getline(cin, line);

        if(line.compare("exit") == 0){
            break;
        }

        com = p->parse_line(line);

        print_struct(com);

        manager->run(com);

    }

    return 0;
}