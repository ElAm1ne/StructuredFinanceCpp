#include "lender.h"

Lender::Lender(const std::string& name) : name(name) {}

std::string Lender::getName() const {
    return name;
}

void Lender::setName(const std::string& name) {
    this->name = name;
}
