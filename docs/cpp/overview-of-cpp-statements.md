---
title: Cenni preliminari sulle istruzioni C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- statements [C++]
ms.assetid: e56996b2-b846-4b99-ac94-ac72fffc5ec7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c8836f3c82ea21d2ef22ccd3439dff3644380678
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46030443"
---
# <a name="overview-of-c-statements"></a>Cenni preliminari sulle istruzioni C++

Le istruzioni di C++ vengono eseguite in sequenza, tranne quando un'istruzione di espressione, un'istruzione di selezione, un'istruzione di iterazione o un'istruzione di salto modifica in modo specifico tale sequenza.

Le istruzioni possono essere dei seguenti tipi:

```
labeled-statement
expression-statement
compound-statement
selection-statement
iteration-statement
jump-statement
declaration-statement
try-throw-catch
```

Nella maggior parte dei casi, la sintassi dell'istruzione C++ è identica a quella ANSI C. La differenza principale tra i due è che in C, le dichiarazioni sono consentite solo all'inizio di un blocco; C++ consente di aggiungere il *istruzione di dichiarazione*, che rimuove in modo efficace questa restrizione. Ciò consente di immettere variabili in un punto del programma in cui un valore di inizializzazione precalcolato può essere calcolato.

La dichiarazione di variabili all'interno di blocchi consente inoltre di esercitare controllo preciso sull'ambito e la durata di tali variabili.

Gli argomenti sulle istruzioni descrivono le seguenti parole chiave C++:

|||||
|-|-|-|-|
|[break](../cpp/break-statement-cpp.md)|[else](../cpp/if-else-statement-cpp.md)|[if_exists](../cpp/if-exists-statement.md)|[__try](../cpp/structured-exception-handling-c-cpp.md)|
|[case](../cpp/switch-statement-cpp.md)|[__except](../cpp/structured-exception-handling-c-cpp.md)|[if_not_exists](../cpp/if-not-exists-statement.md)|[try](../cpp/try-throw-and-catch-statements-cpp.md)|
|[catch](../cpp/try-throw-and-catch-statements-cpp.md)|[for](../cpp/for-statement-cpp.md)|[__leave](../c-language/try-finally-statement-c.md)|[while](../cpp/while-statement-cpp.md)|
|[continue](../cpp/continue-statement-cpp.md)|[goto](../cpp/goto-statement-cpp.md)|[return](../cpp/return-statement-cpp.md)||
|[default](../cpp/switch-statement-cpp.md)|[__finally](../cpp/structured-exception-handling-c-cpp.md)|[switch](../cpp/switch-statement-cpp.md)||
|[do](../cpp/do-while-statement-cpp.md)|[if](../cpp/if-else-statement-cpp.md)|[throw](../cpp/try-throw-and-catch-statements-cpp.md)||

## <a name="see-also"></a>Vedere anche

[Istruzioni](../cpp/statements-cpp.md)