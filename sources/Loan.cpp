#include "../headers/Loan.h"

Loan::Loan() : Loan("", 0,0,0){}
Loan::Loan(std::string name): Loan(name, 0,0,0){}
Loan::Loan(std::string name, float princip, float intR) :Loan(name,princip,intR,0){}

Loan::Loan(std::string n, float princip, float intR, float p):
loanName(n),
principle(princip), 
interestRate(intR),
payment(p)
{}



float Loan::calcInterest(){
        return (principle - payment) * interestRate;
}

std::string Loan::toString(){
        return    "Principle $" + 
                  std::to_string(principle) + "\t" + 
                  "Interest rate: " + 
                  std::to_string(interestRate);
      
}