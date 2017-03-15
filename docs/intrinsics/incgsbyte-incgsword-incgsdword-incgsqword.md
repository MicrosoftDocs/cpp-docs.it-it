---
title: "__incgsbyte, __incgsword, __incgsdword, __incgsqword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__incgsdword"
  - "__incgsqword_cpp"
  - "__incgsword_cpp"
  - "__incgsword"
  - "__incgsbyte"
  - "__incgsbyte_cpp"
  - "__incgsqword"
  - "__incgsdword_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__incgsbyte (funzione intrinseca)"
  - "__incgsword (funzione intrinseca)"
  - "__incgsqword (funzione intrinseca)"
  - "__incgsdword (funzione intrinseca)"
ms.assetid: 06bfdf4f-7643-4fe0-8455-60ce3068073e
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# __incgsbyte, __incgsword, __incgsdword, __incgsqword
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Aggiungerne uno al valore in una posizione di memoria specificata da un offset relativo all'inizio del segmento di `GS` .  
  
## Sintassi  
  
```  
void __incgsbyte(   
   unsigned long Offset   
);  
void __incgsword(   
   unsigned long Offset   
);  
void __incgsdword(   
   unsigned long Offset  
);  
void __incgsqword(   
   unsigned long Offset   
);  
```  
  
#### Parametri  
 \[in\] `Offset`  
 L'offset dall'inizio di `GS`.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__incgsbyte`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__incgsword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__incgsdword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__incgsqword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
## Note  
 Queste intrinseci sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_addgsbyte, \_\_addgsword, \_\_addgsdword, \_\_addgsqword](../intrinsics/addgsbyte-addgsword-addgsdword-addgsqword.md)   
 [\_\_readgsbyte, \_\_readgsdword, \_\_readgsqword, \_\_readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)   
 [\_\_writegsbyte, \_\_writegsdword, \_\_writegsqword, \_\_writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)