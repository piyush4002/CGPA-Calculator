#include <iostream>
#include <fstream>

#define MAX_SUBJECTS 11
using namespace std;

//base
class Student {
protected:
    string name;
    string rollNumber;

public:
    void setStudentDetails() {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void getStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }

    void writeStudentDetails(ofstream &outFile) const {
        outFile<<"College Name: Arya Collage of Engineering Jaipur\n";
        outFile << "Student Name: " << name << endl;
        outFile << "Roll Number: " << rollNumber << endl;
    }
};

//derived
class Semester : public Student {
protected:
    int semNum;
    string subject[MAX_SUBJECTS];
    int marks[MAX_SUBJECTS];       
    float credit[MAX_SUBJECTS];       
    string subgrade[MAX_SUBJECTS];
    string strCredit[MAX_SUBJECTS];
    float totalMarks;
    int totalCredits;
    float percentage;
    string grade;
    bool remark;
    

     void SubjectsAndCredits(){
      if(semNum == 1){
        //sub
        subject[0]="Engg Maths-I             ";
        subject[1]="Engg Chem                ";
        subject[2]="Human Value              ";
        subject[3]="Prog. for Problem Solving";
        subject[4]="Basic Civil Engg         ";
        subject[5]="Engg Chem Lab            ";
        subject[6]="Human Values Activities  ";
        subject[7]="Computer Programming Lab ";
        subject[8]="Basic Civil Engg Lab     ";
        subject[9]="CAEG                     ";
        subject[10]="DECA                     ";

        //credits
         credit[0]=4.0;
        credit[1]=4.0;
        credit[2]=2.0;
        credit[3]=2.0;
        credit[4]=2.0;
        credit[5]=1.0;
        credit[6]=1.0;
        credit[7]=1.5;
        credit[8]=1.0;
        credit[9]=1.5;
        credit[10]=0.5;
      }else if(semNum == 2){
         //sub
        subject[0]="Engg Maths-II            ";
        subject[1]="Engg Phy                 ";
        subject[2]="Communication Skills     ";
        subject[3]="Basic Mech. Engg         ";
        subject[4]="Basic Elect. Engg        ";
        subject[5]="Engg Phy Lab             ";
        subject[6]="Language Lab             ";
        subject[7]="Manufact. Pract.Workshop ";
        subject[8]="Basic Elect. Engg Lab    ";
        subject[9]="CAMD                     ";
        subject[10]="DECA                     ";

        //credits
        credit[0]=4.0;
        credit[1]=4.0;
        credit[2]=2.0;
        credit[3]=2.0;
        credit[4]=2.0;
        credit[5]=1.0;
        credit[6]=1.0;
        credit[7]=1.5;
        credit[8]=1.0;
        credit[9]=1.5;
        credit[10]=0.5;
      }else if(semNum == 3){
         //sub
        subject[0]="Adv. Engg Maths          ";
        subject[1]="M.E.F.A.                 ";
        subject[2]="Digital Elect.           ";
        subject[3]="D.S.A.                   ";
        subject[4]="Object Oriented Prog.    ";
        subject[5]="Software Engg.           ";
        subject[6]="D.S.A. Lab               ";
        subject[7]="Object Oriented Prog. Lab";
        subject[8]="Software Engg Lab        ";
        subject[9]="Digital Elect. Lab       ";
        subject[10]="Industrial Training      ";

        //credits
        credit[0]=3.0;
        credit[1]=2.0;
        credit[2]=3.0;
        credit[3]=3.0;
        credit[4]=3.0;
        credit[5]=3.0;
        credit[6]=1.5;
        credit[7]=1.5;
        credit[8]=1.5;
        credit[9]=1.5;
        credit[10]=1.0;
      }else if(semNum == 4){
         //sub
        subject[0]="Descrete Maths Structure ";
        subject[1]="Technical Communication  ";
        subject[2]="Microprocessor and Inter.";
        subject[3]="D.B.M.S.                 ";
        subject[4]="Theory of Computation    ";
        subject[5]="Data Comm. and Comm. Netw";
        subject[6]="Microproc. and Inter. Lab";
        subject[7]="D.B.M.S. Lab             ";
        subject[8]="Network Programming Lab  ";
        subject[9]="Linux Shell Progg. Lab   ";
        subject[10]="Java Lab                 ";

        //credits
        credit[0]=3.0;
        credit[1]=2.0;
        credit[2]=3.0;
        credit[3]=3.0;
        credit[4]=3.0;
        credit[5]=3.0;
        credit[6]=1.0;
        credit[7]=1.5;
        credit[8]=1.5;
        credit[9]=1.0;
        credit[10]=1.0;
      }else if(semNum == 5){
         //sub
        subject[0]="Infor. Theory and Coding ";
        subject[1]="Compiler Design          ";
        subject[2]="Operating System         ";
        subject[3]="Computer Graphics and Mul";
        subject[4]="Analysis of Algorithm    ";
        subject[5]="Human Computer Interact. ";
        subject[6]="Comp. Graph. and Mul Lab ";
        subject[7]="Compiler Design Lab      ";
        subject[8]="Analysis of Algorithm Lab";
        subject[9]="Advance JAVA Lab         ";
        subject[10]="Industrial Training      ";

        //credits
        credit[0]=2.0;
        credit[1]=3.0;
        credit[2]=3.0;
        credit[3]=3.0;
        credit[4]=3.0;
        credit[5]=2.0;
        credit[6]=1.0;
        credit[7]=1.0;
        credit[8]=1.0;
        credit[9]=1.0;
        credit[10]=2.5;
      }else if(semNum == 6){
         //sub
        subject[0]="Digital Image Processing ";
        subject[1]="Machine Learning         ";
        subject[2]="Info. Security System    ";
        subject[3]="Computer Archi. and Org. ";
        subject[4]="Artificial Intelligence  ";
        subject[5]="Cloud Computing          ";
        subject[6]="Distributed System       ";
        subject[7]="Digital Img.Proce. Lab   ";
        subject[8]="Machine Learning Lab     ";
        subject[9]="Python Lab               ";
        subject[10]="Mobile App Develop. Lab  ";

        //credits
        credit[0]=2.0;
        credit[1]=3.0;
        credit[2]=2.0;
        credit[3]=3.0;
        credit[4]=2.0;
        credit[5]=3.0;
        credit[6]=2.0;
        credit[7]=1.5;
        credit[8]=1.5;
        credit[9]=1.5;
        credit[10]=1.5;
      }else if(semNum == 7){
         //sub
        subject[0]="Env. Engg and Dist. Mang.";
        subject[1]="Internet of Things       ";
        subject[2]="Internet of Things Lab   ";
        subject[3]="Cyber Security Lab       ";
        subject[4]="Industrial Training      ";
        subject[5]="Seminar                  ";
        subject[6]="";
        subject[7]="";
        subject[8]="";
        subject[9]="";
        subject[10]="";

        //credits
        credit[0]=3.0;
        credit[1]=3.0;
        credit[2]=2.0;
        credit[3]=2.0;
        credit[4]=2.5;
        credit[5]=2.0;
        credit[6]=0;
        credit[7]=0;
        credit[8]=0;
        credit[9]=0;
        credit[10]=0;
      }else if(semNum == 8){
         //sub
        subject[0]="Big Data Analysis        ";
        subject[1]="Big Data Analysis Lab    ";
        subject[2]="Sofwt. Test. and Val. Lab";
        subject[3]="Project                  ";
        subject[4]="ExtraCurricular Activity ";
        subject[5]="Disaster Management      ";
        subject[6]="";
        subject[7]="";
        subject[8]="";
        subject[9]="";
        subject[10]="";

        //credits
        credit[0]=3.0;
        credit[1]=2.0;
        credit[2]=1.0;
        credit[3]=7.0;
        credit[4]=0.5;
        credit[5]=3.0;
        credit[6]=0;
        credit[7]=0;
        credit[8]=0;
        credit[9]=0;
        credit[10]=0;
      }else{
        cout<<"invalid input\n";
      }
      gradeSub();
      strCredits();
    }

public:
    Semester() : totalMarks(0), totalCredits(0), percentage(0), grade("F") {}

