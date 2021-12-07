#include "Courses.h"

void Courses::printAll() const
{
	for (size_t i = 0; i < courses.size(); ++i) {
		Course course = courses.at(i);
		cout << course.getId() << " " << course.getTitle() << endl;
	}
}
void Courses::printCourse(string courseId) const {

}
void Courses::sort() {

}
void Courses::loadFromCSV(string filename) {

}
Course Courses::findCourse(string courseId) const {
	return Course();
}