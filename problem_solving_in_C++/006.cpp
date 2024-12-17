/*6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed." */
#include <iostream>  // Include the header file for input-output operations
#include <string>    // Include the string header to handle string operations

using namespace std;  // Use the standard namespace to avoid prefixing 'std::' before every standard function

// Function to check if the username and password are correct
void checkLogin(string username, string password) {
    // Predefined correct username and password
    string correctUsername = "admin";
    string correctPassword = "1234";
    
    // Check if the entered username and password match the predefined ones
    if (username == correctUsername && password == correctPassword) {
        cout << "Login successful" << endl;  // If both match, login is successful
    } else {
        cout << "Login failed" << endl;  // If either or both do not match, login fails
    }
}

int main() {
    string username, password;
    
    // Prompt the user to enter username and password
    cout << "Enter username: ";
    cin >> username;  // Read the username input from the user
    
    cout << "Enter password: ";
    cin >> password;  // Read the password input from the user
    
    // Call the checkLogin function to verify the credentials
    checkLogin(username, password);  
    
    return 0;  // Return 0 to indicate successful execution of the program
}
