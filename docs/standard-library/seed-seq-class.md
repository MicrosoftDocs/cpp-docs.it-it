---
title: "Classe seed_seq | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::seed_seq"
  - "std::tr1::seed_seq"
  - "tr1.seed_seq"
  - "seed_seq"
  - "std.tr1.seed_seq"
  - "random/std::tr1::seed_seq"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "seed_seq (classe)"
ms.assetid: cba114f7-9ac6-4f2f-b773-9c84805401d6
caps.latest.revision: 19
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe seed_seq
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Archivia un vettore di valori Integer non firmati che può fornire un valore di inizializzazione casuale per un motore di numeri casuali.  
  
## Sintassi  
  
```  
class seed_seq  
{  
public:  
    // types  
    typedef unsigned int result_type;  
  
    // constructors  
    seed_seq();  
  
    template<class T>  
    seed_seq(initializer_list<T> initlist);  
  
    template<class InputIterator>  
    seed_seq(InputIterator begin, InputIterator end);  
  
    // generating functions  
    template<class RandomAccessIterator>  
    void generate(RandomAccessIterator begin, RandomAccessIterator end);  
  
    // property functions  
    size_t size() const;  
  
    template<class OutputIterator>  
    void param(OutputIterator dest) const;  
  
    // no copy functions  
    seed_seq(const seed_seq&) = delete;  
    void operator=(const seed_seq&) = delete;  
};  
```  
  
## Tipi  
 `typedef unsigned int result_type;`   
Tipo degli elementi della sequenza di inizializzazione. Un tipo unsigned integer a 32 bit.  
  
## Costruttori  
 `seed_seq();`   
Costruttore predefinito, inizializzato per una sequenza interna vuota.  
  
 `template<class T>`   
 `seed_seq(initializer_list<T> initlist);`   
Utilizza `initlist` per impostare la sequenza interna.  
`T` deve essere un tipo integer.  
  
 `template<class InputIterator>`   
 `seed_seq(InputIterator begin, InputIterator end);`   
Inizializza la sequenza interna usando tutti gli elementi nell'intervallo di iteratore di input specificato.  
`iterator_traits<InputIterator>::value_type` deve essere un tipo integer.  
  
## Membri  
  
### Generazione di funzioni  
 `template<class RandomAccessIterator> void generate(RandomAccessIterator begin, RandomAccessIterator end);`   
Popola gli elementi della sequenza specificata usando un algoritmo interno. Questo algoritmo è influenzato dalla sequenza interna con cui `seed_seq` è stato inizializzato.  
Non esegue alcuna operazione se `begin == end`.  
  
### Funzioni delle proprietà  
 `size_t size() const;`   
Restituisce il numero di elementi di `seed_seq`.  
  
 `template<class OutputIterator> void param(OutputIterator dest) const;`   
Copia la sequenza interna nell'iteratore di output `dest`.  
  
## Esempio  
 L'esempio di codice seguente usa i tre costruttori e genera output dalle istanze di `seed_seq` risultanti in caso di assegnazione a una matrice. Per un esempio che utilizza `seed_seq` con un generatore di numeri casuali, vedere [\<random\>](../standard-library/random.md).  
  
```cpp  
#include <iostream>  
#include <random>  
#include <string>  
#include <array>  
  
using namespace std;  
  
void test(const seed_seq& sseq) {  
    cout << endl << "seed_seq::size(): " << sseq.size() << endl;  
  
    cout << "seed_seq::param(): ";  
    ostream_iterator<unsigned int> out(cout, " ");  
    sseq.param(out);  
    cout << endl;  
  
    cout << "Generating a sequence of 5 elements into an array: " << endl;  
    array<unsigned int, 5> seq;  
    sseq.generate(seq.begin(), seq.end());  
    for (unsigned x : seq) { cout << x << endl; }  
}  
  
int main()  
{  
    seed_seq seed1;  
    test(seed1);  
  
    seed_seq seed2 = { 1701, 1729, 1791 };  
    test(seed2);  
  
    string sstr = "A B C D"; // seed string  
    seed_seq seed3(sstr.begin(), sstr.end());  
    test(seed3);  
}  
```  
  
## Output  
  
```Output  
  
seed_seq::Size(): seed_seq::param() 0: generazione di una sequenza di 5 elementi in una matrice: 505382999 163489202 3932644188 763126080 73937346 seed_seq::size(): seed_seq::param() 3: 1701 1729 1791 generazione di una sequenza di 5 elementi in una matrice: 1730669648 1954224479 2809786021 1172893117 2393473414 seed_seq::size(): seed_seq::param() 7: generazione di una sequenza di 5 elementi in una matrice 65 32 66 32 67 32 68 : 3139879222 3775111734 1084804564 2485037668 1985355432  
```  
  
## Note  
 Funzioni membro di questa classe non generano eccezioni.  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)