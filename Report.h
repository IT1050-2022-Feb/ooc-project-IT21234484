#include <iostream>
#include"RegisteredCustomer.h"
#include"InsurancePlan.h"

class Report
{
  private:
    int ReportID;
    char ReportName[50];
    char ReportDate[20];
    int StaffMemID;
  public:
    Report(const int cReportID, char cReportName[], char cReportDate[], int         
    cStaffMemID);
    void GenerateReport();
    void ViewReport();
    ~Report();
};
//created by IT21233494