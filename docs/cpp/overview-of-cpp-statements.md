---
title: Cenni preliminari sulle istruzioni C++
ms.date: 11/04/2016
helpviewer_keywords:
- statements [C++]
ms.assetid: e56996b2-b846-4b99-ac94-ac72fffc5ec7
ms.openlocfilehash: d6bd6b5bb7ba4b83fbed63a40fecc8194cb3707a
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88832425"
---
# <a name="overview-of-c-statements"></a>Cenni preliminari sulle istruzioni C++

Le istruzioni di C++ vengono eseguite in sequenza, tranne quando un'istruzione di espressione, un'istruzione di selezione, un'istruzione di iterazione o un'istruzione di salto modifica in modo specifico tale sequenza.

Le istruzioni possono essere dei seguenti tipi:

> *`labeled-statement`*\
> *`expression-statement`*\
> *`compound-statement`*\
> *`selection-statement`*\
> *`iteration-statement`*\
> *`jump-statement`*\
> *`declaration-statement`*\
> *`try-throw-catch`*

Nella maggior parte dei casi, la sintassi dell'istruzione C++ è identica a quella di ANSI C89. La differenza principale tra i due è che in C89 le dichiarazioni sono consentite solo all'inizio di un blocco; In C++ è stato aggiunto *`declaration-statement`* , che rimuove in modo efficace questa restrizione. Ciò consente di immettere variabili in un punto del programma in cui un valore di inizializzazione precalcolato può essere calcolato.

La dichiarazione di variabili all'interno di blocchi consente inoltre di esercitare controllo preciso sull'ambito e la durata di tali variabili.

Gli articoli sulle istruzioni descrivono le seguenti parole chiave di C++:

:::row:::
   :::column span="":::
      [`break`](../cpp/break-statement-cpp.md)\
      [`case`](../cpp/switch-statement-cpp.md)\
      [`catch`](../cpp/try-throw-and-catch-statements-cpp.md)\
      [`continue`](../cpp/continue-statement-cpp.md)\
      [`default`](../cpp/switch-statement-cpp.md)\
      [`do`](../cpp/do-while-statement-cpp.md)
   :::column-end:::
   :::column span="":::
      [`else`](../cpp/if-else-statement-cpp.md)\
      [`__except`](../cpp/structured-exception-handling-c-cpp.md)\
      [`__finally`](../cpp/structured-exception-handling-c-cpp.md)\
      [`for`](../cpp/for-statement-cpp.md)\
      [`goto`](../cpp/goto-statement-cpp.md)
   :::column-end:::
   :::column span="":::
      [`if`](../cpp/if-else-statement-cpp.md)\
      [`__if_exists`](../cpp/if-exists-statement.md)\
      [`__if_not_exists`](../cpp/if-not-exists-statement.md)\
      [`__leave`](../c-language/try-finally-statement-c.md)\
      [`return`](../cpp/return-statement-cpp.md)
   :::column-end:::
   :::column span="":::
      [`switch`](../cpp/switch-statement-cpp.md)\
      [`throw`](../cpp/try-throw-and-catch-statements-cpp.md)\
      [`__try`](../cpp/structured-exception-handling-c-cpp.md)\
      [`try`](../cpp/try-throw-and-catch-statements-cpp.md)\
      [`while`](../cpp/while-statement-cpp.md)
   :::column-end:::
:::row-end:::

## <a name="see-also"></a>Vedere anche

[Istruzioni](../cpp/statements-cpp.md)
