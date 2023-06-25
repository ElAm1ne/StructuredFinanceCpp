#pragma once

#include "facility.h"
#include "borrower.h"

class Part {
public:
    Part(double amount, Facility* facility, Borrower* borrower);
    double getAmount() const;
    Facility* getFacility() const;
    Borrower* getBorrower() const;
    void setAmount(double amount);
    void setFacility(Facility* facility);
    void setBorrower(Borrower* borrower);
    void repay(double amount);

private:
    double amount;
    Facility* facility;
    Borrower* borrower;
};
