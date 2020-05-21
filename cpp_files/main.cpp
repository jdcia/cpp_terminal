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

    signal_handler *sig = new signal_handler();

    //main while loop

    char hostname[HOST_NAME_MAX];
    char username[LOGIN_NAME_MAX];
    char cwd[FILENAME_MAX];


    gethostname(hostname, HOST_NAME_MAX);
    getlogin_r(username, LOGIN_NAME_MAX);
    getcwd(cwd, FILENAME_MAX );

    while(true){
        cout << username << "@" << hostname << ":" << cwd << "$ ";

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