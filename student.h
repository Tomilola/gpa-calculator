struct Course
{
	char courseCode[10];
	int units;
	char grade;
	float point;
};
class Student
{
public:
	Student();
	~Student();
	float sumUnits();
	float weightedScore();
	void  setCourse(int, char[], int, char);
	float calculateGPA();
	Course getCourse(int);

private:
	Course course[24];
	float sum;
	float totalWeighted;
	float gpa;
	int counter[24];
};
