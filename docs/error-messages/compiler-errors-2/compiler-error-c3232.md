---
title: "Errore del compilatore C3232 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3232"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3232"
ms.assetid: 3119b3a9-0eff-4a3f-b805-e4d160af9e39
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3232
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'param': impossibile utilizzare un parametro di tipo generico in un nome completo  
  
 Un parametro di tipo generico è stato usato in modo non corretto.  
  
 L'esempio seguente genera l'errore C3232:  
  
```  
// C3232.cpp // compile with: /clr generic <class T> ref class C { typename T::TYPE t;   // C3232 };  
```