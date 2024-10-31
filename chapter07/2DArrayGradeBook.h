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
    static const size_t testSize{3};
    

    GradeBook(const std::string &name,const std::array<std::array<int,testSize>,studentsSize> &gradesArray)
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
    void displayMessage (){//Can't use const to not modify datamembers? what?
        std::cout<<"Welcome to the grade book for\n"<<courseName<<"!"<<std::endl;
    }

    void processGrade (){
        outputGrades(); //alterd heavily  

        std::cout<<"\nLowest grade in the grade book is "<<getLowest();
        std::cout<<"\nHighest grade in the grade book is "<<getHighest()<<std::endl;

        outputBarChart(); //not that much
    }

    //Now all Methods in ProcessGrade
    void outputGrades (){
        std::cout << "\nThe grades are:\n\n"<<std::setw(10)<<"";
        for (size_t test{0};test<testSize;++test){
                std::cout<<std::setw(6)<<"Test"<<std::setw(2)<<test+1;
            }
        std::cout << std::endl;    
        for (size_t student{0};student<studentsSize;++student){
            std::cout << "Student"<<std::setw(3)<<(student+1);
            for (size_t test{0};test<testSize;++test){
                std::cout <<std::setw(8)<<grades[student][test];
            }
            std::cout <<std::endl;
        }
    }

    void outputBarChart() const {
        //Same Logic Kinda
        std::cout <<"\nOverall grade distribution:\n";
        const size_t freqsSize{11};
        std::array<int,freqsSize> freqs{};
        for(auto const &row:grades){
            for(auto const &grade:row){
                ++freqs[(grade/10)];
            }

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



    int getLowest()const{
        int lowGrade{100}; //asumming the highest value that could ever exist is the lowest
        for (auto const &row:grades){

            for (auto const &grade:row){ //& for better performance Read-Only

                if (grade<lowGrade){
                    lowGrade = grade;
                }
            }
        }
        return lowGrade;
    }

    int getHighest()const{
        int highGrade{0}; //asumming the highest value that could ever exist is the lowest
        for (auto const &row:grades){

            for(auto const &grade:row){

                if (grade>highGrade){
                    highGrade = grade;
                }
            }

        }
        return highGrade;
    }

    private:
        std::string courseName;
        std::array<std::array<int,testSize>,studentsSize> grades;



};