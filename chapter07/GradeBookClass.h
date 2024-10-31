#include<iostream>
#include<iomanip>
#include<string>
#include<array>

//static for Sharing same vaiable with every object
//fisrt const for const return type to only-read it
//second const for method don't change data members

class GradeBook {
    public:
    static const size_t studentsSize{10};
    //why static?

    GradeBook(const std::string &name,const std::array<int,studentsSize> &gradesArray)
    :courseName{name},grades{gradesArray}
    {}

    void setCourseName(std::string name){
        courseName = name;
    }

    const std::string &getCourseName() const { // Use first const for the return variable
        return courseName; //Can be A Problem Where Expose Data Member
                           //Can be Altered or Changed from Caller Because Returning it by 
                           //Reference *(Better Preformance Not Copying)
    }
    void displayMessage(){
        std::cout<<"Welcome to the grade book for\n"<<courseName<<"!"<<std::endl;
    }

    void processGrade(){
        outputGrades();
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<"\nClass average is "<<getAverage();

        std::cout<<"\nClass minimum is "<<getMinimum();
        std::cout<<"\nClass maximum is "<<getMaximum()<<std::endl;

        outputBarChart();
    }

    //Now all Methods in ProcessGrade
    void outputGrades(){
        std::cout << "\nThe grades are:\n"<<std::endl;
        for (size_t student{0};student<studentsSize;++student){
            std::cout << "Student"<<std::setw(3)<<(student+1)<<":"<<std::setw(4)<<grades[student]<<std::endl;
        }
    }

    void outputBarChart(){
        //Same Logic Kinda
        std::cout <<"\nGrade distribution:\n";
        const size_t freqsSize{11};
        std::array<int,freqsSize> freqs{};
        for(int grade:grades){
            ++freqs[(grade/10)-1];
        }
        for (size_t i{0};i<=10;++i){
            if(i==0){
                std::cout <<"  0-9: ";
            }
            else if(i==10){
                std::cout <<"  100: ";
            }
            else{
                std::cout<<i*10<<"-"<<(i*10)+9<<": ";
            }

            
            for (int j{1};j<=freqs[i];++j){
            std::cout <<"*";
            }
            
            

            std::cout <<std::endl;
        }
    }

    double getAverage(){
        int total{0};
        for (int grade:grades){
            total+=grade;
        }
        return static_cast<double>(total) / grades.size();
    }

    int getMinimum(){
        int lowGrade{100}; //asumming the highest value that could ever exist is the lowest
        for (int grade:grades){
            if (grade<lowGrade){
                lowGrade = grade;
            }
        }
        return lowGrade;
    }

    int getMaximum(){
        int highGrade{0}; //asumming the highest value that could ever exist is the lowest
        for (int grade:grades){
            if (grade>highGrade){
                highGrade = grade;
            }
        }
        return highGrade;
    }

    private:
        std::string courseName;
        std::array<int,studentsSize> grades;



};