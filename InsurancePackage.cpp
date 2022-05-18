#include <iostream>
#include<string.h>
#include" InsurancePackage.h"

InsurancePackage::InsurancePackage(const int InPackageID, char InPackageName[], 
char InPackageDescription[])
{
  stpcpy_s(InPackageName, cInPackgeName);
  stpcpy_s(InPackageDescription, cInPackgeDescription);
  InPackageID = cInPackgeID;
}