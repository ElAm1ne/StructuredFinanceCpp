#pragma once

#include <vector>
#include "part.h"

class Portfolio {
public:
    Portfolio(const std::vector<Part*>& parts);
    std::vector<Part*> getParts() const;
    void setParts(const std::vector<Part*>& parts);

private:
    std::vector<Part*> parts;
};
