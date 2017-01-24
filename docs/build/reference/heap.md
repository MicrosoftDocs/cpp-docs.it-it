---
title: "/HEAP | Microsoft Docs"
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
  - "/heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocazione di heap, impostazione delle dimensioni heap"
  - "HEAP (opzione editbin)"
  - "-HEAP (opzione editbin)"
  - "/HEAP (opzione editbin)"
ms.assetid: 6ce759b5-75b7-44ff-a5fd-3a83a0ba9a48
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /HEAP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di impostare la dimensione in byte dell'heap.  Questa opzione si applica solo ai file eseguibili.  
  
```  
  
/HEAP:  
reserve[,commit]  
  
```  
  
## Note  
 L'argomento `reserve` specifica l'allocazione totale iniziale per l'heap nella memoria virtuale.  Per impostazione predefinita, la dimensione dell'heap è 1 MB.  [Riferimenti a EDITBIN](../../build/reference/editbin-reference.md) arrotonda il valore specificato al multiplo più vicino di 4 byte.  
  
 L'argomento facoltativo `commit` viene interpretato nel sistema operativo.  In un sistema operativo Windows, specifica la quantità iniziale di memoria fisica da allocare e la quantità di memoria aggiuntiva da allocare quando l'heap deve essere espanso.  Vincolando memoria virtuale viene riservato spazio nel file di paging.  Un valore `commit` superiore consente al sistema di allocare la memoria meno spesso quando l'applicazione richiede più spazio nell'heap ma incrementa i requisiti di memoria ed eventualmente la durata di avvio dell'applicazione.  Il valore `commit` deve essere minore di o uguale al valore `reserve`.  
  
 Specificare i valori `commit` e `reserve` in notazione decimale o esadecimale del linguaggio C o ottale.  Ad esempio, un valore di 1 MB può essere specificato come 1048576 in decimal, o come 0x100000 esadecimale, o come 04000000 in ottale.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)