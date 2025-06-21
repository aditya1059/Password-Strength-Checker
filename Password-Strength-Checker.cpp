// Password Strength Checker
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string passwordStrengthChecker(const string &password);
void printMissingPasswordCriteria(const string& password);

int main()
{
    string password;
    cout << "Enter a password: ";
    cin >> password;

    string strength = passwordStrengthChecker(password);
    cout << "Password strength: " << strength << endl;
    printMissingPasswordCriteria(password);

    return 0;
}

string passwordStrengthChecker(const string &password)
{
    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    bool isLongEnough = password.length() >= 8;
    string specialChars = "!@#$%^&*()-+";
    int score = 0;

    for (char ch : password)
    {
        if (islower(ch))
            hasLower = true;
        else if (isupper(ch))
            hasUpper = true;
        else if (isdigit(ch))
            hasDigit = true;
        else if (specialChars.find(ch) != string::npos)
            hasSpecial = true;
    }

    score = hasLower + hasUpper + hasDigit + hasSpecial + isLongEnough;

    if (score >= 5)
        return "Strong";
    else if (score >= 3)
        return "Medium";
    else
        return "Weak";
}

void printMissingPasswordCriteria(const string& password) {
    if (!any_of(password.begin(), password.end(), ::isupper)) {
        cout << "Password must contain at least one uppercase letter." << endl;
    }
    if (!any_of(password.begin(), password.end(), ::islower)) {
        cout << "Password must contain at least one lowercase letter." << endl;
    }
    if (!any_of(password.begin(), password.end(), ::isdigit)) {
        cout << "Password must contain at least one digit." << endl;
    }
    if (password.find_first_of("!@#$%^&*()-+") == string::npos) {
        cout << "Password must contain at least one special character." << endl;
    }
    if (password.length() < 8) {
        cout << "Password must be at least 8 characters long." << endl;
    }
}

