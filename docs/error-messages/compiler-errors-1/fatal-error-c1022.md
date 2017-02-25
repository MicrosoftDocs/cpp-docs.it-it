---
title: "Errore irreversibile C1022 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1022"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1022"
ms.assetid: edada720-dc73-49bc-bd93-a7945a316312
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore irreversibile C1022
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

previsto \#endif  
  
 Una direttiva `#if`, `#ifdef` o `#ifndef` non corrisponde ad alcuna direttiva `#endif`. Verificare che ogni `#if`, `#ifdef` o `#ifndef` abbia un oggetto `#endif` corrispondente.  
  
 L'esempio seguente genera l'errore C1022:  
  
```  
// C1022.cpp #define true 1 #if (true) #else #else    // C1022  
```  
  
 Possibile soluzione:  
  
```  
// C1022b.cpp // compile with: /c #define true 1 #if (true) #else #endif  
```