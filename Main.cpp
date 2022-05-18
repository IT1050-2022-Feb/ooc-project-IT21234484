#include <iostream>
#include<string.h>
#include"UnRegisteredCustomer.h"
#include"RegisteredCustomer.h"
#include"InsurancePackage.h"
#include"InsurancePlan.h"
#include"Feedback.h"
#include"Payment.h"
#include"Staff.h"
#include"ClaimRequest.h"
#include"Invoice.h"
#include"Report.h"
#include"Hospital.h"
using namespace std;

int main()
{
  UnRegisteredCustomer*UnRegCustomer;
  UnRegCustomer = new UnRegisteredCustomer();
  UnRegCustomer->setDetails();

  RegisteredCustomer*RegCustomer;
  RegCustomer = new RegisteredCustomer();
  RegCustomer->DisplayCustomerDetails();
  RegCustomer->UpdateCustomerDetails();

  InsurancePackge*InPc;
  InPac = InsurancePackge();
  InPac->ViewPackage();

  InsurancePlan*Inpla;
  InPla = new InsurancePlan();
  InPla->ViewPlan();

  Feedback*Feed;
  Feed = new Feedbck();
  Feed->ViewFeedback();

  Payment*Pay;
  Pay = new Payment();
  Pay->AddPayDetails();
  Pay->ViewPayDetails();

  Staff*Stf;
  Stf = new Staff();
  Stf->CheckPayDetails();
  Stf->UpdateCusProfile();
  Stf->ViewClaimStatus();

  ClaimRequest*Clm;
  Clm = new ClaimRequest();
  Clm->ViewClaimReq();
 Clm->ConfirmClaimReq();

  Invoice*Inv;
  Inv = new Invoice();
  Inv->GenerateInvoice();
  Inv->ViewInvoice();

  Report*Rp;
  Rp = new Report();
  Rp->GenerateReport();
  Rp->ViewReport();

  Hospital*Hp;
  Hp = new Hospital();
  Hp->AddHospital();
  Hp->ViewHospital();

  delete UnRegCustomer, RegCustomer, InPc, Inpla, Feed, Pay, Stf,   Clm, Inv, Rp, Hp;

  return 0;
}