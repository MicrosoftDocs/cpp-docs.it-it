---
title: "Funzioni intrinseche _interlockedbittestandreset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_interlockedbittestandreset_rel"
  - "_interlockedbittestandreset64"
  - "_interlockedbittestandreset64_HLERelease"
  - "_interlockedbittestandreset_HLERelease"
  - "_interlockedbittestandreset_HLEAcquire"
  - "_interlockedbittestandreset_acq"
  - "_interlockedbittestandreset_cpp"
  - "_interlockedbittestandreset_nf"
  - "_interlockedbittestandreset64_cpp"
  - "_interlockedbittestandreset64_HLEAcquire"
  - "_interlockedbittestandreset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione intrinseca _interlockedbittestandreset"
  - "funzione intrinseca _interlockedbittestandreset64"
  - "istruzione lock_btr"
ms.assetid: 9bbb1442-f2e9-4dc2-b0da-97f3de3493b9
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Funzioni intrinseche _interlockedbittestandreset
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Genera un'istruzione che imposta il bit `b` dell'indirizzo `a` su zero e restituisce il valore originale.  
  
## Sintassi  
  
```  
unsigned char _interlockedbittestandreset(    long *a,    long b ); unsigned char _interlockedbittestandreset_acq(    long *a,    long b ); unsigned char _interlockedbittestandreset_HLEAcquire(    long *a,    long b ); unsigned char _interlockedbittestandreset_HLERelease(    long *a,    long b ); unsigned char _interlockedbittestandreset_nf(    long *a,    long b ); unsigned char _interlockedbittestandreset_rel(    long *a,    long b );  unsigned char _interlockedbittestandreset64(    __int64 *a,    __int64 b );  unsigned char _interlockedbittestandreset64_HLEAcquire(    __int64 *a,    __int64 b ); unsigned char _interlockedbittestandreset64_HLERelease(    __int64 *a,    __int64 b );  
```  
  
#### Parametri  
 \[in\] `a`  
 Puntatore alla memoria da esaminare.  
  
 \[in\] `b`  
 Posizione del bit da testare.  
  
## Valore restituito  
 Valore originale del bit nella posizione specificata da `b`.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|-------------------------|------------------|------------|  
|`_interlockedbittestandreset`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_interlockedbittestandreset_acq`, `_interlockedbittestandreset_nf`, `_interlockedbittestandreset_rel`|ARM|\<intrin.h\>|  
|`_interlockedbittestandreset_HLEAcquire`, `_interlockedbittestandreset_HLERelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h\>|  
|`_interlockedbittestandreset64`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_interlockedbittestandreset64_HLEAcquire`, `_interlockedbittestandreset64_HLERelease`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h\>|  
  
## Note  
 Nei processori x86 e [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] queste funzioni intrinseche usano l'istruzione `lock btr` che legge e imposta il bit specificato su zero in un'operazione atomica.  
  
 Nei processori ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica.  Le funzioni intrinseche ARM con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 Nei processori Intel che supportano le istruzioni HLE \(Hardware Lock Elision\), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware.  Se queste funzioni intrinseche vengono chiamate in processori che non supportano HLE, l'hint viene ignorato.  
  
 Queste routine sono disponibili solo come funzioni intrinseche.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)