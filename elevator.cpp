#include <iostream>
#include <string>

using namespace std;


int main ()
{
    int c,kg,m;
    string a;
    cout << "Elevator V1.01" << endl;
thisisanlabel:
    cout << "Enter the number of people: ";
    cin >> c;
    cout << "Enter the overall weight of them: ";
    cin >> kg;
    m = kg / c;
    cout << endl << "All together " << c << " the people weigh " << kg << " kg." << endl;
    cout << "Average persons weight in this group is - " << m << endl;
    if ( kg > 300) {
        cout << "They cant ride the elevator all together.";
    } else {
        cout << "They can ride the elevator all together.";
    }
    cout << endl << endl <<"Do you wish to continue? y/n ";
    cin >> a;
    if (a=="y"){
        cout << endl;
        goto thisisanlabel;
    }
    return 0;
}

