---
title: Restrizioni relative ai gestori di eccezioni
ms.date: 11/04/2016
helpviewer_keywords:
- restrictions, exception handlers
- exception handling [C++], exception handlers
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
ms.openlocfilehash: 54bf4a44d06eacd22dc4b9819d160d3c6a66c684
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179081"
---
# <a name="restrictions-on-exception-handlers"></a>Restrizioni relative ai gestori di eccezioni

La limitazione principale dell'utilizzo dei gestori di eccezioni nel codice è che non è possibile utilizzare un'istruzione **goto** per passare a un blocco di istruzioni **__try** . È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È possibile uscire da un blocco di istruzioni **__try** e annidare i gestori delle eccezioni come si sceglie.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
