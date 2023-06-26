#pragma once

#include "facility.h"
#include "borrower.h"

// Forward declaration
class Portfolio;

class Part {
public:
    Part(double amount, Facility* facility, Borrower* borrower);
    double getAmount() const;
    Facility* getFacility() const;
    Borrower* getBorrower() const;
    void setAmount(double amount);
    void setFacility(Facility* facility);
    void setBorrower(Borrower* borrower);
    void repay(double amount, std::vector<Portfolio>& portfolios);

private:
    double amount;
    Facility* facility;
    Borrower* borrower;
};
