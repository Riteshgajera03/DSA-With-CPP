#include <iostream>
using namespace std;

int main() {
    int score;
    string grade;

    cout << "Enter your score (0 - 100): ";
    cin >> score;

    grade = (score >= 90) ? "A" :
            (score >= 80) ? "B" :
            (score >= 70) ? "C+" :
            (score >= 60) ? "C" :
            (score >= 50) ? "D+" :
            (score >= 35) ? "D" : "F";

    cout << "Your Grade: " << grade << endl;

    if (grade == "A") {
        cout << "Excellent work!" << endl;
    } else if (grade == "B") {
        cout << "Well done!" << endl;
    } else if (grade == "C+") {
        cout << "Good effort!" << endl;
    } else if (grade == "C") {
        cout << "Good job!" << endl;
    } else if (grade == "D+") {
        cout << "You passed, but there's room for improvement." << endl;
    } else if (grade == "D") {
        cout << "You passed, but you could do better." << endl;
    } else if (grade == "F") {
        cout << "Sorry, you failed." << endl;
    } else {
        cout << "Invalid grade." << endl;
    }

    if (grade != "F") {
        cout << "Congratulations! You are eligible for the next level." << endl;
    } else {
        cout << "Please try again next time." << endl;
    }
}
