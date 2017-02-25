---
title: "Istruzione continue (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "continue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "continue (parola chiave) [C]"
  - "cicli (strutture), continue (parola chiave)"
ms.assetid: 969f293a-45fe-48a7-b4c6-287ba27a631d
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Istruzione continue (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `continue` passa il controllo all'iterazione successiva in cui è visualizzata e che si trova nell'istruzione di inclusione `do`, `for` o `while` più vicina, ignorando qualunque altra istruzione presente nel corpo dell'istruzione `do`, `for` o `while`.  
  
## Sintassi  
 `jump-statement`:  
 `continue;`  
  
 La successiva iterazione di un'istruzione `do`, `for` o `while` viene determinata come segue:  
  
-   All'interno di un'istruzione `while` o `do`, l'iterazione successiva inizia rivalutando l'espressione dell'istruzione `while` o `do`.  
  
-   Un'istruzione `continue` in un'istruzione `for` provoca la valutazione dell'espressione loop dell'istruzione `for`.  In seguito il compilatore rivaluta l'espressione condizionale e, a seconda del risultato, termina o ripete il corpo dell'istruzione.  Vedere [L'istruzione for](../c-language/for-statement-c.md) per ulteriori informazioni sull'istruzione `for` e sui relativi non terminali.  
  
 Di seguito, un esempio dell'istruzione `continue`:  
  
```  
while ( i-- > 0 )   
{  
    x = f( i );  
    if ( x == 1 )  
        continue;  
    y += x * x;  
}  
```  
  
 In questo esempio, il corpo dell'istruzione viene eseguito finché `i` è maggiore di 0.  Il primo `f(i)` viene assegnato a `x`; quindi, se `x` è uguale a 1, l'istruzione `continue` viene eseguita.  Le restanti istruzioni presenti nel corpo vengono ignorate e l'esecuzione riprende dall'inizio del ciclo con la valutazione del test del ciclo.  
  
## Vedere anche  
 [Istruzione continue](../cpp/continue-statement-cpp.md)