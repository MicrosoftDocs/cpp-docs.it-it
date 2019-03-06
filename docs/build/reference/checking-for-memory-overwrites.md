---
title: Controllo delle sovrascritture di memoria
ms.date: 11/04/2016
helpviewer_keywords:
- memory, overwrites
ms.assetid: da7c5d77-a267-415f-a8ab-ee5ce5bfc286
ms.openlocfilehash: b37bd68519aea1194b601e89fefd0f14d428630a
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422195"
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
