---
title: Istruzione do-while (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- do
- while
dev_langs:
- C++
helpviewer_keywords:
- do-while keyword [C]
ms.assetid: f2ac20a6-10c7-4a08-b5e3-c3b3639dbeaf
caps.latest.revision: 7
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
ms.openlocfilehash: 9ea9e9c4cfdf57709cd125f8269657d37393cc61
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="do-while-statement-c"></a>Istruzione do-while (C)
L'istruzione `do-while` consente di ripetere un'istruzione o un'istruzione composta fino a quando un'espressione specificata non restituisce false.  
  
## <a name="syntax"></a>Sintassi  
 *iteration-statement*:  
 **do**  *statement*  **while (**  *expression*  **) ;**  
  
 L'elemento *expression* in un'istruzione `do-while` viene valutato dopo l'esecuzione del corpo del ciclo. Di conseguenza, il corpo del ciclo viene eseguito sempre almeno una volta.  
  
 *expression* deve presentare un tipo di puntatore o un tipo aritmetico. L'esecuzione procede nel modo seguente:  
  
1.  Viene eseguito il corpo dell'istruzione.  
  
2.  Viene quindi valutato *expression*. Se *expression* è false, l'istruzione `do-while` termina e il controllo passa all'istruzione successiva nel programma. Se *expression* è true (diverso da zero), il processo viene ripetuto a partire dal passaggio 1.  
  
 L'istruzione `do-while` può terminare anche quando un'istruzione **break**, `goto` o `return` viene eseguita nel corpo dell'istruzione.  
  
 Di seguito, un esempio dell'istruzione `do-while`:  
  
```  
do   
{  
    y = f( x );  
    x--;  
} while ( x > 0 );  
```  
  
 In questa istruzione `do-while`, le due istruzioni `y = f( x );` e `x--;` vengono eseguite, indipendentemente dal valore iniziale di `x`. Quindi `x > 0` viene valutato. Se `x` è maggiore di 0, il corpo dell'istruzione viene eseguito di nuovo e `x > 0` viene rivalutato. Il corpo dell'istruzione viene eseguito ripetutamente finché `x` rimane maggiore di 0. L'esecuzione dell'istruzione `do-while` termina quando `x` diventa 0 o negativo. Il corpo del ciclo viene eseguito almeno una volta.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)
