#include <iostream>
#include<string.h>
#include"Feedback.h"

Feedback::Feedback(const int cFeedbackID, char cEmail[], int cCustomerID, char cCustomerComment[])
{
  int Feedback = cFeedbackID;
  stpcpy_s(Email, cEmail);
  int CustomerID = cCustomerID;
  stpcpy_s(CustomerComment, cCustomerComment);
}
//created by IT21231278