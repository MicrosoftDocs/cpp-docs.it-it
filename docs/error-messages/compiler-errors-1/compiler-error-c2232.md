---
title: "Errore del compilatore C2232 | Microsoft Docs"
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
  - "C2232"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2232"
ms.assetid: 76f302b7-30a7-4a81-9a39-b4edde33b54c
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2232
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'–\>': l'operando sinistro ha il tipo 'class\-key'. Utilizzare '.'  
  
 L'operando a sinistra dell'operatore `->` non è un puntatore. Usare il punto \(.\) per una classe, una struttura o un'unione.  
  
 L'esempio seguente genera l'errore C2232:  
  
```  
// C2232.c struct X { int member; } x, *px; int main() { x->member = 0;   // C2232, x is not a pointer px->member = 0; x.member = 0; }  
```