---
title: "Chiamata di funzione (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "chiamate di funzione"
  - "chiamate di funzione, funzioni C"
  - "funzioni [C], chiamata"
ms.assetid: 35c66719-3f15-4d3b-97da-4e19dc97b308
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Chiamata di funzione (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una "chiamata di funzione" è un'espressione che include il nome della funzione chiamata o il valore di un puntatore a funzione e, facoltativamente, gli argomenti passati alla funzione.  
  
## Sintassi  
 *postfix\-expression*:  
 *postfix\-expression*  **\(**  *argument\-expression\-list*  opt **\)**  
  
 *argument\-expression\-list*:  
 *assignment\-expression*  
  
 *argument\-expression\-list*  **,**  *assignment\-expression*  
  
 L'elemento *postfix\-expression* deve restituire un indirizzo della funzione \(ad esempio un identificatore di funzione o il valore di un puntatore a funzione\) e *argument\-expression\-list* è un elenco di espressioni separate da virgole, i cui valori \("argomenti"\) vengono passati alla funzione.  L'argomento *argument\-expression\-list* può essere vuoto.  
  
 Un'espressione chiamata\-funzione ha il valore e il tipo del valore restituito della funzione.  Una funzione non può restituire un oggetto di tipo matrice.  Se il tipo restituito della funzione è `void` \(ovvero se non è mai stato dichiarato che la funzione restituisca un valore\), l'espressione function\-call dispone anche del tipo `void`. \(Vedere [Chiamate di funzione](../c-language/function-calls.md) per ulteriori informazioni\).  
  
## Vedere anche  
 [Operatore di chiamata di funzione: \(\)](../cpp/function-call-operator-parens.md)