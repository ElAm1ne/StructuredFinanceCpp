#pragma once

#include <string>
#include <vector>
#include "lender.h"
#include "borrower.h"
#include "facility.h"

class Deal {
public:
    Deal(const std::string& num, const std::string& agent, const std::vector<Lender*>& lenders, Borrower* borrower,
         double amount, const std::string& currency, const std::string& start_date, const std::string& end_date,
         const std::string& status, const std::vector<Facility*>& facilities);
    std::string getNum() const;
    std::string getAgent() const;
    std::vector<Lender*> getLenders() const;
    Borrower* getBorrower() const;
    double getAmount() const;
    std::string getCurrency() const;
    std::string getStartDate() const;
    std::string getEndDate() const;
    std::string getStatus() const;
    std::vector<Facility*> getFacilities() const;
    void setNum(const std::string& num);
    void setAgent(const std::string& agent);
    void setLenders(const std::vector<Lender*>& lenders);
    void setBorrower(Borrower* borrower);
    void setAmount(double amount);
    void setCurrency(const std::string& currency);
    void setStartDate(const std::string& start_date);
    void setEndDate(const std::string& end_date);
    void setStatus(const std::string& status);
    void setFacilities(const std::vector<Facility*>& facilities);

private:
    std::string num;
    std::string agent;
    std::vector<Lender*> lenders;
    Borrower* borrower;
    double amount;
    std::string currency;
    std::string start_date;
    std::string end_date;
    std::string status;
    std::vector<Facility*> facilities;
};
