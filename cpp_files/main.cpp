#include "../headers/main.h"

int main(){

    string line;

    parser *p = new parser();

    command com;

    while(true){
        cout << "Enter string: \n";

        getline(cin, line);

        if(line.compare("exit") == 0){
            break;
        }

        com = p->parse_line(line);

        cout << com.program << " ";

        for(string i : com.args){
            cout << "|" << i << "|" << " ";
        }
        cout << "\n";


    }

    return 0;
}