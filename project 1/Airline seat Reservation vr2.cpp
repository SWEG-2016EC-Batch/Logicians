#include <iostream>
#include <string>
#include <cctype>
#include <unistd.h>
#include <cstdlib>

using namespace std;

    // Boolean array to track the seats occupancy status
bool seats[2][100] = {false}; 
string passengerDetails[2][100][3];  //store passenger details [][0]: Name, [][1]: Sex, [][2]: Passport Number
int passengerAge[2][100];           // Array to store passenger age

int main() {
	int choice, age, seatType, seatNumber;
	string name, passportNumber, acceptOtherClass;
	char sex;

	 cout << "========================================================\n" <<"|*** "<<
	         "Welcome to Logicians Airline Reservation System!" <<"***|\n" << 
	         "=========================================================\n" <<endl;
	         
	                 // Loop to display menu and process user choices
	while (true) {
	    cout << "\n Please Select an option from the menu below:\n";
		cout << "1. Please type 1 for First Class Reservation" << endl;
		cout << "2. Please type 2 for Economy Class Reservation" << endl;
		cout << "3. Please type 3 to see available and occupied seats" << endl;
		cout << "4. Please type 4 to cancel a reservation" << endl;
		cout << "5. Please type 5 to search for a passenger by name" << endl;
		cout << "6. Please type 6 to exit the program" << endl;
		cout << "----------------------------------------------------------" << endl;
		p:
		cin >> choice;
			
		z:
		if (choice == 1 || choice == 2) {   // Determine seat type (First Class or Economy)
			seatType = (choice == 1) ? 0 : 1;
			bool seatAssigned = false;
			for (int i = 0; i < ((seatType == 0) ? 30 : 70); ++i) {   // Find and assign a seat in the selected class
				if (!seats[seatType][i]) {
					seats[seatType][i] = true;

					cout << "Enter your name: ";
					cin.ignore();
					int trialCount = 3;
                    a:
					getline(cin, name);
					trialCount--;
					bool validname = true;
					
					// Iterate through each character in the passenger's name
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
					sex=toupper(sex);       // To convert lowercase to uppercase letter
					trialCount--;

					if (sex != 'M' && sex != 'F') {
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
					cin.ignore(1000, '\n');
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
							cout << "Invalid Passport number! The first two characters must be alphabets, and the length"<<
							" must be exactly 9 alphanumeric characters. You have left "<<trialCount<<" trial"<< endl;
							goto d;
						} else {
							cout << "Maximum trial limit reached. Please restart the process." << endl;
							return 1;
						}
					}
				     	// Store passenger details
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
					
					sleep(3); // Pause the program for 3 seconds to simulate processing time or delay
					seatAssigned = true;
					break;
				}
			}
                     system("clear"); // Clear the console screen to provide a clean display for the next output
			if (!seatAssigned) {   // Handle case when selected class is fully booked
				if (seatType == 0) {
					cout << "First Class is fully booked. Would you like to be placed in Economy? (Yes/No): ";
				} else {
					cout << "Economy is fully booked. Would you like to be placed in First Class? (Yes/No): ";
				}
				cin.ignore();
				getline(cin, acceptOtherClass);

				if (acceptOtherClass == "Yes" || acceptOtherClass == "yes") {
				 choice = (choice == 1) ? 2 : 1; // Switch the choice to other class (1 to 2 or 2 to 1)
				 
					goto z; // Go back and recheck availability in the other class
					
				}else if (acceptOtherClass == "No" || acceptOtherClass == "no") {
			    cout<<"Next flight leaves in 3 hours.";  // Inform the user that the next flight is in 3 hours
				    
				}else if (seatType == 1 ? "First Class" : "Economy") {
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

			if (seats[seatType][seatIndex] && passengerDetails[seatType][seatIndex][2] == passportNumber) { // Check if the seat is occupied and the passport number matches
				seats[seatType][seatIndex] = false;                       // Mark the seat as unoccupied
				passengerDetails[seatType][seatIndex][0].clear();        // Clear passenger name
				passengerDetails[seatType][seatIndex][1].clear();       // Clear passenger sex
				passengerDetails[seatType][seatIndex][2].clear();      // Clear passenger passport number
				passengerAge[seatType][seatIndex] = 0;                // Reset passenger age to 0

				cout << "\nReservation for seat " << seatNumber << " in " << (seatType == 0 ? "First Class" : "Economy") << " has been canceled." << endl;
			} else {
				cout << "\nInvalid seat number or passport number." << endl;
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
					cout << "\nPassenger found in First Class, Seat " << (i + 1) << endl;
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
						cout << "\nPassenger found in Economy, Seat " << (i + 31) << endl;
						cout << "Passenger Details: " << passengerDetails[1][i][0] << ", " << passengerDetails[1][i][1] << ", " << passengerAge[1][i] << ", " << passengerDetails[1][i][2] << endl;
						passengerFound = true;
						break;
					}
				}
			}
               // If passenger not found in both classes
			if (!passengerFound) {
				cout << "Passenger not found.\n" << endl;
			}
		} else if (choice == 6) {
			cout << "Exiting the program. Thank you for using our Airline Reservation System!" << endl;
			break;
		} else {
		    if (cin.fail()){
			    cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid option. Please choose correctly again." << endl;
				goto p;
			}
			
		}
	 }

	return 0;
}
