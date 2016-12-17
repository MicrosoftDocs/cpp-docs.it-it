---
title: "INCLUDELIB (MASM) | Microsoft Docs"
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
  - "INCLUDELIB"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "INCLUDELIB directive"
ms.assetid: 5455d004-8202-4b57-93f3-9aa66f133a2d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# INCLUDELIB (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Notifica al linker che il modulo corrente deve essere collegato con *libraryname*.  
  
## Sintassi  
  
```  
  
INCLUDELIB libraryname  
```  
  
## Note  
 *libraryname* deve essere racchiuso tra parentesi acute se include una barra rovesciata, un punto e virgola, un simbolo maggiore di, un simbolo minore di., una virgoletta, o virgolette doppie.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)