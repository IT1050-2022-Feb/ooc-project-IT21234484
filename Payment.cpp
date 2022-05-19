#include<iostream>
#include<string.h>
#include"Payment.h"

Payment::Payment(const int cPaymentID, char cPaymentType, double cPaymentAmount, int cCustomerID)
{
  stpcpy_s(PaymentType, cPaymentType);
  PaymentID = cPaymentID;
  PaymentAmount = cPaymentAmount;
  CustomerID = cCustomerID;
}
//Created by IT21228858