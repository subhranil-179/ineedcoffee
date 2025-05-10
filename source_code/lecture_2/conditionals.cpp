#include <iostream>
using namespace std;


int main () {
    int choice;


    cout << "1. Find relation with zero (0)\n2. Find the greater number\n3. Check the case\n4. Sum till a value\n5. Prime number checker\n6. Print square pattern\n7. Print whatever pattern is this called\n8. Sum of all even numbers\n9. Temprature converter\n\n";
    cout << "Select the operation: ";

    cin >> choice;

    cout << endl;

    if (choice == 1){
        int n;
        cout << "Enter the a number: ";
        cin >> n;

        cout << endl;

        if (n > 0) {
            cout << n << " is greater than zero!\n";
        }
        else if (n == 0) {
            cout << n << " is him (0)!\n";
        }
        else {
            cout << n << " is less than zero!\n";
        }
    }
    else if (choice == 2) {
        int m, n;

        cout << "Enter the first number: ";
        cin >> m;

        cout << "Enter the second number: ";
        cin >> n;

        cout << endl;

        if (m > n) {
            cout << m << " is greater than " << n << endl;
        }
        else if (n > m) {
            cout << n << " is greater than " << m << endl;
        }
        else {
            cout << "Both are equal, you on LSD bro?\n";
        }
    }
    else if (choice == 3) {
        char c;

        cout << "Enter a character: ";
        cin >> c;

        cout << endl;

        int int_of_c = c;

        if (int_of_c >= 48 && int_of_c <= 57) {
            cout << "It's a fucking numeric value you MORON!\n";
        }
        else if (int_of_c >= 65 && int_of_c <= 90) {
            cout << "It's upper case!\n";
        }
        else if (int_of_c >= 97 && int_of_c <= 122) {
            cout << "It's lower case!\n";
        }
        else {
            cout << "IDK WTF you're trying to do... it would be better if you did less drugs\n";
        }
    }
    else if (choice == 4) {
        int n;

        cout << "Enter a number: ";
        cin >> n;

        cout << endl;

        int sum = 0;
        int i = 1;

        while (i <= n) {
            sum += i;
            i++;
        }

        cout << "Sum is: " << sum;
    }
    else if (choice == 5) {
        int n;

        cout << "Enter a number: ";
        cin >> n;

        cout << endl;

        int i = 2;
        bool prime = true;

        while (i < n){
            if ( n%i == 0) {
                prime = false;
                break;
            }
            i++;
        }

        if (prime) {
            cout << n << " is a prime number.\n";
        }
        else {
            cout << n << " is not a prime number, divisible by " << i << ".\n";
        }
    }
    else if (choice == 6) {
        int n;

        cout << "Enter a number: ";
        cin >> n;

        cout << endl;

        int i = 1;

        while (i <= n){
            int j = 1;
            while (j <= n){
                cout << "*";
                j++;
            }
            cout << "\n";
            i++;
        }

    }
    else if (choice == 7) {
        int n;

        cout << "Enter a number: ";
        cin >> n;

        cout << endl;

        int i = 1;

        while (i <= n){
            int j = 1;
            while (j <= n){
                cout << i;
                j++;
            }
            cout << "\n";
            i++;
        }
    }

    else if (choice == 8){
        int n;

        cout << "Enter a number: ";
        cin >> n;

        cout << endl;

        int i = 1;
        int sum = 0;

        while (i <= n) {
            if (i%2 == 0){
                sum += i;
            }
            i++;
        }
        cout << "Sum of all even numbers till " << n << " is " << sum << endl;
    }

    else if (choice == 9) {
        int temp_choice;
        float temp, temp_converted;

        cout << "1. Celsius to Farenheit\n2. Farenheit to Celsius\n\n";
        cout << "Select the operation: ";

        cin >> temp_choice;

        cout << endl;

        cout << "Enter the temprature: ";
        cin >> temp;

        cout << endl;

        if (temp_choice == 1){
            temp_converted = ((temp)*(9.0/5.0)) + 32;
            cout << temp << "°C to Farenheit would be: " << temp_converted << "°F\n";
        }
        else if (temp_choice == 2){
            temp_converted = (temp-32)*(5.0/9.0);
            cout << temp << "°F to Celsius would be: " << temp_converted << "°C\n";
        }
        else {
            cout << "You fucking moron, give a valid choice input!!!\n";
        }

    }

    else {
        cout << "Use your god fucking damn brain & select a valid input\n";
    }

}
