#include "../std_lib_facilities.h"
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
#include<array>
#include<limits>
#include<algorithm>

using namespace std;

int main(){  

    try {
        int count = 0;
        cout << "TEST: " << ++count << '\n';
        // Cout << "Success!\n";
        cout << "Success!\n";

        cout << "TEST: " << ++count << '\n';
        // cout << "Success!\n;
        cout << "Success!\n";

        cout << "TEST: " << ++count << '\n';
        // cout << "Success" << !\n"
        cout << "Success" << "!\n";

        cout << "TEST: " << ++count << '\n';
        // cout << success << '\n';
        cout << "Success!" << '\n';

        cout << "TEST: " << ++count << '\n';
        // string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        
        cout << "TEST: " << ++count << '\n';
        // vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
        vector<int> v1(10); v1[5] = 7; if (v1[5]==7) cout << "Success!\n";

        cout << "TEST: " << ++count << '\n';
        // if (cond) cout << "Success!\n"; else cout << "Fail!\n";
        bool cond = true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";

        cout << "TEST: " << ++count << '\n';
        // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
        bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";

        cout << "TEST: " << ++count << '\n';
        // string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        string s = "ape"; bool c1 = "fool" > s; if (c1) cout << "Success!\n"; else cout << "Fail\n";

        cout << "TEST: " << ++count << '\n';
        // string s = "ape"; if (s=="fool") cout << "Success!\n";
        string s1 = "ape"; if (s1!="fool") cout << "Success!\n";

        cout << "TEST: " << ++count << '\n';
        // string s = "ape"; if (s=="fool") cout < "Success!\n";
        string s2 = "ape"; if (s2!="fool") cout << "Success!\n";

        cout << "TEST: " << ++count << '\n';
        // string s = "ape"; if (s+"fool") cout < "Success!\n";
        string s3 = "ape"; if (s3+"fool" == "apefool") cout << "Success!\n";
        
        cout << "TEST: " << ++count << '\n';
        // vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
        vector<char> v2(5); for (int i=0; i<v2.size(); ++i); cout << "Success!\n";

        cout << "TEST: " << ++count << '\n';
        // vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << "Success!\n";

        cout << "TEST: " << ++count << '\n';
        // string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
        string s4 = "Success!\n"; for (int i=0; i<s4.size(); ++i) cout << s4[i];

        cout << "TEST: " << ++count << '\n';
        // if (true) then cout << "Success!\n"; else cout << "Fail!\n";
        if (true) cout << "Success!\n"; else cout << "Fail!\n";

        cout << "TEST: " << ++count << '\n';
        // int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        int x = 2000; char c2 = x; if (c2==-48) cout << "Success!\n";

        cout << "TEST: " << ++count << '\n';
        // string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
        string s5 = "Success!\n"; for (int i=0; i<8; ++i) cout << s5[i];


        // vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        // int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
        // int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
        // string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        // int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
        // int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
        // cin << "Success!\n";

        keep_window_open();
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }

    return 0;
}