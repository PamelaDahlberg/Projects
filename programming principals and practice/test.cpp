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
#include<vector>
using namespace std;

// Implement square() without using the multiplication operator; that is, do the x*x by repeated addition (start a
// variable result at 0 and add x to it x times). Then run some version of “the first program” using that square().

void print_vector(vector<int> v){
    for (int i = 0; i < v.size() ; i++){
        cout << v[i] << '\n';
    }
    cout << endl;
}

void print_vector(vector<double> v){
    for (int i = 0; i < v.size() ; i++){
        cout << v[i] << '\n';
    }
    cout << endl;
}

void print_vector_addresses(vector<int> v){
    for (int i = 0; i < v.size() ; i++){
        cout << &v[i] << '\n';
    }
    cout << endl;
}

int main(){

    vector<int> v = {1,2,3,4};
    print_vector_addresses(v);
    cout << "Vector Cap: " << v.capacity() << endl;
    cout << "Vector Max: " << v.max_size() << endl;

    
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    print_vector_addresses(v);

    cout << "Vector Cap: " << v.capacity() << endl;
    cout << "Vector Max: " << v.max_size() << endl;

    // print_vector(v);

    // vector<double> temp;
    
    // for(double temp_input; cin >> temp_input; ){
    //     temp.push_back(temp_input);
    // }

    // print_vector(temp);

    return 0;
}

