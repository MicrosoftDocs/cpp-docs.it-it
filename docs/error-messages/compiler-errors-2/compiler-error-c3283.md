---
title: "Errore del compilatore C3283 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3283"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3283"
ms.assetid: c51d912c-cde3-4928-904e-26734c8954ce
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3283
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': un'interfaccia non può avere un costruttore di istanza  
  
 Un'[interfaccia](../../windows/interface-class-cpp-component-extensions.md) CLR non può avere un costruttore di istanze.  È consentito un costruttore statico.  
  
 L'esempio seguente genera l'errore C3283:  
  
```  
// C3283.cpp // compile with: /clr interface class I { I();   // C3283 };  
```  
  
 Possibile soluzione:  
  
```  
// C3283b.cpp // compile with: /clr /c interface class I { static I(){} };  
```