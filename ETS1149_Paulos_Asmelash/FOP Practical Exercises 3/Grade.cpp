#include <iostream>
using namespace std;

int main () {

    float test, quiz, assignment, project, final_exam,grade;
    
    cout << "Please enter how much you scored on 15% test" << endl;
    cin >> test;  
    cout << "Please enter how much you scored on 5% quiz" << endl;
    cin >> quiz;
    cout << "Please enter how much you scored on 20% project" << endl;
    cin >> project;
    cout << "Please enter how much you scored on 10% assignment" << endl;
    cin >> assignment;
    cout << "Please enter how much you scored on 50% final exam" << endl;
    cin >> final_exam;

    grade = test + quiz + assignment + project + final_exam;
    cout << "Your total mark is: " << grade << endl;

    cout << "Your Grade is: ";
    if (grade >= 90){
        cout << "A+";
    } else if (grade >= 80) {
        cout << "A";
    } else if (grade >= 75) {
        cout << "B+";
    } else if (grade >= 60) {
        cout << "B";
    } else if (grade >= 55) {
        cout << "C+";
    } else if (grade >= 45) {
        cout << "C";
    } else if (grade >= 30) {
        cout << "D";
    } else {
        cout << "F";
    }
    return 0;
}
