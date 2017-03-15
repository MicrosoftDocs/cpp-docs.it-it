---
title: "Avviso del compilatore (livello 1) C4630 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4630"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4630"
ms.assetid: d8926376-7acc-4fc7-8438-6f0de3468870
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4630
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': identificatore di classe di archiviazione 'extern' non valido nella definizione di un membro  
  
 Un membro dati o una funzione membro è definita come `extern`.  A differenza degli oggetti interi, i membri non possono essere esterni.  La parola chiave `extern` viene quindi ignorata.  Il seguente codice di esempio genera l'errore C4630:  
  
```  
// C4630.cpp  
// compile with: /W1 /LD  
class A {  
   void func();  
};  
  
extern void A::func() {   // C4630, remove 'extern' to resolve  
}  
```