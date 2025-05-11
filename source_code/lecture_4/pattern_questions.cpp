#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << endl;

    int i = 1;

    cout << "Patter 1: \n\n";

    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 2: \n\n";

    i = 1;

    while (i <= n){
        int j = n;
        while (j > 0){
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 3: \n\n";

    i = 1;

    int square_value = n*n;

    while (i <= square_value){
        cout << i;
        if (i%n == 0){
            cout << endl;
        }
        i++;
    }

    cout << "\nPatter 4: \n\n";

    i = 1;

    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 5: \n\n";

    i = 1;

    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 6: \n\n";

    i = 1;
    int numero = 1;

    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << numero;
            j++;
            numero++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 7: \n\n";

    i = 1;

    while (i <= n){
        int j = 1;
        while (j <= i) {
            cout << i+j-1;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 8: \n\n";

    i = 1;

    while (i <= n){
        int j = 1;
        while (j <= i) {
            cout << i-j+1;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 9: \n\n";

    i = 0;
    char val;

    while (i < n){
        val = 65+i;
        int j = 1;
        while (j <= n) {
            cout << val;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 10: \n\n";

    i = 0;
    char val_new;

    while (i < n){
        int j = 1;
        while (j <= n) {
            val_new = 64+j;
            cout << val_new;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 11: \n\n";

    i = 0;
    char val_newer;

    while (i < n){
        int j = n*i+1;
        while (j <= n*(i+1)) {
            val_newer = 64+j;
            cout << val_newer;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 12: \n\n";

    i = 0;
    char ch;

    while (i < n){
        int j = i;
        while (j < i+n) {
            ch = 65+j;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 13: \n\n";

    i = 0;
    char ch1;

    while (i < n){
        int j = 0;
        while (j <= i) {
            ch1 = 65+i;
            cout << ch1;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 14: \n\n";

    i = 0;
    char ch2;
    int counter = 0;

    while (i < n){
        int j = 0;
        while (j <= i) {
            ch2 = 65+counter;
            cout << ch2;
            j++;
            counter ++;
        }
        cout << endl;
        i++;
    }

    cout << "\nPatter 15: \n\n";

    i = n;
    char ch3;

    while (i > 0){
        int j = i;
        while (j <= n) {
            ch3 = 64+j;
            cout << ch3;
            j++;
        }
        cout << endl;
        i--;
    }

    cout << "\nPatter 16: \n\n";

    i = 1;

    while (i <= n){
        int j=1;
        while (j <= n) {
            if (j <= n-i) {
                cout << " ";
            }
            else {
                cout << "*";
            }
            j++;
        }
        cout << endl;
        i++;
    }

}
