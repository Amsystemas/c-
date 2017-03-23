/*
 * GradeBook.cpp with a meber function displayMessage, create a
	Implementations of the member functions prototyped in GradeBook.h
 * GradeBook object, and call its displayMessage function
 *
 *  Created on: 22 de mar de 2017
 *      Author: arthur
 */

/*
 * #include preprocessor directives should place user-defined headers names in quotes ""
 * and place C++ Standard Library headers names in angle brackets <>
 *
 */
#include <iostream>
#include "GradeBook.h" //include definitionof class GradeBook
using namespace std;

	// '::' which is know as the binary scope resolution operador

	//Constructor initializes courseName  with string supplied as argument
	GradeBook::GradeBook(string name){
		setCourseName(name);//call set function to initialize courseName
	}

	//function to set the course name
	//ensures that the course name has at most 25 characters
	void GradeBook::setCourseName(string name)
	{
		if(name.length() <=25) //if name has 25 or fewer characters
		courseName = name; //store the course name in the object
		if(name.length() > 25) //if name has more than 25 characters
		{
			//set courseName to first 25 characters of parameter name
			courseName= name.substr(0,25); //start at 0, length of 25
			cout << "Name \"" << name << "\" exceeds maximum length (25.\n"
					<< "Limiting courseName to first 25 characters. \n" << endl;
		}
	}

	//function to get the course name
	string GradeBook::getCourseName(){
		return courseName; //return object's courseName
	}

	//display a welcome message to the GradeBook user
	void GradeBook::displayMessage(){
		//call getCourseName to get the courseName
		cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
	}



 /* namespace std */
