#include "student.h"
Student::Student()
{
	for (int i = 0; i < 12; i++) {
		strcpy_s(course[i].courseCode, "XXX234");
		course[i].units = 1;
		counter[i] = -1;
		course[i].grade = 'A';
		switch (course[i].grade)
		{
		case 'A':
			course[i].point = 5;
			break;
		case 'B':
			course[i].point = 4;
			break;
		case 'C':
			course[i].point = 3;
			break;
		case 'D':
			course[i].point = 2;
			break;
		case 'E':
			course[i].point = 1;
			break;
		case 'F':
			course[i].point = 0;
			break;
		default:
			break;
		};
	}
	sum = Student::sumUnits();
	totalWeighted = Student::weightedScore();
	gpa = Student::calculateGPA();
}

float Student::calculateGPA() {
	float gpa = totalWeighted / sum;
	return gpa;
}

float Student::sumUnits() {

	float sum = 0;
	for (int i = 0; i < 24; i++) {
		if (counter[i] != -1) {
			break;
		}
		sum += course[i].units;
	}
	return sum;
}

float Student::weightedScore() {
	float score[24];
	float sumWeighted = 0;
	for (int i = 0; i < 24; i++) {
		if (counter[i] != -1) {
			break;
		}
		score[i] = course[i].point * course[i].units;
		sumWeighted += score[i];
	}
	return sumWeighted;
}

void Student::setCourse(int serialNo, char code[], int unit, char grade) {
	int index = serialNo - 1;
	strcpy_s(course[index].courseCode, code);
	course[index].units = unit;
	course[index].grade = grade;
}

Course Student::getCourse(int position) {
	return course[position];
}

Student::~Student()
{
}
