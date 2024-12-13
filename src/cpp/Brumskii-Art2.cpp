#include <Brumskii-Art2/Brumskii-Art2.hpp>

namespace BrumskiiArt2{
    Art::Art(const int& random_number){
        std::cout << "Welcome to Brumskii-Art2!\n";
    }
    
    Art& Art::ArtOne(){
        #if defined(_WIN32) || defined(_WIN64)
          [[maybe_unused]] int value = std::system("cls");
        #else
          [[maybe_unused]] int value = std::system("clear");
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
        
        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
        #if defined(_WIN32) || defined(_WIN64)
          value = std::system("cls");
        #else
          value = std::system("clear");
        #endif
        
        return *this;
    }
    
    Art& Art::ArtTwo(){
        #if defined(_WIN32) || defined(_WIN64)
          [[maybe_unused]] int value = std::system("cls");
        #else
          [[maybe_unused]] int value = std::system("clear");
        #endif
        
        std::cout << "               ===                 \n";
        std::cout << "            ===   ===              \n";
        std::cout << "           ==       ==             \n";
        std::cout << "           ==       ==             \n";
        std::cout << "     = = = ==       == = = =       \n";
        std::cout << "       ==   ==     ==   ==         \n";
        std::cout << "        ==   ==   ==   ==          \n";
        std::cout << "         ==   == ==   ==           \n";
        std::cout << "          ==  =====  ==            \n";
        std::cout << "            =========              \n";
        std::cout << "               ===                 \n";
        std::cout << "               ===                 \n";
        std::cout << "               ===                 \n";
        std::cout << "               ===                 \n";
        std::cout << "               ===                 \n";
        std::cout << "               ===                 \n";
        std::cout << "             ==   ==               \n";
        std::cout << "           ==       ==             \n";
        std::cout << "          ==         ==            \n";
        std::cout << "         ==           ==           \n";
        std::cout << "        ==             ==          \n";
        std::cout << "        ==             ==          \n";
        std::cout << "      ===               ===        \n";
        
        std::this_thread::sleep_for(std::chrono::milliseconds(1200));
        #if defined(_WIN32) || defined(_WIN64)
          value = std::system("cls");
        #else
          value = std::system("clear");
        #endif
        
        return *this;
    }
    
    Art& Art::ArtThree(){
        #if defined(_WIN32) || defined(_WIN64)
          [[maybe_unused]] int value = std::system("cls");
        #else
          [[maybe_unused]] int value = std::system("clear");
        #endif
        //TODO 1: Add stuff
        
        return *this;
    }
    
    Art::~Art(){
        std::cout << "Goodbye!\n";
    }
}