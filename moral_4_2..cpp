#include <iostream>
#include <string>

using namespace std;

int main() {
    // Inputs
    string payrollPeriod, employeeID, employeeName;
    double monthlySalary, latesMinutes;
    
    cout << "Enter Payroll Period: ";
    cin >> payrollPeriod;
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cout << "Enter Monthly Salary: ";
    cin >> monthlySalary;
    cout << "Enter Lates and Absences (minutes): ";
    cin >> latesMinutes;
    
    // Calculations
    double hoursLate = latesMinutes / 60.0;
    double hourlyRate = (monthlySalary / 30.0) / 8.0;
    double latesDeduction = hoursLate * hourlyRate;
    
    double philhealth = 1000.00;
    double pagIbig = 800.00;
    double sss = 1200.00;
    double tax = monthlySalary * 0.12;
    
    double totalEarnings = monthlySalary;
    double totalDeductions = latesDeduction + philhealth + pagIbig + sss + tax;
    double netPay = totalEarnings - totalDeductions;
    
    // Display Output
    cout << "\n\nFEU - Institute of Technology\n\n";
    cout << "Employee ID: " << employeeID << "      Payroll Period: " << payrollPeriod << "\n";
    cout << "Employee Name: " << employeeName << "\n\n";
    
    cout << "INCOME                        DEDUCTIONS\n";
    cout << "Monthly Salary Php" << monthlySalary << "    Lates and absences _(" << latesDeduction << ")\n";
    cout << "                              Philhealth         _(" << philhealth << ")\n";
    cout << "                              Pag-ibig           _(" << pagIbig << ")\n";
    cout << "                              SSS                _(" << sss << ")\n";
    cout << "                              Withholding tax    _(" << tax << ")\n";
    
    cout << "Total Earnings: Php" << totalEarnings << "\n";
    cout << "Total Deductions: Php" << totalDeductions << "\n";
    cout << "Net Pay: " << netPay << "\n";
    
    return 0;
}