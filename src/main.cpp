#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[])
{
    if(arg_count > 1){
        List simpleList;

        simpleList.name = string(args[1]);
        simpleList.print_menu(simpleList.name);
    } else {
        cout<<"no username added."<<endl;
    }

    Database db;
    db.write();
    db.read();




    return 0;
}
