#include <iostream>

class InsurancePackage
{
  private:
    int InPackageID;
    char InPackageName[50];
    char InPackageDescription[100];
  public:
    InsurancePackage(const int InPackageID, char InPackageName[], char 
    InPackageDescription[]);
    void AddPackage();
    void UpdatePackge();
    void ViewPackage();
    ~InsurancePackage();
};
//created by it21230356
