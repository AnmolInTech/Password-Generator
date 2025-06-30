#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int length;
char includeLower, includeUpper,
includeDigits, includeSpecial;

string lower =
"abcdefghijklmnopqurstuvwxyz";
string upper =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string digits = "012456789";
string special =
"!@#$%^&*()_+-[]{}|;:,.<>?";
string characterSet = "";

// Seed random number generator 
srand(time(0));

// Input from user 
cout << "Enter desired password length: ";
cin >> length;
cout << "Include lowercase letters? (y/n): ";
    cin >> includeLower;
    if (includeLower == 'y' || includeLower == 'Y') characterSet += lower;
cout <<  "Include uppercase letters? (y/n): ";
cin >> includeUpper;
if (includeUpper == 'y' || includeUpper == 'Y') characterSet +=
digits;
cout << "Include digits? (y/n): ";
cin >> includeDigits;
if (includeDigits == 'Y') characterSet +=
digits;
cout << "Include special characters? (y/n): ";
cin >> includeSpecial;
if (includeSpecial == 'Y') characterSet +=
special;
// Check if user selected at least one category
if (characterSet.empty()) {
    cout << "You must select at least one charater type!\n";
    return 0;
}
// Generate password
string password = "";
for (int i = 0; i< length; ++ i) {
    int index = rand() %
    characterSet.length();
    password += characterSet[index];
}
// output the result 
cout << "\nYour generated password: "
<< password << endl;
   return 0;
}