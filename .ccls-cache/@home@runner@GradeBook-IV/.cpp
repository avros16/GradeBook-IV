#include <iostream>
#include "GradeBook.h"
using namespace std;


int main () {
  GradeBook  gradeBook1("CS101 Intro Course");

  GradeBook gradeBook2("CS102 Data Structures");


  cout << "gradebook 1" << gradeBook1.getCourseName() << endl;
  
  cout << "gradebook 2" << gradeBook2.getCourseName();
}