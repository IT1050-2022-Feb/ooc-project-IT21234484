#include <iostream>
#include<string.h>
#include"Invoice.h"

Invoice::Invoice(const int cInvoiceID, int cInPackageID, char cInvoiceDate[], double 
cInvoiceAmount, int cPaymentID, int cCustomerID, int cStaffMemID)
{
  stpcpy_s(InvoiceDate, cInvoiceDate);
  InvoiceID = cInvoiceID;
  InPackageID = cInPackageID;
  InvoiceAmount = cInvoiceAmount;
  PaymentID = cPaymentID;
  CustomerID = cCustomerID;
  StaffMemID = cStaffMemID;
}
//created by IT21233494