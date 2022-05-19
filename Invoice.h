#include <iostream>
#include"RegisteredCustomer.h"
#include"InsurancePlan.h"

class Invoice
{
  private:
    int InvoiceID;
    int InPackageID;
    char InvoiceDate[20];
    double InvoiceAmount;
    int PaymentID;
    int CustomerID;
    int StaffMemID;
  public:
    Invoice(const int cInvoiceID, int cInPackageID, char cInvoiceDate[], double 
    cInvoiceAmount, int cPaymentID, int cCustomerID, int cStaffMemID);
    void GenerateInvoice();
    void ViewInvoice();
    ~Invoice();
};
//created by IT21233494