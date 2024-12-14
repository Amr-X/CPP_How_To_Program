#include <iostream>

class MotorVehicle {
private:
  std::string make{};
  std::string FuelType{};
  int yearOfManufacture{};
  std::string color{};
  int engineCapacity{};

public:
  MotorVehicle(std::string makeValue, std::string fuelTypeValue, int yomValue,
               std::string colorValue, int engineCapacityValue)
      : make{makeValue}, FuelType{fuelTypeValue}, yearOfManufacture{yomValue},
        color{colorValue}, engineCapacity{engineCapacityValue} {}
  std::string getMake() const { return make; }
  void setMake(std::string makeValue) { make = makeValue; }
  std::string getFuelType() const { return FuelType; }
  void setFuelType(std::string fuelTypeValue) { FuelType = fuelTypeValue; }
  int getYOM() const { return yearOfManufacture; }
  void setYOM(int YOMValue) { yearOfManufacture = YOMValue; }

  std::string getColor() const { return color; }
  void setColor(const std::string &colorValue) { color = colorValue; }

  int getEngineCapacity() { return engineCapacity; }
  void setEngineCapacity(int engineCapacityValue) {
    engineCapacity = engineCapacityValue;
  }
  void displayCarDetails() const {
    std::cout << "Made By: " << make << std::endl;
    std::cout << "Fuel Type: " << FuelType << std::endl;
    std::cout << "Year Of Manufacture: " << yearOfManufacture << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Engine Capacity: " << engineCapacity << std::endl;
  }
};
