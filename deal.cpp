#include "deal.h"

Deal::Deal(const std::string& num, const std::string& agent, const std::vector<Lender*>& lenders, Borrower* borrower,
           double amount, const std::string& currency, const std::string& start_date, const std::string& end_date,
           const std::string& status, const std::vector<Facility*>& facilities)
: num(num), agent(agent), lenders(lenders), borrower(borrower), amount(amount), currency(currency),
  start_date(start_date), end_date(end_date), status(status), facilities(facilities) {}

std::string Deal::getNum() const {
    return num;
}

std::string Deal::getAgent() const {
    return agent;
}

std::vector<Lender*> Deal::getLenders() const {
    return lenders;
}

Borrower* Deal::getBorrower() const {
    return borrower;
}

double Deal::getAmount() const {
    return amount;
}

std::string Deal::getCurrency() const {
    return currency;
}

std::string Deal::getStartDate() const {
    return start_date;
}

std::string Deal::getEndDate() const {
    return end_date;
}

std::string Deal::getStatus() const {
    return status;
}

std::vector<Facility*> Deal::getFacilities() const {
    return facilities;
}

void Deal::setNum(const std::string& num) {
    this->num = num;
}

void Deal::setAgent(const std::string& agent) {
    this->agent = agent;
}

void Deal::setLenders(const std::vector<Lender*>& lenders) {
    this->lenders = lenders;
}

void Deal::setBorrower(Borrower* borrower) {
    this->borrower = borrower;
}

void Deal::setAmount(double amount) {
    this->amount = amount;
}

void Deal::setCurrency(const std::string& currency) {
    this->currency = currency;
}

void Deal::setStartDate(const std::string& start_date) {
    this->start_date = start_date;
}

void Deal::setEndDate(const std::string& end_date) {
    this->end_date = end_date;
}

void Deal::setStatus(const std::string& status) {
    this->status = status;
}

void Deal::setFacilities(const std::vector<Facility*>& facilities) {
    this->facilities = facilities;
}
