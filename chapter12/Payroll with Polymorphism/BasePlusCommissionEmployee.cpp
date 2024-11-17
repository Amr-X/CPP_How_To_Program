// BasePlusCommissionEmployee member-function definitions.
#include "BasePlusCommissionEmployee.h"
#include <iomanip>
#include <sstream>
#include <stdexcept>

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn, double sales,
    double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate) {
  setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
  if (salary < 0.0) {
    throw invalid_argument("Salary must be >= 0.0");
  }

  baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const { return baseSalary; }

double BasePlusCommissionEmployee::earnings() const {
  return getBaseSalary() + CommissionEmployee::earnings();
}

string BasePlusCommissionEmployee::toString() const {
  ostringstream output;
  output << fixed << setprecision(2);
  //! Chain for Calling
  //! Functions(CommissionEmployee.toString()-->Employee.toString())
  output << "base-salaried " << CommissionEmployee::toString()
         << "; base salary: " << getBaseSalary();
  return output.str();
}
