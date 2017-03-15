---
title: "__readcr8 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__readcr8"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readcr8 (funzione intrinseca)"
ms.assetid: fce16953-87ff-4fbe-8081-7962b97ae46c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# __readcr8
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Legge il log CR8 e restituisce il valore.  
  
## Sintassi  
  
```  
unsigned __int64 __readcr8(void);  
```  
  
## Valore restituito  
 Il valore nel registro CR8.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__readcr8`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)