---
title: "__addfsbyte, __addfsword, __addfsdword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__addfsbyte_cpp"
  - "__addfsdword"
  - "__addfsword_cpp"
  - "__addfsbyte"
  - "__addfsword"
  - "__addfsdword_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__addfsdword (funzione intrinseca)"
  - "__addfsword (funzione intrinseca)"
  - "__addfsbyte (funzione intrinseca)"
ms.assetid: 706c70df-6b52-4401-9268-2977ed8ad715
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# __addfsbyte, __addfsword, __addfsdword
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Aggiungere un valore a una posizione di memoria specificata da un offset relativo all'inizio del segmento di `FS` .  
  
## Sintassi  
  
```  
void __addfsbyte(   
   unsigned long Offset,   
   unsigned char Data   
);  
void __addfsword(   
   unsigned long Offset,   
   unsigned short Data   
);  
void __addfsdword(   
   unsigned long Offset,   
   unsigned long Data   
);  
```  
  
#### Parametri  
 \[in\] `Offset`  
 L'offset dall'inizio di `FS`.  
  
 \[in\] `Data`  
 Il valore da aggiungere alla posizione di memoria.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__addfsbyte`|x86|  
|`__addfsword`|x86|  
|`__addfsdword`|x86|  
  
## Note  
 Queste procedure sono disponibili solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_incfsbyte, \_\_incfsword, \_\_incfsdword](../intrinsics/incfsbyte-incfsword-incfsdword.md)   
 [\_\_readfsbyte, \_\_readfsdword, \_\_readfsqword, \_\_readfsword](../intrinsics/readfsbyte-readfsdword-readfsqword-readfsword.md)   
 [\_\_writefsbyte, \_\_writefsdword, \_\_writefsqword, \_\_writefsword](../intrinsics/writefsbyte-writefsdword-writefsqword-writefsword.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)