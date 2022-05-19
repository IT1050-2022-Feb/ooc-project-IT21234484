#include<iostream>
#include<string.h>
#include"ClaimRequest.h"

ClaimRequest::ClaimRequest(const int cClaimReqNo, int cClaimReqID, char cClaimReqDate[], double cClaimReqAmount)
{
  stpcpy_s(ClaimReqDate, cClaimReqDate);
  ClaimReqNo = cClaimReqNo;
  ClaimReqID = cClaimReqID;
  ClaimReqAmount = cClaimReqAmount;
}
//Created by IT21228858