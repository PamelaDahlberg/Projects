// #include "std_lib_facilities.h"
// In case std_lib_facilities.h does not exists
/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
*/

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    string first_name {};
    string friend_name {};
    char gender {};
    int age {0};

    cout << "Enter your name: ";
    cin >> first_name;
    cout << "Dear " << first_name << " how are you?" << "\n" << "How is you friend..." << "\n";
    cin >> friend_name;
    cout << friend_name << "?" << "\n" << "Are they a boy (m) or girl (f)?" << "\n";
    cin >> gender;
    if(gender == 'm'){
        cout << "Please have him call me" << "\n";
    }
    else if(gender == 'f'){
        cout << "Please have her call me" << "\n";
    }
    else {
        cout << "Please have them call me" << "\n";
    }

    cout << "How old are you?" << "\n";
    cin >> age;
    
    if (age < 0 || age > 110){
        cout << "Wow, you're kidding!?" << "\n";
    }
    else if (age <= 12 && age > 0){
        cout << "Next year you will be: " << age + 1 << "\n";
    }
    else if (age > 12 && age < 17){
        cout << "You're a young adult!" << "\n";
    }
    else if(age == 17){
        cout << "Next year you can vote!" << "\n";
    }
    else if (age >= 18 && age < 70){
        cout << "Enjoy adulthood" << "\n";
    }
    else if (age >= 70){
        cout << "I hope you're enjoying retirement" << "\n";
    }

    cout << "Love, P-Dawg";
    
    return 0;
}