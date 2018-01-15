---
title: Classe subtract_with_carry_engine | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- random/std::subtract_with_carry_engine
- random/std::subtract_with_carry_engine::default_seed
- random/std::subtract_with_carry_engine::discard
- random/std::subtract_with_carry_engine::min
- random/std::subtract_with_carry_engine::max
- random/std::subtract_with_carry_engine::seed
dev_langs: C++
helpviewer_keywords:
- std::subtract_with_carry_engine [C++]
- std::subtract_with_carry_engine [C++], default_seed
- std::subtract_with_carry_engine [C++], discard
- std::subtract_with_carry_engine [C++], min
- std::subtract_with_carry_engine [C++], max
- std::subtract_with_carry_engine [C++], seed
ms.assetid: 94a055f2-a620-4a22-ac34-c156924bab31
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8de1c19ac793dd78ee55a15bc1156408936174bc
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="subtractwithcarryengine-class"></a>Classe subtract_with_carry_engine
Genera una sequenza casuale usando l'algoritmo subtract-with-carry (lagged Fibonacci).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class UIntType, size_t W, size_t S, size_t R>  
class subtract_with_carry_engine;  
```  
  
#### <a name="parameters"></a>Parametri  
 `UIntType`  
 Tipo di risultato Unsigned Integer. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).  
  
 `W`  
 **Dimensione parola**. Dimensione di ogni parola, in bit, della sequenza di stato. **Precondizione:** `0 < W ≤ numeric_limits<UIntType>::digits`  
  
 `S`  
 **Ritardo breve**. Numero di valori Integer. **Precondizione**: `0 < S < R`  
  
 `R`  
 **Ritardo lungo**. Determina la ricorrenza nella serie generata.  
  
## <a name="members"></a>Membri  
  
||||  
|-|-|-|  
|`subtract_with_carry_engine::subtract_with_carry_engine`|`subtract_with_carry_engine::min`|`subtract_with_carry_engine::discard`|  
|`subtract_with_carry_engine::operator()`|`subtract_with_carry_engine::max`|`subtract_with_carry_engine::seed`|  
|`default_seed` è una costante membro definita come `19780503u`, usata come valore di parametro predefinito per `subtract_with_carry_engine::seed` e per il costruttore a valore singolo.|||  
  
 Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).  
  
## <a name="remarks"></a>Note  
 La classe modello `substract_with_carry_engine` rappresenta un miglioramento di [linear_congruential_engine](../standard-library/linear-congruential-engine-class.md). Nessuno di questi motori può tuttavia eguagliare la rapidità e la qualità dei risultati offerte da [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md).  
  
 Questo motore genera valori di un tipo integrale senza segno specificato dall'utente usando la relazione di ricorrenza (*periodo*) `x(i) = (x(i - R) - x(i - S) - cy(i - 1)) mod M`, dove `cy(i)` presenta il valore `1` se `x(i - S) - x(i - R) - cy(i - 1) < 0`, in caso contrario `0` e `M` presenta il valore `2`<sup>W</sup>. Lo stato del motore è un indicatore riporto più `R` valori. Questi valori sono costituiti dagli ultimi valori `R` restituiti se `operator()` è stato chiamato almeno `R` volte, altrimenti dai valori `N` che sono stati restituiti e dagli ultimi `R - N` valori di seeding.  
  
 L'argomento del modello `UIntType` deve essere abbastanza grande da contenere valori fino a `M - 1`.  
  
 Sebbene sia possibile costruire un generatore direttamente da questo motore, è anche possibile usare uno dei typedef predefiniti seguenti:  
  
 `ranlux24_base`: usato come base per `ranlux24`.                   
`typedef subtract_with_carry_engine<unsigned int, 24, 10, 24> ranlux24_base;`  
  
 `ranlux48_base`: usato come base per `ranlux48`.                   
`typedef subtract_with_carry_engine<unsigned long long, 48, 5, 12> ranlux48_base;`  
  
 Per informazioni dettagliate sull'algoritmo del motore subract-with-carry, vedere l'articolo di Wikipedia [Generatore di Fibonacci ritardato](http://go.microsoft.com/fwlink/p/?linkid=402445).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<random>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<random>](../standard-library/random.md)

