---
title: "__readfsbyte, __readfsdword, __readfsqword, __readfsword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__readfsword"
  - "__readfsdword"
  - "__readfsbyte"
  - "__readfsqword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readfsword (funzione intrinseca)"
  - "readfsword (funzione intrinseca)"
  - "__readfsdword (funzione intrinseca)"
  - "readfsbyte (funzione intrinseca)"
  - "__readfsbyte (funzione intrinseca)"
  - "readfsdword (funzione intrinseca)"
  - "readfsqword (funzione intrinseca)"
  - "__readfsqword (funzione intrinseca)"
ms.assetid: f6ee7203-4179-402c-a464-0746c84ce6ac
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# __readfsbyte, __readfsdword, __readfsqword, __readfsword
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Memoria letti da una posizione specificata da un offset relativo all'inizio del segmento di definizione.  
  
## Sintassi  
  
```  
unsigned char __readfsbyte(   
   unsigned long Offset   
);  
unsigned short __readfsword(   
   unsigned long Offset   
);  
unsigned long __readfsdword(   
   unsigned long Offset  
);  
unsigned __int64 __readfsqword(   
   unsigned long Offset   
);  
```  
  
#### Parametri  
 \[in\] `Offset`  
 L'offset dall'inizio di `FS` da leggere.  
  
## Valore restituito  
 Il contenuto della memoria di byte, della parola, i primi quattro byte, o del quadword \(come indicato dal nome della funzione chiamata\) nella posizione `FS:[``Offset``]`.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__readfsbyte`|x86|  
|`__readfsdword`|x86|  
|`__readfsqword`|x86|  
|`__readfsword`|x86|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Queste procedure sono disponibili solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_writefsbyte, \_\_writefsdword, \_\_writefsqword, \_\_writefsword](../intrinsics/writefsbyte-writefsdword-writefsqword-writefsword.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)