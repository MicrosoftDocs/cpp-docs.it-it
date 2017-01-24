---
title: "Funzioni intrinseche _InterlockedExchangePointer | Microsoft Docs"
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
  - "_InterlockedExchangePointer_cpp"
  - "_InterlockedExchangePointer_rel"
  - "_InterlockedExchangePointer_nf"
  - "_InterlockedExchangePointer_HLERelease"
  - "_InterlockedExchangePointer_acq"
  - "_InterlockedExchangePointer"
  - "_InterlockedExchangePointer_acq_cpp"
  - "_InterlockedExchangePointer_HLEAcquire"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_InterlockedExchangePointer intrinseco"
  - "_InterlockedExchangePointer_acq intrinseco"
  - "_InterlockedExchangePointer_HLEAcquire intrinseco"
  - "_InterlockedExchangePointer_HLERelease intrinseco"
  - "_InterlockedExchangePointer_nf intrinseco"
  - "_InterlockedExchangePointer_rel intrinseco"
  - "InterlockedExchangePointer intrinseco"
  - "InterlockedExchangePointer_acq intrinseco"
ms.assetid: 0eaca0b0-d79e-406b-892d-b3b462c50bbb
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni intrinseche _InterlockedExchangePointer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Eseguire un'operazione di scambio atomico, che copia l'indirizzo passato come secondo argomento al primo e restituisce l'indirizzo originale del primo.  
  
## Sintassi  
  
```  
void * _InterlockedExchangePointer(    void * volatile * Target,    void * Value );  void * _InterlockedExchangePointer_acq(    void * volatile * Target,    void * Value );  void * _InterlockedExchangePointer_rel(    void * volatile * Target,    void * Value );  void * _InterlockedExchangePointer_nf(    void * volatile * Target,    void * Value );  void * _InterlockedExchangePointer_HLEAcquire(    void * volatile * Target,    void * Value );  void * _InterlockedExchangePointer_HLERelease(    void * volatile * Target,    void * Value );  
```  
  
#### Parametri  
 \[in, out\] `Target`  
 Puntatore a puntatore al valore per lo scambio.  La funzione imposta il valore su `Value` e restituisce il valore precedente.  
  
 \[in\] `Value`  
 Valore da scambiare con il valore a cui punta `Target`.  
  
## Valore restituito  
 La funzione restituisce il valore iniziale a cui punta `Target`.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|-------------------------|------------------|------------|  
|`_InterlockedExchangePointer`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_InterlockedExchangePointer_acq`, `_InterlockedExchangePointer_rel`, `_InterlockedExchangePointer_nf`|ARM|\<intrin.h\>|  
|`_InterlockedExchangePointer_HLEAcquire`, `_InterlockedExchangePointer_HLERelease`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] con supporto HLE|\<immintrin.h\>|  
  
 Nell'architettura x86 `_InterlockedExchangePointer` è una macro che chiama `_InterlockedExchange`.  
  
## Note  
 In un sistema a 64 bit i parametri sono a 64 bit e devono essere allineati ai limiti dell'architettura a 64\-bit. In caso contrario la funzione non riuscirà.  In un sistema a 32 bit i parametri sono a 32 bit e devono essere allineati secondo limiti a 32 bit.  Per altre informazioni, vedere [align](../cpp/align-cpp.md).  
  
 Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica.  Le funzioni intrinseche con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 Sulle piattaforme Intel che supportano le istruzioni HLE \(Hardware Lock Elision\), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware.  Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.  
  
 Queste routine sono disponibili solo come funzioni intrinseche.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)