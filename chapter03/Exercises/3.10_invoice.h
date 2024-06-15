#include <iostream>
#include <string>
// werid warning
class Invoice {
    public:
    Invoice(std::string numbervalue,std::string descriptionvalue,int quantityvalue,int pricevalue)
        :number{numbervalue},description{descriptionvalue},quantity{quantityvalue},price{pricevalue}
    {
    }
        std::string getNumber(){
        return number;
       }
       std::string getDescription(){
        return description;
       }
       void setDescription(std::string descriptionvalue){
        description=descriptionvalue;
       }
       void  setNumber(std::string numbervalue){
         number = numbervalue;
       }
       int getQuantity(){
        return quantity;
       }
       void setQuantity(int quantityvalue){
        quantity=quantityvalue;
       }
       int getPrice(){
        return price;
       }
       void setPrice(int pricevalue){
        price=pricevalue;
       }
       double getVat(){
        return vat;
       }
       void setVat(double vatvalue){
        if (vatvalue>=0){
        vat= vatvalue;
        }
        
       }
       double getDiscount(){
        return discount;
       }
       void setDiscount(double discountvalue){
        if (discountvalue>=0){
        discount= discountvalue;
        }
        
       }

       ////////////////
       //method calculate final price
       double cal(){
        return  finalPrice = (price * quantity) + vat - discount;
       }
    

    private:
        std::string number;
        std::string description;
        int quantity{0};
        int price{0};
        double vat{0.2};
        double discount{0};
        double finalPrice{0};


};