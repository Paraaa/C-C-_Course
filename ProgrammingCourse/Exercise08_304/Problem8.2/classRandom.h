#include <iostream>
#include <cmath>

using namespace std;


class LCG {
    private:
        uint64_t a = 0;
        uint64_t c = 0;
        uint64_t m = 0;
        uint64_t x0 = 0; //This is the seed

    public: 
        LCG(){
            a = 1103515245ULL;
            c = 12345ULL;
            m = (uint64_t) pow(2,31);
        }
        LCG(const uint64_t a_in, const uint64_t c_in, const uint64_t m_in){
            a = a_in;
            c = c_in;
            m = m_in;
        }

        uint64_t operator()(){
            x0 = (a * x0 + c) % m;
            return x0;
        }

        void setSeed(const uint64_t seed){
            x0 = seed;
        }

        void setA(const uint64_t a_in){
            a = a_in;
        }

        void setC(const uint64_t c_in){
            c = c_in;
        }

        void setM(const uint64_t m_in){
            m = m_in;
        }


        uint64_t getSeed(){
            return x0;
        }
        uint64_t getA(){
            return a;
        }
        uint64_t getC(){
            return c;
        }
        uint64_t getM(){
            return m;
        }        
};

