---
title: "_InterlockedAddLargeStatistic | Microsoft Docs"
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
  - "_InterlockedAddLargeStatistic"
  - "_InterlockedAddLargeStatistic_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_InterlockedAddLargeStatistic (funzione intrinseca)"
  - "InterlockedAddLargeStatistic (funzione intrinseca)"
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _InterlockedAddLargeStatistic
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Esegue una somma collegata in cui il primo operando è un valore a 64 bit.  
  
## Sintassi  
  
```  
long _InterlockedAddLargeStatistic(  
   __int64 volatile * Addend,  
   long Value  
);  
```  
  
#### Parametri  
 \[in, out\] `Addend`  
 Un puntatore al primo operando con l'operazione di aggiunta.  Il valore fa riferimento a viene sostituito dal risultato dell'addizione.  
  
 \[in\] `Value`  
 il secondo operando; valore da aggiungere al primo operando.  
  
## Valore restituito  
 Il valore del secondo operando.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_InterlockedAddLargeStatistic`|x86|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca non è atomica perché viene implementata come due istruzioni bloccate separate.  Un 64 bit atomico di lettura che si verifica su un altro thread durante l'esecuzione di questa funzione intrinseca potrebbe provocare un valore incoerente che viene letto.  
  
 questa funzione si comporta come barriera di lettura e scrittura.  Per ulteriori informazioni, vedere [più \_ReadWriteBarrier](../intrinsics/readwritebarrier.md).  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)