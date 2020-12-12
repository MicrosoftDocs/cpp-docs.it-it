---
description: 'Altre informazioni su: scrittura di un gestore di terminazione'
title: Scrittura di un gestore di terminazione
ms.date: 11/04/2016
helpviewer_keywords:
- structured exception handling [C++], termination handlers
- exceptions [C++], terminating
- termination handlers [C++], writing
- handlers [C++]
- handlers [C++], termination
- termination handlers
- exception handling [C++], termination handlers
- try-catch keyword [C++], termination handlers
ms.assetid: 52aa1f8f-f8dd-44b8-be94-5e2fc88d44fb
ms.openlocfilehash: a203cab7d61be66c5fe919aefe1895aa0928c5d9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302985"
---
# <a name="writing-a-termination-handler"></a>Scrittura di un gestore di terminazione

A differenza di un gestore eccezioni, un gestore terminazioni viene eseguito sempre, indipendentemente dal fatto che il blocco di codice protetto venga terminato normalmente o meno. L'unico obiettivo del gestore terminazioni deve essere di assicurarsi che le risorse, quali memoria, handle e file, vengano chiuse correttamente, indipendentemente da come una sezione di codice completa l'esecuzione.

I gestori terminazioni utilizzano l'istruzione try-finally.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Istruzione try-finally](../cpp/try-finally-statement.md)

- [Pulizia delle risorse](../cpp/cleaning-up-resources.md)

- [Tempi delle azioni nella gestione delle eccezioni](../cpp/timing-of-exception-handling-a-summary.md)

- [Limitazioni ai gestori di terminazione](../cpp/restrictions-on-termination-handlers.md)

## <a name="see-also"></a>Vedi anche

[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
