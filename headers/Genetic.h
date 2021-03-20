#ifndef GENETIC_H
#define GENETIC_H

#include<memory.h>
#include<tuple>
#include<vector>
#include"Loan.h"
#include"PaymentPlan.h"

class Genetic{
        int generationCount;
        std::vector<PaymentPlan> plans;
        std::tuple<PaymentPlan> select();
        void initialize();
        void crossover();
        void mutate();
        void terminate();
        void run():
}

#endif