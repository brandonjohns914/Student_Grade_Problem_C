//
//  main.cpp
//  Lab5
//
//  Created by Brandon Johns on 3/13/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include <iostream>
using namespace std;



//// number 1 
const int size=1;

class Student_Grade
{
private:
    int studentID;
    double quiz1;
    double quiz2;
    double midterm;
    double Final;
    double avgerage;
    char grade;
public:
    void intput(Student_Grade& student);
    void find_grade(Student_Grade& student);
    void output( const Student_Grade student );
    
    
    
};



void Student_Grade:: intput(Student_Grade& student)
{
    cout<< "enter quiz 1 grade: " <<endl;
    cin>> student.quiz1;
    cout<< "enter quiz 2 grade: " <<endl;
    cin>> student.quiz2;
    cout<< "enter midterm grade: "<<endl;
    cin>> student.midterm;
    cout<< "enter final grade: " <<endl;
    cin>> student.Final;
}

void Student_Grade:: find_grade(Student_Grade &student)
{
   double quizAverage=(student.quiz1 + student.quiz2);
    double Qavg= (quizAverage/2.0)*10;
    student.avgerage=student.Final* 0.5 + student.midterm *0.25 + Qavg *0.25;
    char lettergrade;
    double avg=student.avgerage;
    
    if(avg<100 || avg>90)
    {
        lettergrade='A';
        
    }
    else if(avg<89 || avg>80)
    {
        lettergrade= 'B';
    }
    else if(avg<79 || avg>70)
    {
        lettergrade= 'C';
    }
    
    else if(avg<69 || avg>60)
    {
        lettergrade= 'D';
    }
    else
    {
        lettergrade='F';
    }
    
    student.grade= lettergrade;
    
    
}

void Student_Grade:: output(const Student_Grade student)
{
    cout<< "Student ID : "<< student.studentID << endl;
    cout<< "Quiz 1: " << student.quiz1 <<" Quiz 2: " << student.quiz2 <<endl;
    cout<< "Midterm1: " << student.midterm <<endl;
    cout<< "Final: "<< student.Final<<endl;
    cout<< "number grade out of 100 is" << student.avgerage <<endl;
    cout<< "grade is: " << student.grade <<endl;
    
}
/// number 2

class CounterType
{
private:
    int counter;
public:
    CounterType();
    void setCounter(int counter);
    int getCounter();
    void addCounter();
    void minusCounter();

};

CounterType:: CounterType()
{
    counter=0;
}

void CounterType:: setCounter(int counter)
{
    if(counter<0)
    {
        cout<<"Counter value cannot be a negative number" <<endl;
    }
    else
    {
        this -> counter=counter;
    }
}
int CounterType:: getCounter()
{
    return counter;
}
void CounterType:: addCounter()
{
    counter= counter+1;
}
void CounterType:: minusCounter()
{
    if(counter<=0)
    {
        cout<< " Counter value is not negative and cannot be subtracted. "<<endl;
    }
    else
    {
        counter = counter -1;
    }
}


int main()
{
    // number1
    Student_Grade student[size];
    for(int i=0; i< size; i++)
    {
        student[i].intput(student[i]);
    }
    
    for(int i=0; i< size; i++)
    {
        student[i].find_grade(student[i]);
        student[i].output(student[i]);
        cout<<endl;
    }
    
    
    cout<< "--------------------------------------------------------------------" <<endl;
    
    //number2
    CounterType count;
    count.setCounter(2);
    cout<< "counter value is: " << count.getCounter()<<endl <<endl;
    
    cout<<"subtact: " << endl;
    count.minusCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<<"subtact: " << endl;
    count.minusCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<<"addition : " << endl;
    count.addCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<< "Resetting counter" <<endl;
    count.setCounter(-5);
    cout<<"current value: " << count.getCounter()<<endl <<endl;
    
    
    
    
    
    
    
    return 0;
}

/*
//// number 1
 
 enter quiz 1 grade:
 9.5
 enter quiz 2 grade:
 9.4
 enter midterm grade:
 94.3
 enter final grade:
 88.3
 Student ID : 37448
 Quiz 1: 9.5 Quiz 2: 9.4
 Midterm1: 94.3
 Final: 88.3
 number grade out of 100 is91.35
 grade is: A


//// number 2
 counter value is: 2
 
 subtact:
 new value: 1
 
 subtact:
 new value: 0
 
 addition :
 new value: 1
 
 Resetting counter
 Counter value cannot be a negative number
 current value: 1
 
 Program ended with exit code: 0
*/
