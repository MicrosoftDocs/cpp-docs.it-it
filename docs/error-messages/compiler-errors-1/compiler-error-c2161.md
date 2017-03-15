---
title: "Errore del compilatore C2161 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2161"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2161"
ms.assetid: d6798821-13bb-4e60-924f-85f7bf955387
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2161
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'\#\#' non può apparire alla fine della definizione di una macro  
  
 Una definizione di macro è terminata con un operatore di concatenamento dei token \(\#\#\).  
  
 L'esempio seguente genera l'errore C2161:  
  
```  
// C2161.cpp // compile with: /c #define mac(a,b) a   // OK #define mac(a,b) a##   // C2161  
```