#include<iostream> 
#include<string>
#include<cmath>

class DollarAmount {
    public:
    // constructor nothing new here just more range for int
    explicit DollarAmount (int64_t value):amount{value}{}

    void add(DollarAmount right){       // member function get that object and called it right and 
        amount += right.amount;}   // have access to everything it have including its amount

    void subtract(DollarAmount right){  // Object as Argument 
        amount -= right.amount;}

    void addInterest(int rate , int divisor) // rate = 5,divisor=100 means 5%
    {// first what Interest To add?
        DollarAmount interest{(amount * rate + divisor/2)/divisor}; // i think we have problem here 
        // then adds it
        add(interest); // cant have interest as argument it should be a class type

    }
    std::string toString(){
        std::string dollars = std::to_string(amount / 100); //dollars value in String
        std::string pennies = std::to_string(amount % 100); //Pennies value in String
        return dollars + "."+ (pennies.size()==1?"0":"") +pennies; //Puting it all togther

    }


    private:
    int64_t amount{0}; // this pennies not dollars( should be int64_t as well)
};