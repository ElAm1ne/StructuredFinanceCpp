#include "part.h"

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
    this->amount -= amount;
    facility->setAmount(facility->getAmount() - amount);
    facility->setInterest(facility->getAmount() * facility->getInterestRate());
}
