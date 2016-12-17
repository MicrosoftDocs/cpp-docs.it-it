---
title: "_disable | Microsoft Docs"
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
  - "_disable_cpp"
  - "_disable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_disable intrinsic"
  - "disable intrinsic"
  - "rsm instruction"
ms.assetid: 52da3df9-815c-4524-9839-6d1742cff5c6
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _disable
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Disabilita gli interrupt.  
  
## Sintassi  
  
```  
void _disable(void);  
```  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`_disable`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 `_disable` indica al processore di deselezionare il flag di interrupt.  Su sistemi x86, questa funzione genera l'istruzione Clear Interrupt Flag \(`cli`\).  
  
 Questa funzione è disponibile solo in modalità kernel.  Se usato in modalità utente, viene generata un'eccezione istruzione privilegiata in fase di esecuzione.  
  
 Su piattaforme ARM, questa routine è disponibile solo come un intrinseco.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)