//GradeBook class definition in a separate file from main
//Interface without revealing the implementatios of GradeBook's member
//functions, which are defined in GradeBook.cpp.

#include <string> //class GradeBook uses C++ standard string class
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	//constructor intiliazes courseName with string supplied as argument
	GradeBook(string); //construtor that initializes courseName
	void setCourseName(string); //function that sets the course name
	string getCourseName(); //function that gets the course name
	void displayMessage(); //function that displays a welcome message
private:
	string courseName; //course name for this Gradebook
};
