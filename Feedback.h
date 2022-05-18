#include <iostream>
class Feedback
{
  private:
    int FeedbackID;
    char Email[20];
    int CustomerID;
    char CustomerComment[100];
  public:
    Feedback(const int cFeedbackID, char cEmail[], int     
    cCustomerID, char cCustomerComment[]);
    void ViewFeedback();
    void AddFeedbck();
    ~Feedback();
};
//created by IT21231278