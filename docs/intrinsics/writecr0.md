---
title: "__writecr0 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_writecr0"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_writecr0 (funzione intrinseca)"
ms.assetid: a143d08d-0333-4e1b-91b4-4acb2ae91b5a
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# __writecr0
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scrive il valore `Data` nel log CR0.  
  
## Sintassi  
  
```  
void writecr0(   
   unsigned __int64 Data   
);  
```  
  
#### Parametri  
 \[in\] `Data`  
 Il valore da scrivere nel log CR0.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__writecr0`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)