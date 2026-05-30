#include <iostream>

using namespace std;

string usernames[100];
string passwords[100];
int totalUsers = 0;

// Registration Function
void registerUser() {
    string username, password;
    bool exists = false;

    cout << "\n--- Registration ---\n";

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    // Validation
    if (username.length() < 3) {
        cout << "Username must be at least 3 characters.\n";
        return;
    }

    if (password.length() < 4) {
        cout << "Password must be at least 4 characters.\n";
        return;
    }

    // Check duplicate username
    for (int i = 0; i < totalUsers; i++) {
        if (usernames[i] == username) {
            exists = true;
        }
    }

    if (exists) {
        cout << "Username already exists.\n";
        return;
    }

    // Store user
    usernames[totalUsers] = username;
    passwords[totalUsers] = password;
    totalUsers++;

    cout << "Registration Successful!\n";
}

// Login Function
void loginUser() {
    string username, password;
    bool found = false;

    cout << "\n--- Login ---\n";

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    for (int i = 0; i < totalUsers; i++) {
        if (usernames[i] == username &&
            passwords[i] == password) {
            found = true;
        }
    }

    if (found) {
        cout << "Login Successful!\n";
    } else {
        cout << "Invalid Username or Password.\n";
    }
}

// Main Function
int main() {
    int choice;

    do {
        cout << "\n===== LOGIN SYSTEM =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;

            case 2:
                loginUser();
                break;

            case 3:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while (choice != 3);

    return 0;
}
