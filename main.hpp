#include <iostream>
using namespace std;

int writeFile(string);

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
}