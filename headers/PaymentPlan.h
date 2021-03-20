#ifndef PAYMENT_PLAN_H
#define PAYMENT_PLAN_H

#include <vector>
#include "Loan.h"

class PaymentPlan{
        public:
                std::vector<Loan*> loans;
                std::vector<float> distributedAmount;
                float getTotalInterestRate();
                float getFitness();

};
#endif