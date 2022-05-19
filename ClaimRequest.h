#include<iostream>
#include"RegisteredCustomer.h"

class ClaimRequest
{
  private:
    int ClaimReqNo;
    int ClaimReqID;
    char ClaimReqDate[20];
    double ClaimReqAmount;
  public:
    ClaimRequest(const int cClaimReqNo, int cClaimReqID, char cClaimReqDate[], 
    double cClaimReqAmount);
    void ViewClaimReq();
    void ConfirmClaimReq();
    ~ClaimRequest();
};
//Created by IT21228858