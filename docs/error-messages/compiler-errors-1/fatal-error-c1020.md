---
title: "Errore irreversibile C1020 | Microsoft Docs"
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
  - "C1020"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1020"
ms.assetid: 42f429e2-5e3b-4086-a10d-b99e032e51c5
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1020
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#endif imprevisto  
  
 La direttiva `#endif` non corrisponde ad alcuna direttiva `#if`, `#ifdef` o `#ifndef`. Verificare che a ogni `#endif` corrisponda una direttiva.  
  
 L'esempio seguente genera l'errore C1020:  
  
```  
// C1020.cpp #endif     // C1020  
```  
  
 Possibile soluzione:  
  
```  
// C1020b.cpp // compile with: /c #if 1 #endif  
```