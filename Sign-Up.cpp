#include <iostream>
# include <vector>
#include <string>

/*
Class Person represents a person with a name and age.
*/
class Person 
{
    public:
    // Name of the person
    std::string name ;    // Age of the person
    int age ;

    /*
    Constructor for the Person class. Sets the name and age of the person.
    @param name The name of the person.
    @param age The age of the person.
    */
    Person(std::string name ,int age): name(name) , age(age)
    {}

    /*
    Default constructor for the Person class. Sets the name to an empty string and the age to 0.
    */
    Person() : name("") , age(0) {}
};

/*
Vector to store the person records.
*/
std::vector<Person> records(100);

/*
Number of records currently stored in the records vector.
*/
int numRecords = 0 ;

/*
Function to add a new record to the records vector.
@param name The name of the person to be added.
@param age The age of the person to be added.
*/
void AddRecord(const std ::string &name ,int age )
{
    if (numRecords == 100)
    {
        std::cout <<"Can not add more records. " << "\n" ;
        return;
    }

    // Create a new person with the given name and age
    Person person (name , age);

    // Add the person to the records vector
    records[numRecords] = person ;

    // Increment the number of records
    numRecords++ ;

    std::cout <<"\n" ;
    std::cout <<"User Record added successfully." << "\n" ;
}

/*
Function to fetch a record from the records vector based on the given id.
@param id The id of the record to be fetched.
@return The person object corresponding to the given id. If the id is invalid, an empty person object is returned.
*/
Person FetchRecord (int id)
{
    if (id >= 0 && id < numRecords)
    {
        // Return the person object corresponding to the given id
        return records[id];
    }
    else
    {
         std::cout << "Record not found." << "\n";
         // Return an empty person object
         return Person("", 0);
    }
}


// User Sign-up Application
int main ()
{
    int option ;
    std::cout << "\n User Sign-up Applicaion " << "\n" << "\n";

    // Infinite loop to keep the menu running
    while (true)
    {
        std::cout << "\n Please select an option: " << "\n";
        std::cout << "1. Add Record" << "\n";
        std::cout << "2. Fetch Record" << "\n";
        std::cout << "3. Quit" << "\n" << "\n";
        std::cout << "Enter option :  ";
        std::cin >> option; // Get user input for the menu option

        switch (option)
        {
            case 1 :
            {
                std::string name ;
                int age ;
                std::cout << "\n";
                std::cout << "Add user , Please enter user name and age " << "\n"<<"\n";
                std::cout << "Name: ";
                std::cin.ignore(); // Ignore any leftover newline characters from the previous input
                std::getline(std::cin, name); // Get user input for the name
                std::cout << "Age: ";
                std::cin >> age; // Get user input for the age
                AddRecord(name, age); // Call the AddRecord function to add the new user
                break;
            }
            case 2 :
            {
                int id;
                std::cout << "Enter ID: ";
                std::cin >> id; // Get user input for the ID
                Person person = FetchRecord(id); // Call the FetchRecord function to get the user with the given ID
                if (person.name != "") { // Check if the user exists
                    std::cout << "User name: " << person.name << "\n";
                    std::cout << "User age: " << person.age << "\n";
                }
                break;
            }
            case 3:
            {
                std::cout << "Quit..." << "\n";
                return 0; // Exit the program
            }
            default:
                std::cout << "Invalid choice." << "\n";
        
        }
    }
    return 0;
}