// CommissionEmployee class derived from Employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h"
#include <string>

class CommissionEmployee : public Employee {
public:
  CommissionEmployee(const std::string &, const std::string &,
                     const std::string &, double = 0.0, double = 0.0);
  virtual ~CommissionEmployee() = default;

  void setCommissionRate(double);
  double getCommissionRate() const;

  void setGrossSales(double);
  double getGrossSales() const;

  virtual double earnings() const override;
  virtual std::string toString() const override;

private:
  double grossSales;
  double commissionRate; // It's Own Data Member
};

#endif
