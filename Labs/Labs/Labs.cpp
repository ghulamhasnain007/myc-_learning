/*include<iostream>
using namespace std;

int main() {
    const int size = 5;  

    int arr[size] = { 2, 7, 4, 1, 5 };  
    int sum = 0;  
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Sum of all elements in the array: " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[7] = { 12, 45, 67, 23, 9, 51, 31 };  
    int max = arr[0]; 

    for (int i = 1; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum element in the array: " << max << endl;
 return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int arr[6] = { 5, 8, 3, 12, 7, 10 };  // Array initialization
    int count = 0;  
    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    cout << "Number of even elements in the array: " << count << endl;
    return 0;
}

