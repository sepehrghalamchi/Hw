#include<iostream>
#include<climits>
using namespace std;
 
int main() {
    int n = 10;
    int num, max = INT_MIN, min = INT_MAX,a;
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num > max) {
            max = num;
        }
        if(num < min) {
            min = num;
        }
    }
    cout << "Maximum number is: " << max << endl;
    cout << "Minimum number is: " << min << endl;
    a=max+min;
    cout<<"Average of max and min is : "<<a/2;
    return 0;}
