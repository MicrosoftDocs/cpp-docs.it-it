---
description: 'Altre informazioni su: corpo della funzione'
title: Corpo della funzione
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C], syntax
- variables, function syntax
- function definitions, function body
- function body
ms.assetid: f7e74822-fac8-4dc8-8f3a-2b1611da4640
ms.openlocfilehash: 098a759a8fd4fd9ab69e487ab84f7ed7d0d2c25c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195983"
---
# <a name="function-body"></a>Corpo della funzione

Un *corpo di funzione* è un'istruzione composta che contiene le istruzioni che specificano ciò che svolge la funzione.

## <a name="syntax"></a>Sintassi

*definizione di funzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\**attribute-seq* è specifico di Microsoft\*/

*compound-statement*:/ \* corpo della funzione \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *declaration-list*<sub>opz</sub> *Statement-list*<sub>opt</sub> **}**

Le variabili dichiarate in un corpo della funzione, note come *variabili locali*, hanno una **`auto`** classe di archiviazione, se non diversamente specificato. Quando la funzione viene chiamata, l'archiviazione viene creata per le variabili locali e le inizializzazioni locali vengono eseguite. Il controllo dell'esecuzione passa alla prima istruzione in *compound-statement* e continua fino a quando non **`return`** viene eseguita un'istruzione o viene rilevata la fine del corpo della funzione. Il controllo ritorna quindi al punto in cui la funzione è stata chiamata.

Un' **`return`** istruzione contenente un'espressione deve essere eseguita se la funzione deve restituire un valore. Il valore restituito di una funzione non è definito se nessuna **`return`** istruzione viene eseguita o se l' **`return`** istruzione non include un'espressione.

## <a name="see-also"></a>Vedi anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
