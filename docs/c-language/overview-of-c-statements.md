---
description: 'Altre informazioni su: Cenni preliminari sulle istruzioni C'
title: Cenni preliminari sulle istruzioni C
ms.date: 11/04/2016
helpviewer_keywords:
- semicolon, in C statements
- statements, C
- semicolon
- statements, about statements
- Visual C, statements
ms.assetid: 0d49837a-5399-4881-b60c-af5f4e9720de
ms.openlocfilehash: d2d6e7161f63e8508cb7e94d28b7bbafe44146e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243172"
---
# <a name="overview-of-c-statements"></a>Cenni preliminari sulle istruzioni C

Le istruzioni C sono costituite da token, espressioni e altre istruzioni. Un'istruzione che costituisce parte di un'altra istruzione viene chiamata corpo dell'istruzione di inclusione. In questa sezione viene illustrato ogni tipo di istruzione indicato dalla sintassi seguente.

## <a name="syntax"></a>Sintassi

*statement*: [labeled-statement](../c-language/goto-and-labeled-statements-c.md)

[compound-statement](../c-language/compound-statement-c.md)

[expression-statement](../c-language/expression-statement-c.md)

[selection-statement](../c-language/if-statement-c.md)

[iterazione-istruzione](../c-language/do-while-statement-c.md)

[jump-statement](../c-language/break-statement-c.md)

[try-except-Statement](../c-language/try-except-statement-c.md) /* specifico di Microsoft \*/

[try-finally-Statement](../c-language/try-finally-statement-c.md)  / \* Specifiche di Microsoft\*/

Il corpo dell'istruzione è spesso un'istruzione composta costituita da altre istruzioni che possono includere parole chiave. L'istruzione composta è racchiusa tra parentesi graffe (**{ }**). Tutte le altre istruzioni in linguaggio C terminano con un punto e virgola (**;**). Il punto e virgola è un terminatore dell'istruzione.

L'istruzione di espressione include un'espressione C che può contenere gli operatori aritmetici o logici presentati in [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md). L'istruzione null è un'istruzione vuota.

Qualsiasi istruzione C può iniziare con un'etichetta di identificazione costituita da un nome e da due punti. Poiché solo l' **`goto`** istruzione riconosce le etichette di istruzione, le etichette di istruzione vengono discusse con **`goto`** . Per altre informazioni, vedere [Istruzioni goto e con etichetta](../c-language/goto-and-labeled-statements-c.md).

## <a name="see-also"></a>Vedi anche

[Istruzioni](../c-language/statements-c.md)
