/*#include <iostream>
using namespace std;

const int rows = 3;
const int columns = 4;

int main() {
    int arr[rows][columns] = {{1, 2, 3, 4},
        {5, 6, 7, 8},{9, 10, 11, 12}};
     int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += arr[i][j];
        }
    }
    cout << "Sum of all elements in the array: " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    int arr[3][4] = {{5, 8, 3, 12},
        {7, 2, 9, 6},{4, 11, 1, 10} };
    int max = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum element in the array: " << max << endl;
    return 0;
}*/
#include <iostream>
using namespace std;
int main() {
    int arr[2][2] = { {1, 2},{3, 4} };
    for (int i = 1; i >= 0; i--) {
        for (int j = 1; j >= 0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  return 0;
}

