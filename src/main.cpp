#include <Brumskii-Art2/Brumskii-Art2.hpp>
#include <memory>

void Brumski(){
    auto brumskiArt = std::make_unique<BrumskiiArt2::Art>(1);
    brumskiArt->ArtOne().ArtTwo();
    brumskiArt->ArtOne().ArtTwo();
    brumskiArt->ArtOne().ArtTwo();
    brumskiArt->ArtOne().ArtTwo();
    brumskiArt->ArtOne().ArtTwo();
}

int main() {
    Brumski();
    return 0;
}