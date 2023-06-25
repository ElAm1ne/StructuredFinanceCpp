#include "part.h"
#include <cmath>

Part::Part(double amount, Facility* facility, Borrower* borrower)
: amount(amount), facility(facility), borrower(borrower) {}

double Part::getAmount() const {
    return amount;
}

Facility* Part::getFacility() const {
    return facility;
}

Borrower* Part::getBorrower() const {
    return borrower;
}

void Part::setAmount(double amount) {
    this->amount = amount;
}

void Part::setFacility(Facility* facility) {
    this->facility = facility;
}

void Part::setBorrower(Borrower* borrower) {
    this->borrower = borrower;
}

void Part::repay(double amount) {
    this->amount = std::max(this->amount - amount, 0.0);
    facility->setAmount(std::max(facility->getAmount() - amount,0.0));
    facility->setInterest(facility->getAmount() * facility->getInterestRate());
}
