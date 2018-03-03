---
title: Istruzione continue (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- continue
dev_langs:
- C++
helpviewer_keywords:
- loop structures, continue keyword
- continue keyword [C]
ms.assetid: 969f293a-45fe-48a7-b4c6-287ba27a631d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cdf4d877ef1b88826d66e36a7ce24fdcff2cb348
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="continue-statement-c"></a>Istruzione continue (C)
L'istruzione `continue` passa il controllo all'iterazione successiva in cui è visualizzata e che si trova nell'istruzione di inclusione `do`, `for` o `while` più vicina, ignorando qualunque altra istruzione presente nel corpo dell'istruzione `do`, `for` o `while`.  
  
## <a name="syntax"></a>Sintassi  
 `jump-statement`:  
 `continue;`  
  
 La successiva iterazione di un'istruzione `do`, `for` o `while` viene determinata come segue:  
  
-   All'interno di un'istruzione `do` o `while`, l'iterazione successiva inizia rivalutando l'espressione dell'istruzione `do` o `while`.  
  
-   Un'istruzione `continue` in un'istruzione `for` provoca la valutazione dell'espressione loop dell'istruzione `for`. In seguito il compilatore rivaluta l'espressione condizionale e, a seconda del risultato, termina o ripete il corpo dell'istruzione. Vedere [Istruzione for](../c-language/for-statement-c.md) per altre informazioni sull'istruzione `for` e sui non terminali corrispondenti.  
  
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
  
 In questo esempio, il corpo dell'istruzione viene eseguito finché `i` è maggiore di 0. Il primo `f(i)` viene assegnato a `x`; quindi, se `x` è uguale a 1, l'istruzione `continue` viene eseguita. Le restanti istruzioni presenti nel corpo vengono ignorate e l'esecuzione riprende dall'inizio del ciclo con la valutazione del test del ciclo.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzione continue](../cpp/continue-statement-cpp.md)