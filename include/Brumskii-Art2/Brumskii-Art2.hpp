#ifndef BRUMSKII_ART2_HPP
#define BRUMSKII_ART2_HPP

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

namespace BrumskiiArt2{
    class Art{
    public:
        Art(const int& random_number);
        Art& ArtOne();
        Art& ArtTwo();
        Art& ArtThree();
        ~Art();
    };
}

#endif //BRUMSKII_ART2_HPP