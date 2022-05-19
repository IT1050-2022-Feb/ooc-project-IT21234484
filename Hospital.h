#include <iostream>
class Hospital
{
  private:
    int HospitalID;
    char HospitalName[50];
    int CustomerID;
  public:
    Hospital(const int cHospitalID, char cHospitalName[], int cCustomerID);
    void AddHospital();
    void ViewHospital();
    ~Hospital();
};
//created by IT21233494