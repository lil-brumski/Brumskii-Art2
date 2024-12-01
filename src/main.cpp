#include <Brumskii-Art2/Brumskii-Art2.hpp>
#include <memory>

int main() {
    auto brumskiArt = std::make_unique<BrumskiiArt2::Art>(1);
    brumskiArt->ArtOne();
    return 0;
}