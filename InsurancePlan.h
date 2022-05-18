#include <iostream>
#include" InsurancePackage.h"

class InsurancePlan
{
  private:
    int InPlanID;
    int CustomerID;
    int InPackageID;
  public:
     InsurancePlan(const int InPlanID, int CustomerID, int InPackageID);
     void ViewPlan();
     void RenewPlan();
     ~InsurancePlan();
};
//created by it21230356