#include <string>

// As we said no USING directive here OK?? yes Ok
class Student {
    public:
    Student(std::string studentName,int studentAverage)
    :name{studentName},average{studentAverage}
    {}
    //setter and getter for Name
    void setName(std::string studentName){ //studentName here is local to this member function
        name = studentName;
    }
    std::string getName (){
        return name;
    }
    //setter and getter for Average
    void setAverage(int studentAverage){ //studentAverage here is local to this member function
        average = studentAverage;
    }
    int getAverage (){
        return average;
    }
    // The Equivalent letter
    std::string getAverageLetter(){
        std::string letter;
        if(average>=90){
            letter="A";
        }
        else if(average>=80){
            letter="B";
        }
        else if(average>=70){
            letter="C";
        }
        else if(average>=60){
            letter="D";
        }
        else {
            letter="F";
        }
        return letter;
    }

    private:
    std::string name;
    int average{0};
};
