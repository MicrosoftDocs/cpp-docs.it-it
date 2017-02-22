---
title: "Funzioni intrinseche _InterlockedAnd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_InterlockedAnd_rel"
  - "_InterlockedAnd_cpp"
  - "_InterlockedAnd8_nf"
  - "_InterlockedAnd"
  - "_InterlockedAnd_HLERelease"
  - "_InterlockedAnd8_np"
  - "_InterlockedAnd16_rel"
  - "_InterlockedAnd64_np"
  - "_InterlockedAnd_np"
  - "_InterlockedAnd64_HLERelease"
  - "_InterlockedAnd64"
  - "_InterlockedAnd64_nf"
  - "_InterlockedAnd64_HLEAcquire"
  - "_InterlockedAnd16"
  - "_InterlockedAnd16_nf"
  - "_InterlockedAnd8"
  - "_InterlockedAnd_HLEAcquire"
  - "_InterlockedAnd_acq"
  - "_InterlockedAnd16_np"
  - "_InterlockedAnd64_cpp"
  - "_InterlockedAnd64_acq"
  - "_InterlockedAnd16_acq"
  - "_InterlockedAnd8_acq"
  - "_InterlockedAnd64_rel"
  - "_InterlockedAnd_nf"
  - "_InterlockedAnd8_rel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione intrinseca _InterlockedAnd"
  - "funzione intrinseca _InterlockedAnd_acq"
  - "funzione intrinseca _InterlockedAnd_HLEAcquire"
  - "funzione intrinseca _InterlockedAnd_HLERelease"
  - "funzione intrinseca _InterlockedAnd_nf"
  - "funzione intrinseca _InterlockedAnd_np"
  - "funzione intrinseca _InterlockedAnd_rel"
  - "funzione intrinseca _InterlockedAnd16"
  - "funzione intrinseca _InterlockedAnd16_acq"
  - "funzione intrinseca _InterlockedAnd16_nf"
  - "funzione intrinseca _InterlockedAnd16_np"
  - "funzione intrinseca _InterlockedAnd16_rel"
  - "funzione intrinseca _InterlockedAnd64"
  - "funzione intrinseca _InterlockedAnd64_acq"
  - "funzione intrinseca _InterlockedAnd64_HLEAcquire"
  - "funzione intrinseca _InterlockedAnd64_HLERelease"
  - "funzione intrinseca _InterlockedAnd64_nf"
  - "funzione intrinseca _InterlockedAnd64_np"
  - "funzione intrinseca _InterlockedAnd64_rel"
  - "funzione intrinseca _InterlockedAnd8"
  - "funzione intrinseca _InterlockedAnd8_acq"
  - "funzione intrinseca _InterlockedAnd8_nf"
  - "funzione intrinseca _InterlockedAnd8_np"
  - "funzione intrinseca _InterlockedAnd8_rel"
  - "funzione intrinseca InterlockedAnd"
  - "funzione intrinseca InterlockedAnd64"
ms.assetid: ad271dc3-42cd-47d0-9f65-30d5cfeb66fc
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# Funzioni intrinseche _InterlockedAnd
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Usato per eseguire un'operazione atomica con AND bit per bit su una variabile condivisa da più thread.  
  
## Sintassi  
  
```  
long _InterlockedAnd(    long volatile * value,    long mask ); long _InterlockedAnd_acq(    long volatile * value,    long mask ); long _InterlockedAnd_HLEAcquire(    long volatile * value,    long mask ); long _InterlockedAnd_HLERelease(    long volatile * value,    long mask ); long _InterlockedAnd_nf(    long volatile * value,    long mask ); long _InterlockedAnd_np(    long volatile * value,    long mask ); long _InterlockedAnd_rel(    long volatile * value,    long mask ); char _InterlockedAnd8(    char volatile * value,    char mask ); char _InterlockedAnd8_acq(    char volatile * value,    char mask ); char _InterlockedAnd8_nf(    char volatile * value,    char mask ); char _InterlockedAnd8_np(    char volatile * value,    char mask ); char _InterlockedAnd8_rel(    char volatile * value,    char mask ); short _InterlockedAnd16(    short volatile * value,    short mask ); short _InterlockedAnd16_acq(    short volatile * value,    short mask ); short _InterlockedAnd16_nf(    short volatile * value,    short mask ); short _InterlockedAnd16_np(    short volatile * value,    short mask ); short _InterlockedAnd16_rel(    short volatile * value,    short mask ); __int64 _InterlockedAnd64(    __int64 volatile* value,    __int64 mask ); __int64 _InterlockedAnd64_acq(    __int64 volatile* value,    __int64 mask );  __int64 _InterlockedAnd64_HLEAcquire(    __int64 volatile* value,    __int64 mask ); __int64 _InterlockedAnd64_HLERelease(    __int64 volatile* value,    __int64 mask ); __int64 _InterlockedAnd64_nf(    __int64 volatile* value,    __int64 mask ); __int64 _InterlockedAnd64_np(    __int64 volatile* value,    __int64 mask ); __int64 _InterlockedAnd64_rel(    __int64 volatile* value,    __int64 mask );  
```  
  
#### Parametri  
 \[in, out\] `value`  
 Puntatore al primo operando, da sostituire con il risultato.  
  
 \[in\] `mask`  
 Secondo operando.  
  
## Valore restituito  
 Valore originale del primo operando.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|-------------------------|------------------|------------|  
|`_InterlockedAnd`, `_InterlockedAnd8`, `_InterlockedAnd16`, `_InterlockedAnd64`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_InterlockedAnd_acq`, `_InterlockedAnd_nf`, `_InterlockedAnd_rel`, `_InterlockedAnd8_acq`, `_InterlockedAnd8_nf`, `_InterlockedAnd8_rel`, `_InterlockedAnd16_acq`, `_InterlockedAnd16_nf`, `_InterlockedAnd16_rel`, `_InterlockedAnd64_acq`, `_InterlockedAnd64_nf`, `_InterlockedAnd64_rel`|ARM|\<intrin.h\>|  
|`_InterlockedAnd_np`, `_InterlockedAnd8_np`, `_InterlockedAnd16_np`, `_InterlockedAnd64_np`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
|`_InterlockedAnd_HLEAcquire`, `_InterlockedAnd_HLERelease`, `_InterlockedAnd64_HLEAcquire`, `_InterlockedAnd64_HLERelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h\>|  
  
## Note  
 Il numero nel nome di ogni funzione specifica la dimensione in bit degli argomenti.  
  
 Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica.  Le funzioni intrinseche con suffisso `_nf` \("nessun limite"\) non fungono da barriera di memoria.  
  
 Le funzioni intrinseche con suffisso `_np` \("nessuna prelettura"\) impediscono l'inserimento di una possibile operazione di prelettura da parte del compilatore.  
  
 Sulle piattaforme Intel che supportano le istruzioni HLE \(Hardware Lock Elision\), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware.  Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.  
  
## Esempio  
  
```  
// InterlockedAnd.cpp  
// Compile with: /Oi  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_InterlockedAnd)  
  
int main()  
{  
        long data1 = 0xFF00FF00;  
        long data2 = 0x00FFFF00;  
        long retval;  
        retval = _InterlockedAnd(&data1, data2);  
        printf_s("0x%x 0x%x 0x%x", data1, data2, retval);   
}  
```  
  
  **0xff00 0xffff00 0xff00ff00**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)