---
title: Classe mersenne_twister_engine | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: random/std::mersenne_twister_engine
dev_langs: C++
helpviewer_keywords: mersenne_twister_engine class
ms.assetid: 7ee968fa-a1cc-450f-890f-7305de062685
caps.latest.revision: "23"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 58a777a049b270702e63391ebc7bd4c1addc3b32
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mersennetwisterengine-class"></a>Classe mersenne_twister_engine
Genera una sequenza di numeri integer casuali di alta qualità usando l'algoritmo Mersenne Twister.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class UIntType,   
    size_t W, size_t N, size_t M, size_t R,  
    UIntType A, size_t U, UIntType D, size_t S,  
    UIntType B, size_t T, UIntType C, size_t L, UIntType F>  
class mersenne_twister_engine;  
```  
  
#### <a name="parameters"></a>Parametri  
 `UIntType`  
 Tipo di risultato Unsigned Integer. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).  
  
 `W`  
 **Dimensione parola**. Dimensione di ogni parola, in bit, della sequenza di stato. **Precondizione:** `2u < W ≤ numeric_limits<UIntType>::digits`  
  
 `N`  
 **Dimensione stato**. Numero di elementi (valori) nella sequenza di stato.  
  
 `M`  
 **Dimensione spostamento**. Numero di elementi da ignorare durante ogni twist. **Precondizione:** `0 < M ≤ N`  
  
 `R`  
 **Bit di maschera**. **Precondizione:** `R ≤ W`  
  
 `A`  
 **Maschera XOR**. **Precondizione:** `A ≤ (1u<<W) - 1u`  
  
 `U`, `S`, `T`, `L`  
 **Parametri di spostamento per la crittografia**. Usati come valori di spostamento durante la crittografia. Precondizione: `U,S,T,L ≤ W`  
  
 `D`, `B`, `C`  
 **Parametri maschera di bit crittografia**. Usati come valori di maschera di bit durante la crittografia. Precondizione: `D,B,C ≤ (1u<<W) - 1u`  
  
 `F`  
 **Moltiplicatore inizializzazione**. Usato per l'inizializzazione della sequenza. Precondizione: `F ≤ (1u<<W) - 1u`  
  
## <a name="members"></a>Membri  
  
||||  
|-|-|-|  
|`mersenne_twister_engine::mersenne_twister_engine`|`mersenne_twister_engine::min`|`mersenne_twister_engine::discard`|  
|`mersenne_twister_engine::operator()`|`mersenne_twister_engine::max`|`mersenne_twister_engine::seed`|  
  
 `default_seed` è una costante membro definita come `5489u`, usata come valore di parametro predefinito per `mersenne_twister_engine::seed` e per il costruttore a valore singolo.  
  
 Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).  
  
## <a name="remarks"></a>Note  
 Questa classe di modello descrive un motore di numeri casuali che restituisce valori sull'intervallo chiuso [ `0`, `2`<sup>W</sup> - `1`]. Contiene un valore integrale di grandi dimensioni con `W * (N - 1) + R` bit. Estrae `W` bit alla volta da questo valore elevato e quando ha usato tutti i bit, esegue il twist del valore di grandi dimensioni spostando e mescolando i bit in modo da avere un nuovo set di bit dal quale effettuare l'estrazione. Lo stato del motore è costituito dagli ultimi valori a `N` `W` bit usati se `operator()` è stato chiamato almeno `N` volte, altrimenti dai valori a `M` `W` che sono stati usati e dagli ultimi `N - M` valori di seeding.  
  
 Il generatore esegue il twist del valore di grandi dimensioni tramite un registro di spostamento di feedback generalizzato di twist definito dai valori di spostamento `N` e `M`, da un valore di twist `R` e da una maschera XOR `A` condizionale. Inoltre, i bit del registro di spostamento non elaborato sono crittografati in base a una matrice di crittografia dei bit definita dai valori `U`, `D`, `S`, `B`, `T`, `C` e `L`.  
  
 L'argomento del modello `UIntType` deve essere abbastanza grande da contenere valori fino a `2`<sup>W</sup> - `1`. I valori degli altri argomenti del modello devono soddisfare i requisiti seguenti: `2u < W, 0 < M, M ≤ N, R ≤ W, U ≤ W, S ≤ W, T ≤ W, L ≤ W, W ≤ numeric_limits<UIntType>::digits, A ≤ (1u<<W) - 1u, B ≤ (1u<<W) - 1u, C ≤ (1u<<W) - 1u, D ≤ (1u<<W) - 1u, and F ≤ (1u<<W) - 1u`.  
  
 Sebbene sia possibile costruire un generatore direttamente da questo motore, è anche possibile usare uno dei typedef predefiniti seguenti:  
  
 `mt19937`: motore Mersenne Twister a 32 bit (Matsumoto e Nishimura, 1998).  
  
```  
typedef mersenne_twister_engine<unsigned int, 32, 624, 397,   
    31, 0x9908b0df,   
    11, 0xffffffff,   
    7, 0x9d2c5680,   
    15, 0xefc60000,   
    18, 1812433253> mt19937;  
```  
  
 `mt19937_64`: motore Mersenne Twister a 64 bit (Matsumoto e Nishimura, 2000).  
  
```  
typedef mersenne_twister_engine<unsigned long long, 64, 312, 156,   
    31, 0xb5026f5aa96619e9ULL,   
    29, 0x5555555555555555ULL,   
    17, 0x71d67fffeda60000ULL,   
    37, 0xfff7eee000000000ULL,   
    43, 6364136223846793005ULL> mt19937_64;  
```  
  
 Per informazioni dettagliate sull'algoritmo Mersenne Twister, vedere l'articolo di Wikipedia [Mersenne Twister](http://go.microsoft.com/fwlink/LinkId=402356).  
  
## <a name="example"></a>Esempio  
 Per un esempio di codice, vedere [\<random>](../standard-library/random.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<random>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<random>](../standard-library/random.md)
