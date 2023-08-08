// testing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
using namespace std;
int recursion(int num) {
    if (num == 0 || num==1) {
        return num;
    }
    else {
        return recursion(num - 1) + recursion(num - 2);
    }
}
int main()
{
    int n;
    cout << "Enter the term: ";
    cin >> n;
    int result = recursion(n);
    cout<<"Fibonacci Series is: "<<result ;
    return 0;
}*/

#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch1[100];
    ofstream write("D:/text\\Train.txt");
    write << "Welcome to SMIU\n";
    cout << "Welcome to SMIU\n";

    ifstream read("D:/text\\Train.txt");
    cin.getline( ch1,100);

    return 0;
}