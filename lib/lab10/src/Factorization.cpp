//
// Created by Jackson Truong on 4/20/18.
//
#include <vector>
#include "Factorization.h"
namespace lab10{

    std::vector<long> Factorization::get_prime_factors(long input){
        std::vector<long> prime;
        while(input%2 == 0){    //divides by two until result is an odd number
            prime.push_back(2); //inserts all factored 2s into vector
            input = input/2;
        }

        //need to check for all other multiples of prime numbers
        for(long i=3; i<=input; i+=2){    //checks every number until the input for divisibility
            while(input%i ==0){         //if number is divisible
                prime.push_back(i);     //push divisible number into vector
                input = input/i;        //divides input by divisible number
            }
        }
        return prime;
    }

    void Factorization::print(std::vector<long> input){

        for(int i=0; i<input.size()-1; i++){
            std::cout<< input.at(i);
            std::cout<< " ";
        }
        std::cout<< input.at(input.size()-1);
        std::cout << std::endl;
    }
}
