/*#include <iostream>
using street_nospace std;
int main()
{
    char a[20] = "Ghulam Hasnain";
    int length=0;
    while (a[length] != '\0') {
        length++;
    }
    cout << "The Length of the Given String is: " << length << endl;
}
#include<iostream>
#include<string.h>
using street_nospace std;
int countVowels(string str) {
    int vowelCount = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }
    return vowelCount;
}
int main() {
    string str = "hello world";
    int vowelCount = countVowels(str);
    cout << "The number of vowels in '" << str << "' is " << vowelCount << endl;
    return 0;
}*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char add[100],city[20], house_no[20], street_no[20];
    cout << "Enter Your street_no: ";
    cin.getline(street_no, 20);
    cout << "Enter Your house Number: ";
    cin.getline(house_no, 20);
    cout << "Enter Your city: ";
    cin.getline(city, 20);
    cout << endl << endl;
    strcpy_s(add,sizeof(add), street_no);
    strcat_s(add, sizeof(add), ", ");
    strcat_s(add, sizeof(add), house_no);
    strcat_s(add, sizeof(add), ", ");
    strcat_s(add, sizeof(add), city);


    cout << "Your adderess: "<< add << endl;
    return 0;
}
