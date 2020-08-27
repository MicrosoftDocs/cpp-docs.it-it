---
title: Limitazioni ai gestori di eccezioni
description: Vengono descritte le restrizioni relative al passaggio a blocchi di gestione delle eccezioni strutturate.
ms.date: 08/24/2020
helpviewer_keywords:
- restrictions, exception handlers
- exception handling [C++], exception handlers
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
ms.openlocfilehash: c4182f065789533bf7599621d8d2829b2d52d6ed
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898453"
---
# <a name="restrictions-on-exception-handlers"></a>Limitazioni ai gestori di eccezioni

La limitazione principale dell'utilizzo dei gestori di eccezioni nel codice è che non è possibile utilizzare un' **`goto`** istruzione per passare a un **`__try`** blocco di istruzioni. È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È possibile uscire da un **`__try`** blocco di istruzioni ed è possibile annidare i gestori delle eccezioni come si sceglie.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
