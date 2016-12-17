---
title: "__writedr | Microsoft Docs"
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
  - "__writedr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__writedr (funzione intrinseca)"
ms.assetid: ac55c1ee-df2f-41d4-a429-6f369d2a934d
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __writedr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Scrive il valore specificato nel log specificato di debug.  
  
## Sintassi  
  
```  
void __writedr(unsigned DebugRegister, unsigned DebugValue);  
void __writedr(unsigned DebugRegister, unsigned __int64 DebugValue);  
```  
  
#### Parametri  
 \[in\] `DebugRegister`  
 Un numero da 0 a 7 che identifica il log di debug.  
  
 \[in\]`DebugValue`  
 Un valore da scrivere nel log di debug.  
  
## Note  
 Queste intrinseci sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__writedr`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_readdr](../intrinsics/readdr.md)