#include <cmath>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){

    float bldgVolume;
    int nameLength;
    int bldgHeight;
    string name;
    string userInputDept;

    cout << "Hello, what is your name? " << endl;
    getline(cin, name);

    cout << "Ok " << name << ", which department are you in? (computers, art, psychology, music)" << endl;
    cout << "Please type your department as shown above (all lowercase):" << endl;
    cin >> userInputDept;

    

    cout << "And how many floors does your building have? (excluding the basement):" << endl;
    cin >> bldgHeight;
    

    cout << "Awesome, we will now calculate the volume of your building, given:" << endl;
    cout << "- The number of characters in your name." << endl;
    cout << "- Your departments code." << endl;
    cout << "- The number of floors your building has." << endl;
    cout << endl;

    //Count number of characters in name.
    nameLength = name.length();

    //Count the number of characters in departments name.
    int deptLength = userInputDept.length();
    
    //Calculate the bldg volume.
    bldgVolume = (bldgHeight * nameLength * deptLength);

    cout << "Your buildings volume is " << bldgVolume << " units." << endl;
    cout << endl;
    cout << "If you require a larger building, please see the registrar for changing your name. Thank you!";



    //Pause to close.
    cin >> bldgHeight;

    return 0;
}