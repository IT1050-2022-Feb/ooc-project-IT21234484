#include <iostream>
#include<string.h>
#include"Hospital.h"

Hospital::Hospital(const int cHospitalID, char cHospitalName[], int cCustomerID)
{
  stpcpy_s(HospitalName, cHospitalName);
  HospitalID = cHospitalID;
  CustomerID = cCustomerID;
}
//created by IT21233494