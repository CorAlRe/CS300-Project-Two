#include "Course.h"

void Course::print() const {
	cout << id << ", " << title;

	if (prerequisites.size() > 0) {
		cout << endl << "Prerequisites: ";

		for (size_t i = 0; i < prerequisites.size(); ++i) {
			cout << prerequisites.at(i)->getId();

			if (i + 1 < prerequisites.size()) {
				cout << ", ";
			}
		}
	}

	cout << endl;
}