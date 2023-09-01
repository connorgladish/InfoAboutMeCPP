#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displaySphere() {
    cout << R"(
         .-""""""-.
       .'          '.
      /   O      O   \
     :                :
     |                |   
     : ',          ,' :
      \  '-......-'  /
       '.          .'
         '-......-'   
)" << endl;
}

void displayMenu() {
    cout << "1. View Name" << endl;
    cout << "2. View Major" << endl;
    cout << "3. View Hobbies" << endl;
    cout << "4. Random Fun Fact" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

void displayRandomFunFact() {
    // Define an array of fun facts
    string funFacts[] = {
        "I am a PEP Leader for CS Students this year!",
        "I'm pursuing a Masters after my Bachelors.",
        "I am currently making my own RPG game.",
        "I am a Sophomore at UT at Martin.",
        "I watch A LOT of anime, and have grown up on it. It's kind of an issue.",
        "If you don't see me around, check the CS Lab.",
        "There are different ones of these you can see each time!!",
        "I am from Adamsville, TN.",
        "I will be adding more to this Github soon!",
        "My Spotify is linked in my Github! It's peak.",
        "Does anybody miss Twitter being Twitter??",
        "I drink an unhealthy amount of VitaminWater."
    };

    // Generate a random index to select a fun fact
    int numFacts = sizeof(funFacts) / sizeof(funFacts[0]);
    int randomIndex = rand() % numFacts;

    cout << "Fun Fact: " << funFacts[randomIndex] << endl;
}

int main() {
    string name = "Connor (CJ) Gladish";
    string major = "Computer Science w/ a Minor in Cybersecurity";
    string hobbies = "Gaming, Software Development, Piano, Guitar, Reading Manga";

    srand(static_cast<unsigned>(time(nullptr))); // Seed for random number generation

    displaySphere();
    
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Name: " << name << endl;
                break;
            case 2:
                cout << "Major: " << major << endl;
                break;
            case 3:
                cout << "Hobbies: " << hobbies << endl;
                break;
            case 4:
                displayRandomFunFact();
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

