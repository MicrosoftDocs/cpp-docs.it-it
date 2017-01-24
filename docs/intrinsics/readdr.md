---
title: "__readdr | Microsoft Docs"
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
  - "__readdr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readdr (funzione intrinseca)"
ms.assetid: 061b05da-c85e-4052-b392-106f14bb84f1
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __readdr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Legge il valore del registro specificato di debug.  
  
## Sintassi  
  
```  
unsigned         __readdr(unsigned int DebugRegister);  
unsigned __int64 __readdr(unsigned int DebugRegister);  
```  
  
#### Parametri  
 \[in\] `DebugRegister`  
 Una costante da 0 a 7 che identifica il log di debug.  
  
## Valore restituito  
 Il valore del registro specificato di debug.  
  
## Note  
 Queste intrinseci sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__readdr`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_readeflags](../intrinsics/readeflags.md)