    void semesterNum(){
      cout<<"Enter the Semester number: ";
      cin>>semNum;
    }


    void analysis() {
    int maxkey = marks[0];
    int minkey = marks[0];
    
    for (int i = 1; i < MAX_SUBJECTS; i++) {
      if((semNum==7 || semNum==8)&& i==6){
        break;
      }else{
        if (marks[i] > maxkey) {
            maxkey = marks[i]; // Update max marks
        }
        if (marks[i] < minkey) {
            minkey = marks[i]; // Update min marks
        }
      }
    }

    cout << "\n--------------Analysis-----------------------\n";
    cout << "\nYou Scored " << maxkey << " (Maximum Marks) in:\t";
    for (int i = 0; i < MAX_SUBJECTS; i++) {
      if((semNum==7 || semNum==8)&& i==6){
        break;
      }else{
        if (marks[i] == maxkey) {
            cout << subject[i] <<"\t";
        }
      }
    }
    cout<<"\n";

    cout << "\nYou Scored " << minkey << " (Minimum Marks) in:\t";
    for (int i = 0; i < MAX_SUBJECTS; i++) {
      if((semNum==7 || semNum==8)&& i==6){
        break;
      }else{
        if (marks[i] == minkey) {
            cout << subject[i] <<"\t";
        }
      }
        
    }
    cout<<"\n";

    cout << "\nSubjects with more credits:\t";
    for (int i = 0; i < MAX_SUBJECTS; i++) {
      if((semNum==7 || semNum==8)&& i==6){
        break;
      }else{
        if ((semNum==1 || semNum==2 ) && credit[i] >= 4.0) {
            cout << subject[i] << " (Credits: " << credit[i] << ")\t";
        }
        if((semNum==3 || semNum==4 || semNum==5 || semNum==6 || semNum==7) && credit[i] >= 3.0){
          cout << subject[i] << " (Credits: " << credit[i] << ")\t";
        }
        if((semNum==8) && credit[i]>=7.0){
           cout << subject[i] << " (Credits: " << credit[i] << ")\n";
        }
      }
    }
    cout << "\n--------------------------------------------------------------------------\n";
}



