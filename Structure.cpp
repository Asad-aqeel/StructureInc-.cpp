#include <iostream>
#include <string>
using namespace std;

struct Labour

{
    int age;
    string name;
    float salary;
    char building;
};

struct Manager
{
    int earning;
    string name;
    float age;
    string location;
};
int main()
{

    Labour labour;
    Manager manager;

    for (int i = 1; i <= 3; i++)
    {

        cout<<endl;

        cout << "Enter the age of labour no:" << i << endl;
        cin >> labour.age;

        cout << "Enter the name of labour no:" << i  << endl;
        cin >> labour.name;

        cout << "Enter the salary of labour no:" << i  << endl;
        cin >> labour.salary;

        cout << "Enter the buildig name in which labour no:" << i << endl;
        cin >> labour.building;

        cout<<endl;

        cout << "The age of labour no" << i  << ":" << " is " << labour.age << "." << endl;
        cout << "The name of labour no" << i  << ":" << " is " << labour.name << "." << endl;
        cout << "The salary of labour no" << i  << ":"  << " is " << labour.salary << "." << endl;
        cout << "The building of labour no" << i << ":" << " is " << labour.building << "." << endl;
    }


    cout<<endl;

    cout << "Enter how much manager earns daily:" << endl;
    cin >> manager.earning;

    cout << "Enter the name of manager :" << endl;
    cin >> manager.name;

    cout << "Enter the age of manager:" << endl;
    cin >> manager.age;

    cout << "Enter the location of manager:" << endl;
    cin >> manager.location;

    cout<<endl;

    cout << "The manager earns daily is " << manager.earning << "." << endl;
    cout << "The name of manager is " << manager.name << "." << endl;
    cout << "The age of manager is " << manager.age << "." << endl;
    cout << "The loctaion of manager is " << manager.location << "." << endl;

    return 0;
}
