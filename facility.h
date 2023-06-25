#pragma once

#include <string>
#include <vector>


#include "lender.h"

class Facility {
public:
    Facility(const std::string& start_date, const std::string& end_date, double amount,
             const std::string& currency, const std::vector<Lender*>& lenders, double interestRate);
    std::string getStartDate() const;
    std::string getEndDate() const;
    double getAmount() const;
    std::string getCurrency() const;
    std::vector<Lender*> getLenders() const;
    double getInterestRate() const;
    double getInterest() const;
    void setStartDate(const std::string& start_date);
    void setEndDate(const std::string& end_date);
    void setAmount(double amount);
    void setCurrency(const std::string& currency);
    void setLenders(const std::vector<Lender*>& lenders);
    void setInterestRate(double interestRate);
    void setInterest(double interest);

private:
    std::string start_date;
    std::string end_date;
    double amount;
    std::string currency;
    std::vector<Lender*> lenders;
    double interestRate;
    double interest;
};
