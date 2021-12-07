#include "menu.h"
#include "Course.h"
#include "Courses.h"

void printMenu(void) {
	cout << "Menu:" << endl;
	cout << "  1. Load Data Structure." << endl;
	cout << "  2. Print Course List." << endl;
	cout << "  3. Print Course." << endl;
	cout << "  9. Exit" << endl;
	cout << "What would you like to do? ";
}

void handleChoice(int choice, Courses& courses) {
    switch (choice) {
    case 1:
        {
            string filename;
            auto state = cin.exceptions();
            cin.exceptions(std::istream::failbit | state);
            cout << "Please enter the name of the data file to load." << endl;

            try {
                getline(cin, filename);
                courses.loadFromCSV(filename);
            }
            catch (exception ex) {
                cout << ex.what() << endl;  // display what happened to console
            }

            cin.exceptions(state);
        }
        break;

    case 2:
        courses.printAll();
        break;

    case 3: 
        {
            string courseId;
            cout << "What course do you want to know about?";
            cin >> courseId;
            courses.printCourse(courseId);
        }
        break;

    case 9:
        cout << "Thank you for using the course planner!" << endl;
        break;

    default:
        cout << choice << "is not a valid option" << endl;
        break;
    }
}

void commandLoop(void) {
	int choice = 0;
    Courses courses;

    cout << "Welcome to the course planner." << endl;

	while (choice != 9) {
		printMenu();
		cin >> choice;
		handleChoice(choice, courses);
	}
}