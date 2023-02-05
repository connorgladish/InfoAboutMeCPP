#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello! Welcome to my information session." << endl;
    getchar();
       
    cout << "This won't be long, so don't worry. :D" << endl;
    getchar();

    cout << "Sit back, relax, and choose what interests you!" << endl;
    getchar();

    int choice;
    while (true) {
        cout << "Select what you would like to know!" << endl;

        cout << "1.) Age" << endl;
        cout << "2.) University of Attendance" << endl;
        cout << "3.) Major & Minor" << endl;
        cout << "4.) GPA" << endl;
        cout << "5.) Ideas" << endl;
        cout << "6.) Regarding GitHub" << endl;
        cout << "7.) Closing thoughts" << endl;
        cout << "8.) Enter your choice! (0 to exit)" << endl;
       
        cin >> choice;

        switch (choice) {

        case 0:
            return false;
        case 1:
            cout << "As of February of 2023, I am 19 years old." << endl;
            break;
        case 2:
            cout << "I attend the University of TN - Martin. Go SkyHawks!" << endl;
            break;
        case 3:
            cout << "I am a Computer Science Major with a Minor in Cybersecurity! Go figure, right?" << endl;
            break;
        case 4:
            cout << "Well someone's curious. I'm passing, mom. Sheesh." << endl;
            break;
        case 5:
            cout << "I currently want to make a simple text game using these features." << endl;
            break;
        case 6: 
            cout << "Most things are private, that will change soon!" << endl;
            break;
        case 7:
            cout << "Thank you so much for sticking around! See ya!" << endl;
            return 0;
            break;
        default:
            cout << "Invalid selection, please press 1-4." << endl;


        }

    }
    return 0;
}
