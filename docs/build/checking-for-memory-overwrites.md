---
description: 'Altre informazioni: controllo delle sovrascritture di memoria'
title: Controllo delle sovrascritture di memoria
ms.date: 11/04/2016
helpviewer_keywords:
- memory, overwrites
ms.assetid: da7c5d77-a267-415f-a8ab-ee5ce5bfc286
ms.openlocfilehash: 53361a6aea3de54017be3c966f9500accd21ced1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163171"
---
# <a name="checking-for-memory-overwrites"></a>Controllo delle sovrascritture di memoria

Se si verifica una violazione di accesso in una chiamata a una funzione di manipolazione dell'heap, è possibile che il programma abbia danneggiato l'heap. Un sintomo comune di questa situazione è:

```
Access Violation in _searchseg
```

La funzione [_heapchk](../c-runtime-library/reference/heapchk.md) è disponibile nelle compilazioni di debug e di rilascio (solo Windows NT) per verificare l'integrità dell'heap della libreria di run-time. È possibile usare `_heapchk` in modo analogo alla `AfxCheckMemory` funzione per isolare la sovrascrittura di un heap, ad esempio:

```
if(_heapchk()!=_HEAPOK)
   DebugBreak();
```

Se questa funzione ha esito negativo, è necessario isolare il punto in cui l'heap è danneggiato.

## <a name="see-also"></a>Vedi anche

[Correzione dei problemi di compilazione della versione](fixing-release-build-problems.md)
