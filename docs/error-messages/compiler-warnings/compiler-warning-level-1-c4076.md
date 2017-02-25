---
title: "Avviso del compilatore (livello 1) C4076 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4076"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4076"
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4076
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'typemod': non può essere utilizzato con il tipo 'typename'  
  
 Non è possibile usare un modificatore di tipo, **signed** o `unsigned`, con un tipo non intero.***typemod*** viene ignorato.  
  
## Esempio  
 L'esempio seguente genera l'errore C4076:  
  
```  
// C4076.cpp // compile with: /W1 /LD unsigned double x;   // C4076  
```