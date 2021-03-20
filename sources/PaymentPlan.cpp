#include "../headers/PaymentPlan.h"

float PaymentPlan::getTotalInterestRate(){
        float total = 0;
        for(std::vector<Loan*>::iterator it = loans.begin(); it != loans.end(); ++it)
        {
                float interest = (*it)->calcInterest();
                total += interest;
        }
        return total;
}

float PaymentPlan::getFitness(){
        
        std::vector<float> differences;
        for(int i =0; i < loans.size(); i++){
                float oldInt = loans[i]->calcInterest();
                loans[i]->payment = distributedAmount[i];
                float newInt = loans[i]->calcInterest();
                differences.push_back(oldInt-newInt);
        } 
        
        float fitness = 0;
        std::for_each(differences.begin(), differences.end(), [&](float n){
                fitness += n;
        });
        return fitness;
}