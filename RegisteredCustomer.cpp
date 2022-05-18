#include <iostream>
#include<string.h>
#include"RegisteredCustomer.h"

RegisteredCustomer::RegisteredCustomer(const char cCustomerName[], int cCustomerID):UnRegisteredCustomer(cCustomerName)
{
stpcpy_s(CustomerName, cCustomerName);
CustomerID = cCustomerID;
}
