#include <iostream>

class UnRegisteredCustomer
{
protected:
  char CustomerNIC[10];
  char CustomerName[50];
  char CustomerDateOfBirth[10];
  int CustomerPhoneNumber;
  char CustomerAddress[50];
  char CustomerEmail[20];
  int CustomerAge;

public:

  UnRegisteredCustomer::UnRegisteredCustomer(cont char       
  cCustomerName[]);
  void UnRegisteredCustomer::setDetails(char cCustomerNIC, char 
  CustomerDateOfBirth, int CustomerPhoneNumber, char       
  CustomerAddress, char CustomerEmail, int CustomerAge);
  int UnRegisteredCustomer::getDetails();
  void UnRegisteredCustomer::Register();
  void UnRegisteredCustomer::Validation();
  void UnRegisteredCustomer::CancleRegister();
  UnRegisteredCustomer::~UnRegisteredCustomer();

};
//Created by IT21234484