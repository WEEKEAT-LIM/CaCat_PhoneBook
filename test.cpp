#include "a.h"
#include <iostream>

struct Person AllPerson[1000] = {};
int Count = 0;
int SYSTEM = 1;
int C_M;

int main()
{
    while (SYSTEM)
    {
        MENU();
        string CH = Choice();
        if (CH == "7")
        {
            system("cls");
            cout << "BYE BYE~~"<<endl;
            SYSTEM = 0;
        }
        else if (CH == "1")
        {
            system("cls");
            AddPerson(AllPerson,&Count);
            
        } 
        else if (CH == "2")
        {
            system("cls");
            ShowAll(AllPerson,&Count);
        }
        else if (CH == "3")
        {
            system("cls");
            cout << "Enter the person name to delete : ";
            string n;
            cin >> n;
            int iI = IsExist(AllPerson,n,&Count);
            if (iI != -1)
            {
                DeletePerson(AllPerson,&Count,iI);
            }
            else {cout << n << " D.N.E."<<endl;}
        }
        else if (CH == "4")
        {
            system("cls");
            cout << "Enter the person name to find : ";
            string sn;
            cin >> sn;
            int ValI = IsExist(AllPerson, sn, &Count);
            if (ValI != -1)
            {
                FindPerson(AllPerson, ValI);
            }
            else
            {
                cout << sn << " D.N.E." << endl;
            }
        }
        else if (CH == "5")
        {
            system("cls");
            cout << "Enter the person name to modify : ";
            string mn;
            cin >> mn;
            int MI = IsExist(AllPerson, mn, &Count);
            if (MI != -1)
            {
                Modify(AllPerson, MI);
            }
            else
            {
                cout << mn << " D.N.E." << endl;
            }
        }
        else if (CH == "6")
        {
            system("cls");
            Count = 0;
            cout << "DONE ---> CLEAR ALL" << endl;
        }
        else {cout << "Choose again..." <<endl;}
    }
    return 0;
}