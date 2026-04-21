#include <iostream>
using namespace std;

void checkCase(char c) {
    if(c >= 'A' && c <= 'Z') {
        cout<< c<< " is an uppercase letter." <<endl;
    } else if (c >= 'a' && c <= 'z') {
        cout<< c <<" is a lowercase letter."<< endl;
    } else {
        cout <<c<<" is not a letter." <<endl;
    }
}

int main() {
    char letter;
    cout<<"Enter a character: ";
    cin>>letter;
    checkCase(letter);
    return 0;
}
