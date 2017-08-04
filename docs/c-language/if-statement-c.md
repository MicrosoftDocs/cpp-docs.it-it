---
title: Istruzione if (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- else
- if
dev_langs:
- C++
helpviewer_keywords:
- if keyword [C]
- else clauses
- else keyword [C]
- if keyword [C], if statement syntax
- nested statements
ms.assetid: d7fc16a0-fdbc-4f39-b596-76e1ca4ad4a5
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
ms.openlocfilehash: 91da64a12f687063e65dd2045709a9b65bb93f0c
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="if-statement-c"></a>Istruzione if (C)
L'istruzione **if** controlla la creazione condizionale di rami. Il corpo di un'istruzione **if** viene eseguito se il valore dell'espressione è diverso da zero. La sintassi dell'istruzione **if** presenta due formati.  
  
## <a name="syntax"></a>Sintassi  
 *selection-statement*:  
 **if (**  *expression*  **)**  *statement*  
  
 **if (**  *expression*  **)**  *statement*  **else**  *statement*  
  
 In entrambi i formati dell'istruzione **if** vengono valutate le espressioni (che possono avere qualsiasi valore salvo una struttura), inclusi tutti gli effetti collaterali.  
  
 Nel primo formato della sintassi se *expression* è true (diversa da zero), l'istruzione *statement* viene eseguita. Se *expression* è false, *statement* viene ignorata. Nel secondo formato della sintassi, che usa **else**, la seconda istruzione *statement* viene eseguita se *expression* è false. Con entrambi i formati il controllo passa quindi dall'istruzione **if** all'istruzione successiva nel programma, a meno che una delle istruzioni contenga **break**, **continue** o `goto`.  
  
 Di seguito sono illustrati esempi dell'istruzione **if**:  
  
```  
if ( i > 0 )  
    y = x / i;  
else   
{  
    x = i;  
    y = f( x );  
}  
```  
  
 In questo esempio, l'istruzione `y = x/i;` viene eseguita se `i` è maggiore di 0. Se `i` è minore o uguale a 0, `i` viene assegnato a `x` e `f( x )` viene assegnato a `y`. Si noti che l'istruzione che costituisce la clausola **if** termina con un punto e virgola.  
  
 Quando si annidano istruzioni **if** e clausole **else** usare le parentesi graffe per raggruppare istruzioni e clausole in istruzioni composte che chiariscono lo scopo dell'operazione. Se non sono presenti parentesi graffe, il compilatore risolve le ambiguità associando ogni clausola **else** all'istruzione **if** più vicina priva di **else**.  
  
```  
if ( i > 0 )           /* Without braces */  
    if ( j > i )  
        x = j;  
    else  
        x = i;  
```  
  
 In questo esempio la clausola **else** viene associata all'istruzione **if** interna. Se `i` è minore o uguale a 0, nessun valore viene assegnato a `x`.  
  
```  
if ( i > 0 )   
{                      /* With braces */  
    if ( j > i )  
        x = j;  
}  
else  
    x = i;  
```  
  
 In questo esempio le parentesi graffe relative all'istruzione interna **if** rendono la clausola **else** parte dell'istruzione **if** esterna. Se `i` è minore o uguale a 0, `i` viene assegnato a `x`.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzione if-else (C++)](../cpp/if-else-statement-cpp.md)
