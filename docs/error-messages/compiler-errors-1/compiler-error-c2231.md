---
title: "Errore del compilatore C2231 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2231"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2231"
ms.assetid: 677c5c66-d30f-4c3b-bbb9-760858d56477
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2231
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'.': l'operando sinistro punta a 'class\-key'. Utilizzare '–\>'  
  
 L'operando a sinistra dell'operazione di selezione del membro \(.\) è un puntatore e non una classe, una struttura o un'unione.  
  
 L'esempio seguente genera l'errore C2231:  
  
```  
// C2231.c struct S { int member; } s, *ps = &s; int main() { ps.member = 0;   // C2231 // OK ps->member = 0;   // crash s.member = 0; }  
```