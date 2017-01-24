---
title: "Avviso del compilatore (livello 1) C4138 | Microsoft Docs"
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
  - "C4138"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4138"
ms.assetid: 65ebf929-bba0-4237-923b-c1b66adfe17d
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4138
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

trovato '\*\/' all'esterno di un commento  
  
 Il delimitatore di chiusura commento non è preceduto da un delimitatore di apertura commento. Il compilatore prevede la presenza di uno spazio tra l'asterisco \(**\***\) e la barra \(\/\).  
  
## Esempio  
  
```  
// C4138a.cpp // compile with: /W1 int */*comment*/ptr;   // C4138 Ambiguous first delimiter causes warning int main() { }  
```  
  
 Questo avviso può derivare dal tentativo di annidare commenti.  
  
 Per risolvere l'avviso, è possibile impostare come commento le sezioni di codice che contengono commenti, racchiudere il codice in un blocco **\#if\/\#endif** e impostare l'espressione di controllo su zero:  
  
```  
// C4138b.cpp // compile with: /W1 #if 0 int my_variable;   /* Declaration currently not needed */ #endif int main() { }  
```