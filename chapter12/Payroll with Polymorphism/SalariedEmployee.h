// SalariedEmployee class derived from Employee.
#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h"
#include <string>

class SalariedEmployee : public Employee {
public:
  SalariedEmployee(const std::string &, const std::string &,
                   const std::string &, double = 0.0);
  virtual ~SalariedEmployee() = default;

  void setWeeklySalary(double);
  double getWeeklySalary() const;

  // keyword virtual signals intent to override
  virtual double earnings() const override;
  virtual std::string toString() const override;

private:
  double weeklySalary; // salary per week
};

#endif