---
title: Restrizioni relative ai gestori di eccezioni
ms.date: 11/04/2016
helpviewer_keywords:
- restrictions, exception handlers
- exception handling [C++], exception handlers
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
ms.openlocfilehash: 030d444443b3a6e3e2e0ac0e015619046a76d562
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74245152"
---
# <a name="restrictions-on-exception-handlers"></a>Restrizioni relative ai gestori di eccezioni

La limitazione principale dell'utilizzo dei gestori di eccezioni nel codice è che non è possibile utilizzare un'istruzione **goto** per passare a un blocco di istruzioni **__try** . È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È possibile uscire da un blocco di istruzioni **__try** e annidare i gestori delle eccezioni come si sceglie.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)