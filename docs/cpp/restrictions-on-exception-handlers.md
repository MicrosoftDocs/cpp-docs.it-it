---
title: Limitazioni ai gestori di eccezioni
ms.date: 11/04/2016
helpviewer_keywords:
- restrictions, exception handlers
- exception handling [C++], exception handlers
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
ms.openlocfilehash: 7d5bf20da61f4b9f5012b7f2aab932dfc904c302
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50573992"
---
# <a name="restrictions-on-exception-handlers"></a>Limitazioni ai gestori di eccezioni

La limitazione principale nell'utilizzo di gestori di eccezioni nel codice è che è possibile utilizzare un **goto** istruzione di passare in un **try** blocco di istruzioni. È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È possibile passare direttamente su un **try** istruzione blocca e annidare i gestori di eccezioni che vuoi.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)