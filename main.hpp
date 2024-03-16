#include <iostream>
using namespace std;

int writeFile(string);
int readFile(string);

int writeFile(string fileName) {
ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int empID;
    int numOfEmp;
    string empName;
    string deptName;
    double salary;

    cin >> numOfEmp;
    ofs << numOfEmp << endl;

    for (int i = 0; i < numOfEmp; i++) {
        cin >> empID >> empName >> deptName >> salary;
        ofs << empID << " " << empName << " " << deptName << " " << salary << endl;
    }

    ofs.close();
    return fileName;
}

int readFile(string fileName) {
    ifstream ifs;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int empID;
    int numOfEmp;
    string empName;
    string deptName;
    double salary;
    double total = 0;
    double avg = 0;

    ifs >> numOfEmp;
    cout << numOfEmp << endl;

    for (int i = 0; i < numOfEmp; i++) {
        ifs >> empID >> empName >> deptName >> salary;
        total += salary;
        cout << "Employee ID: " << empID << " Name: " << empName << " Department: " << deptName << " Salary: " << salary << endl;
    }

    cout << "Total: " << total << endl;
    avg = total / numOfEmp;
    cout << "Average: " << avg << endl;

    return fileName;
}