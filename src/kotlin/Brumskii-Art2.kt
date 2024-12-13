package Brumskii.Art2

class Art{
    init{
        System.loadLibrary("Brumskii-Art2")
    }
    
    external fun ArtOnek(): Unit
    external fun ArtTwok(): Unit
}

fun main(args: Array<String>){
    val brumskiiart: Art = Art()
    
    repeat(5){
        brumskiiart.ArtOnek()
        brumskiiart.ArtTwok()
    }
    
}