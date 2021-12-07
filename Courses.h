#ifndef __PROJECT_TWO_COURSES_H
#define __PROJECT_TWO_COURSES_H

#include <vector>
#include "Course.h"

class Courses
{
private:
	vector<Course> courses;
	bool sorted = true; //TODO Fixme use false as default
	Course findCourse(string courseId) const;
	void sort();

public:
	void loadFromCSV(string filename);
	void printCourse(string courseId) const;
	void printAll() const;
};

#endif