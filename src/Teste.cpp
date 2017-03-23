//Teste GradeBook class demonstration after separaing
//its interface from its implementation
#include <iostream>
#include "GradeBook.h" //include definition of class GradeBook
using namespace std;

//function main begins program execution
int main() {
	GradeBook myGradeBook1("CAES001 Metodologias Ágeis para o Desenvolvimento de Software - PPGCA e Optativa 2017");
	GradeBook myGradeBook2("CABS002 Programacao Avancada"); //createa GradeBook, object named myGradeBook

	//display each GradeBook's couseName
	cout << "gradeBook1's initial couser name is:"
			<< myGradeBook1.getCourseName()
			<< "\ngradeBook2 :" << myGradeBook2.getCourseName() << endl;

	//modify myGradebook's courseName (with a valid-length string)
	myGradeBook1.setCourseName("CAES001 Metodologias Ageis");

	//display each GradeBook's courseName
	cout << "\ngradeBook1's course name is:"
			<<myGradeBook1.getCourseName()
			<<"\ngradeBook2's course name is: "
			<<myGradeBook2.getCourseName() <<endl;

}
