---
title: Scrittura di un gestore di terminazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 85241d9dde87e929b02328a6e7d0c75b5ce068ef
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116230"
---
# <a name="writing-a-termination-handler"></a>Scrittura di un gestore di terminazione

A differenza di un gestore eccezioni, un gestore terminazioni viene eseguito sempre, indipendentemente dal fatto che il blocco di codice protetto venga terminato normalmente o meno. L'unico obiettivo del gestore terminazioni deve essere di assicurarsi che le risorse, quali memoria, handle e file, vengano chiuse correttamente, indipendentemente da come una sezione di codice completa l'esecuzione.

I gestori terminazioni utilizzano l'istruzione try-finally.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Istruzione try-finally](../cpp/try-finally-statement.md)

- [Pulizia delle risorse](../cpp/cleaning-up-resources.md)

- [Tempi delle azioni nella gestione delle eccezioni](../cpp/timing-of-exception-handling-a-summary.md)

- [Limitazioni ai gestori di terminazione](../cpp/restrictions-on-termination-handlers.md)

## <a name="see-also"></a>Vedere anche

[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)