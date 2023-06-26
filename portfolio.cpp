#include "portfolio.h"

Portfolio::Portfolio(const std::vector<Part*>& parts, Borrower* borrower) : parts(parts), borrower(borrower), interest(0.0) {}

std::vector<Part*> Portfolio::getParts() const {
    return parts;
}

Borrower* Portfolio::getBorrower() const {
    return borrower;
}

void Portfolio::setParts(const std::vector<Part*>& parts) {
    this->parts = parts;
}

void Portfolio::addInterest(double interest) {
    this->interest += interest;
}

double Portfolio::getTotalInterest() const {
    return this->interest;
}