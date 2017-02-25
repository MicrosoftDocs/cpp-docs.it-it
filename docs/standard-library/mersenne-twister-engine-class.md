---
title: "Classe mersenne_twister_engine | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "random/std::tr1::mersenne_twister_engine"
  - "tr1.mersenne_twister_engine"
  - "std.tr1.mersenne_twister_engine"
  - "std::tr1::mersenne_twister_engine"
  - "tr1::mersenne_twister_engine"
  - "mersenne_twister_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mersenne_twister_engine (classe)"
ms.assetid: 7ee968fa-a1cc-450f-890f-7305de062685
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe mersenne_twister_engine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una sequenza di numeri integer casuali di alta qualità usando l'algoritmo Mersenne Twister.  
  
## Sintassi  
  
```  
template<class UIntType,   
    size_t W, size_t N, size_t M, size_t R,  
    UIntType A, size_t U, UIntType D, size_t S,  
    UIntType B, size_t T, UIntType C, size_t L, UIntType F>  
class mersenne_twister_engine;  
```  
  
#### Parametri  
 `UIntType`  
 Tipo di risultato Unsigned Integer. Per i tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
 `W`  
 **Dimensione parola**. Dimensione di ogni parola, in bit, della sequenza di stato.**Precondizione**: `2u < W ≤ numeric_limits<UIntType>::digits`  
  
 `N`  
 **Dimensione stato**. Numero di elementi \(valori\) nella sequenza di stato.  
  
 `M`  
 **Dimensione spostamento**. Numero di elementi da ignorare durante ogni twist.**Precondizione**: `0 < M ≤ N`  
  
 `R`  
 **Bit di maschera**.**Precondizione**: `R ≤ W`  
  
 `A`  
 **Maschera XOR**.**Precondizione**: `A ≤ (1u<<W) - 1u`  
  
 `U`, `S`, `T`, `L`  
 **Parametri di spostamento per la crittografia**. Usati come valori di spostamento durante la crittografia. Precondizione: `U,S,T,L ≤ W`  
  
 `D`, `B`, `C`  
 **Parametri maschera di bit crittografia**. Usati come valori di maschera di bit durante la crittografia. Precondizione: `D,B,C ≤ (1u<<W) - 1u`  
  
 `F`  
 **Moltiplicatore inizializzazione**. Usato per l'inizializzazione della sequenza. Precondizione: `F ≤ (1u<<W) - 1u`  
  
## Membri  
  
||||  
|-|-|-|  
|`mersenne_twister_engine::mersenne_twister_engine`|`mersenne_twister_engine::min`|`mersenne_twister_engine::discard`|  
|`mersenne_twister_engine::operator()`|`mersenne_twister_engine::max`|`mersenne_twister_engine::seed`|  
  
 `default_seed` è una costante membro definita come `5489u`, usata come valore di parametro predefinito per `mersenne_twister_engine::seed` e per il costruttore a valore singolo.  
  
 Per ulteriori informazioni sui membri del motore, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 Questa classe modello descrive un motore di numeri casuali, la restituzione di valori sull'intervallo chiuso \[`0`, `2`<sup>W</sup> \- `1`\]. Contiene un valore integrale di grandi dimensioni con `W * (N - 1) + R` bit. Estrae `W` bit alla volta da questo valore elevato e quando ha usato tutti i bit, esegue il twist del valore di grandi dimensioni spostando e mescolando i bit in modo da avere un nuovo set di bit dal quale effettuare l'estrazione. Lo stato del motore è l'ultima `N``W`\-bit di valori utilizzati se `operator()` è stato chiamato almeno `N` volte, altrimenti il `M``W`\-bit di valori che sono stati utilizzati e l'ultimo `N - M` valori di seeding.  
  
 Il generatore esegue il twist del valore di grandi dimensioni tramite un registro di spostamento di feedback generalizzato di twist definito dai valori di spostamento `N` e `M`, da un valore di twist `R` e da una maschera XOR `A` condizionale. Inoltre, i bit del registro di spostamento non elaborato sono crittografati in base a una matrice di crittografia dei bit definita dai valori `U`, `D`, `S`, `B`, `T`, `C` e `L`.  
  
 L'argomento di modello `UIntType` deve essere sufficientemente grande da contenere valori fino a `2`<sup>W</sup> \- `1`. I valori degli altri argomenti del modello devono soddisfare i requisiti seguenti: `2u < W, 0 < M, M ≤ N, R ≤ W, U ≤ W, S ≤ W, T ≤ W, L ≤ W, W ≤ numeric_limits<UIntType>::digits, A ≤ (1u<<W) - 1u, B ≤ (1u<<W) - 1u, C ≤ (1u<<W) - 1u, D ≤ (1u<<W) - 1u, and F ≤ (1u<<W) - 1u`.  
  
 Sebbene sia possibile costruire direttamente un generatore da questo motore, è consigliabile che utilizzare uno di questi typedef predefiniti:  
  
 `mt19937`: motore twister Mersenne a 32 bit \(Matsumoto e Nishimura, 1998\).  
  
```  
typedef mersenne_twister_engine<unsigned int, 32, 624, 397,   
    31, 0x9908b0df,   
    11, 0xffffffff,   
    7, 0x9d2c5680,   
    15, 0xefc60000,   
    18, 1812433253> mt19937;  
```  
  
 `mt19937_64`: il motore twister Mersenne 64\-bit \(Matsumoto e Nishimura, 2000\).  
  
```  
typedef mersenne_twister_engine<unsigned long long, 64, 312, 156,   
    31, 0xb5026f5aa96619e9ULL,   
    29, 0x5555555555555555ULL,   
    17, 0x71d67fffeda60000ULL,   
    37, 0xfff7eee000000000ULL,   
    43, 6364136223846793005ULL> mt19937_64;  
```  
  
 Per informazioni dettagliate sull'algoritmo Mersenne twister, vedere l'articolo di Wikipedia [Mersenne twister](http://go.microsoft.com/fwlink/?LinkId=402356).  
  
## Esempio  
 Per un esempio di codice, vedere [\<random\>](../standard-library/random.md).  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)