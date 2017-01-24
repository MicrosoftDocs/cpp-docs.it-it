---
title: "Errore del compilatore C3075 | Microsoft Docs"
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
  - "C3075"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3075"
ms.assetid: f431daa9-e0fa-48f0-a5c3-f99be96b55e3
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3075
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'instance': impossibile incorporare un'istanza di un tipo riferimento, 'type', in un tipo di valore  
  
 Un tipo valore non può contenere un'istanza di un tipo riferimento.  
  
 Per altre informazioni, vedere [Semantica dello stack C\+\+ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3075.  
  
```  
// C3075.cpp // compile with: /clr /c ref struct U {}; value struct X { U y;   // C3075 }; ref struct Y { U y;   // OK };  
```