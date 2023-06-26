#pragma once

#include <vector>
#include "part.h"
#include "borrower.h"

class Portfolio {
public:
    Portfolio(const std::vector<Part*>& parts, Borrower* borrower);
    std::vector<Part*> getParts() const;
    Borrower* getBorrower() const;
    void setParts(const std::vector<Part*>& parts);
    void addInterest(double interest);
    double getTotalInterest() const;

private:
    std::vector<Part*> parts;
    Borrower* borrower;
    double interest;
};