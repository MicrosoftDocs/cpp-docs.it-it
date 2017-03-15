---
title: "__readgsbyte, __readgsdword, __readgsqword, __readgsword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__readgsbyte"
  - "__readgsdword"
  - "__readgsqword"
  - "__readgsword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readgsword (funzione intrinseca)"
  - "__readgsdword (funzione intrinseca)"
  - "__readgsqword (funzione intrinseca)"
  - "__readgsbyte (funzione intrinseca)"
ms.assetid: f822632d-854c-4558-a71b-cdfc3eea2236
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# __readgsbyte, __readgsdword, __readgsqword, __readgsword
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Memoria letti da una posizione specificata da un offset relativo all'inizio del segmento di GS.  
  
## Sintassi  
  
```  
unsigned char __readgsbyte(   
   unsigned long Offset   
);  
unsigned short __readgsword(   
   unsigned long Offset   
);  
unsigned long __readgsdword(   
   unsigned long Offset  
);  
unsigned __int64 __readgsqword(   
   unsigned long Offset   
);  
```  
  
#### Parametri  
 \[in\] `Offset`  
 L'offset dall'inizio di `GS` da leggere.  
  
## Valore restituito  
 Il contenuto della memoria di byte, della parola, in doppia parola, o del quadword \(come indicato dal nome della funzione chiamata\) nella posizione `GS:[``Offset``]`.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__readgsbyte`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__readgsdword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__readgsqword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__readgsword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Queste intrinseci sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_writegsbyte, \_\_writegsdword, \_\_writegsqword, \_\_writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)