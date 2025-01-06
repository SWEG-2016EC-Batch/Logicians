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
#include <unistd.h>
#include <cstdlib> 

using namespace std;

bool seats[2][100] = {false}; // 0-29: First Class -> row 1, 0-69: Economy -> row 2
string passengerDetails[2][100][3];  // [][0]: Name, [][1]: Sex, [][2]: Passport Number
int passengerAge[2][100];

int main() {
	int choice, seatType, seatNumber, age;
	string name, passportNumber,acceptOtherClass;
	char sex;
	

	 cout << "========================================================\n" <<"|*** "<<
	     "Welcome to Logicians Airline Reservation System!" <<"***|\n" <<
	     "=========================================================\n" <<endl;

	while (true) {
		cout << " \nPlease Select an option from the menu below:\n";
		cout << "1. Please type 1 for First Class" << endl;
		cout << "2. Please type 2 for Economy" << endl;
		cout << "3. Please type 3 to see available and occupied seats" << endl;
		cout << "4. Please type 4 to cancel a reservation" << endl;
		cout << "5. Please type 5 to search for a passenger by name" << endl;
		cout << "6. Please type 6 to exit the program" << endl;
		cout << "----------------------------------------------------------" << endl;
		
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
					int trialCount = 0;
a:
					getline(cin, name);
					trialCount++;
					bool validname = true;
					for (char c : name) {
						if (!isalpha(c) && !isspace(c)) {
							validname=false;

						}
						if(!validname) {
							if (trialCount < 4) {
								cout << "A name can only contain alphabets and spaces! Please try again." << endl;
								goto a;
							}
							else {
								cout << "Maximum trial limit reached. Please restart the process." << endl;
								return 1; // Exit the program or handle as needed
							}
						}

					}

					cout << "Enter your sex: ";
					trialCount = 0;
b:
					cin >> sex;
					sex=toupper(sex);       // to convert lowercase to uppercase letter
					trialCount++;

					if (sex != 'M' && sex != 'F') { // Validate gender input
						if (trialCount < 4) {
							cout << "That is not a valid gender! Try To insert letter M for male, letter F for female." << endl;
							goto b;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}

					cout << "Enter your age: ";
					trialCount = 0;
c:
					cin >> age;
					trialCount++;
					if (cin.fail() || age < 0) {
						if (trialCount < 4) {
							cout << "Invalid age! Please enter a valid age again: ";
							cin.clear();
							cin.ignore(1000, '\n');
							goto c;
						}
						else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}

					}
					cin.ignore(1000, '\n');
					cout << "Enter your passport number: ";
					trialCount = 0;
d:
					 getline(cin, passportNumber);
					trialCount++;
					bool validPassport = true;

					if (!isalpha(passportNumber[0]) || !isalpha(passportNumber[1])) {   // Check if the first two characters are alphabets
						validPassport = false;
					}

					if (passportNumber.length() != 9) { // Check if the length is 9 and all characters are alphanumeric
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
						if (trialCount < 4) {
							cout << "Invalid Passport number! The first two characters must be alphabets, and"<< 
							"the length must be exactly 9 alphanumeric characters. Please try again." << endl;
							
							goto d;
							
						} else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}

					passengerDetails[seatType][i][0] = name;
					passengerDetails[seatType][i][1] = sex;
					passengerDetails[seatType][i][2] = passportNumber;
					passengerAge[seatType][i] = age;
					
					cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					cout << "----------------------------------------------------------" << endl;
					cout << "Boarding Pass: Seat " << (i + 1 + (seatType == 1 ? 30 : 0)) << ", " << (seatType == 0 ? "First Class" : "Economy") << endl;
					cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
					cout << "----------------------------------------------------------" << endl;
					cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					
					sleep(3);
					seatAssigned = true;
					break;
				}
			}
			system("clear");
			if (!seatAssigned) {
				if (seatType == 0) {
					cout << "First Class is fully booked. Would you like to be placed in Economy? (Yes/No): ";
				} else {
					cout << "Economy is fully booked. Would you like to be placed in First Class? (Yes/No): ";
				}
				cin.ignore();
				getline(cin, acceptOtherClass);

				if (acceptOtherClass == "Yes" || acceptOtherClass == "yes") {
					choice = (choice == 1) ? 2 : 1;

					if (choice == 1 || choice == 2) {
						seatType = (choice == 1) ? 0 : 1;
						bool seatAssigned = false;
						for (int i = 0; i < ((seatType == 0) ? 30 : 70); ++i) {
							if (!seats[seatType][i]) {
								seats[seatType][i] = true;

								cout << "Enter your name: ";
								cin.ignore();
								int trialCount = 0;
a1:
								getline(cin, name);
								trialCount++;
								bool validname = true;
								for (char c : name) {
									if (!isalpha(c) && !isspace(c)) {
										validname=false;

									}
									if(!validname) {
										if (trialCount < 4) {
											cout << "A name can only contain alphabets and spaces! Please try again." << endl;
											goto a1;
										}
										else {
											cout << "Maximum trial limit reached. Please restart the process." << endl;
											return 1; // Exit the program or handle as needed
										}
									}

								}

								cout << "Enter your sex: ";
								trialCount = 0;
b1:
								cin >> sex;
								sex=toupper(sex);       // to convert lowercase to uppercase letter
								trialCount++;

								if (sex != 'M' && sex != 'F') { // Validate gender input
									if (trialCount < 4) {
										cout << "That is not a valid gender! Try To insert letter M for male, letter F for female." << endl;
										goto b1;
									}
									else {
										cout << "Maximum trial limit reached. Please restart the process." << endl;
										return 1;
									}
								}

								cout << "Enter your age: ";
								trialCount = 0;
c1:
								cin >> age;
								trialCount++;
								if (cin.fail() || age < 0) {
									if (trialCount < 4) {
										cout << "Invalid age! Please enter a valid age again: ";
										cin.clear();
										cin.ignore(1000, '\n');
										goto c1;
									}
									else {
										cout << "Maximum trial limit reached. Please restart the process." << endl;
										return 1;
									}

								}
								cin.ignore(1000, '\n');
								cout << "Enter your passport number: ";
								trialCount = 0;
d1:
								getline(cin, passportNumber);
								trialCount++;
								bool validPassport = true;

								if (!isalpha(passportNumber[0]) || !isalpha(passportNumber[1])) {   // Check if the first two characters are alphabets
									validPassport = false;
								}

								if (passportNumber.length() != 9) { // Check if the length is 9 and all characters are alphanumeric
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
									if (trialCount < 4) {
										cout << "Invalid Passport number! The first two characters must be alphabets, and"<< 
										"the length must be exactly 9 alphanumeric characters. Please try again." << endl;
										
										goto d1;
										
									} else {
										cout << "Maximum trial limit reached. Please restart the process." << endl;
										return 1;
									}
								}

								passengerDetails[seatType][i][0] = name;
								passengerDetails[seatType][i][1] = sex;
								passengerDetails[seatType][i][2] = passportNumber;
								passengerAge[seatType][i] = age;

							cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				        	cout << "----------------------------------------------------------" << endl;
				        	cout << "Boarding Pass: Seat " << (i + 1 + (seatType == 1 ? 30 : 0)) << ", " << (seatType == 0 ? "First Class" : "Economy") << endl;
				         	cout << "Passenger Details: " << name << ", " << sex << ", " << age << ", " << passportNumber << endl;
				        	cout << "----------------------------------------------------------" << endl;
				        	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
								
								sleep(3);
								seatAssigned = true;
								break;
							}
						}
						system("clear");
						if (!seatAssigned) {
							if (seatType == 0) {
								cout << "First Class is fully booked. Would you like to be placed in Economy? (Yes/No): ";
							} else {
								cout << "Economy is fully booked. Would you like to be placed in First Class? (Yes/No): ";
							}
							cin.ignore();
							getline(cin, acceptOtherClass);

							if (acceptOtherClass == "Yes" || acceptOtherClass == "yes") {
								choice = (choice == 1) ? 2 : 1;

							} else if (acceptOtherClass == "No" || acceptOtherClass == "no") {
								cout<<"Next flight leaves in 3 hours.";
							} else if (seatType == 1 ? "First Class" : "Economy") {
								cout <<(seatType == 1 ? "First Class" : "Economy") <<" is also fully booked. Next flight leaves in 3 hours." << endl;
							}

						}


					}

				} else if (acceptOtherClass == "No" || acceptOtherClass == "no") {
					cout<<"Next flight leaves in 3 hours.";
			} else if (seatType == 1 ? "First Class" : "Economy") {
					cout <<(seatType == 1 ? "First Class" : "Economy") <<" is also fully booked. Next flight leaves in 3 hours." << endl;
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

			seatType = (seatNumber <= 30) ? 0 : 1;
			int seatIndex = (seatType == 0) ? seatNumber - 1 : seatNumber - 31;

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
			sleep(3);
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
				sleep(3);
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
			if (cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid option. Please choose correctly again." << endl;
				goto p;
			}

		}
	}


	return 0;
}
