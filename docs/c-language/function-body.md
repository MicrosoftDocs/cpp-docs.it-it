---
title: Corpo della funzione
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C], syntax
- variables, function syntax
- function definitions, function body
- function body
ms.assetid: f7e74822-fac8-4dc8-8f3a-2b1611da4640
ms.openlocfilehash: c227640e45943fb57b1029a4f03329241d1d6b34
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56146866"
---
# <a name="function-body"></a>Corpo della funzione

Un *corpo di funzione* è un'istruzione composta che contiene le istruzioni che specificano ciò che svolge la funzione.

## <a name="syntax"></a>Sintassi

*function-definition*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\* *attribute-seq* è specifico di Microsoft \*/

*compound-statement*: /\* Corpo della funzione \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *declaration-list*<sub>opt</sub> *statement-list*<sub>opt</sub> **}**

Se non diversamente specificato, le variabili dichiarate nel corpo di funzione, dette *variabili locali*, hanno la classe di archiviazione **auto**. Quando la funzione viene chiamata, l'archiviazione viene creata per le variabili locali e le inizializzazioni locali vengono eseguite. Il controllo di esecuzione passa alla prima istruzione in *compound-statement* e continua fino a quando non viene eseguita un'istruzione **return** non viene raggiunta la fine del corpo di funzione. Il controllo ritorna quindi al punto in cui la funzione è stata chiamata.

Un'istruzione **return** contenente un'espressione deve essere eseguita se la funzione restituisce un valore. Il valore restituito di una funzione non è definito se nessuna istruzione **return** viene eseguita o se l'istruzione **return** non include un'espressione.

## <a name="see-also"></a>Vedere anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
