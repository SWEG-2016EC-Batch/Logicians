#include <bits/stdc++.h>
using namespace std;

struct Seat {
    string name;
    char sex;
    int age;
    string passportNumber;
    bool isOccupied = false;
};

struct Plane {
    string destination;
    string time;
    vector<Seat> firstClassSeats;
    vector<Seat> economySeats;

    Plane(string dest, string t) {
        destination = dest;
        time = t;
        firstClassSeats.resize(30); 
        economySeats.resize(70);    
    }
};

class AirlineReservationSystem {
private:
    vector<Plane> planes;
    string adminUsername = "admin";
    string adminPassword = "admin123";
    string fileName = "reservations.txt";

public:
    AirlineReservationSystem() {
        planes.push_back(Plane("Addis Ababa to Nairobi", "09:00 AM"));
        planes.push_back(Plane("Addis Ababa to Dubai", "01:00 PM"));
        planes.push_back(Plane("Addis Ababa to London", "05:00 PM"));
        planes.push_back(Plane("Addis Ababa to New York", "10:00 PM"));
        loadReservations();
    }

    void role_selection() {
    int userType;
     cout << "========================================================\n" <<"|*** "<<
             "Welcome to Logicians Airline Reservation System!" <<"***|\n" << 
             "=========================================================\n" <<endl;
    cout << "Are you an Admin or a User?" << endl;
    cout << "1. Admin\n2. User\nEnter choice: ";
    cin >> userType;
        if (cin.fail() || (userType != 1 && userType != 2)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter 1 for Admin or 2 for User." << endl;
            role_selection();
            return;
        }
    if (userType == 1) {
        adminAccess();  
    } else if (userType == 2) {
        userMenu();  
    } else {
        cout << "Invalid choice. Restarting..." << endl;
        role_selection();
    }
}
void adminMenu() {
    int choice;
    while (true) {
        cout << "\nAdmin Menu" << endl;
         cout << "1. View Seat Occupancy" << endl;
        cout << "2. Modify Flight Details" << endl;
         cout << "3. Change the admin username and password" << endl;
        cout << "4. Change the flightschedule" << endl;
         cout << "5. Exit Admin Mode" << endl;
        cout << "----------------------------------------------------------" << endl;

        cout << "Enter choice: ";
        cin >> choice;
        if (cin.fail() || choice < 1 || choice > 5) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 5." << endl;
            continue;
        }
        switch (choice) {
            case 1:
                viewSeatOccupancy();
                break;
            case 2:
                modifyFlight();
                break;
            case 3:
                modifyAdminAccount();
                break;
            case 4:
                rescheduleFlight();
                break;
             case 5:
                cout << "Exiting Admin Mode..." << endl;
                break;
            default:
                cout << "Invalid selection. Try again." << endl;
        }
        role_selection();
    }
}

void adminAccess() {
    string username, password;
    cout << "Enter admin username: ";
    cin >> username;
   
    cout << "Enter password: ";
    cin >> password;
    
    if (username == adminUsername && password == adminPassword) {
        cout << "\nAdmin Access Granted" << endl;
        adminMenu();  
    } else {
        cout << "Invalid credentials." << endl;
    }
}
  void modifyFlight() {
    int planeChoice;
    cout << "Select the flight you want to modify:" << endl;
    for (size_t i = 0; i < planes.size(); i++) {
        cout << i + 1 << ". " << planes[i].destination << " - " << planes[i].time << endl;
    }
    cout << "Enter the number: ";
    cin >> planeChoice;
    if (cin.fail() || planeChoice < 1 || planeChoice > planes.size()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid flight number." << endl;
        return;
    }
    if (planeChoice < 1 || planeChoice > planes.size()) {
        cout << "Invalid choice. Returning to main menu." << endl;
        return;
    }

    Plane &selectedPlane = planes[planeChoice - 1];
    
    string newDestination, newTime;
    cout << "Enter new destination: ";
    cin.ignore();
    getline(cin, newDestination);
    cout << "Enter new time: ";
    getline(cin, newTime);

    selectedPlane.destination = newDestination;
    selectedPlane.time = newTime;

    cout << "Flight details updated successfully!" << endl;
}

