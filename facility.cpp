#include "facility.h"

Facility::Facility(const std::string& start_date, const std::string& end_date, double amount,
                   const std::string& currency, const std::vector<Lender*>& lenders, double interestRate)
: start_date(start_date), end_date(end_date), amount(amount), currency(currency), lenders(lenders),
  interestRate(interestRate), interest(amount * interestRate) {}


double Facility::getInterestRate() const {
    return interestRate;
}

double Facility::getInterest() const {
    return interest;
}

void Facility::setInterestRate(double interestRate) {
    this->interestRate = interestRate;
}

void Facility::setInterest(double interest) {
    this->interest = interest;
}

double Facility::getAmount() const {
    return this->amount;
}

void Facility::setAmount(double amount) {
    this->amount = amount;
}
