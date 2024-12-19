#include <Brumskii-Art2/Brumskii-Art2.hpp>
#include <memory>

void Brumski(){
    std::unique_ptr<BrumskiiArt2::Art> brumskiArt = std::make_unique<BrumskiiArt2::Art>();
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