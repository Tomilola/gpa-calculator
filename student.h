
class Student
{
public:
	Student();
	~Student();
	float sumUnits();
	float weightedScore();
	void  setCourse();
	Course getCourse();

private:
	Course course[24];
	float sum;
};

struct Course
{
	char courseCode[10];
	int units;
	char grade;
	float point;
};

