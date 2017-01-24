---
title: "Funzioni intrinseche _InterlockedExchange | Microsoft Docs"
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
  - "_InterlockedExchange_rel"
  - "_InterlockedExchange8_nf"
  - "_InterlockedExchange_acq_cpp"
  - "_InterlockedExchange_nf"
  - "_InterlockedExchange64_nf"
  - "_InterlockedExchange_HLEAcquire"
  - "_InterlockedExchange_cpp"
  - "_InterlockedExchange64_acq_cpp"
  - "_InterlockedExchange64_acq"
  - "_InterlockedExchange64_HLERelease"
  - "_InterlockedExchange8_acq"
  - "_InterlockedExchange16_acq"
  - "_InterlockedExchange"
  - "_InterlockedExchange64_HLEAcquire"
  - "_InterlockedExchange8"
  - "_InterlockedExchange64_rel"
  - "_InterlockedExchange_acq"
  - "_InterlockedExchange16"
  - "_InterlockedExchange16_rel"
  - "_InterlockedExchange16_nf"
  - "_InterlockedExchange64"
  - "_InterlockedExchange_HLERelease"
  - "_InterlockedExchange64_cpp"
  - "_InterlockedExchange8_rel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione intrinseca _InterlockedExchange"
  - "funzione intrinseca _InterlockedExchange_acq"
  - "_InterlockedExchange16"
  - "_InterlockedExchange16_acq"
  - "_InterlockedExchange16_nf"
  - "_InterlockedExchange16_rel"
  - "funzione intrinseca _InterlockedExchange64"
  - "funzione intrinseca _InterlockedExchange64_acq"
  - "_InterlockedExchange8"
  - "_InterlockedExchange8_acq"
  - "_InterlockedExchange8_nf"
  - "_InterlockedExchange8_rel"
  - "funzione intrinseca InterlockedExchange"
  - "funzione intrinseca InterlockedExchange_acq"
  - "funzione intrinseca InterlockedExchange64"
  - "funzione intrinseca InterlockedExchange64_acq"
ms.assetid: be2f232a-6301-462a-a92b-fcdeb8b0f209
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni intrinseche _InterlockedExchange
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Genera un'istruzione atomica per impostare un valore specificato.  
  
## Sintassi  
  
```  
long _InterlockedExchange(  
   long volatile * Target,  
   long Value  
);  
long _InterlockedExchange_acq(  
   long volatile * Target,  
   long Value  
);  
long _InterlockedExchange_HLEAcquire(  
   long volatile * Target,  
   long Value  
);  
long _InterlockedExchange_HLERelease(  
   long volatile * Target,  
   long Value  
);  
long _InterlockedExchange_nf(  
   long volatile * Target,  
   long Value  
);  
long _InterlockedExchange_rel(  
   long volatile * Target,  
   long Value  
);  
char _InterlockedExchange8(  
   char volatile * Target,  
   char Value  
);  
char _InterlockedExchange8_acq(  
   char volatile * Target,  
   char Value  
);  
char _InterlockedExchange8_nf(  
   char volatile * Target,  
   char Value  
);  
char _InterlockedExchange8_rel(  
   char volatile * Target,  
   char Value  
);  
short _InterlockedExchange16(  
   short volatile * Target,  
   short Value  
);  
short _InterlockedExchange16_acq(  
   short volatile * Target,  
   short Value  
);  
short _InterlockedExchange16_nf(  
   short volatile * Target,  
   short Value  
);  
short _InterlockedExchange16_rel(  
   short volatile * Target,  
   short Value  
);  
__int64 _InterlockedExchange64(  
   __int64 volatile * Target,  
   __int64 Value  
);  
__int64 _InterlockedExchange64_acq(  
   __int64 volatile * Target,  
   __int64 Value  
);  
__int64 _InterlockedExchange64_HLEAcquire(  
   __int64 volatile * Target,  
   __int64 Value  
);  
__int64 _InterlockedExchange64_HLERelease(  
   __int64 volatile * Target,  
   __int64 Value  
);  
__int64 _InterlockedExchange64_nf(  
   __int64 volatile * Target,  
   __int64 Value  
);  
__int64 _InterlockedExchange64_rel(  
   __int64 volatile * Target,  
   __int64 Value  
);  
```  
  
#### Parametri  
 \[in, out\] `Target`  
 Puntatore al valore da scambiare.  La funzione imposta questa variabile su `Value` e restituisce il valore precedente.  
  
 \[in\] `Value`  
 Valore da scambiare con il valore a cui punta `Target`.  
  
## Valore restituito  
 Restituisce il valore iniziale a cui punta `Target`.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Intestazione|  
|-------------------------|------------------|------------------|  
|`_InterlockedExchange`, `_InterlockedExchange8`, `_InterlockedExchange16`, `_InterlockedExchange64`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_InterlockedExchange_acq`, `_InterlockedExchange_nf`, `_InterlockedExchange_rel`, `_InterlockedExchange8_acq`, `_InterlockedExchange8_nf`, `_InterlockedExchange8_rel`, `_InterlockedExchange16_acq`, `_InterlockedExchange16_nf`, `_InterlockedExchange16_rel`, `_InterlockedExchange64_acq`, `_InterlockedExchange64_nf`, `_InterlockedExchange64_rel`,|ARM|\<intrin.h\>|  
|`_InterlockedExchange_HLEAcquire`, `_InterlockedExchange_HLERelease`, `_InterlockedExchange64_HLEAcquire`, `_InterlockedExchange64_HLERelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h\>|  
  
## Note  
 `_InterlockedExchange` fornisce il supporto intrinseco del compilatore per la funzione Win32 [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)] [InterlockedExchange](http://msdn.microsoft.com/library/ms683590.aspx).  
  
 Ci sono diverse varianti di `_InterlockedExchange` che variano in base ai tipi di dati interessati e all'uso della semantica di acquisizione o di rilascio specifica del processore.  
  
 Mentre la funzione `_InterlockedExchange` opera su valori integer a 32 bit, `_InterlockedExchange8` opera su valori integer a 8 bit, `_InterlockedExchange16` opera su valori integer a 16 bit e `_InterlockedExchange64` opera su valori integer a 64 bit.  
  
 Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica.  Le funzioni intrinseche con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 Sulle piattaforme Intel che supportano le istruzioni HLE \(Hardware Lock Elision\), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware.  Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.  
  
 Queste routine sono disponibili solo come funzioni intrinseche.  
  
## Esempio  
 Per un esempio di come usare `_InterlockedExchange`, vedere [\_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)