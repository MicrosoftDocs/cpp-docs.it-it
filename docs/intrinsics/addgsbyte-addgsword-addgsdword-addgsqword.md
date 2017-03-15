---
title: "__addgsbyte, __addgsword, __addgsdword, __addgsqword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__addgsdword"
  - "__addgsqword"
  - "__addgsword_cpp"
  - "__addgsword"
  - "__addgsbyte_cpp"
  - "__addgsqword_cpp"
  - "__addgsbyte"
  - "__addgsdword_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__addgsword (funzione intrinseca)"
  - "__addgsqword (funzione intrinseca)"
  - "__addgsdword (funzione intrinseca)"
  - "__addgsbyte (funzione intrinseca)"
ms.assetid: 4fa03e69-d849-49ed-ba37-1d3aa23c2a21
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# __addgsbyte, __addgsword, __addgsdword, __addgsqword
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Aggiungere un valore a una posizione di memoria specificata da un offset relativo all'inizio del segmento di `GS` .  
  
## Sintassi  
  
```  
void __addgsbyte(   
   unsigned long Offset,   
   unsigned char Data   
);  
void __addgsword(   
   unsigned long Offset,   
   unsigned short Data   
);  
void __addgsdword(   
   unsigned long Offset,   
   unsigned long Data   
);  
void __addgsqword(   
   unsigned long Offset,   
   unsigned __int64 Data   
);  
```  
  
#### Parametri  
 \[in\] `Offset`  
 L'offset dall'inizio di `GS`.  
  
 \[in\] `Data`  
 Il valore da aggiungere alla posizione di memoria.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__addgsbyte`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__addgsword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__addgsdword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__addgsqword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
## Note  
 Queste funzioni intrinseche disponibili in modalità kernel solo e le routine sono disponibili solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_incgsbyte, \_\_incgsword, \_\_incgsdword, \_\_incgsqword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)   
 [\_\_readgsbyte, \_\_readgsdword, \_\_readgsqword, \_\_readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)   
 [\_\_writegsbyte, \_\_writegsdword, \_\_writegsqword, \_\_writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)