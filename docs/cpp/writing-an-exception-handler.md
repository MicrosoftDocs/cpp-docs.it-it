---
description: 'Altre informazioni su: scrittura di un gestore di eccezioni'
title: Scrittura di un gestore di eccezioni
ms.date: 11/04/2016
helpviewer_keywords:
- structured exception handling [C++], exception handlers
- exception handling [C++], exception handlers
ms.assetid: 71473fee-f773-4a34-bf12-82a3af79579c
ms.openlocfilehash: 174ab77240fc405e7c1175806167b6ec68f08c82
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302803"
---
# <a name="writing-an-exception-handler"></a>Scrittura di un gestore di eccezioni

I gestori di eccezioni vengono in genere utilizzati per risolvere errori specifici. È possibile utilizzare la sintassi relativa alla gestione delle eccezioni per filtrare le eccezioni diverse da quelle che si è in grado di gestire. Le altre eccezioni devono essere passate ad altri gestori (possibilmente nella libreria di runtime o nel sistema operativo) progettati in modo da cercare tali eccezioni specifiche.

I gestori delle eccezioni utilizzano l'istruzione try-except.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Istruzione try-except](../cpp/try-except-statement.md)

- [Scrittura di un filtro eccezioni](../cpp/writing-an-exception-filter.md)

- [Generazione di eccezioni software](../cpp/raising-software-exceptions.md)

- [Eccezioni hardware](../cpp/hardware-exceptions.md)

- [Limitazioni ai gestori di eccezioni](../cpp/restrictions-on-exception-handlers.md)

## <a name="see-also"></a>Vedi anche

[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
