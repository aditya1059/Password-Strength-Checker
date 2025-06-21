# 🔐 Password Strength Checker

A simple C++ program to check the strength of a password based on five key criteria:
- At least one uppercase letter
- At least one lowercase letter
- At least one digit
- At least one special character (`!@#$%^&*()-+`)
- Minimum length of 8 characters

## 🧠 Features
- Rates passwords as **Weak**, **Medium**, or **Strong**
- Prints specific feedback on missing criteria

## 🛠️ How to Run
```bash
g++ PasswordStrengthChecker.cpp -o PasswordStrengthChecker
./PasswordStrengthChecker   # On Windows: PasswordStrengthChecker.exe
```
## 📁 Example Output
- Enter a password: Abc123
- Password strength: Medium
- Password must contain at least one special character.
- Password must be at least 8 characters long.

## 💡 Author
- Created by Aditya Raj as part of a C++ practice project.
