---
title: Gestione delle eccezioni C++
ms.date: 11/04/2016
helpviewer_keywords:
- C++ exception handling
ms.assetid: 65f80b44-9d0f-4d17-b910-07205a5c5c40
ms.openlocfilehash: bbdec38bf722ebb1e188af408bf3a413f6d6b8b7
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65222153"
---
# <a name="c-exception-handling"></a>Gestione delle eccezioni C++

Il linguaggio C++ fornisce supporto predefinito per la generazione e l'intercettazione delle eccezioni. Durante la programmazione in C++, è quasi sempre necessario usare il supporto predefinito delle eccezioni di C++ come descritto in questa sezione.

Per abilitare la gestione del codice delle eccezioni C++, usare [/EHsc](../build/reference/eh-exception-handling-model.md).

## <a name="in-this-section"></a>In questa sezione

Queste indicazioni sulla gestione delle eccezioni C++ includono:

- [Try, catch e throw istruzioni](../cpp/try-throw-and-catch-statements-cpp.md)

- [Modalità di valutazione dei blocchi catch](../cpp/how-catch-blocks-are-evaluated-cpp.md)

- [Le eccezioni e rimozione dello Stack](../cpp/exceptions-and-stack-unwinding-in-cpp.md)

- [Specifiche di eccezione](../cpp/exception-specifications-throw-cpp.md)

- [noexcept](../cpp/noexcept-cpp.md)

- [Eccezioni C++ non gestite](../cpp/unhandled-cpp-exceptions.md)

- [Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)

## <a name="support-for-earlier-mfc-exceptions"></a>Supporto per eccezioni MFC precedenti

A partire dalla versione 4.0, MFC usa il meccanismo di gestione delle eccezioni C++. Sebbene sia consigliabile utilizzare la gestione delle eccezioni C++ nel nuovo codice, MFC versione 4.0 e successive mantiene le macro delle versioni precedenti in modo da non causare problemi al vecchio codice. Le macro e il nuovo meccanismo possono essere usati insieme. Per informazioni sull'utilizzo combinato delle macro e C++ eccezione Gestione e sulla conversione del vecchio codice per usare il nuovo meccanismo, vedere gli articoli [alle eccezioni: Utilizzo di macro MFC e C++ le eccezioni](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) e [alle eccezioni: Conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md). Le macro delle eccezioni MFC precedenti, se ancora utilizzate, restituiscono parole chiave delle eccezioni C++. Vedere [alle eccezioni: Modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)