void modifyAdminAccount() {
    string oldUsername, oldPassword, newUsername, newPassword;
    
    cout << "Enter current admin username: ";
    cin >> oldUsername;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid username." << endl;
        return;
    }
    cout << "Enter current admin password: ";
    cin >> oldPassword;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid password." << endl;
        return;
    }
    if (oldUsername == adminUsername && oldPassword == adminPassword) {
        cout << "Enter new admin username: ";
        cin >> newUsername;
        cout << "Enter new admin password: ";
        cin >> newPassword;
        adminUsername = newUsername;
        adminPassword = newPassword;

        cout << "Admin credentials updated successfully!\n";
    } else {
        cout << "Incorrect username or password!\n";
    }
}

void rescheduleFlight() {
    string name, passportNumber;
    cout << "Enter passenger name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter passport number: ";
    getline(cin, passportNumber);

    bool found = false;
    Plane *currentPlane = nullptr;
    Seat *currentSeat = nullptr;

    for (Plane &plane : planes) {
        for (Seat &seat : plane.firstClassSeats) {
            if (seat.isOccupied && seat.name == name && seat.passportNumber == passportNumber) {
                currentPlane = &plane;
                currentSeat = &seat;
                found = true;
                break;
            }
        }
        for (Seat &seat : plane.economySeats) {
            if (seat.isOccupied && seat.name == name && seat.passportNumber == passportNumber) {
                currentPlane = &plane;
                currentSeat = &seat;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "Passenger not found!\n";
        return;
    }

    cout << "Passenger found for flight to " << currentPlane->destination << " at " << currentPlane->time << ".\n";
    cout << "Available flights for rescheduling:\n";
    
    for (size_t i = 0; i < planes.size(); i++) {
        if (planes[i].destination == currentPlane->destination && planes[i].time != currentPlane->time) {
            cout << i + 1 << ". " << planes[i].destination << " - " << planes[i].time << endl;
        }
    }

    int newFlightChoice;
    cout << "Select the new flight number: ";
    cin >> newFlightChoice;

    if (newFlightChoice < 1 || newFlightChoice > planes.size()) {
        cout << "Invalid choice. Rescheduling aborted.\n";
        return;
    }

    Plane &newFlight = planes[newFlightChoice - 1];

    currentSeat->isOccupied = false; 
    Seat &newSeat = (currentSeat->passportNumber == newFlight.firstClassSeats[0].passportNumber) 
        ? newFlight.firstClassSeats[0] 
        : newFlight.economySeats[0];

    newSeat.name = name;
    newSeat.sex = currentSeat->sex;
    newSeat.age = currentSeat->age;
    newSeat.passportNumber = passportNumber;
    newSeat.isOccupied = true;

    cout << "Flight rescheduled successfully! New flight to " << newFlight.destination << " at " << newFlight.time << ".\n";
}


void userMenu() {
    int choice;
    while (true) {
        cout << "\nUser Menu" << endl;
        cout << "1. Book a Seat" << endl;
        cout << "2. View Seat Occupancy" << endl;
        cout << "3. Search for Passenger" << endl;
        cout << "4. cancel Reservation" << endl;
        cout << "5. Exit" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if (cin.fail() || choice < 1 || choice > 5) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 5." << endl;
            continue;
        }
        switch (choice) {
            case 1: bookSeat();
            break;
            case 2: viewSeatOccupancy();
            break;
            case 3: searchPatron(); 
            break;
            case 4: cancelReservation(); 
            break;
            case 5: cout << "Thank you for using the system!" << endl; 
            return;
            default: cout << "Invalid selection. Try again." << endl;
        }
        role_selection();
    }
}
    void bookSeat() {
        string name,passportNumber;
        char sex;
        int age, sectionChoice, destinationChoice;

        cout << "\nAvailable Destinations:" << endl;
        for (size_t i = 0; i < planes.size(); i++) {
            cout << i + 1 << ". " << planes[i].destination << " - " << planes[i].time << endl;
        }
        cout << "Select your destination (number): ";
        des:
        cin >> destinationChoice;
        if (cin.fail() || destinationChoice < 1 || destinationChoice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            goto des;
        
        }
        
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
                                role_selection();
                            }
                        }

                    }

                    cout << "Enter your sex: ";
                    trialCount = 3;
                    b:
                    cin >> sex;
                    sex=toupper(sex);       
                    trialCount--;

                    if (sex != 'M' && sex != 'F') { 
                        if (trialCount >0) {
                            cout << "That is not a valid gender! Try To insert letter M for male, letter F for female. You have left "<<trialCount <<" trial"<<endl;
                            goto b;
                        }
                        else {
                            cout << "Maximum trial limit reached. Please restart the process." << endl;
                            role_selection();
                        }
                    }

                    cout << "Enter your age: ";
                    trialCount = 3;
                    c:
                    cin >> age;
                    trialCount--;
                    if (cin.fail() || age < 18) {
                        if (trialCount >0) {
                            cout << "Invalid age! Please enter a valid age again. You have left "<<trialCount<<" trial"<<endl;
                            cin.clear();
                            cin.ignore(1000, '\n');
                            goto c;
                        }
                        else {
                            cout << "Maximum trial limit reached. Please restart the process." << endl;
                            role_selection();
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
                            cout << "Invalid Passport number! The first two characters must be alphabets, and the length must be exactly 9 alphanumeric characters. You have left "<<trialCount<<" trial"<< endl;
                            goto d;
                        } else {
                            cout << "Maximum trial limit reached. Please restart the process." << endl;
                        role_selection();	
                            
                        }
                    }

        if (destinationChoice < 1 || destinationChoice > planes.size()) {
            cout << "Invalid destination choice. Try again." << endl;
            return;
        }

        Plane &selectedPlane = planes[destinationChoice - 1];

        cout << "Type 1 for 'First Class' or 2 for 'Economy': ";
        cin >> sectionChoice;

        if (sectionChoice == 1) {
            assignSeat(selectedPlane.firstClassSeats, "First Class", name,sex,age, passportNumber, selectedPlane.destination);
        } else if (sectionChoice == 2) {
            assignSeat(selectedPlane.economySeats, "Economy", name,sex,age, passportNumber, selectedPlane.destination);
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
       
    }

    void assignSeat(vector<Seat>& seatArray, string sectionName, string name, char sex, int age, string passportNumber, string destination) {
    
    for (auto i = 0; i < seatArray.size(); i++) {
        if (!seatArray[i].isOccupied) {
            seatArray[i].name = name;
            seatArray[i].sex = sex;
            seatArray[i].age = age;
            seatArray[i].passportNumber = passportNumber;
            seatArray[i].isOccupied = true;
            cout << "\nBoarding Pass Generated: Seat " << i + 1 << " in " << sectionName << " for flight to " << destination << endl;
            saveReservation(destination, sectionName, i + 1, name, sex, age, passportNumber);
            return;
        }
    }

    
    bool bothFull = true;
    
    Plane* planePtr = nullptr;
    for (Plane& p : planes) {
        if (p.destination == destination) {
            planePtr = &p;
            break;
        }
    }
    if (planePtr) {
        
        bool firstClassFull = true, economyFull = true;
        for (const Seat& s : planePtr->firstClassSeats) {
            if (!s.isOccupied) firstClassFull = false;
        }
        for (const Seat& s : planePtr->economySeats) {
            if (!s.isOccupied) economyFull = false;
        }
        if (firstClassFull && economyFull) {
            cout << "\nBoth First Class and Economy are fully booked. \nNext flight leaves in 3 hours." << endl;
            return;
        }
    }

    
    cout << "\n" << sectionName << " is fully booked. Would you like to switch to another section? (Yes/No): ";
    string response;
    cin >> response;
    userMenu();

    if (response == "Yes" || response == "yes") {
        if (sectionName == "First Class") {
            assignSeat(planePtr->economySeats, "Economy", name, sex, age, passportNumber, destination);
        } else {
            assignSeat(planePtr->firstClassSeats, "First Class", name, sex, age, passportNumber, destination);
        }
    } else {
        cout << "Next flight leaves in 3 hours." << endl;
    }
}

    void viewSeatOccupancy() {
        for (Plane& plane : planes) {
            cout << "\nFlight to " << plane.destination << " (" << plane.time << ")" << endl;
            cout << "First Class Seats:" << endl;
            displaySeatStatus(plane.firstClassSeats);
            cout << "Economy Class Seats:" << endl;
            displaySeatStatus(plane.economySeats);
        }
    }

    void displaySeatStatus(vector<Seat>& seatArray) {
        for (auto i = 0; i < seatArray.size(); i++) {
            cout << "Seat " << i + 1 << ": " << (seatArray[i].isOccupied ? "Occupied" : "Available") << endl;
        }
    }

    void searchPatron() {
        string searchQuery;
        cout << "Enter patron name or passport number: ";
        cin.ignore();
        getline(cin, searchQuery);

        for (Plane& plane : planes) {
            for (Seat& seat : plane.firstClassSeats) {
                if (seat.isOccupied && (seat.name == searchQuery || seat.passportNumber == searchQuery)) {
                    cout<<"Searching.......\n";
                    sleep(3);
                    cout << "Passenger Found: " << seat.name << " in First Class on flight to " << plane.destination << endl;
                    return;
                }
            }
            for (Seat& seat : plane.economySeats) {
                if (seat.isOccupied && (seat.name == searchQuery || seat.passportNumber == searchQuery)) {
                    cout<<"Searching.......\n";
                    sleep(3);
                    cout << "Passenger Found: " << seat.name << " in Economy on flight to " << plane.destination << endl;
                    return;
                }
            }
        }

        cout << "Passenger not found." << endl;
    }

   
   void cancelReservation() {
    string searchQuery,passportnumber;
    cout << "Enter your name:"; 
    cin.ignore();
    getline(cin, searchQuery);
    cout<<"Enter your Passport Number:";
    getline(cin,passportnumber);

    bool found = false;
    
    for (Plane& plane : planes) {
        for (Seat& seat : plane.firstClassSeats) {
            if (seat.isOccupied && (seat.name == searchQuery && seat.passportNumber ==passportnumber )) {
                seat.name = "";
                seat.sex = '\0';
                seat.age = 0;
                seat.passportNumber = "";
                seat.isOccupied = false;
                cout << "Reservation for First Class on flight to " << plane.destination << " canceled successfully!" << endl;
                found = true;
                break;
            }
        }
        for (Seat& seat : plane.economySeats) {
            if (seat.isOccupied && (seat.name == searchQuery && seat.passportNumber == passportnumber)) {
                seat.name = "";
                seat.sex = '\0';
                seat.age = 0;
                seat.passportNumber = "";
                seat.isOccupied = false;
                cout << "Reservation for Economy on flight to " << plane.destination << " canceled successfully!" << endl;
                found = true;
                break;
            }
        }
    }
    
    if (!found) {
        cout << "Reservation not found." << endl;
    }

    updateReservationFile();
}
    void saveReservation(string destination, string section, int seat, string name, char sex, int age, string passportNumber) {
        ofstream file(fileName, ios::app);
        file << destination << "," << section << "," << seat << "," << name << "," << sex << ","<< age << "," << passportNumber << endl;
        file.close();
    }

    void loadReservations() {
        ifstream file(fileName);
        string destination, section, name, passportNumber;
        char sex;
        int seat,age;

        while (file >> destination >> section >> seat >> name >>sex>>age>> passportNumber) {
            for (Plane &plane : planes) {
                if (plane.destination == destination) {
                    vector<Seat> &seatArray = (section == "First Class") ? plane.firstClassSeats : plane.economySeats;
                    seatArray[seat - 1].name = name;
                     seatArray[seat - 1].sex = sex;
                      seatArray[seat - 1].age = age;
                    seatArray[seat - 1].passportNumber = passportNumber;
                    seatArray[seat - 1].isOccupied = true;
                    break;
                }
            }
        }
        file.close();
    }
    
    void updateReservationFile() {
    ofstream file(fileName);

    for (Plane& plane : planes) {
        for (Seat& seat : plane.firstClassSeats) {
            if (seat.isOccupied) {
                file << plane.destination << ",First Class," << seat.name << "," << seat.sex << "," << seat.age << "," << seat.passportNumber << endl;
            }
        }
        for (Seat& seat : plane.economySeats) {
            if (seat.isOccupied) {
                file << plane.destination << ",Economy," << seat.name << "," << seat.sex << "," << seat.age << "," << seat.passportNumber << endl;
            }
        }
    }

    file.close();
    cout << "Reservation file updated successfully!" << endl;
}
    
    
};

int main() {
    AirlineReservationSystem sys;
    sys.role_selection();
            
    
    return 0;
}
