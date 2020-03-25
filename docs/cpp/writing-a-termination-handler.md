---
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
ms.openlocfilehash: 8a243281e0d984a42cd4b4d9f249d867812d8bca
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187310"
---
# <a name="writing-a-termination-handler"></a>Scrittura di un gestore di terminazione

A differenza di un gestore eccezioni, un gestore terminazioni viene eseguito sempre, indipendentemente dal fatto che il blocco di codice protetto venga terminato normalmente o meno. L'unico obiettivo del gestore terminazioni deve essere di assicurarsi che le risorse, quali memoria, handle e file, vengano chiuse correttamente, indipendentemente da come una sezione di codice completa l'esecuzione.

I gestori terminazioni utilizzano l'istruzione try-finally.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Istruzione try-finally](../cpp/try-finally-statement.md)

- [Pulizia delle risorse](../cpp/cleaning-up-resources.md)

- [Tempistica delle azioni nella gestione delle eccezioni](../cpp/timing-of-exception-handling-a-summary.md)

- [Restrizioni relative ai gestori di terminazione](../cpp/restrictions-on-termination-handlers.md)

## <a name="see-also"></a>Vedere anche

[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
