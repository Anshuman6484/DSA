#include <bits/stdc++.h>

#define max 20
using namespace std;

struct Student
{
    string name;
    long int code;
    string branch;
    int exp;
    int age;
};

int num;
void showMenu();

Student emp[max], tempemp[max], sortemp[max], sortemp1[max];

void build()
{
    cout << "Build The Table\n";
    cout << "Maximum Entries can be "
         << max << "\n";

    cout << "Enter the number of entries required: ";
    cin >> num;

    if (num > 20)
    {
        cout << "Maximum number of "
             << "Entries are 20\n";
        num = 20;
    }
    cout << "Enter the following data:\n";

    for (int i = 0; i < num; i++)
    {
        cout << "Name: ";
        cin.ignore();
        getline(cin, emp[i].name);
        cout << "Student ID: ";
        cin >> emp[i].code;

        cout << "Branch: ";
        cin.ignore();
        getline(cin, emp[i].branch);

        cout << "Batch: ";
        cin >> emp[i].exp;

        cout << "Age: ";
        cin >> emp[i].age;
    }

    showMenu();
}

void insert()
{
    if (num < max)
    {
        int i = num;
        num++;

        cout << "Enter the information "
             << "of the Student\n";
        cout << "Name ";
        cin.ignore();
        getline(cin, emp[i].name);

        cout << "Student ID ";
        cin >> emp[i].code;

        cout << "Branch ";
        cin.ignore();
        getline(cin, emp[i].branch);

        cout << "Batch ";
        cin >> emp[i].exp;

        cout << "Age ";
        cin >> emp[i].age;
    }
    else
    {
        cout << "Student Table Full\n";
    }

    showMenu();
}

void deleteIndex(int i)
{
    for (int j = i; j < num - 1; j++)
    {
        emp[j].name = emp[j + 1].name;
        emp[j].code = emp[j + 1].code;
        emp[j].branch = emp[j + 1].branch;
        emp[j].exp = emp[j + 1].exp;
        emp[j].age = emp[j + 1].age;
    }
    return;
}

void deleteRecord()
{
    cout << "Enter the Student ID "
         << "to Delete Record";

    int code;
    int flag = 0;
    cin >> code;
    for (int i = 0; i < num; i++)
    {
        if (emp[i].code == code)
        {
            flag = 1;
            deleteIndex(i);
            num--;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Invalid ID\n";
    }
    showMenu();
}

void searchRecord()
{
    cout << "Enter the Student"
         << " ID to Search Record";

    int code;
    cin >> code;
    int flag = 0;
    for (int i = 0; i < num; i++)
    {

        if (emp[i].code == code)
        {
            flag = 1;
            cout << "Name "
                 << emp[i].name << "\n";

            cout << "Student ID "
                 << emp[i].code << "\n";

            cout << "branch "
                 << emp[i].branch << "\n";

            cout << "Batch "
                 << emp[i].exp << "\n";

            cout << "Age "
                 << emp[i].age << "\n";
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Invalid ID\n";
    }

    showMenu();
}

void DisplayRecord()
{
    cout << "all the Student Record" << endl;
    cout << "  Name    "
         << "        Student ID "
         << "     Branch "
         << "           Batch "
         << "    Age " << endl;
    for (int i = 0; i < num; i++)
    {

        cout << emp[i].name << "\t\t\t" << emp[i].code << "\t\t" << emp[i].branch << "\t\t" << emp[i].exp << "\t\t" << emp[i].age << "\n";
    }

    showMenu();
}

void Updaterecord()
{
    cout << "Enter the id to update\n";
    int code;
    cin >> code;
    int flag = 0;
    for (int i = 0; i < num; i++)
    {

        if (emp[i].code == code)
        {
            flag = 1;
            cout << "Name "
                 << emp[i].name << "\n";

            cout << "Student ID "
                 << emp[i].code << "\n";

            cout << "Branch "
                 << emp[i].branch << "\n";

            cout << "Batch "
                 << emp[i].exp << "\n";

            cout << "Age "
                 << emp[i].age << "\n";

            cout << "Enter The name \n";
            cin.ignore();
            getline(cin, emp[i].name);

            cout << " Enter The Student ID \n";
            cin >> emp[i].code;

            cout << "Enter The Branch \n";
            cin.ignore();
            getline(cin, emp[i].branch);

            cout << "Enter The Batch \n ";
            cin >> emp[i].exp;

            cout << " Enter The Age \n";
            cin >> emp[i].age;

            cout << "Information Have been Updated Successfully..........\n";
            break;
        }
        if (flag == 0)
        {
            cout << "Invalid Id \n";
        }
    }

    showMenu();
}

// Functions
void showMenu()
{

    cout << "------------------------"
         << "Capture the flag Student"
         << "-------------------------\n\n";

    cout << "Available Options:\n\n";
    cout << "Build Table         (1)\n";
    cout << "Insert New Entry    (2)\n";
    cout << "Delete Entry        (3)\n";
    cout << "Search a Record     (4)\n";
    cout << "Display Records     (5)\n";
    cout << "Update Record       (6)\n";
    cout << "Exit                (7)\n";

    int option;

    // Input Options
    cin >> option;

    // Call function on the basis of the
    // above option
    if (option == 1)
    {
        build();
    }
    else if (option == 2)
    {
        insert();
    }
    else if (option == 3)
    {
        deleteRecord();
    }
    else if (option == 4)
    {
        searchRecord();
    }
    else if (option == 5)
    {
        DisplayRecord();
    }
    else if (option == 6)
    {
        Updaterecord();
    }
    else if (option == 7)
    {
        return;
    }
    else
    {
        cout << "Expected Options"
             << " are 1/2/3/4/5";
        showMenu();
    }
}

// Driver Code
int main()
{

    showMenu();
    return 0;
}