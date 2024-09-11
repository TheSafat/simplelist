#include "include/list.h"


void List::print_menu(string name)
{
    int choice;
    cout<<"*****************\n";
    cout<<"1 - Print List.\n";
    cout<<"2 - Add to List.\n";
    cout<<"3 - Delete from List.\n";
    cout<<"4 - Quit.\n";
    cout<<"Enter your choice and press enter.\n";

    cin>>choice;

    if(choice == 4) {
        exit(0);
    } else if (choice == 3) {
        delete_item();
    } else if (choice == 2) {
        add_item();
    } else if (choice == 1) {
        print_list();
    } else {
        cout<< "Sorrry choise hasn't been implemented\n";
    }
}

void List::print_list()
{
    cout << "\n\n\n\n\n" << endl;
    cout<<"*** Printing List ***\n";

    for(int i=0;i< int(list.size());i++)
    {
        cout<< i << ": "<<list[i]<<endl;
    }

    print_menu(name);
}

void List::add_item()
{
    cout << "\n\n\n\n\n" << endl;
    cout<<"*** Add Item ***\n";
    cout<<"Type and press enter: ";

    string s;
    cin>>s;
    list.push_back(s);
    cin.clear();

    print_menu(name);
}

void List::delete_item()
{
    cout << "\n\n\n\n\n" << endl;
    cout<<"*** Delete Item ***\n";
    cout<<"Select an item index number to delete\n";

    if(list.size())
    {
        for(int i=0;i<int(list.size());i++)
        {
            cout<< i << ": "<<list[i]<<endl;
        }

        int n;
        cin>>n;
        list.erase(list.begin()+n);
    }
    else {
        cout<<"No item is in the list to delete."<<endl;
    }

    print_menu(name);

}