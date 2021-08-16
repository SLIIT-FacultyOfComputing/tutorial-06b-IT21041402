#include "Student.h"
#include <iostream>
using namespace std;

#include<cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int id,char sname[]) {
     studentId=id;
     strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
      cout<<"Student id: "<<studentId<<endl;
      cout<<"student Name: "<<name<<endl;
}
