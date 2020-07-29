---
title: Chiamata di funzione (C)
ms.date: 11/04/2016
helpviewer_keywords:
- function calls, C functions
- functions [C], calling
- function calls
ms.assetid: 35c66719-3f15-4d3b-97da-4e19dc97b308
ms.openlocfilehash: 23531f25128fc267caa3a3cad5f2c52e603a2cc6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229688"
---
# <a name="function-call-c"></a>Chiamata di funzione (C)

Una *chiamata di funzione* è un'espressione che include il nome della funzione chiamata o il valore di un puntatore a funzione e, facoltativamente, gli argomenti passati alla funzione.

## <a name="syntax"></a>Sintassi

*suffisso-espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **(**  *argument-expression-list*<sub>opt</sub> **)**

*argument-expression-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assegnazione-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*argument-expression-list* **,** *assignment-expression*

L'elemento *postfix-expression* deve restituire un indirizzo di funzione (ad esempio un identificatore di funzione o il valore di un puntatore a funzione) e *argument-expression-list* è un elenco di espressioni separate da virgole i cui valori, detti anche "argomenti", vengono passati alla funzione. L'argomento *argument-expression-list* può essere vuoto.

Un'espressione chiamata-funzione ha il valore e il tipo del valore restituito della funzione. Una funzione non può restituire un oggetto di tipo matrice. Se il tipo restituito della funzione è **`void`** (ovvero, la funzione è stata dichiarata mai per restituire un valore), l'espressione di chiamata di funzione dispone anche del **`void`** tipo. Per altre informazioni, vedere [Chiamate di funzione](../c-language/function-calls.md).

## <a name="see-also"></a>Vedere anche

[Operatore di chiamata di funzione: ()](../cpp/function-call-operator-parens.md)
