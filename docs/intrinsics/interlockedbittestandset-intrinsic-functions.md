---
title: "Funzioni intrinseche _interlockedbittestandset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_interlockedbittestandset_cpp"
  - "_interlockedbittestandset_HLEAcquire"
  - "_interlockedbittestandset64"
  - "_interlockedbittestandset"
  - "_interlockedbittestandset_rel"
  - "_interlockedbittestandset64_HLEAcquire"
  - "_interlockedbittestandset_HLERelease"
  - "_interlockedbittestandset_acq"
  - "_interlockedbittestandset_nf"
  - "_interlockedbittestandset64_cpp"
  - "_interlockedbittestandset64_HLERelease"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione intrinseca _interlockedbittestandset"
  - "funzione intrinseca _interlockedbittestandset64"
  - "istruzione lock_bts"
ms.assetid: b1b7e334-53ea-48cf-ba60-5fa3ef51a1fc
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Funzioni intrinseche _interlockedbittestandset
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Generare un'istruzione che esamina il bit `b` dell'indirizzo `a` e restituisce il valore corrente prima di impostarlo su 1.  
  
## Sintassi  
  
```  
unsigned char _interlockedbittestandset(    long *a,    long b ); unsigned char _interlockedbittestandset_acq(    long *a,    long b ); unsigned char _interlockedbittestandset_HLEAcquire(    long *a,    long b ); unsigned char _interlockedbittestandset_HLERelease(    long *a,    long b ); unsigned char _interlockedbittestandset_nf(    long *a,    long b ); unsigned char _interlockedbittestandset_rel(    long *a,    long b ); unsigned char _interlockedbittestandset64(    __int64 *a,    __int64 b ); unsigned char _interlockedbittestandset64_HLEAcquire(    __int64 *a,    __int64 b ); unsigned char _interlockedbittestandset64_HLERelease(    __int64 *a,    __int64 b );  
```  
  
#### Parametri  
 \[in\] `a`  
 Puntatore alla memoria da esaminare.  
  
 \[in\] `b`  
 Posizione del bit da testare.  
  
## Valore restituito  
 Valore del bit nella posizione `b` prima dell'impostazione.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|-------------------------|------------------|------------|  
|`_interlockedbittestandset`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_interlockedbittestandset_acq`, `_interlockedbittestandset_nf`, `_interlockedbittestandset_rel`|ARM|\<intrin.h\>|  
|`_interlockedbittestandset_HLEAcquire`, `_interlockedbittestandset_HLERelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h\>|  
|`_interlockedbittestandset64`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_interlockedbittestandset64_HLEAcquire`, `_interlockedbittestandset64_HLERelease`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h\>|  
  
## Note  
 Nei processori x86 e [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] queste funzioni intrinseche usano l'istruzione `lock bts` per leggere e impostare il bit specificato su 1.  L'operazione è atomica.  
  
 Nei processori ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica.  Le funzioni intrinseche ARM con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 Nei processori Intel che supportano le istruzioni HLE \(Hardware Lock Elision\), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware.  Se queste funzioni intrinseche vengono chiamate in processori che non supportano HLE, l'hint viene ignorato.  
  
 Queste routine sono disponibili solo come funzioni intrinseche.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)