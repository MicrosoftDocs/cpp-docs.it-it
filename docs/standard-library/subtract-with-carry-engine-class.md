---
title: "Classe subtract_with_carry_engine | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1.subtract_with_carry_engine"
  - "std::tr1::subtract_with_carry_engine"
  - "random/std::tr1::subtract_with_carry_engine"
  - "subtract_with_carry_engine"
  - "tr1::subtract_with_carry_engine"
  - "std.tr1.subtract_with_carry_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "subtract_with_carry_engine (classe)"
ms.assetid: 94a055f2-a620-4a22-ac34-c156924bab31
caps.latest.revision: 20
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe subtract_with_carry_engine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una sequenza casuale usando l'algoritmo subtract\-with\-carry \(lagged Fibonacci\).  
  
## Sintassi  
  
```  
template<class UIntType, size_t W, size_t S, size_t R>  
class subtract_with_carry_engine;  
```  
  
#### Parametri  
 `UIntType`  
 Tipo di risultato Unsigned Integer. Per i tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
 `W`  
 **Dimensione parola**. Dimensione di ogni parola, in bit, della sequenza di stato.**Precondizione**: `0 < W ≤ numeric_limits<UIntType>::digits`  
  
 `S`  
 **Ritardo breve**. Numero di valori Integer.**Precondizione**: `0 < S < R`  
  
 `R`  
 **Ritardo lungo**. Determina la ricorrenza nella serie generata.  
  
## Membri  
  
||||  
|-|-|-|  
|`subtract_with_carry_engine::subtract_with_carry_engine`|`subtract_with_carry_engine::min`|`subtract_with_carry_engine::discard`|  
|`subtract_with_carry_engine::operator()`|`subtract_with_carry_engine::max`|`subtract_with_carry_engine::seed`|  
|`default_seed` è una costante membro definita come `19780503u`, usata come valore di parametro predefinito per `subtract_with_carry_engine::seed` e per il costruttore a valore singolo.|||  
  
 Per ulteriori informazioni sui membri del motore, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 La classe modello `substract_with_carry_engine` rappresenta una miglioria di [linear\_congruential\_engine](../standard-library/linear-congruential-engine-class.md). Nessuno di questi motori può tuttavia eguagliare la rapidità e la qualità dei risultati offerte da [mersenne\_twister\_engine](../standard-library/mersenne-twister-engine-class.md).  
  
 Il motore produce valori di un tipo Unsigned Integral specificato dall'utente usando la relazione di ricorrenza \(*periodo*\) `x(i) = (x(i - R) - x(i - S) - cy(i - 1)) mod M`, dove `cy(i)` presenta il valore `1` se `x(i - S) - x(i - R) - cy(i - 1) < 0`, in caso contrario `0` e `M` presenta il valore `2`<sup>W</sup>. Lo stato del motore è un indicatore riporto più `R` valori. Questi valori sono costituiti dagli ultimi valori `R` restituiti se `operator()` è stato chiamato almeno `R` volte, altrimenti dai valori `N` che sono stati restituiti e dagli ultimi `R - N` valori di seeding.  
  
 L'argomento del modello `UIntType` deve essere abbastanza grande da contenere valori fino a `M - 1`.  
  
 Sebbene sia possibile costruire direttamente un generatore da questo motore, è possibile utilizzare uno di questi typedef predefiniti:  
  
 `ranlux24_base`: Usato come base per `ranlux24`.  
`typedef subtract_with_carry_engine<unsigned int, 24, 10, 24> ranlux24_base;`  
  
 `ranlux48_base`: Usato come base per `ranlux48`.  
`typedef subtract_with_carry_engine<unsigned long long, 48, 5, 12> ranlux48_base;`  
  
 Per informazioni dettagliate su subract con algoritmo motore carry, vedere l'articolo di Wikipedia [Lagged Fibonacci generator](http://go.microsoft.com/fwlink/?LinkId=402445).  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)