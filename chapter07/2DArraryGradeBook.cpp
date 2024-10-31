#include <array>
#include <string>
#include "2DArrayGradeBook.h"
using namespace std;

/*
    2D Array GradeBook
     test  1  2  3
student  {{87,96,70},
student  {68,87,90},
student  {94,100,90},
student  {100,81,82},
student  {83,65,85},
student  {78,87,65},
student  {85,75,83},
student  {91,94,100},
student  {76,72,84},
student  {87,93,73} }


*/

int main()
{

    string courseName{"Amr's Course"}; // yeah, That's The Course Name.
    array<array<int,GradeBook::testSize>, GradeBook::studentsSize> grades{{
         {87,96,70},
         {68,87,90},
         {94,100,90},
         {100,81,82},
         {83,65,85},
         {78,87,65},
         {85,75,83},
         {91,94,100},
         {76,72,84},
         {87,93,73}}};

    GradeBook myGradeBook(courseName, grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrade();
}