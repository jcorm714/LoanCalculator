#ifndef LOAN_H
#define LOAN_H

#include<string>
class Loan{
        public:
                float principle;
                float interestRate;
                float payment;
                std::string loanName;
                std::string toString();
                float calcInterest();
                Loan();
                Loan(std::string);
                Loan(std::string, float,float);
                Loan(std::string, float,float,float);

};
#endif