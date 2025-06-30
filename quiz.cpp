#include <iostream>
using namespace std;

int score = 0;

// --- Function Declaration ---
void askQuestion(string question, string options[], int correctOption) {
    int answer;
    cout << question << endl;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << options[i] << endl;
    }

    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == correctOption) {
        cout << "Correct! ✅" << endl;
        score++;
    } else {
        cout << "Wrong ❌" << endl;
    }
    cout << "------------------" << endl;
}

// --- Main Function ---
int main() {
    cout << "🎓 Welcome to the Quiz App by Anmol!\nLet's begin...\n\n";

    string q1 = "What is the capital of India?";
    string o1[] = {"Mumbai", "Delhi", "Kolkata", "Chennai"};
    askQuestion(q1, o1, 2);

    string q2 = "Which data type is used to store decimal numbers in C++?";
    string o2[] = {"int", "float", "char", "bool"};
    askQuestion(q2, o2, 2);

    string q3 = "Who developed C++?";
    string o3[] = {"Bjarne Stroustrup", "Dennis Ritchie", "Bill Gates", "James Gosling"};
    askQuestion(q3, o3, 1);

    string q4 = "Which symbol is used for 'AND' operator in C++?";
    string o4[] = {"&&", "||", "!", "&"};
    askQuestion(q4, o4, 1);

    string q5 = "Which loop runs at least once in C++?";
    string o5[] = {"for", "while", "do-while", "infinite"};
    askQuestion(q5, o5, 3);

    cout << "\n🎯 Your Final Score: " << score << "/5" << endl;

    if (score == 5) {
        cout << "🔥 Excellent work!" << endl;
    } else if (score >= 3) {
        cout << "✅ Good job, keep improving!" << endl;
    } else {
        cout << "💡 Keep practicing!" << endl;
    }

    return 0;
}
