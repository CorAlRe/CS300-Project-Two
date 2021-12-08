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
	vector<Course> prerequisites;

public:
	/// <summary>
	/// Default constructor
	/// </summary>
	Course() {
	}

	/// <summary>
	/// Accessor method for Id
	/// </summary>
	/// <returns></returns>
	string getId() const {
		return this->id;
	}

	/// <summary>
	/// Accessor method for Title
	/// </summary>
	/// <returns></returns>
	string getTitle() const {
		return this->title;
	}

	/// <summary>
	/// Mutator method for Id
	/// </summary>
	/// <param name="id"></param>
	void setId(const string id) {
		this->id = id;
	}

	/// <summary>
	/// Mutator method for Title
	/// </summary>
	/// <param name="title"></param>
	void setTitle(const string title) {
		this->title = title;
	}

	/// <summary>
	/// Add a prerequisite 
	/// </summary>
	/// <param name="course"></param>
	void addPrerequisite(const Course course) {
		prerequisites.push_back(course);
	}

	/// <summary>
	/// Display course Id, Title, and Prerequisites
	/// to stdout
	/// </summary>
	void print() const;
};

#endif
