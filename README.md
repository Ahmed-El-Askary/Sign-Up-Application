User Registration Application
Overview
This C++ project is a simple user registration application that allows users to register with the system by providing their name and age. 
The user information is stored in a custom type called "Person." The application provides functionality to add records and fetch records based on a user ID.

Project Structure
Headers:

<iostream> for input and output operations.
<vector> for using the dynamic array to store user records.
Class:

Person: Represents a user record with attributes name and age.
Functions:

AddRecord: Accepts name and age as parameters, creates a Person object, and adds it to the record vector.
FetchRecord: Accepts a user ID and returns the corresponding user record.
Main Function:

Presents options to the user in an outer main loop: Add Record, Fetch Record, Quit.
Uses a switch statement to handle user input and perform actions accordingly.
Usage
Add Record:

Users can add their name and age to register with the system.
Fetch Record:

Users can retrieve their information by providing their user ID.
Quit:

Exits the application.
Note: The maximum number of records is limited to 100.

