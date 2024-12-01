#include <Brumskii-Art2/Brumskii-Art2.hpp>

namespace BrumskiiArt2{
    Art::Art(const int& random_number){
        std::cout << "Welcome to Brumskii-Art2!\n";
    }
    
    Art& Art::ArtOne(){
        #if defined(_WIN32) || defined(_WIN64)
          std::system("cls");
        #else
          std::system("clear");
        #endif
        
        std::cout << "               ===                 \n";
        std::cout << "            ===   ===              \n";
        std::cout << "           ==       ==             \n";
        std::cout << "           ==       ==             \n";
        std::cout << "           ==       ==             \n";
        std::cout << "            ==     ==              \n";
        std::cout << "             ==   ==               \n";
        std::cout << "              == ==                \n";
        std::cout << "              =====                \n";
        std::cout << "              =====                \n";
        std::cout << "            == === ==              \n";
        std::cout << "           ==  ===  ==             \n";
        std::cout << "          ==   ===   ==            \n";
        std::cout << "         ==    ===    ==           \n";
        std::cout << "        = = =  ===   = = =         \n";
        std::cout << "               ===                 \n";
        std::cout << "             ==   ==               \n";
        std::cout << "            ==     ==              \n";
        std::cout << "            ==     ==              \n";
        std::cout << "            ==     ==              \n";
        std::cout << "            ==     ==              \n";
        std::cout << "            ==     ==              \n";
        std::cout << "           ===     ===             \n";
        
        std::this_thread::sleep_for(std::chrono::milliseconds(4000));
        #if defined(_WIN32) || defined(_WIN64)
          std::system("cls");
        #else
          std::system("clear");
        #endif
        
        return *this;
    }
    
    Art::~Art(){
        std::cout << "Goodbye!\n";
    }
}