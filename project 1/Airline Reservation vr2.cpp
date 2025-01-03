#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

bool seats[2][100] = {false}; // 0-29: First Class, 0-69: Economy
string passengerDetails[2][100][3]; // [][0]: Name, [][1]: Sex, [][2]: Passport Number
int passengerAge[2][100]; 

int main() {
    int choice, seatType, seatNumber, age, seatIndex;
    string name, passportNumber, acceptOtherClass;
    char sex;

    cout << "Welcome to Logicians Airline Reservation System!" << endl;

    while (true) {
        cout << "\nPlease type 1 for First Class" << endl;
        cout << "Please type 2 for Economy" << endl;
        cout << "Please type 3 to see available and occupied seats" << endl;
        cout << "Please type 4 to cancel a reservation" << endl;
        cout << "Please type 5 to search for a passenger by name" << endl;
        cout << "Please type 6 to exit the program" << endl;
        p:
        cin >> choice;

        if (choice == 1 || choice == 2) {
            seatType = (choice == 1) ? 0 : 1;
            bool seatAssigned = false;

            for (int i = 0; i < ((seatType == 0) ? 30 : 70); ++i) {
                if (!seats[seatType][i]) {
                    seats[seatType][i] = true;

                    cout << "Enter your name: ";
                    cin.ignore();
                    a:
                    getline(cin, name);
                    for (char c : name) {
                        if (!isalpha(c) && !isspace(c)) {
                            cout << "A name can only contain alphabets and spaces! Please try again." << endl;
                            goto a;
                        }
                    }

                    cout << "Enter your sex: ";
                    b:
                    cin >> sex;
                    sex=toupper(sex);
                    if (sex != 'M' && sex != 'F') { 
                        cout << "That is not a valid gender! Try to insert letter M for male, letter F for female." << endl;
                        goto b;
                    }

                    cout << "Enter your age: ";
                    c:
                    cin >> age;
                    if (cin.fail() || age < 0) {
                        cout << "Invalid age! Please enter a valid age again: ";
                        cin.clear();
                        cin.ignore(1000, '\n');
                        goto c;
                    }
                    cin.ignore(1000, '\n');
                    cout << "Enter your passport number: ";
                   
                    d:
                    getline(cin, passportNumber);
                    for (char c : passportNumber) { // change the string to character
                        if (!isalnum(c)) { 
                            cout << "A Passport number can only contain alphabets and numbers! Please try again." << endl;
                            goto d;
                        }
                    }
                    if (passportNumber.length() != 9) {
                        cout << "Invalid Passport number size, must be exactly 9. Please enter again: " << endl;
                        goto d;
                    }

                    passengerDetails[seatType][i][0] = name;
                    passengerDetails[seatType][i][1] = string(1, sex);  // change the char to string
                    passengerDetails[seatType][i][2] = passportNumber;
                    passengerAge[seatType][i] = age;

                    cout << "Boarding Pass: Seat " << (seatType == 0 ? i + 1 : i + 31) << ", " << (seatType == 0 ? "First Class" : "Economy") << endl;
                    cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
                    seatAssigned = true;
                    break;
                }
            }

            if (!seatAssigned) {
                if (seatType == 0) {
                    cout << "First Class is fully booked. Would you like to be placed in Economy? (Yes/No): ";
                } else {
                    cout << "Economy is fully booked. Would you like to be placed in First Class? (Yes/No): ";
                }
                cin.ignore();
                getline(cin, acceptOtherClass);

                if (acceptOtherClass == "Yes" || acceptOtherClass == "yes") {
                    seatType = 1 - seatType;                                   // Switch seat type (0 to 1 or 1 to 0) change class
                    for (int i = 0; i < ((seatType == 0) ? 30 : 70); ++i) {
                        if (!seats[seatType][i]) {
                            seats[seatType][i] = true;
                            cout << "Enter your name: ";
                            cin.ignore();
                            a2:
                            getline(cin, name);
                            for (char c : name) {
                                if (!isalpha(c) && !isspace(c)) {
                                    cout << "A name can only contain alphabets and spaces! Please try again." << endl;
                                    goto a2;
                                }
                            }
                            cout << "Enter your sex: ";
                            b2:
                            cin >> sex;
                            sex=toupper(sex);
                            if (sex != 'M' && sex != 'F') { 
                                cout << "That is not a valid gender! Try to insert capital letter M for male, capital letter F for female." << endl;
                                goto b2;
                            }
                            cout << "Enter your age: ";
                            c2:
                            cin >> age;
                            if (cin.fail() || age < 0) {
                                cout << "Invalid age! Please enter a valid age again: ";
                                cin.clear();
                                cin.ignore(1000, '\n');
                                goto c2;
                            }
                            cin.ignore(1000, '\n');
                            cout << "Enter your passport number: ";
                            d2:
                            getline(cin, passportNumber);
                            for (char c : passportNumber) { 
                                if (!isalnum(c)) { 
                                    cout << "A Passport number can only contain alphabets and numbers! Please try again." << endl;
                                    goto d2;
                                }
                            }
                            if (passportNumber.length() != 9) { 
                                cout << "Invalid Passport number size, must be exactly 9. Please enter again: " << endl;
                                goto d2;
                            }

                            passengerDetails[seatType][i][0] = name;
                            passengerDetails[seatType][i][1] = string(1, sex);
                            passengerDetails[seatType][i][2] = passportNumber;
                            passengerAge[seatType][i] = age;

                            cout << "Boarding Pass: Seat " << (seatType == 0 ? i + 1 : i + 31) << ", " << (seatType == 0 ? "First Class" : "Economy") << endl;
                            cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
                            seatAssigned = true;
                            break;
                        }
                    }
                    if (!seatAssigned) {
                        cout << (seatType == 0 ? "First Class" : "Economy") << " is also fully booked. Next flight leaves in 3 hours." << endl;
                    }
                } else {
                    cout << "Next flight leaves in 3 hours." << endl;
                }
            }
        } else if (choice == 3) {
            cout << "First Class Seat Status:" << endl;
            for (int i = 0; i < 30; ++i) {
                cout << "Seat " << i + 1 << ": " << (seats[0][i] ? "Occupied" : "Available") << endl;
            }
            cout << "Economy Seat Status:" << endl;
            for (int i = 0; i < 70; ++i) {
                cout << "Seat " << i + 31 << ": " << (seats[1][i] ? "Occupied" : "Available") << endl;
            }
        } else if (choice == 4) {
            cout << "Enter your seat number to cancel the reservation: ";
            cin >> seatNumber;
            cout << "Enter your passport number: ";
            cin.ignore();
            getline(cin, passportNumber);

            if (seatNumber <= 30) {
                seatType = 0;
                seatIndex = seatNumber - 1;
            } else {
                seatType = 1;
                seatIndex = seatNumber - 31;
            }

            if (seats[seatType][seatIndex] && passengerDetails[seatType][seatIndex][2] == passportNumber) {
                seats[seatType][seatIndex] = false;
                passengerDetails[seatType][seatIndex][0].clear();
                passengerDetails[seatType][seatIndex][1].clear();
                passengerDetails[seatType][seatIndex][2].clear();
                passengerAge[seatType][seatIndex] = 0;
    cout << "Reservation for seat " << seatNumber << " in " << (seatType == 0 ? "First Class" : "Economy") << " has been canceled." << endl;
            } else {
                cout << "Invalid seat number or passport number." << endl;
            }
        } else if (choice == 5) {
            cout << "Enter the name of the passenger to search: ";
            cin.ignore();
            getline(cin, name);
            bool passengerFound = false;

            cout << "Searching in First Class..." << endl;
            for (int i = 0; i < 30; ++i) {
                if (passengerDetails[0][i][0] == name) {
                    cout << "Passenger found in First Class, Seat " << (i + 1) << endl;
                    cout << "Passenger Details: " << passengerDetails[0][i][0] << ", " << passengerDetails[0][i][1] << ", " << passengerAge[0][i] << ", " << passengerDetails[0][i][2] << endl;
                    passengerFound = true;
                    break;
                }
            }

            if (!passengerFound) {
                cout << "Searching in Economy..." << endl;
                for (int i = 0; i < 70; ++i) {
                    if (passengerDetails[1][i][0] == name) {
                        cout << "Passenger found in Economy, Seat " << (i + 31) << endl;
                        cout << "Passenger Details: " << passengerDetails[1][i][0] << ", " << passengerDetails[1][i][1] << ", " << passengerAge[1][i] << ", " << passengerDetails[1][i][2] << endl;
                        passengerFound = true;
                        break;
                    }
                }
            }

            if (!passengerFound) {
                cout << "Passenger not found." << endl;
            }
        } else if (choice == 6) {
            cout << "Exiting the program. Thank you for using our Airline Reservation System!" << endl;
            break;
        } else {
            if (cin.fail() ) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid option. Please choose correctly again." << endl;
                goto p;
            }
        }
    }

    return 0;
}
