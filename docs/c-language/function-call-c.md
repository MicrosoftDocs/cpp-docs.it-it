---
title: Chiamata di funzione (C) | Microsoft Docs
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
- function calls, C functions
- functions [C], calling
- function calls
ms.assetid: 35c66719-3f15-4d3b-97da-4e19dc97b308
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
ms.openlocfilehash: a86b3e45b5a5ce8c681fe267b7de8386b5fbc5c2
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="function-call-c"></a>Chiamata di funzione (C)
Una "chiamata di funzione" è un'espressione che include il nome della funzione chiamata o il valore di un puntatore a funzione e, facoltativamente, gli argomenti passati alla funzione.  
  
## <a name="syntax"></a>Sintassi  
 *postfix-expression*:  
 *postfix-expression*  **(**  *argument-expression-list* opt**)**  
  
 *argument-expression-list*:  
 *assignment-expression*  
  
 *argument-expression-list*  **,**  *assignment-expression*  
  
 L'elemento *postfix-expression* deve restituire un indirizzo di funzione (ad esempio un identificatore di funzione o il valore di un puntatore a funzione) e *argument-expression-list* è un elenco di espressioni separate da virgole i cui valori, detti anche "argomenti", vengono passati alla funzione. L'argomento *argument-expression-list* può essere vuoto.  
  
 Un'espressione chiamata-funzione ha il valore e il tipo del valore restituito della funzione. Una funzione non può restituire un oggetto di tipo matrice. Se il tipo restituito della funzione è `void` (ovvero se non è mai stato dichiarato che la funzione restituisca un valore), l'espressione function-call dispone anche del tipo `void`. Per altre informazioni, vedere [Chiamate di funzione](../c-language/function-calls.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore di chiamata di funzione: ()](../cpp/function-call-operator-parens.md)
