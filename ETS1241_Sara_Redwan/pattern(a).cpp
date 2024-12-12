#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu (Choose the patten you want to see):\n";
    cout << "1. Square with numbers\n";
    cout << "2. Rectangle of size (4x6) with uppercase alphabets\n";
    cout << "3. Left hand pyramid with numbers\n";
    cout << "4. Right side pyramid with numbers\n";
    cout << "5. Right triangle with uppercase alphabets\n";
    cout << "6. Square with lowercase alphabets\n";
    cout << "7. Hollow box of size (7x8) with stars\n";
    cout << "8. Inverted half pyramid with stars\n";
    cout << "9. Hollow inverted half pyramid with stars\n";
    cout << "10. Full pyramid with stars\n";
    cout << "11. Inverted full pyramid with stars\n";
    cout << "12. Hollow full pyramid with stars\n";
    cout << "13. exit\n";
    cout << "Enter your choice (1-12): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Square with numbers\n";
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= 5; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Rectangle of size (4x6) with uppercase alphabets\n";
            char alphabate;
            alphabate = 'A';
            for (int i = 1; i <= 4; i++) {
                for (int j = 1; j <= 6; j++) {
                    cout << alphabate++ << " ";
                }
                cout << endl;
            }
            break;
        case 3:
            cout << "Left hand pyramid with numbers\n";
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        case 4:
            cout << "Right side pyramid with numbers\n";
            for (int i = 1; i <= 5; i++) {
                for (int k = 5 - i; k > 0; k--) {
                    cout << "  "; 
                }
                for (int j = i; j >= 1; j--) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        case 5:
            cout << "Right triangle with uppercase alphabets\n";
            for (int i = 1; i <= 5; i++) {
                alphabate = 'A';  
                for (int j = 1; j <= i; j++) {
                    cout << alphabate++ << " ";
                }
                cout << endl;
            }
            break;
        case 6:
            cout << "Square with lowercase alphabets\n";
            for (int i = 1; i <= 5; i++) {
                alphabate = 'a';
                for (int j = 1; j <= 5; j++) {
                    cout << alphabate++ << " ";
                }
                cout << endl;
            }
            break;
        case 7:
            cout << "Hollow box of size (7x8) with stars\n";
            for (int i = 1; i <= 7; i++) {
                for (int j = 1; j <= 8; j++) {
                    if (i == 1 || i == 7 || j == 1 || j == 8) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        case 8:
            cout << "Inverted half pyramid with stars\n";
            for (int i = 6; i > 0; i--) {
                for (int j = i; j > 0; j--) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 9:
            cout << "Hollow inverted half pyramid with stars\n";
            for (int i = 6; i > 0; i--) {
                for (int j = i; j > 0; j--) {
                    if (i == 6 || i == 1 || j == i || j == 1) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        case 10:
            cout << "Full pyramid with stars\n";
            for (int i = 1; i <= 6; i++) {
                for (int k = 6 - i; k > 0; k--) {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 11:
            cout << "Inverted full pyramid with stars\n";
            for (int i = 6; i >= 1; i--) {
                for (int k = 6 - i; k > 0; k--) {
                    cout << " ";
                }
                for (int j = i; j >= 1; j--) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 12:
            cout << "Hollow full pyramid with stars\n";
            for (int i = 1; i <= 6; i++) {
                for (int k = 6 - i; k > 0; k--) {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++) {
                    if (i == 1 || i == 6 || j == 1 || j == i) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
            case 13:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!\n";
            break;
    }

    return 0;
}
