---
title: Chiamata di funzione (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- function calls, C functions
- functions [C], calling
- function calls
ms.assetid: 35c66719-3f15-4d3b-97da-4e19dc97b308
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 49c9483cb6e556d5a8b174377c0dad666834c9e5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32384359"
---
# <a name="function-call-c"></a>Chiamata di funzione (C)
Una "chiamata di funzione" è un'espressione che include il nome della funzione chiamata o il valore di un puntatore a funzione e, facoltativamente, gli argomenti passati alla funzione.  
  
## <a name="syntax"></a>Sintassi  
 *postfix-expression*:  
 *postfix-expression*  **(**  *argument-expression-list* opt **)**  
  
 *argument-expression-list*:  
 *assignment-expression*  
  
 *argument-expression-list*  **,**  *assignment-expression*  
  
 L'elemento *postfix-expression* deve restituire un indirizzo di funzione (ad esempio un identificatore di funzione o il valore di un puntatore a funzione) e *argument-expression-list* è un elenco di espressioni separate da virgole i cui valori, detti anche "argomenti", vengono passati alla funzione. L'argomento *argument-expression-list* può essere vuoto.  
  
 Un'espressione chiamata-funzione ha il valore e il tipo del valore restituito della funzione. Una funzione non può restituire un oggetto di tipo matrice. Se il tipo restituito della funzione è `void` (ovvero se non è mai stato dichiarato che la funzione restituisca un valore), l'espressione function-call dispone anche del tipo `void`. Per altre informazioni, vedere [Chiamate di funzione](../c-language/function-calls.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore di chiamata di funzione: ()](../cpp/function-call-operator-parens.md)