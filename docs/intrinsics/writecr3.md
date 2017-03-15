---
title: "__writecr3 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_writecr3"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_writecr3 (funzione intrinseca)"
ms.assetid: 959d49fa-69d5-47cf-88d2-7688367fe38f
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# __writecr3
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scrive il valore `Data` nel log CR3.  
  
## Sintassi  
  
```  
void writecr3(   
   unsigned __int64 Data   
);  
```  
  
#### Parametri  
 \[in\] `Data`  
 Il valore da scrivere nel log CR3.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__writecr3`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)