---
title: Cenni preliminari sulle istruzioni C
ms.date: 11/04/2016
helpviewer_keywords:
- semicolon, in C statements
- statements, C
- semicolon
- statements, about statements
- Visual C, statements
ms.assetid: 0d49837a-5399-4881-b60c-af5f4e9720de
ms.openlocfilehash: 906beb7c5c2edfc448daadb1f4c5a111f7877b91
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613720"
---
# <a name="overview-of-c-statements"></a>Cenni preliminari sulle istruzioni C

Le istruzioni C sono costituite da token, espressioni e altre istruzioni. Un'istruzione che costituisce parte di un'altra istruzione viene chiamata corpo dell'istruzione di inclusione. In questa sezione viene illustrato ogni tipo di istruzione indicato dalla sintassi seguente.

## <a name="syntax"></a>Sintassi

*statement*: [labeled-statement](../c-language/goto-and-labeled-statements-c.md)

[compound-statement](../c-language/compound-statement-c.md)

[expression-statement](../c-language/expression-statement-c.md)

[selection-statement](../c-language/if-statement-c.md)

[iteration-statement](../c-language/do-while-statement-c.md)

[jump-statement](../c-language/break-statement-c.md)

[try-except-statement](../c-language/try-except-statement-c.md)

/* Specifica di Microsoft \*/[try-finally-statement](../c-language/try-finally-statement-c.md) /\* Specifica di Microsoft \*/

Il corpo dell'istruzione è spesso un'istruzione composta costituita da altre istruzioni che possono includere parole chiave. L'istruzione composta è racchiusa tra parentesi graffe (**{ }**). Tutte le altre istruzioni in linguaggio C terminano con un punto e virgola (**;**). Il punto e virgola è un terminatore dell'istruzione.

L'istruzione di espressione include un'espressione C che può contenere gli operatori aritmetici o logici presentati in [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md). L'istruzione null è un'istruzione vuota.

Qualsiasi istruzione C può iniziare con un'etichetta di identificazione costituita da un nome e da due punti. Poiché solo l'istruzione `goto` riconosce le etichette di istruzione, queste ultime vengono discusse con `goto`. Per altre informazioni, vedere [Istruzioni goto e con etichetta](../c-language/goto-and-labeled-statements-c.md).

## <a name="see-also"></a>Vedere anche

[Istruzioni](../c-language/statements-c.md)