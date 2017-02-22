---
title: "Errore irreversibile C1070 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1070"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1070"
ms.assetid: 1058269a-5db6-4c23-a97f-b5269eb9188b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore irreversibile C1070
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

coppia \#if\/\#endif non corrispondente nel file 'filename'  
  
 Una direttiva `#if`, `#ifdef` o `#ifndef` non ha un oggetto `#endif` corrispondente.  
  
 L'esempio seguente genera l'errore C1070:  
  
```  
// C1070.cpp #define TEST #ifdef TEST #ifdef TEST #endif // C1070  
```  
  
 Possibile soluzione:  
  
```  
// C1070b.cpp // compile with: /c #define TEST #ifdef TEST #endif #ifdef TEST #endif  
```