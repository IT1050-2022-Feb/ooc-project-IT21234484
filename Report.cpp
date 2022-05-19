#include <iostream>
#include<string.h>
#include"Report.h"

Report::Report(const int cReportID, char cReportName[], char cReportDate[], int 
cStaffMemID)
{
  stpcpy_s(ReportName, cReportName);
  stpcpy_s(ReportDate, cReportDate);
  ReportI = DcReportID;
  StaffMemID = cStaffMemID;
}
//created by IT21233494