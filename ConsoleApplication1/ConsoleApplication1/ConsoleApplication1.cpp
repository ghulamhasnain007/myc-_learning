/*
#include <iostream>
using namespace std;
int main() {
    int arr[5];
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int max = *arr; 
    for (int* ptr = arr + 1; ptr < arr +5; ptr++) {
        if (*ptr > max) {
            max = *ptr; 
        }
    }
    cout << "The maximum element in the array is: " << max << endl;
    return 0;
}
#include <iostream>
using namespace std;

int arraySum(int* arr) {
    int sum = 0;
    for (int i = 0; i < 5;i++){  
        sum += *(arr + i);
    }
    return sum;
}
int main() {
    int arr[5];
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int sum = arraySum(arr);
    cout << "Sum of elements in the array: " << sum << endl;
    return 0;
}*/
#include <iostream>
using namespace std;

unsigned long long factorial(int* num) {
    unsigned long long result = 1;
    for (int i = 1; i <= *num; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    unsigned long long factorialResult = factorial(&num);
    cout << "Factorial of " << num << " = " << factorialResult << endl;
    return 0;
}
