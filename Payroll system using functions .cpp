#include <iostream>
#include <string>
using namespace std;

// Function prototype
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours, double &ratePerHour);
double calculateOvertimePay(double overtimeHours, double ratePerHour);
double calculateNetSalary(double basicSalary, double overtimePay);
void displayPayslip(const string &name, double basicSalary, double overtimeHours, double ratePerHour, double overtimePay, double netSalary);

int main() {
    string employeeName;
    double basicSalary = 0.0;
    double overtimeHours = 0.0;
    double ratePerHour = 0.0;

    // 5. Main function calling all tasks 
    getEmployeeDetails(employeeName, basicSalary, overtimeHours, ratePerHour);

    double overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(employeeName, basicSalary, overtimeHours, ratePerHour, overtimePay, netSalary);

    return 0;
}

// 1. Function to prompt user and get employee details
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours, double &ratePerHour) {
    
    cout << "Enter employee name: ";
    cin >> name;
    
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    
    cout << "Enter overtime hours worked: ";
    cin >> overtimeHours;
    
    cout << "Enter rate per hour for overtime: ";
    cin >> ratePerHour;
}

// 2. Function to calculate overtime pay
double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

// 3. Function to compute net salary
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// 4. Function to print a payslip
void displayPayslip(const string &name, double basicSalary, double overtimeHours, double ratePerHour, double overtimePay, double netSalary) {
    cout << "\n========================================" << endl;
    cout << "             EMPLOYEE PAYSLIP           " << endl;
    cout << "========================================" << endl;
    cout << "Employee Name   : " << name << endl;
    cout << "Basic Salary    : KSH " << basicSalary << endl;
    cout << "----------------------------------------" << endl;
    cout << "Overtime Hours  : " << overtimeHours << endl;
    cout << "Rate Per Hour   : KSH " << ratePerHour << endl;
    cout << "Overtime Pay    : KSH " << overtimePay << endl;
    cout << "----------------------------------------" << endl;
    cout << "Net Salary      : KSH " << netSalary << endl;
    cout << "========================================" << endl;
}