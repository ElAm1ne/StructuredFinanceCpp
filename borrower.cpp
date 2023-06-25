#include "borrower.h"

Borrower::Borrower(const std::string& name) : name(name) {}

std::string Borrower::getName() const {
    return name;
}

void Borrower::setName(const std::string& name) {
    this->name = name;
}
