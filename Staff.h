#include <iostream>

class Staff
{
  private:
    int StaffMemID;
    char StaffMemNIC[20];
    char StaffMemName[50];
    char StaffMemPosition[20];
    char StaffMemAddress[50];
    int StaffMemPhone;
    char StaffMemEmail[20];

  public:
    Staff(const int cStaffMemID, char cStaffMemNIC[], char   
    cStaffMemName[], char cStaffMemPosition[], char 
    cStaffMemAddress[], int cStaffMemPhone, char cStaffMemEmail[]);
    void UpdateCusProfile();
    void CheckPayDetails();
    void ViewClaimStatus();
    void SendNotifiction();
    ~Staff();
 
};
//created by IT21231278