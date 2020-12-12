---
description: 'Altre informazioni su: chiamata di funzione (C)'
title: Chiamata di funzione (C)
ms.date: 11/04/2016
helpviewer_keywords:
- function calls, C functions
- functions [C], calling
- function calls
ms.assetid: 35c66719-3f15-4d3b-97da-4e19dc97b308
ms.openlocfilehash: 7ebe8ded3e64f7b636aaf438ee2bff8e4f221610
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195970"
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

## <a name="see-also"></a>Vedi anche

[Operatore di chiamata di funzione: ()](../cpp/function-call-operator-parens.md)
