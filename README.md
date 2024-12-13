# Brumskii-Art2 

## Welcome!

This project is more of a part 2 of [Brumskii-Art](https://github.com/lil-brumski/Brumskii-Art).

This project supports only three programming languages: C++, Python and Kotlin.

![Code Runtime](media/Brumskii-Art2.gif)

### Ubuntu/Debian

#### For C++
```bash
   $ apt install g++ cmake 
```

#### For Python
```bash
   $ apt install g++ cmake python
```

#### For Kotlin 
```bash
   $ apt install g++ cmake kotlin 
```


```bash
   $ git clone https://github.com/lil-brumski/Brumskii-Art2.git
   $ cd Brumskii-Art2/
   $ mkdir build && cd build
```

#### For C++

```bash
   $ cmake .. -DCPP=ON -DPY=OFF -DKT=OFF && make
   $ ./Brumskii-Art2
```

#### For Python 

```bash
   $ cmake .. -DCPP=OFF -DPY=ON -DKT=OFF && make
   $ cd ../src/python/
   $ cp Brumskii-Art2.py ../../build
   $ cd ../../build
   $ python Brumskii-Art2.py
```

#### For Kotlin 

```bash
   $ cmake .. -DCPP=OFF -DPY=OFF -DKT=ON && make
   $ kotlinc ../src/kotlin/Brumskii-Art2.kt -include-runtime -d Brumskii-Art2.jar
   $ java -Djava.library.path=. -jar Brumskii-Art2.jar
```

Made by [lil-brumski](https://github.com/lil-brumski)