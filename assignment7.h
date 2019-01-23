//
// Created by Austin Speth on 11/19/18.
//

#ifndef ASSIGNMENT7_ASSIGNMENT7_H
#define ASSIGNMENT7_ASSIGNMENT7_H

#include <iostream>

//Class definition for the program
class Student{
private:
    std::string id;
    int examGrade1, examGrade2, homework, finalGrade;

public:
    Student() {};
    Student(std::string d, int exam1, int exam2, int home, int final):
        id(d), examGrade1( exam1), examGrade2(exam2), homework(home), finalGrade(final){};
    int calcTotalGrade();
    char calcLetterGrade();
    std::string getID() const { return id; };
    int getExam1() { return examGrade1; };
    int getExam2() { return examGrade2; };
    int getHomework() { return homework; };
    int getFinal() { return finalGrade; };

    ~Student() {}
};
#endif //ASSIGNMENT7_ASSIGNMENT7_H
