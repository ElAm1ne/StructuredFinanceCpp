#pragma once

#include <string>

class Borrower {
public:
    Borrower(const std::string& name);
    std::string getName() const;
    void setName(const std::string& name);

private:
    std::string name;
};
