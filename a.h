#include <iostream>
#include <string>
using namespace std;



struct Person{
    string Name;
    string Gender;
    string Age;
    string PhoneNumber;
    string Address;
};

void MENU(){
    cout << " Wellcome TO PhoneBook : " <<endl;
    cout << " 1. Add Person " <<endl;
    cout << " 2. Show Person " <<endl;
    cout << " 3. Delete Person " <<endl;
    cout << " 4. Find Person " <<endl;
    cout << " 5. Modify Person " << endl;
    cout << " 6. Clear All Person " << endl;
    cout << " 7. Exit "<< endl;
}

string Choice()
{
    string C;
    cout << "Please Insert Your Choice : ";
    cin >> C;
    return C;
}

void AddPerson(struct Person* AP_ptr,int *cnt){
    struct Person TempP;

    cout << "Insert Name : ";
    cin >> TempP.Name;

    cout << "Insert Gender : ";
    cin >> TempP.Gender;

    cout << "Insert Age : ";
    cin >> TempP.Age;

    cout << "Insert Phone Number : ";
    cin >> TempP.PhoneNumber;

    cout << "Insert Address : ";
    cin >> TempP.Address;

    AP_ptr[*cnt] = TempP;
    *cnt +=1;
    cout << "You Added " << TempP.Name << " To Your Phone Book."<<endl;
    cout <<endl;
}

void ShowAll(struct Person *AP_ptr, int *cnt)
{
    for (int i = 0; i < *cnt;i++)
    {
        cout << endl;
        cout << i << " Name = "<<AP_ptr[i].Name<<endl;
        cout << i << " Gender = " << AP_ptr[i].Gender << endl;
        cout << i << " Age = " << AP_ptr[i].Age << endl;
        cout << i << " Phone Number = " << AP_ptr[i].PhoneNumber << endl;
        cout << i << " Address = " << AP_ptr[i].Address << endl;
        cout << endl;
    }
}

int IsExist(struct Person * ptr, string name, int *cnt)
{
    for (int i = 0; i < *cnt; i++)
    {
        if(ptr[i].Name == name){return i;}
    }
    return-1;
}

void DeletePerson(struct Person *AP_ptr, int *cnt, int r)
{
    for (int i = r; i < *cnt; i++)
    {
        AP_ptr[i] = AP_ptr[i+1];
    }
    *cnt -=1;
    cout << "DONE ----> DELETE" <<endl;
}

void FindPerson(struct Person *AP_ptr, int r)
{
    cout << endl;
    cout << "Name : " << AP_ptr[r].Name << endl;
    cout << "Age : " << AP_ptr[r].Age << endl;
    cout << "Gender : " << AP_ptr[r].Gender << endl;
    cout << "Phone Number : " << AP_ptr[r].PhoneNumber << endl;
    cout << "Address : " << AP_ptr[r].Address << endl;
    cout << endl;
}

void Modify(struct Person *AP_ptr, int r)
{
    struct Person TempP;

    cout << "Insert Name : ";
    cin >> TempP.Name;

    cout << "Insert Gender : ";
    cin >> TempP.Gender;

    cout << "Insert Age : ";
    cin >> TempP.Age;

    cout << "Insert Phone Number : ";
    cin >> TempP.PhoneNumber;

    cout << "Insert Address : ";
    cin >> TempP.Address;

    AP_ptr[r].Address = TempP.Address;
    AP_ptr[r].Age = TempP.Age;
    AP_ptr[r].Gender = TempP.Gender;
    AP_ptr[r].Name =TempP.Name;
    AP_ptr[r].PhoneNumber = TempP.PhoneNumber;

    cout << "DONE ---- > MODIFY" << endl;
    cout << endl;
}