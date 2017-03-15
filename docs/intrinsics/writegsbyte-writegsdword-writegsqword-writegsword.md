---
title: "__writegsbyte, __writegsdword, __writegsqword, __writegsword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__writegsbyte"
  - "__writegsqword"
  - "__writegsdword"
  - "__writegsword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__writegsqword (funzione intrinseca)"
  - "__writegsbyte (funzione intrinseca)"
  - "__writegsword (funzione intrinseca)"
  - "__writegsdword (funzione intrinseca)"
ms.assetid: 7746cf6d-2259-4139-9aab-c07dd75c8037
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# __writegsbyte, __writegsdword, __writegsqword, __writegsword
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scrivere la memoria a una posizione specificata da un offset relativo all'inizio del segmento di GS.  
  
## Sintassi  
  
```  
void __writegsbyte(   
   unsigned long Offset,   
   unsigned char Data   
);  
void __writegsword(   
   unsigned long Offset,   
   unsigned short Data   
);  
void __writegsdword(   
   unsigned long Offset,   
   unsigned long Data   
);  
void __writegsqword(   
   unsigned long Offset,   
   unsigned __int64 Data   
);  
```  
  
#### Parametri  
 \[in\] `Offset`  
 L'offset dall'inizio del GS da scrivere.  
  
 \[in\] `Data`  
 Valore da scrivere.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__writegsbyte`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__writegsdword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__writegsqword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`__writegsword`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Queste funzioni intrinseche disponibili in modalità kernel solo e le routine sono disponibili solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_\_readgsbyte, \_\_readgsdword, \_\_readgsqword, \_\_readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)