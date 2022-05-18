#include <iostream>
#include<string.h>
#include"Staff.h"

Staff::Staff(const int cStaffMemID, char cStaffMemNIC[], char cStaffMemName[], char cStaffMemPosition[], char cStaffMemAddress[], int cStaffMemPhone, char cStaffMemEmail[])
{
  stpcpy_s(StaffMemNIC, cStaffMemNIC);
  stpcpy_s(StaffMemName, cStaffMemName);
  stpcpy_s(StaffMemPosition, cStaffMemPosition);
  stpcpy_s(StaffMemAddress, cStaffMemAddress);
  stpcpy_s(StaffMemEmai, cStaffMemEmai);
  StaffMemID = cStaffMemID;
  StaffMemPhone = cStaffMemPhone;

}
//created by IT21231278