#include "main.cpp"
#include "student.h"

Student::Student()
{
	for (int i = 0; i < 24; i++) {
		strcpy(course[i].courseCode, "XXX234");
		course[i].units = 1;
		course[i].grade = 'A';
	}
}

float Student::sumUnits() {
	return 0;
}

float Student::weightedScore() {
	return 0;
}

void Student::setCourse() {

}

Course Student::getCourse() {
	
}

Student::~Student()
{
}