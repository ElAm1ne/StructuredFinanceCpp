#include "portfolio.h"

Portfolio::Portfolio(const std::vector<Part*>& parts) : parts(parts) {}

std::vector<Part*> Portfolio::getParts() const {
    return parts;
}

void Portfolio::setParts(const std::vector<Part*>& parts) {
    this->parts = parts;
}
