---
title: Limitazioni ai gestori di eccezioni
ms.date: 11/04/2016
helpviewer_keywords:
- restrictions, exception handlers
- exception handling [C++], exception handlers
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
ms.openlocfilehash: 1f80cb1574cbfef0783c7e55dcd198dfb822f566
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225904"
---
# <a name="restrictions-on-exception-handlers"></a>Limitazioni ai gestori di eccezioni

La limitazione principale dell'utilizzo dei gestori di eccezioni nel codice è che non è possibile utilizzare un' **`goto`** istruzione per passare a un blocco di istruzioni **__try** . È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È possibile uscire da un blocco di istruzioni **__try** e annidare i gestori delle eccezioni come si sceglie.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
