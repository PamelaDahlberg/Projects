#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<limits>
#include<algorithm>

using namespace std;

double convert_ft_to_in(double value){
    value *= 12;
    return value;
}
double convert_in_to_cm(double value){
    value *= 2.54;
    return value;
}
double convert_cm_to_m(double value){
    value /= 100;
    return value;
}

int main(){  

    // First part of drill
    // double input_0 = 0;
    // double input_1 = 0;
    // double error = 1.0/100;
    // while(cin >> input_0 >> input_1){
    //     cout << input_0 << " - " << input_1 << endl;

    //     if(input_0 < input_1){
    //         cout << "The smaller input is: " << input_0 << '\n' << "The bigger input is: " << input_1 << '\n';
    //     }
    //     else if (input_0 > input_1){
    //         cout << "The smaller input is: " << input_1 << '\n' << "The bigger input is: " << input_0 << '\n';
    //     }
    //     else {
    //         cout << "Both inputs are equal: " << input_0 << " = " << input_1 << '\n';
    //     }

    //     if (abs(input_0 - input_1) < error && input_0 - input_1 != 0){
    //         cout << "The numbers are almost equal: " << "abs(" << input_0 << " - " << input_1 << ") < " << error << '\n';
    //     }
    // }

    // Second part of drill 
    // double input_0 = 0;
    // double min = numeric_limits<double>::max();
    // double max = numeric_limits<double>::min();

    // while(cin >> input_0){
    //     cout << "Your value: " << input_0 << '\n';
        
    //     if (input_0 < min){
    //         min = input_0;
    //         cout << "The smallest value so far: " << min << '\n';
    //     }
    //     if (input_0 > max){
    //         max = input_0;
    //         cout << "The largest value so far: " << max << '\n';
    //     }
    // }

    //Third part of drill
    double value = 0;
    string unit = "";

    double min = numeric_limits<double>::max();
    double max = numeric_limits<double>::min();

    double sum = 0;
    double count = 0;
    vector<double> v;

    while (cin >> value >> unit){
        if (unit == "ft"){
            value = convert_ft_to_in(value);
            //cout << value << '\n';
            unit = "in";
        }
        if (unit == "in"){
            value = convert_in_to_cm(value);
            //cout << value << '\n';
            unit = "cm";
        }
        if(unit == "cm"){
            value = convert_cm_to_m(value);
            //cout << value << '\n';
            unit = "m";
        }
        if (value < min){
            min = value;
            cout << "The smallest value so far: " << min << '\n';
        }
        if (value > max){
            max = value;
            cout << "The largest value so far: " << max << '\n';
        }

        sum += value;
        count++;
        v.push_back(value);

    }

    cout << "Smallest value: " << min << '\n' << "Largest value: " << max << '\n' << "Number of inputs: " << count << '\n' << "Sum of inputs: " << sum << '\n';
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    

    return 0;
}