---
title: Istruzione continue (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- continue
dev_langs:
- C++
helpviewer_keywords:
- loop structures, continue keyword
- continue keyword [C]
ms.assetid: 969f293a-45fe-48a7-b4c6-287ba27a631d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0f474d24bd6057165a50cc6edaca5db5462f6459
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32383550"
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