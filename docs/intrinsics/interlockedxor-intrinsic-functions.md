---
title: "Funzioni intrinseche _InterlockedXor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_InterlockedXor_nf"
  - "_InterlockedXor_np"
  - "_InterlockedXor64_HLERelease"
  - "_InterlockedXor8_acq"
  - "_InterlockedXor64_acq"
  - "_InterlockedXor64_rel"
  - "_InterlockedXor64_nf"
  - "_InterlockedXor_acq"
  - "_InterlockedXor16"
  - "_InterlockedXor64_np"
  - "_InterlockedXor64"
  - "_InterlockedXor_HLEAcquire"
  - "_InterlockedXor_HLERelease"
  - "_InterlockedXor_cpp"
  - "_InterlockedXor16_rel"
  - "_InterlockedXor8_rel"
  - "_InterlockedXor8"
  - "_InterlockedXor64_HLEAcquire"
  - "_InterlockedXor16_nf"
  - "_InterlockedXor16_acq"
  - "_InterlockedXor16_np"
  - "_InterlockedXor8_fn"
  - "_InterlockedXor8_np"
  - "_InterlockedXor64_cpp"
  - "_InterlockedXor_rel"
  - "_InterlockedXor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione intrinseca _InterlockedXor"
  - "funzione intrinseca _InterlockedXor64"
  - "funzione intrinseca InterlockedXor"
  - "funzione intrinseca InterlockedXor64"
ms.assetid: faef1796-cb5a-4430-b1e2-9d5eaf9b4a91
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Funzioni intrinseche _InterlockedXor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Eseguire un'operazione atomica esclusiva bit per bit o \(XOR\) su una variabile condivisa da più thread.  
  
## Sintassi  
  
```  
long _InterlockedXor(    long volatile * Value,    long Mask ); long _InterlockedXor_acq(    long volatile * Value,    long Mask ); long _InterlockedXor_HLEAcquire(    long volatile * Value,    long Mask ); long _InterlockedXor_HLERelease(    long volatile * Value,    long Mask ); long _InterlockedXor_nf(    long volatile * Value,    long Mask ); long _InterlockedXor_np(    long volatile * Value,    long Mask ); long _InterlockedXor_rel(    long volatile * Value,    long Mask ); char _InterlockedXor8(    char volatile * Value,    char Mask ); char _InterlockedXor8_acq(    char volatile * Value,    char Mask ); char _InterlockedXor8_nf(    char volatile * Value,    char Mask ); char _InterlockedXor8_np(    char volatile * Value,    char Mask ); char _InterlockedXor8_rel(    char volatile * Value,    char Mask ); short _InterlockedXor16(    short volatile * Value,    short Mask ); short _InterlockedXor16_acq(    short volatile * Value,    short Mask ); short _InterlockedXor16_nf (    short volatile * Value,    short Mask ); short _InterlockedXor16_np (    short volatile * Value,    short Mask ); short _InterlockedXor16_rel(    short volatile * Value,    short Mask ); __int64 _InterlockedXor64(    __int64 volatile * Value,    __int64 Mask ); __int64 _InterlockedXor64_acq(    __int64 volatile * Value,    __int64 Mask );  __int64 _InterlockedXor64_HLEAcquire(    __int64 volatile * Value,    __int64 Mask ); __int64 _InterlockedXor64_HLERelease(    __int64 volatile * Value,    __int64 Mask );  __int64 _InterlockedXor64_nf(    __int64 volatile * Value,    __int64 Mask ); __int64 _InterlockedXor64_np(    __int64 volatile * Value,    __int64 Mask ); __int64 _InterlockedXor64_rel(    __int64 volatile * Value,    __int64 Mask );  
```  
  
#### Parametri  
 \[in, out\] `Value`  
 Puntatore al primo operando, da sostituire con il risultato.  
  
 \[in\] `Mask`  
 Secondo operando.  
  
## Valore restituito  
 Valore originale del primo operando.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|-------------------------|------------------|------------|  
|`_InterlockedXor`, `_InterlockedXor8`, `_InterlockedXor16`, `_InterlockedXor64`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_InterlockedXor_acq`, `_InterlockedXor_nf`, `_InterlockedXor_rel`, `_InterlockedXor8_acq`, `_InterlockedXor8_nf`, `_InterlockedXor8_rel`, `_InterlockedXor16_acq`, `_InterlockedXor16_nf`, `_InterlockedXor16_rel`, `_InterlockedXor64_acq`, `_InterlockedXor64_nf`, `_InterlockedXor64_rel`,|ARM|\<intrin.h\>|  
|`_InterlockedXor_np`, `_InterlockedXor8_np`, `_InterlockedXor16_np`, `_InterlockedXor64_np`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_InterlockedXor_HLEAcquire`, `_InterlockedXor_HLERelease`, `_InterlockedXor64_HLEAcquire`, `_InterlockedXor64_HLERelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h\>|  
  
## Note  
 Il numero nel nome di ogni funzione specifica la dimensione in bit degli argomenti.  
  
 Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica.  Le funzioni intrinseche ARM con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 Le funzioni intrinseche con suffisso `_np` \("nessuna prelettura"\) impediscono l'inserimento di una possibile operazione di prelettura da parte del compilatore.  
  
 Sulle piattaforme Intel che supportano le istruzioni HLE \(Hardware Lock Elision\), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware.  Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.  
  
## Esempio  
  
```  
// _InterLockedXor.cpp  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_InterlockedXor)  
  
int main()  
{  
        long data1 = 0xFF00FF00;  
        long data2 = 0x00FFFF00;  
        long retval;  
        retval = _InterlockedXor(&data1, data2);  
        printf_s("0x%x 0x%x 0x%x", data1, data2, retval);   
}  
```  
  
  **0xffff0000 0xffff00 0xff00ff00**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)