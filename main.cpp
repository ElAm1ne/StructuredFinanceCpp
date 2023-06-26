#include "deal.h"
#include "facility.h"
#include "lender.h"
#include "borrower.h"
#include "part.h"
#include "portfolio.h"

#include <iostream>
#include <vector>

void printDealStatus(const std::vector<Deal>& deals) {
    for (const Deal& deal : deals) {
        std::cout << "Deal num: " << deal.getNum() << ", Borrower: " << deal.getBorrower()->getName() << ", Status: " << deal.getStatus() << "\n";
    }
}

void printPortfolioStatus(const std::vector<Portfolio>& portfolios) {
    for (const Portfolio& portfolio : portfolios) {
        std::cout << "Borrower: " << portfolio.getBorrower()->getName() << ", Total interest: " << portfolio.getTotalInterest() << "\n";
    }
}

int main() {
    // Create lenders
    std::vector<Lender*> lenders;
    for(int i = 1; i <= 5; i++){
        lenders.push_back(new Lender("Lender" + std::to_string(i)));
    }

    // Create borrowers and their portfolios
    std::vector<Borrower*> borrowers;
    std::vector<Portfolio> portfolios;
    for(int i = 1; i <= 10; i++){
        borrowers.push_back(new Borrower("Borrower" + std::to_string(i)));
        portfolios.push_back(Portfolio(std::vector<Part*>{}, borrowers.back()));
    }

    // Create facilities and parts linked to borrowers
    std::vector<Facility*> facilities;
    std::vector<Part*> parts;
    for(int i = 1; i <= 10; i++){
        facilities.push_back(new Facility("01-01-2023", "31-12-2023", 10000 * i, "USD", lenders, 0.05));
        parts.push_back(new Part(10000 * i, facilities.back(), borrowers[i-1]));
    }

    // Create deals
    std::vector<Deal> deals;
    for(int i = 1; i <= 10; i++){
        deals.push_back(Deal(std::to_string(i), "Agent", lenders, borrowers[i-1], 10000 * i, "USD", "01-01-2023", "31-12-2023", "Active", facilities));
    }

    // Each part is assigned to a portfolio
    for(int i = 0; i < 10; i++){
        portfolios[i].setParts(std::vector<Part*>{parts[i]});
    }

    // Print initial status of the deals
    printDealStatus(deals);

    // Perform repayments
    for(int i = 0; i < 5; i++){
        parts[i]->repay(5000, portfolios);  
        deals[i].setStatus("Terminated");   
    }

    // Print updated status of the deals
    printDealStatus(deals);

    // Print updated status of the portfolios (interests paid)
    printPortfolioStatus(portfolios);

    // Perform more repayments
    for(int i = 5; i < 10; i++){
        parts[i]->repay(10000, portfolios);  
        deals[i].setStatus("Terminated");    
    }

    // Print final status of the deals
    printDealStatus(deals);

    // Print final status of the portfolios (interests paid)
    printPortfolioStatus(portfolios);

    // Delete dynamically allocated lenders, borrowers, facilities and parts
    for(auto& lender : lenders) delete lender;
    for(auto& borrower : borrowers) delete borrower;
    for(auto& facility : facilities) delete facility;
    for(auto& part : parts) delete part;

    return 0;
}
