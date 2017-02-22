---
title: "Funzioni intrinseche _InterlockedCompareExchangePointer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_InterlockedCompareExchangePointer_HLERelease"
  - "_InterlockedCompareExchangePointer_rel"
  - "_InterlockedCompareExchangePointer_acq_cpp"
  - "_InterlockedCompareExchangePointer"
  - "_InterlockedCompareExchangePointer_cpp"
  - "_InterlockedCompareExchangePointer_np"
  - "_InterlockedCompareExchangePointer_rel_cpp"
  - "_InterlockedCompareExchangePointer_HLEAcquire"
  - "_InterlockedCompareExchangePointer_acq"
  - "_InterlockedCompareExchangePointer_nf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione intrinseca _InterlockedCompareExchangePointer"
  - "funzione intrinseca _InterlockedCompareExchangePointer_acq"
  - "funzione intrinseca _InterlockedCompareExchangePointer_HLEAcquire"
  - "funzione intrinseca _InterlockedCompareExchangePointer_HLERelease"
  - "funzione intrinseca _InterlockedCompareExchangePointer_nf"
  - "funzione intrinseca _InterlockedCompareExchangePointer_np"
  - "funzione intrinseca _InterlockedCompareExchangePointer_rel"
  - "funzione intrinseca InterlockedCompareExchangePointer"
  - "funzione intrinseca InterlockedCompareExchangePointer_acq"
  - "funzione intrinseca InterlockedCompareExchangePointer_rel"
ms.assetid: 97fde59d-2bf9-42aa-a0fe-a5b6befdd44b
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Funzioni intrinseche _InterlockedCompareExchangePointer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Esegue un'operazione atomica che archivia l'indirizzo `Exchange` nell'indirizzo `Destination` se gli indirizzi `Comparand` e `Destination` sono uguali.  
  
## Sintassi  
  
```  
void * _InterlockedCompareExchangePointer (    void * volatile * Destination,    void * Exchange,    void * Comparand ); void * _InterlockedCompareExchangePointer_acq (    void * volatile * Destination,    void * Exchange,    void * Comparand ); void * _InterlockedCompareExchangePointer_HLEAcquire (    void * volatile * Destination,    void * Exchange,    void * Comparand ); void * _InterlockedCompareExchangePointer_HLERelease (    void * volatile * Destination,    void * Exchange,    void * Comparand ); void * _InterlockedCompareExchangePointer_nf (    void * volatile * Destination,    void * Exchange,    void * Comparand ); void * _InterlockedCompareExchangePointer_np (    void * volatile * Destination,    void * Exchange,    void * Comparand ); long _InterlockedCompareExchangePointer_rel (    void * volatile * Destination,    void * Exchange,    void * Comparand );  
```  
  
#### Parametri  
 \[in, out\] `Destination`  
 Puntatore a un puntatore al valore di destinazione.  Il segno viene ignorato.  
  
 \[in\] `Exchange`  
 Puntatore di Exchange.  Il segno viene ignorato.  
  
 \[in\] `Comparand`  
 Puntatore da confrontare con la destinazione.  Il segno viene ignorato.  
  
## Valore restituito  
 Il valore restituito è il valore iniziale della destinazione.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|-------------------------|------------------|------------|  
|`_InterlockedCompareExchangePointer`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_InterlockedCompareExchangePointer_acq`, `_InterlockedCompareExchangePointer_nf`, `_InterlockedCompareExchangePointer_rel`|ARM|\<iiintrin.h\>|  
|`_InterlockedCompareExchangePointer_HLEAcquire`, `_InterlockedCompareExchangePointer_HLERelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h\>|  
  
## Note  
 `_InterlockedCompareExchangePointer` esegue un confronto atomico dell'indirizzo `Destination` con l'indirizzo `Comparand`.  Se l'indirizzo `Destination` è uguale all'indirizzo `Comparand`, l'indirizzo `Exchange` viene archiviato nell'indirizzo specificato da `Destination`.  In caso contrario, non viene eseguita alcuna operazione.  
  
 `_InterlockedCompareExchangePointer` fornisce il supporto per le funzioni intrinseche del compilatore per la funzione Win32 [\_InterlockedCompareExchangePointer](http://msdn.microsoft.com/library/ff547863.aspx) di [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
 Per un esempio di come usare `_InterlockedCompareExchangePointer`, vedere [\_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).  
  
 Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica.  Le funzioni intrinseche ARM con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 Le funzioni intrinseche con suffisso `_np` \("nessuna prelettura"\) impediscono l'inserimento di una possibile operazione di prelettura da parte del compilatore.  
  
 Sulle piattaforme Intel che supportano le istruzioni HLE \(Hardware Lock Elision\), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware.  Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.  
  
 Queste routine sono disponibili solo come funzioni intrinseche.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)