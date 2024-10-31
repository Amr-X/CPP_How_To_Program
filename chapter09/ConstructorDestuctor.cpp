#include <iostream>
using namespace std;

class CreateAndDestroy {
public:
    // Constructor
    CreateAndDestroy(int id, const string& message) : objectID(id), messageText(message) {
        cout << "Object " << objectID << "   Constructor runs   " << messageText << endl;
    }

    // Destructor
    ~CreateAndDestroy() {
        cout << "Object " << objectID << "   Destructor runs    " << messageText << endl;
    }

private:
    int objectID;         // Object identifier
    string messageText;   // Message to describe the object
};

// Global object (created before main)
CreateAndDestroy first{1, "(global before main)"};

// Function to create objects
void create() {
    cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy fifth{5, "(local in create)"};
    static CreateAndDestroy sixth{6, "(local static in create)"};
    CreateAndDestroy seventh{7, "(local in create)"};
    cout << "CREATE FUNCTION: EXECUTION ENDS" << endl;
}

int main() {
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;

    // Local object in main (created and destroyed in main)
    CreateAndDestroy second{2, "(local in main)"};

    // Local static object in main (created only once, lives until program ends)
    static CreateAndDestroy third{3, "(local static in main)"};

    // Call function to create objects
    create();

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;

    // Another local object in main (created and destroyed in main)
    CreateAndDestroy fourth{4, "(local in main)"};

    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}