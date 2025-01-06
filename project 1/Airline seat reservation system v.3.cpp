 /*   FOP GROUP PROJECT

   Group Member name and Id  
  Name                      Id
 
1.Paulos Asmelash      ETS1149/16
2.Rahmet Abdelah       ETS1161/16
3.Salim Ahmed          ETS1213/16
4.Samuel Lir           ETS1230/16
5.Sara Redwan          ETS1241/16

*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool firstClassSeats[30] = {false};
bool economySeats[70] = {false};
string firstClassPassengerDetails[30];
string economyPassengerDetails[70];

int main() {
    int choice,age;
    string name, passportNumber;
    char gender;

    cout << "========================================================\n" <<"|*** "<< "Welcome to Logicians Airline Reservation System!" <<"***|\n" << "=========================================================\n" <<endl;

    while (true) {
        cout << "\nPlease type:\n" << endl;
        cout << "1 for First Class" << endl;
        cout << "2 for Economy" << endl;
        cout << "3 to see available and Occupied seat" << endl;
        cout << "4 to cancel a reservation" << endl;
        cout << "5 to search for a passenger by name" << endl;
        cout << "6 to exit the program" << endl;
        cout << "----------------------------------------------------------" << endl;
        cin >> choice;
        cout << "----------------------------------------------------------" << endl;


        if (choice == 1) {
            bool seatAssigned = false;
            for (int i = 0; i < 30; ++i) {
                if (!firstClassSeats[i]) {
                    firstClassSeats[i] = true;
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
                    cin>>gender;
                    if (islower(gender)) { // Convert lowercase to uppercase
                        gender = toupper(gender);
                    }

                    if (gender != 'M' && gender != 'F' ) { // Validate gender input
                        cout << "That is not a valid gender! Enter again" << endl;
                        goto b;
                    }
                    cout << "Enter your age: ";
c:
                    cin >> age;
                    if (cin.fail() || age < 0 ) {
                        cout << "Invalid age! Please enter a valid age again ";
                        cin.clear();
                        cin.ignore(10000,'\n');
                        goto c;
                    }

                    cout << "Enter your passport number: ";
                    cin.ignore();
d:
                    getline(cin, passportNumber);
                    for (char c : passportNumber) {
                        if (!isalnum(c) ) {// passport number only can be Alphabet and numbers
                            cout << "A Passport number can only contain alphabets and number! Please try again." << endl;
                            goto d;
                        }
                    }
                    if (passportNumber.length() !=6) {// passport number  size(length) must be 6
                        cout << "Invalid Passport number size must be exactly 6 enter again"<<endl;
                        goto d;
                    }

                    firstClassPassengerDetails[i] = name;

                    cout << "----------------------------------------------------------" << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "----------------------------------------------------------" << endl;
                    cout << "Boarding Pass: Seat " << (i + 1) << ", First Class" << endl;
                    cout << "Passenger Details: " << name << ", " << gender << ", " << age << ", " << passportNumber << endl;
                    cout << "----------------------------------------------------------" << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "----------------------------------------------------------" << endl;
                    seatAssigned = true;
                    break;
                }
            }
            if (!seatAssigned) {
                cout << "First Class is fully booked. Would you like to be placed in Economy? (yes/no): ";
                string response;
                cin >> response;
                if (response == "yes") {
                    for (int i = 0; i < 70; ++i) {
                        if (!economySeats[i]) {
                            economySeats[i] = true;
                            cout << "Enter your name: ";
                            cin.ignore();
e:
                            getline(cin, name);
                            for (char c : name) {
                                if (!isalpha(c) && !isspace(c)) {
                                    cout << "A name can only contain alphabets and spaces! Please try again." << endl;
                                    goto e;
                                }
                            }
                            cout << "Enter your sex: ";
f:
                            cin>>gender;
                            if (islower(gender)) { // Convert lowercase to uppercase
                                gender = toupper(gender);
                            }

                            if (gender != 'M' && gender != 'F' ) { // Validate gender input
                                cout << "That is not a valid gender! Enter again" << endl;
                                goto f;
                            }
                            cout << "Enter your age: ";
g:
                            cin >> age;
                            if (cin.fail() || age < 0 ) {
                                cout << "Invalid age! Please enter a valid age again ";
                                cin.clear();
                                cin.ignore(10000,'\n');
                                goto g;
                            }

                            cout << "Enter your passport number: ";
                            cin.ignore();
h:
                            getline(cin, passportNumber);
                            for (char c : passportNumber) {
                                if (!isalnum(c)) {// passport number only can be Alphabet and numbers
                                    cout << "A Passport number can only contain alphabets and number! Please try again." << endl;
                                    goto h;
                                }
                            }
                            if (passportNumber.length() !=6) {// passport number  size(length) must be 6
                                cout << "Invalid Passport number size must be exactly 6 enter again"<<endl;
                                goto h;
                            }

                            economyPassengerDetails[i] = name;
                            cout << "---------------------------------------------------------" << endl;
                            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                            cout << "---------------------------------------------------------" << endl;
                            cout << "Boarding Pass: Seat " << (i + 31) << ", Economy" << endl;
                            cout << "Passenger Details: " << name << ", " << gender << ", " << age << ", " << passportNumber << endl;
                            cout << "---------------------------------------------------------" << endl;
                            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                            cout << "---------------------------------------------------------" << endl;
                            seatAssigned = true;
                            break;
                        }
                    }
                    if (!seatAssigned) {
                        cout << "Sorry, Economy is also fully booked. Next flight leaves in 3 hours." << endl;
                    }
                } else {
                    cout << "Next flight leaves in 3 hours." << endl;
                }
            }
        } else if (choice == 2) {
            bool seatAssigned = false;
            for (int i = 0; i < 70; ++i) {
                if (!economySeats[i]) {
                    economySeats[i] = true;
                    cout << "Enter your name: ";
                    cin.ignore();
i:
                    getline(cin, name);
                    for (char c : name) {
                        if (!isalpha(c) && !isspace(c)) {
                            cout << "A name can only contain alphabets and spaces! Please try again." << endl;
                            goto i;
                        }
                    }
                    cout << "Enter your sex: ";
j:
                    cin>>gender;
                    if (islower(gender)) { // Convert lowercase to uppercase
                        gender = toupper(gender);
                    }

                    if (gender != 'M' && gender != 'F' ) { // Validate gender input
                        cout << "That is not a valid gender! Enter again" << endl;
                        goto j;
                    }
                    cout << "Enter your age: ";
k:
                    if (cin.fail() || age < 0 ) {
                        cout << "Invalid age! Please enter a valid age again ";
                        cin.clear();
                        cin.ignore(10000,'\n');
                        goto k;
                    }

                    cout << "Enter your passport number: ";
                    cin.ignore();
l:
                    getline(cin, passportNumber);
                    for (char c : passportNumber) {
                        if (!isalnum(c) ) {// passport number only can be Alphabet and numbers
                            cout << "A Passport number can only contain alphabets and number! Please try again." << endl;
                            goto l;
                        }
                    }
                    if (passportNumber.length() !=9) {// passport number  size(length) must be 6
                        cout << "Invalid Passport number size must be exactly 9 enter again"<<endl;
                        goto l;
                    }
                    economyPassengerDetails[i] = name;
                    cout << "----------------------------------------------------------" << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "----------------------------------------------------------" << endl;
                    cout << "Boarding Pass: Seat " << (i + 31) << ", Economy" << endl;
                    cout << "Passenger Details: " << name << ", " << gender << ", " << age << ", " << passportNumber << endl;
                    cout << "----------------------------------------------------------" << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "----------------------------------------------------------" << endl;
                    seatAssigned = true;
                    break;
                }
            }
            if (!seatAssigned) {
                cout << "Economy is fully booked. Would you like to be placed in First Class? (yes/no): ";
                string response;
                cin >> response;
                if (response == "yes" || "Yes") {
                    for (int i = 0; i < 30; ++i) {
                        if (!firstClassSeats[i]) {
                            firstClassSeats[i] = true;
                            cout << "Enter your name: ";
                            cin.ignore();
m:
                            getline(cin, name);
                            for (char c : name) {
                                if (!isalpha(c) && !isspace(c)) {
                                    cout << "A name can only contain alphabets and spaces! Please try again." << endl;
                                    goto m;
                                }
                            }
                            cout << "Enter your sex: ";
n:
                            cin>>gender;
                            if (islower(gender)) { // Convert lowercase to uppercase
                                gender = toupper(gender);
                            }

                            if (gender != 'M' && gender != 'F' ) { // Validate gender input
                                cout << "That is not a valid gender! Enter again" << endl;
                                goto n;
                            }
                            cout << "Enter your age: ";
o:
                            cin >> age;
                            if (cin.fail() || age < 0 ) {
                                cout << "Invalid age! Please enter a valid age again ";
                                cin.clear();
                                cin.ignore(10000,'\n');
                                goto o;
                            }

                            cout << "Enter your passport number: ";
                            cin.ignore();
p:
                            getline(cin, passportNumber);
                            for (char c : passportNumber) {
                                if (!isalnum(c) ) {// passport number only can be Alphabet and numbers
                                    cout << "A Passport number can only contain alphabets and number! Please try again." << endl;
                                    goto p;
                                }
                            }
                            if (passportNumber.length() !=9) {// passport number  size(length) must be 6
                                cout << "Invalid Passport number size must be exactly 9 enter again"<<endl;
                                goto p;
                            }
                            firstClassPassengerDetails[i] = name;
                            cout << "----------------------------------------------------------" << endl;
                            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                            cout << "----------------------------------------------------------" << endl;
                            cout << "Boarding Pass: Seat " << (i + 1) << ", First Class" << endl;
                            cout << "Passenger Details: " << name << ", " << gender << ", " << age << ", " << passportNumber << endl;
                            cout << "----------------------------------------------------------" << endl;
                            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                            cout << "----------------------------------------------------------" << endl;
                            seatAssigned = true;
                            break;
                        }
                    }
                    if (!seatAssigned) {
                        cout << "Sorry, First Class is also fully booked. Next flight leaves in 3 hours." << endl;
                    }
                } else {
                    cout << "Next flight leaves in 3 hours." << endl;
                }
            }
        } else if (choice == 3) {
            cout << "First Class Seat Status:" << endl;
            for (int i = 0; i < 30; ++i) {
                cout << "Seat " << i + 1 << ": " << (firstClassSeats[i] ? "Occupied" : "Available") << endl;
            }
            cout << "Economy Seat Status:" << endl;
            for (int i = 0; i < 70; ++i) {
                cout << "Seat " << i + 31 << ": " << (economySeats[i] ? "Occupied" : "Available") << endl;
            }
        } else if (choice == 4) {
            int seatNumber;
            string enteredPassportNumber;
            cout << "Enter your seat number to cancel the reservation: ";
            cin >> seatNumber;
            cout << "Enter your passport number: ";
            cin.ignore();
            getline(cin, enteredPassportNumber);

            if (seatNumber >= 1 && seatNumber <= 30) {
                if (firstClassSeats[seatNumber - 1] && firstClassPassengerDetails[seatNumber - 1] == enteredPassportNumber) {
                    firstClassSeats[seatNumber - 1] = false;
                    firstClassPassengerDetails[seatNumber - 1].clear();
                    cout << "Reservation for seat " << seatNumber << " in First Class has been canceled." << endl;
                } else {
                    cout << "Invalid seat number or passport number." << endl;
                }
            } else if (seatNumber >= 31 && seatNumber <= 100) {
                if (economySeats[seatNumber - 31] && economyPassengerDetails[seatNumber - 31] == enteredPassportNumber) {
                    economySeats[seatNumber - 31] = false;
                    economyPassengerDetails[seatNumber - 31].clear();
                    cout << "Reservation for seat " << seatNumber << " in Economy has been canceled." << endl;
                } else {
                    cout << "Invalid seat number or passport number." << endl;
                }
            } else {
                cout << "Invalid seat number." << endl;
            }
        } else if (choice == 5) {
            cout << "Enter the name of the passenger to search: ";
            cin.ignore();
            getline(cin, name);
            bool passengerFound = false;

            cout << "Searching in First Class..." << endl;
            for (int i = 0; i < 30; ++i) {
                if (firstClassPassengerDetails[i] == name) {
                    cout << "Passenger found in First Class, Seat " << (i + 1) << endl;
                    passengerFound = true;
                    break;
                }
            }
            if (!passengerFound) {
                cout << "Searching in Economy..." << endl;
                for (int i = 0; i < 70; ++i) {
                    if (economyPassengerDetails[i] == name) {
                        cout << "Passenger found in Economy, Seat " << (i + 31) << endl;
                        passengerFound = true;
                        break;
                    }
                }
            }
            if (!passengerFound) {
                cout << "Passenger not found." << endl;
            }
        } else if (choice == 6) {
            cout << "Exiting the program. Thank you for using the Airline Reservation System!" << endl;
            break;
        } else {
            cout << "Invalid option. Please type 1 for First Class, 2 for Economy, 3 to see available;and occupied seats, 4 to cancel a reservation, or 5 to search for a passenger by name." << endl;
        }
    }
    return 0;

    
}


