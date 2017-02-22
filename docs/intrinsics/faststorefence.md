---
title: "__faststorefence | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__faststorefence_cpp"
  - "__faststorefence"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__faststorefence intrinsic"
  - "sfence instruction"
ms.assetid: 6c6eb973-3cf0-4306-b3af-cfde9b0210a5
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# __faststorefence
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Assicura che ogni riferimento precedente alla memoria, inclusi i riferimenti alla memoria di caricamento e di archiviazione, sia visibile globalmente prima di qualsiasi riferimento successivo alla memoria.  
  
## Sintassi  
  
```  
void __faststorefence();  
```  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`__faststorefence`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Genera una sequenza di istruzioni per la barriera di memoria completa che assicura che le operazioni di caricamento e archiviazione rilasciate prima di questa funzione intrinseca siano visibili globalmente prima della continuazione dell'esecuzione.  L'effetto è simile, ma più veloce, a quello della funzione intrinseca `_mm_mfence` su tutte le piattaforme x64.  
  
 Nella piattaforma AMD64 questa routine genera un'istruzione che costituisce un recinto virtuale di archiviazione più rapido rispetto a quello dell'istruzione `sfence`.  Per il codice critico usare questa funzione intrinseca invece di usare `_mm_sfence` solo su piattaforme AMD64.  Su piattaforme Intel x64 l'istruzione `_mm_sfence` risulta più veloce.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)