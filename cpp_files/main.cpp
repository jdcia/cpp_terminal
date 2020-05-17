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

    //main while loop
    while(true){
        cout << "Enter string: \n";

        getline(cin, line);

        if(line.compare("exit") == 0){
            break;
        }

        com = p->parse_line(line);

        print_struct(com);

    }

    return 0;
}