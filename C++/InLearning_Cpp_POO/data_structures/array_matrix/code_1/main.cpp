// This code makes an array matrix
// This provides support for similar vectors
// Thus, avoiding the fact of reapeat lines of code to store data in arrays

#include<iostream>
using namespace std;

int balance_for_employees[5][12];   // [5] -> Employees; [12] -> Months
int counter = 0;

int main() {
    system("clear");
    for(int m = 0; m <= 12; m++) {
        for(int e = 0; e <= 5; e++) {
            balance_for_employees[e][m] = counter++;
            cout << "m = " << m << endl;
            cout << "e = " << e << endl;
            cout << balance_for_employees[e][m] << endl;
        }
    }

    //cout << balance_for_employees[5][12] << endl;
    return 0;
}


