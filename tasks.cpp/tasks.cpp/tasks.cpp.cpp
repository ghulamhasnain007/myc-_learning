// tasks.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
using namespace std;
int add(int& a, int& b) {
    return a + b;
}
int main()
{
    int num1, num2;
    cout << "Enter First Intiger: ";
    cin >> num1;
    cout << "Enter Second Intiger: ";
    cin >> num2;
    int r=add(num1, num2);
    cout << "The Addition of Intigers are: " << r;
    return 0;
}
#include <iostream>
using namespace std;
float area(int & radius) {
    return (4*3.1428)*radius;
}
int main()
{
    float result;
    int r;
    cout << "Enter The Radius of a Circle: ";
    cin >> r;
    result = area(r);
    cout << "The Area of the Circle of Radius " << r << " is " << result;
    return 0;
}
#include<iostream>
using namespace std;
void arthimetic(int a,int b,int c) {
    cout << "The Arthimetic Sequence upto "<< c <<" terms are : " <<endl;
    for (int i = 1; i <= c; i++) {
        cout << a << "\n";
        a += b;
    }
    cout << endl;
}
int main() {
    int num1,num2,num3;
    cout << "Enter First Term of the sequence: ";
    cin >> num1;
    cout << "Enter Difference between Terms: ";
    cin >> num2;
    cout << "Enter the number of terms you want to display: ";
    cin >> num3;
    arthimetic(num1,num2,num3);
    return 0;
}
#include <iostream>
using namespace std;

void geometric(int a, int r, int n) {
    cout << "The Geometric Series up to " << n << " terms is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a << "\n";
        a *= r;
    }
    cout << endl;
}

int main() {
    int num1, num2, num3;
    cout << "Enter the First Term of the series: ";
    cin >> num1;
    cout << "Enter the Common Ratio: ";
    cin >> num2;
    cout << "Enter the number of terms you want to display: ";
    cin >> num3;
    geometric(num1, num2, num3);
    return 0;
}*/

#include<iostream>
using namespace std;
int cube(int a) {
    return a * a * a;
}
int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int r = cube(n);
    cout << "The cube of the given Integer is: " << r << endl;
    return 0;
}
