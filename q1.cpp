#include <iostream>
using namespace std;

int main(){
    int days;
    int seconds;
    cout << "Enter the number of days: ";
    cin >> days;
    seconds = days * 24 * 60 * 60;
    cout << "The number of seconds is: " << seconds << endl;
    return 0;
}
