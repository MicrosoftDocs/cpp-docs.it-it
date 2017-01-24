---
title: "__writefsbyte, __writefsdword, __writefsqword, __writefsword | Microsoft Docs"
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
  - "__writefsword"
  - "__writefsbyte"
  - "__writefsqword"
  - "__writefsdword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "writefsbyte (funzione intrinseca)"
  - "__writefsword (funzione intrinseca)"
  - "writefsqword (funzione intrinseca)"
  - "writefsdword (funzione intrinseca)"
  - "__writefsdword (funzione intrinseca)"
  - "__writefsqword (funzione intrinseca)"
  - "__writefsbyte (funzione intrinseca)"
  - "writefsword (funzione intrinseca)"
ms.assetid: 23ac6e8e-bc91-4e90-a4c6-da02993637ad
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __writefsbyte, __writefsdword, __writefsqword, __writefsword
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scrivere la memoria a una posizione specificata da un offset relativo all'inizio del segmento di definizione.  
  
## Sintassi  
  
```  
void __writefsbyte(   
   unsigned long Offset,   
   unsigned char Data   
);  
void __writefsword(   
   unsigned long Offset,   
   unsigned short Data   
);  
void __writefsdword(   
   unsigned long Offset,   
   unsigned long Data   
);  
void __writefsqword(   
   unsigned long Offset,   
   unsigned __int64 Data   
);  
```  
  
#### Parametri  
 \[in\] `Offset`  
 L'offset dall'inizio di definizione da scrivere.  
  
 \[in\] `Data`  
 Valore da scrivere.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__writefsbyte`|x86|  
|`__writefsword`|x86|  
|`__writefsdword`|x86|  
|`__writefsqword`|x86|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Queste procedure sono disponibili solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_readfsbyte, \_\_readfsdword, \_\_readfsqword, \_\_readfsword](../intrinsics/readfsbyte-readfsdword-readfsqword-readfsword.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)