    void writeanalysis(ofstream &outFile) const {
      int maxkey = marks[0];
      int minkey = marks[0];
    
    for (int i = 1; i < MAX_SUBJECTS; i++) {
      if((semNum==7 || semNum==8)&& i==6){
        break;
      }else{
          if (marks[i] > maxkey) {
            maxkey = marks[i]; // Update max marks
        }
        if (marks[i] < minkey) {
            minkey = marks[i]; // Update min marks
        }
      }
      
    }

    outFile <<"\n--------------Analysis-----------------------\n";
    outFile << "\nYou Scored " << maxkey << " (Maximum Marks) in:\t";
    for (int i = 0; i < MAX_SUBJECTS; i++) {
      if((semNum==7 || semNum==8)&& i==6){
        break;
      }else{
        if (marks[i] == maxkey) {
            outFile << subject[i] <<"\t";
        }
      }
        
    }
    outFile<<"\n";

    outFile << "\nYou Scored " << minkey << " (Minimum Marks) in:\t";
    for (int i = 0; i < MAX_SUBJECTS; i++) {
      if((semNum==7 || semNum==8)&& i==6){
        break;
      }else{
        if (marks[i] == minkey) {
            outFile << subject[i] <<"\t";
        }
      }
        
    }
    outFile<<"\n";

    outFile << "\nSubjects with more credits:\t";
    for (int i = 0; i < MAX_SUBJECTS; i++) {
      if((semNum==7 || semNum==8)&& i==6){
        break;
      }else{
        if ((semNum==1 || semNum==2 ) && credit[i] >= 4.0) {
            outFile << subject[i] << " (Credits: " << credit[i] << ")\t";
        }
        if((semNum==3 || semNum==4 || semNum==5 || semNum==6 || semNum==7) && credit[i] >= 3.0){
          outFile << subject[i] << " (Credits: " << credit[i] << ")\t";
        }
        if((semNum==8) && credit[i]>=7.0){
           outFile << subject[i] << " (Credits: " << credit[i] << ")\n";
        }
      }
    }
    cout <<"\n--------------------------------------------------------------------------\n";
    }


    string calculateGrade(float percentage) {
        if (percentage >= 90) return "A+";
        else if (percentage >= 75) return "A";
        else if (percentage >= 65) return "B+";
        else if (percentage >= 55) return "B";
        else if (percentage >= 45) return "C+";
        else if (percentage >= 35) return "C";
        else return "F";
    }

    void gradeSub(){
      for(int i=0; i<MAX_SUBJECTS;i++){
        subgrade[i] = calculateGrade((float)marks[i]);
      }
    }

    void strCredits(){
      for(int i = 0; i<MAX_SUBJECTS;i++){
        strCredit[i] = to_string(credit[i]);
      }
    }

