---
title: "Errore del compilatore C2374 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2374"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2374"
ms.assetid: 73b51965-e91c-4e21-9732-f71c1449d22e
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2374
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': ridefinizione. Inizializzazione multipla  
  
 L'identificatore viene inizializzato più volte.  
  
 L'esempio seguente genera l'errore C2374:  
  
```  
// C2374.cpp // compile with: /c int i = 0; int i = 1;   // C2374 int j = 1;   // OK  
```