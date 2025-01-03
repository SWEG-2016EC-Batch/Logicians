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
	char sex; //to take information regarding the person

	cout<<"********************************************************"<<endl;
	cout<<"*   Welcome to Logicians Airline Reservation System!   *" << endl;
	cout<<"********************************************************"<<endl;

	while (true) {
		cout << "\nPlease type 1 for First Class" << endl;
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
					int trialCount = 3;
                    a:
					getline(cin, name);
					trialCount--;
					bool validname = true;
					for (char c : name) {
						if (!isalpha(c) && !isspace(c)) {
							validname=false;

						}
						if(!validname) {
							if (trialCount >0) {
								cout << "A name can only contain alphabets and spaces!. You have left " <<trialCount <<" trial"<< endl;
								goto a;
							}
							else {
								cout << "Maximum trial limit reached. Please restart the process." << endl;
								return 1; // Exit the program or handle as needed
							}
						}

					}

					cout << "Enter your sex: ";
					trialCount = 3;
                    b:
					cin >> sex;
					sex=toupper(sex);       // to convert lowercase to uppercase letter
					trialCount--;

					if (sex != 'M' && sex != 'F') { // Validate gender input
						if (trialCount >0) {
							cout << "That is not a valid gender! Try To insert letter M for male, letter F for female. You have left "<<trialCount <<" trial"<<endl;
							goto b;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}
					cout << "Enter your age: ";
					trialCount = 3;
                    c:
					cin >> age;
					trialCount--;
					if (cin.fail() || age < 0) {
						if (trialCount >0) {
							cout << "Invalid age! Please enter a valid age again. You have left "<<trialCount<<" trial"<<endl;
							cin.clear();
							cin.ignore(1000, '\n');
							goto c;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}

					}
                     cin.ignore(10000,'\n');
					cout << "Enter your passport number: ";
					trialCount = 3;
                    d:
					getline(cin, passportNumber);
					trialCount--;
					bool validPassport = true;

					if (!isalpha(passportNumber[0]) || !isalpha(passportNumber[1])) {  
						validPassport = false;
					}

					if (passportNumber.length() != 9) { 
						validPassport = false;
					} else {
						for (char c : passportNumber) {
							if (!isalnum(c)) {
								validPassport = false;
								break;
							}
						}
					}

					if (!validPassport) {
						if (trialCount >0) {
							cout << "Invalid Passport number! The first two characters must be alphabets, and the length must be exactly 9 alphanumeric characters. You have left "<<trialCount<<" trial"<< endl;
							goto d;
						} else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}

					firstClassPassengerDetails[i] = name;

					cout << "Boarding Pass: Seat " << (i + 1) << ", First Class" << endl;
					cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
					seatAssigned = true; // This is to check whether the inputs are taken as expected
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
					 int trialCount = 3;
                    e:
					getline(cin, name);
					trialCount--;
					bool validname = true;
					for (char c : name) {
						if (!isalpha(c) && !isspace(c)) {
							validname=false;

						}
						if(!validname) {
							if (trialCount >0) {
								cout << "A name can only contain alphabets and spaces!. You have left " <<trialCount <<" trial"<< endl;
								goto e;
							}
							else {
								cout << "Maximum trial limit reached. Please restart the process." << endl;
								return 1; // Exit the program or handle as needed
							}
						}

					}

					cout << "Enter your sex: ";
					trialCount = 3;
                    f:
					cin >> sex;
					sex=toupper(sex);       // to convert lowercase to uppercase letter
					trialCount--;

					if (sex != 'M' && sex != 'F') { // Validate gender input
						if (trialCount >0) {
							cout << "That is not a valid gender! Try To insert letter M for male, letter F for female. You have left "<<trialCount <<" trial"<<endl;
							goto f;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}
					cout << "Enter your age: ";
					trialCount = 3;
                    g:
					cin >> age;
					trialCount--;
					if (cin.fail() || age < 0) {
						if (trialCount >0) {
							cout << "Invalid age! Please enter a valid age again. You have left "<<trialCount<<" trial"<<endl;
							cin.clear();
							cin.ignore(1000, '\n');
							goto g;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}

					}
                    cin.ignore(10000,'\n');
					cout << "Enter your passport number: ";
					trialCount = 3;
                    h:
					getline(cin, passportNumber);
					trialCount--;
					bool validPassport = true;

					if (!isalpha(passportNumber[0]) || !isalpha(passportNumber[1])) {  
						validPassport = false;
					}

					if (passportNumber.length() != 9) { 
						validPassport = false;
					} else {
						for (char c : passportNumber) {
							if (!isalnum(c)) {
								validPassport = false;
								break;
							}
						}
					}

					if (!validPassport) {
						if (trialCount >0) {
							cout << "Invalid Passport number! The first two characters must be alphabets, and the length must be exactly 9 alphanumeric characters. You have left "<<trialCount<<" trial"<< endl;
							goto h;
						} else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}

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
					int trialCount = 3;
                    i:
					getline(cin, name);
					trialCount--;
					bool validname = true;
					for (char c : name) {
						if (!isalpha(c) && !isspace(c)) {
							validname=false;

						}
						if(!validname) {
							if (trialCount >0) {
								cout << "A name can only contain alphabets and spaces!. You have left " <<trialCount <<" trial"<< endl;
								goto i;
							}
							else {
								cout << "Maximum trial limit reached. Please restart the process." << endl;
								return 1; // Exit the program or handle as needed
							}
						}

					}
					cout << "Enter your sex: ";
					trialCount = 3;
                    j:
					cin >> sex;
					sex=toupper(sex);       // to convert lowercase to uppercase letter
					trialCount--;

					if (sex != 'M' && sex != 'F') { // Validate gender input
						if (trialCount >0) {
							cout << "That is not a valid gender! Try To insert letter M for male, letter F for female. You have left "<<trialCount <<" trial"<<endl;
							goto j;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}

					cout << "Enter your age: ";
					trialCount = 3;
                    k:
					cin >> age;
					trialCount--;
					if (cin.fail() || age < 0) {
						if (trialCount >0) {
							cout << "Invalid age! Please enter a valid age again. You have left "<<trialCount<<" trial"<<endl;
							cin.clear();
							cin.ignore(1000, '\n');
							goto k;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}

					}
                    cin.ignore(1000, '\n');
					cout << "Enter your passport number: ";
					trialCount = 3;
                    l:
					getline(cin, passportNumber);
					trialCount--;
					bool validPassport = true;

					if (!isalpha(passportNumber[0]) || !isalpha(passportNumber[1])) {  
						validPassport = false;
					}

					if (passportNumber.length() != 9) { 
						validPassport = false;
					} else {
						for (char c : passportNumber) {
							if (!isalnum(c)) {
								validPassport = false;
								break;
							}
						}
					}

					if (!validPassport) {
						if (trialCount >0) {
							cout << "Invalid Passport number! The first two characters must be alphabets, and the length must be exactly 9 alphanumeric characters. You have left "<<trialCount<<" trial"<< endl;
							goto l;
						} else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}
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
					int trialCount = 3;
                    m:
					getline(cin, name);
					trialCount--;
					bool validname = true;
					for (char c : name) {
						if (!isalpha(c) && !isspace(c)) {
							validname=false;

						}
						if(!validname) {
							if (trialCount >0) {
								cout << "A name can only contain alphabets and spaces!. You have left " <<trialCount <<" trial"<< endl;
								goto m;
							}
							else {
								cout << "Maximum trial limit reached. Please restart the process." << endl;
								return 1; // Exit the program or handle as needed
							}
						}

					}
					cout << "Enter your sex: ";
					trialCount = 3;
                    n:
					cin >> sex;
					sex=toupper(sex);       // to convert lowercase to uppercase letter
					trialCount--;

					if (sex != 'M' && sex != 'F') { // Validate gender input
						if (trialCount >0) {
							cout << "That is not a valid gender! Try To insert letter M for male, letter F for female. You have left "<<trialCount <<" trial"<<endl;
							goto n;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}
					cout << "Enter your age: ";
					trialCount = 3;
                    o:
					cin >> age;
					trialCount--;
					if (cin.fail() || age < 0) {
						if (trialCount >0) {
							cout << "Invalid age! Please enter a valid age again. You have left "<<trialCount<<" trial"<<endl;
							cin.clear();
							cin.ignore(1000, '\n');
							goto o;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}

					}
                     cin.ignore(10000,'\n');
					cout << "Enter your passport number: ";
					trialCount = 3;
                    p:
					getline(cin, passportNumber);
					trialCount--;
					bool validPassport = true;

					if (!isalpha(passportNumber[0]) || !isalpha(passportNumber[1])) {  
						validPassport = false;
					}

					if (passportNumber.length() != 9) { 
						validPassport = false;
					} else {
						for (char c : passportNumber) {
							if (!isalnum(c)) {
								validPassport = false;
								break;
							}
						}
					}

					if (!validPassport) {
						if (trialCount >0) {
							cout << "Invalid Passport number! The first two characters must be alphabets, and the length must be exactly 9 alphanumeric characters. You have left "<<trialCount<<" trial"<< endl;
							goto p;
						} else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}
							firstClassPassengerDetails[i] = name;
                                     //then we print the details
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
