# TP01

### Software to compare similarities between two texts. Using the concept of Bag of Words [BOWs](https://en.wikipedia.org/wiki/Bag-of-words_model).

## Members


Nome                                         | Matrícula  |
---------------------------------------------|------------|
Tales Castro Mazzoccante                     | 180109570  |
José Luís Ramos Teixeira                     | 190057858  |
Carlos Daniel de Godoy Barros Nascimento     | 190042303  |
Matheus Martins da Silva                     | 180127845  |


## How to use

Clone the [repo](https://github.com/nimitzufo/BoW/tree/main/implementSolution) and run the executable within the 'implementSolution' folder, if you need to compile, remember to link the math library with -lm
```
./test.out
or
gcc wordHunter.c -lm -o nameYouWantToGive
```

## How it works
Find the  [Euclidean distance](https://en.wikipedia.org/wiki/Euclidean_distance) between two given files using a dictionary of token words to measure it.

## Complexity 

Linear, O(n + a + b), where n is the number of tokens withing the dictionary file / a = words in TRA / b = words in TRB.
