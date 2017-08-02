---
title: Operatori logici C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- logical operators, expression sequence points
- logical operators, C
- logical AND operator
- '|| operator'
- operators [C], logical
- short-circuit evaluation
- '&& operator'
- logical OR operator
ms.assetid: c0a4e766-ad56-4300-bf76-b28dc0e19b43
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 91df7af4322fc3fd8022542ffeb0c6b7b2d2e087
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="c-logical-operators"></a>Operatori logici C
Gli operatori logici eseguono operazioni AND logico (**&&**) e OR logico (`||`).  
  
 **Sintassi**  
  
 *logical-AND-expression*:  
 *inclusive-OR-expression*  
  
 *logical-AND-expression*  **&&**  *inclusive-OR-expression*  
  
 *logical-OR-expression*:  
 *logical-AND-expression*  
  
 *logical-OR-expression*  **&#124;&#124;**  *logical-AND-expression*  
  
 Gli operatori logici non eseguono le conversioni aritmetiche comuni. Al contrario, tali operatori valutano ogni operando in termini di equivalenza con 0. Il risultato di un'operazione logica può essere 0 o 1. Il tipo del risultato è `int`.  
  
 Gli operatori logici C sono descritti di seguito:  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|**&&**|L'operatore AND logico produce il valore 1 se entrambi gli operandi hanno valori diversi da zero. Se uno degli operandi è uguale a 0 il risultato è 0. Se il primo operando di un'operazione AND logico è uguale a 0 il secondo operando non viene valutato.|  
|`&#124;&#124;`|L'operatore AND logico esegue un'operazione inclusive-OR sui propri operandi. Se entrambi gli operandi hanno valore 0 il risultato è 0. Se uno degli operandi ha un valore diverso da zero il risultato è 1. Se il primo operando di un'operazione OR logico ha un valore diverso da 0 il secondo operando non viene valutato.|  
  
 Gli operandi delle espressioni AND logico e OR logico vengono valutati da sinistra a destra. Se il valore del primo operando è sufficiente per determinare il risultato dell'operazione, il secondo operando non viene valutato. Questa condizione viene denominata anche "valutazione short circuit". Dopo il primo operando è presente un punto di sequenza. Per altre informazioni, vedere [Punti di sequenza](../c-language/c-sequence-points.md).  
  
## <a name="examples"></a>Esempi  
 Gli esempi seguenti visualizzano gli operatori logici:  
  
```  
int w, x, y, z;  
  
if ( x < y && y < z )  
    printf( "x is less than z\n" );  
```  
  
 In questo esempio la funzione `printf` viene chiamata per la stampa di un messaggio se `x` è minore di `y` e `y` è minore di `z`. Se `x` è maggiore di `y` il secondo operando (`y < z`) non viene valutato e non viene eseguita nessuna operazione di stampa. Si noti che ciò può causare problemi se il secondo operando ha effetti collaterali ai quali si fa riferimento per altri motivi.  
  
```  
printf( "%d" , (x == w || x == y || x == z) );  
```  
  
 In questo esempio se `x` è uguale a `w`, `y` o `z`, il secondo argomento della funzione `printf` restituisce true e viene stampato il valore 1. In caso contrario, restituisce false e il valore 0 viene formattato. Appena una delle condizioni restituisce true, la restituzione viene interrotta.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore AND logico (&&)](../cpp/logical-and-operator-amp-amp.md)   
 [Operatore OR logico: &#124;&#124;](../cpp/logical-or-operator-pipe-pipe.md)
