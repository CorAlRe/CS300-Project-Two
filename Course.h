#ifndef __PROJECT_TWO_COURSE_H
#define __PROJECT_TWO_COURSE_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Course
{
private:
	string id;
	string title;
	vector<Course*> prerequisites;

public:
	Course() {
	}
	string getId() const {
		return this->id;
	}
	string getTitle() const {
		return this->title;
	}
	void setId(string id) {
		this->id = id;
	}
	void setTitle(string title) {
		this->title = title;
	}
	void addPrerequisite(Course& course) {
		prerequisites.push_back(&course);
	}
	void print() const;
};

#endif
