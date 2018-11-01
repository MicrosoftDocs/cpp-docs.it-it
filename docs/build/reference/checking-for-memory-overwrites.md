---
title: Controllo delle sovrascritture di memoria
ms.date: 11/04/2016
helpviewer_keywords:
- memory, overwrites
ms.assetid: da7c5d77-a267-415f-a8ab-ee5ce5bfc286
ms.openlocfilehash: ff900c7366a28d19d3b90cbd4a6d9ee732e4ce02
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50621559"
---
# <a name="checking-for-memory-overwrites"></a>Controllo delle sovrascritture di memoria

Se si verifica una violazione di accesso in una chiamata a una funzione di manipolazione dell'heap, è possibile che il programma ha danneggiato l'heap. Potrebbe essere un sintomo di questa situazione comune:

```
Access Violation in _searchseg
```

Il [heapchk](../../c-runtime-library/reference/heapchk.md) funzione è disponibile in entrambe le modalità di debug e build di rilascio (solo Windows NT) per verificare l'integrità dell'heap della libreria di runtime. È possibile usare `_heapchk` in modo analogo a come il `AfxCheckMemory` funzione per isolare la sovrascrittura di un heap, ad esempio:

```
if(_heapchk()!=_HEAPOK)
   DebugBreak();
```

Se questa funzione non viene eseguita correttamente, è necessario isolare a quel punto l'heap è danneggiato.

## <a name="see-also"></a>Vedere anche

[Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)