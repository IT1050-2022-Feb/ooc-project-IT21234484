#include <iostream>
#include<string.h>
#include" UnRegisteredCustomer..h"

UnRegisteredCustomer::UnRegisteredCustomer(const char cCustomerName[])
{
stpcpy_s(CustomerName, cCustomerName);
}