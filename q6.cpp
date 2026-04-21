#include <iostream>
using namespace std;
int main() {
    double values[5];
    double sum=0;
    cout << "Enter 5 numbers:"<< endl;
    for (int i= 0;i <5;i++) {
        cin >>values[i];
        sum =sum +values[i];
    }
    double average =sum/ 5.0;
    cout<< "The average is: "<< average<< endl;
    return 0;
}
