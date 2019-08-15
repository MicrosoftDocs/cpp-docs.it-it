---
title: Implementazione di una gestione stringhe personalizzata (metodo Basic)
ms.date: 11/04/2016
helpviewer_keywords:
- IAtlStringMgr class, using
ms.assetid: eac5d13e-cbb4-4e82-b01e-f5f2dbcb962a
ms.openlocfilehash: 92c1c46f5251980f9cefb55e052e9aff395e0e60
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491320"
---
# <a name="implementation-of-a-custom-string-manager-basic-method"></a>Implementazione di una gestione stringhe personalizzata (metodo Basic)

Il modo più semplice per personalizzare lo schema di allocazione della memoria per i dati di tipo stringa `CAtlStringMgr` consiste nell'usare la classe fornita da ATL ma fornire le proprie routine di allocazione della memoria. Il costruttore per `CAtlStringMgr` accetta un solo parametro, ovvero un puntatore a `IAtlMemMgr` un oggetto. `IAtlMemMgr`è una classe di base astratta che fornisce un'interfaccia generica per un heap. Utilizzando l' `IAtlMemMgr` interfaccia `CAtlStringMgr` , alloca, rialloca e libera la memoria utilizzata per archiviare i dati stringa. È possibile implementare l' `IAtlMemMgr` interfaccia manualmente oppure utilizzare una delle cinque classi del gestore di memoria fornite da ATL. I gestori di memoria forniti da ATL sono semplicemente a capo delle funzionalità di allocazione di memoria esistenti:

- [CCRTHeap](../atl/reference/ccrtheap-class.md) Esegue il wrapping delle funzioni dell'heap CRT standard ([malloc](../c-runtime-library/reference/malloc.md), [Free](../c-runtime-library/reference/free.md)e [realloc](../c-runtime-library/reference/realloc.md))

- [CWin32Heap](../atl/reference/cwin32heap-class.md) Esegue il wrapping di un handle di heap Win32, usando [HeapAlloc](/windows/win32/api/heapapi/nf-heapapi-heapalloc), [HeapFree](/windows/win32/api/heapapi/nf-heapapi-heapfree)e [HeapReAlloc](/windows/win32/api/heapapi/nf-heapapi-heaprealloc)

- [CLocalHeap](../atl/reference/clocalheap-class.md) Esegue il wrapping delle API Win32: [LocalAlloc](/windows/win32/api/winbase/nf-winbase-localalloc), [LocalFree](/windows/win32/api/winbase/nf-winbase-localfree)e [LocalReAlloc](/windows/win32/api/winbase/nf-winbase-localrealloc)

- [CGlobalHeap](../atl/reference/cglobalheap-class.md) Esegue il wrapping delle API Win32: [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc), [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree)e [GlobalReAlloc](/windows/win32/api/winbase/nf-winbase-globalrealloc).

- [CComHeap](../atl/reference/ccomheap-class.md) Esegue il wrapping delle API dell'allocatore di attività COM: [CoTaskMemAlloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemalloc), [CoTaskMemFree](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemfree)e [CoTaskMemRealloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemrealloc)

Ai fini della gestione della memoria di stringa, la classe più utile `CWin32Heap` è perché consente di creare più heap indipendenti. Se ad esempio si vuole usare un heap separato solo per le stringhe, è possibile eseguire le operazioni seguenti:

[!code-cpp[NVC_ATLMFC_Utilities#180](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_1.cpp)]

Per usare questo gestore di stringhe privato per gestire la memoria `CString` per una variabile, passare un puntatore al gestore come parametro al costruttore `CString` della variabile:

[!code-cpp[NVC_ATLMFC_Utilities#181](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)
