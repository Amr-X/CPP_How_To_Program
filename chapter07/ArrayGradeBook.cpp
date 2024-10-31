#include <iostream>
#include <array>
#include <string>
#include "GradeBookClass.h"
using namespace std;

/*Array GradeBook

Requirement
1.A Class to Create GradeBook (Header)
    DataMember:
        CourseName
        GradeArrary
            Initialized with Constructor.
    Methods:
        setCourseName
        getCourseName
        displayMessage
        ProcessGrades
            getOutputGrades
            getAverage
            getMinimum
            getMaximum
            OutputBarChart
2.Declaring Variables Before Intiating Object myGradeBook
3.Inititing Object myGradeBook (CourseName,GradeArray)
4.Using Methods Provided
*/

int main()
{

    string courseName{"Amr's Course"}; // yeah, That's The Course Name.
    array<int, GradeBook::studentsSize> grades{87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

    GradeBook myGradeBook(courseName, grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrade();
}