    void setSemesterDetails() {
    SubjectsAndCredits();

    totalMarks = 0; 
    totalCredits = 0; 

    cout << "\n--- Enter Details for Semester " << semNum << " ---\n";

    for (int i = 0; i < MAX_SUBJECTS; i++) {
        if((semNum == 7 || semNum == 8)&& i==6){
            break;
          }else{
            cout << "Enter marks for " << subject[i] << ": ";
        cin >> marks[i];
        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Please enter marks between 0 and 100.\n";
            i--; // Retry for the same subject.
            continue;
        }
          }
        totalMarks += marks[i] * credit[i];
        totalCredits += credit[i];
    }

    if (totalCredits > 0) {
        percentage = (totalMarks / totalCredits);
    } else {
        percentage = 0;
    }
    grade = calculateGrade(percentage);
}

void writeSem(ofstream &outFile) const{
      outFile<<"                    B.Tech "<< semNum<<" Sem Exam"<<endl;
    }
void getSem(){
      cout<<"\n\n                    B.Tech "<< semNum<<" Sem Exam"<<endl;
    }

    void writeMarksDetails(ofstream &outFile) const {
       outFile << "\nCourse Title                Marks      Credits      Grade\n";
        for (int i = 0; i < MAX_SUBJECTS; i++) { 
           if((semNum == 7 || semNum == 8)&& i==6){
            break;
           }else{
             outFile << subject[i] << "    " << marks[i] << "        " <<strCredit[i] <<"       "<<subgrade[i]<< endl;
           }
        }
    }
    void getMarksDetails() {
       cout << "\nCourse Title                Marks      Credits      Grade\n";
        for (int i = 0; i < MAX_SUBJECTS; i++) {
          if((semNum == 7 || semNum == 8)&& i==6){
            break;
          }else{
               if (marks[i] >= 90){
      subgrade[i] = "A+";
       }else if (marks[i] >= 75){
       subgrade[i] ="A";
       }
        else if (marks[i] >= 65){
          subgrade[i] ="B+";
        }
        else if (marks[i] >= 55){
          subgrade[i] ="B";
        }
        else if (marks[i] >= 45){
         subgrade[i]="C+";
        }
        else if (marks[i] >= 35){
         subgrade[i]= "C";
        } 
        else{
          subgrade[i]= "F";
        } 
            cout << subject[i] << "    " << marks[i] << "        " <<strCredit[i] <<"       "<<subgrade[i]<< endl;
          }
        }
    }

    void getSemesterDetails() {
    cout << "\n-------------------------------------\n";
    cout << "Total Credits: " << totalCredits << endl;

    remark = true;
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        if ((semNum == 7 || semNum == 8) && i == 6) {
            break;
        }
        if (marks[i] < 35) {
            remark = false;
            break;
        }
    }

    if (remark) {
        cout << "Remarks: Pass\n";
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    } else {
        cout << "Remarks: Fail\n";
    }
}


    void writeSemesterDetails(ofstream &outFile) const {
        outFile <<"\n-------------------------------------\n";
        outFile << "Total Credits: " << totalCredits << endl;
        for(int i=0; i<MAX_SUBJECTS;i++){
          if((semNum==7 || semNum==8) && i== 6){
            break;
          }
        }
        if(remark == true){
          outFile<<"Remarks: Pass\n";
          outFile << "Percentage: " << percentage << "%" << endl;
          outFile << "Grade: " << grade << endl;
        }else{
          outFile<<"Remarks: Fail\n";
        }
    }
};

// Main function
int main() {
  Semester S;
  S.setStudentDetails();
  S.semesterNum();
  S.setSemesterDetails();
  
   S.getSem();
   S.getStudentDetails();
   S.getMarksDetails();
   S.getSemesterDetails();
   S.analysis();

    // Save report to file
    ofstream outFile("C:\\Users\\piyus\\Desktop\\Report.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "------------------ Rajasthan Technical University ------------------\n";
        S.writeSem(outFile);
        S.writeStudentDetails(outFile);
        S.writeMarksDetails(outFile);
        S.writeSemesterDetails(outFile);
        S.writeanalysis(outFile);
        outFile << "----------------------------------------------------------------------\n";
        outFile.close();
        cout << "\nReport card saved to 'ReportCard.txt' successfully.\n";
    } else {
        cout << "\nError: Could not save the report card to a file.\n";
    }

    return 0;
}
