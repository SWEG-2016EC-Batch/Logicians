#include <iostream>
#include <string>
using namespace std;

// Here we decided to assign 30 seats for first class and 70 seat for the economy.
bool firstClassSeats[30] = {false};
bool economySeats[70] = {false};
string firstClassPassengerDetails[30];
string economyPassengerDetails[70];

int main() {
    int choice,age;
    string name, sex, passportNumber;
    
    cout << "Welcome to Logicians Airline Reservation System!" << endl; 

    while (true) {
        // the following is the menu
        cout << "Please type 1 for First Class" << endl;
        cout << "Please type 2 for Economy" << endl;
        cout << "Please type 3 to see available and Occupied seat" << endl;
        cout << "Please type 4 to cancel a reservation" << endl;
        cout << "Please type 5 to search for a passenger by name" << endl;
        cin >> choice;

 if (choice == 1) {
            bool seatAssigned = false;
            for (int i = 0; i < 30; ++i) {
                if (!firstClassSeats[i]) {
                    firstClassSeats[i] = true;
                    cout << "Enter your name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter your sex: ";
                    getline(cin, sex);
                    cout << "Enter your age: ";
                    cin >> age;
                    cout << "Enter your passport number: ";
                    cin.ignore();
                    getline(cin, passportNumber);

                    firstClassPassengerDetails[i] = name;
                    // after registration the user should see if his info is correctly submitted
                    cout << "Boarding Pass: Seat " << (i + 1) << ", First Class" << endl;
                    cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
                    seatAssigned = true;
                    break;
                }
            }

       
            if (!seatAssigned) { // we are announcing thet first class is already full so the user should be provided with the choince of ecomomy
                cout << "First Class is fully booked. Would you like to be placed in Economy? (yes/no): ";
                string response;
                cin >> response;
                if (response == "yes") {
                    for (int i = 0; i < 70; ++i) {
                        if (!economySeats[i]) {
                            economySeats[i] = true;
                            cout << "Enter your name: ";
                            cin.ignore();
                            getline(cin, name);
                            cout << "Enter your sex: ";
                            getline(cin, sex);
                            cout << "Enter your age: ";
                            cin >> age;
                            cout << "Enter your passport number: ";
                            cin.ignore();
                            getline(cin, passportNumber);

                            economyPassengerDetails[i] = name;

                            cout << "Boarding Pass: Seat " << (i + 31) << ", Economy" << endl;
                            cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
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
                    getline(cin, name);
                    cout << "Enter your sex: ";
                    getline(cin, sex);
                    cout << "Enter your age: ";
                    cin >> age;
                    cout << "Enter your passport number: ";
                    cin.ignore();
                    getline(cin, passportNumber);

                    economyPassengerDetails[i] = name;

                    cout << "Boarding Pass: Seat " << (i + 31) << ", Economy" << endl;
                    cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
                    seatAssigned = true;
                    break;
                }
            }
            if (!seatAssigned) {
                cout << "Economy is fully booked. Would you like to be placed in First Class? (yes/no): ";
                string response;
                cin >> response;
                if (response == "yes") {
                    for (int i = 0; i < 30; ++i) {
                        if (!firstClassSeats[i]) {
                            firstClassSeats[i] = true;
                            cout << "Enter your name: ";
                            cin.ignore();
                            getline(cin, name);
                            cout << "Enter your sex: ";
                            getline(cin, sex);
                            cout << "Enter your age: ";
                            cin >> age;
                            cout << "Enter your passport number: ";
                            cin.ignore();
                            getline(cin, passportNumber);

                            firstClassPassengerDetails[i] = name;

                            cout << "Boarding Pass: Seat " << (i + 1) << ", First Class" << endl;
                            cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
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
        } else {
            cout << "Invalid option. Please type 1 for First Class, 2 for Economy, 3 to see available and occupied seats, 4 to cancel a reservation, or 5 to search for a passenger by name." << endl;
        }
    }

    return 0;
}
