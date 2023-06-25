#include <iostream>
#include "deal.h"
#include "facility.h"
#include "lender.h"
#include "borrower.h"
#include "part.h"
#include "portfolio.h"

int main() {
    Lender lender1("Bank A");
    Lender lender2("Bank B");
    Lender lender3("Bank C");

    Borrower borrower("Air France");

    Facility facility1("01-06-2023", "30-06-2023", 10000, "EUR", {&lender1, &lender2}, 0.05);
    Facility facility2("01-07-2023", "30-07-2023", 20000, "USD", {&lender2, &lender3}, 0.06);

    Deal deal("B1234", "Bank A", {&lender1, &lender2, &lender3}, &borrower, 30000, "USD", "22-05-2023", "26-06-2023", "closed", {&facility1, &facility2});

    Part part1(5000, &facility1, &borrower);
    Part part2(10000, &facility2, &borrower);

    Portfolio portfolio({&part1, &part2});

    std::cout << "Deal amount: " << deal.getAmount() << std::endl;

    part1.repay(2000);
    part2.repay(5000);

    std::cout << "Remaining amount for part1: " << part1.getAmount() << std::endl;
    std::cout << "Remaining amount for facility1: " << facility1.getAmount() << std::endl;
    std::cout << "Updated interest for facility1: " << facility1.getInterest() << std::endl;
    int a;
    std::cin >> a;
    return 0;
}
