---
title: "__readeflags | Microsoft Docs"
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
  - "__readeflags"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readeflags (funzione intrinseca)"
ms.assetid: f9d2f4d8-c428-491f-b8de-04d0566b2b6b
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __readeflags
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Legge il log dello stato e del controllo del programma \(EFLAGS\).  
  
## Sintassi  
  
```  
unsigned     int __readeflags(void);  
unsigned __int64 __readeflags(void);  
```  
  
## Valore restituito  
 Il valore del registro di EFLAGS.  Il valore restituito è lunga lunga 32 bit su una piattaforma a 32 bit e a 64 bit su una piattaforma a 64 bit.  
  
## Note  
 Queste procedure sono disponibili solo come intrinseci.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__readeflags`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_writeeflags](../intrinsics/writeeflags.md)