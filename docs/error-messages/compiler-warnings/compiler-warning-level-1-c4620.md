---
title: "Avviso del compilatore (livello 1) C4620 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4620"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4620"
ms.assetid: fed29934-b797-47e8-bbea-c7e5f8dd6e93
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4620
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nessuna forma suffissa trovata di 'operator \+\+' per il tipo 'type'. Verrà utilizzata la forma prefissa  
  
 Non è stato definito alcun operatore di incremento suffisso per il tipo specificato. Il compilatore ha usato l'operatore prefisso di overload.  
  
 Questo avviso può essere evitato definendo un operatore `++` suffisso. Creare una versione a due argomenti dell'operatore `++` come mostrato di seguito:  
  
```  
// C4620.cpp // compile with: /W1 class A { public: A(int nData) : m_nData(nData) { } A operator++() { m_nData -= 1; return *this; } // A operator++(int) // { //    A tmp = *this; //    m_nData -= 1; //    return tmp; // } private: int m_nData; }; int main() { A a(10); ++a; a++;   // C4620 }  
```