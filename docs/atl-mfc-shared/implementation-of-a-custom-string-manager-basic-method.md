---
title: Implementazione di una gestione stringhe personalizzata (metodo di base)
ms.date: 11/04/2016
helpviewer_keywords:
- IAtlStringMgr class, using
ms.assetid: eac5d13e-cbb4-4e82-b01e-f5f2dbcb962a
ms.openlocfilehash: c30c08217a09f600f8801bec9f50c4341e983a6b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62235901"
---
# <a name="implementation-of-a-custom-string-manager-basic-method"></a>Implementazione di una gestione stringhe personalizzata (metodo di base)

Il modo più semplice per personalizzare lo schema di allocazione di memoria per i dati di stringa consiste nell'usare ATL fornito dal `CAtlStringMgr` classe ma forniscono routine di allocazione della propria memoria. Il costruttore per `CAtlStringMgr` accetta un singolo parametro: un puntatore a un `IAtlMemMgr` oggetto. `IAtlMemMgr` è una classe base astratta che fornisce un'interfaccia generica per un heap. Usando il `IAtlMemMgr` interfaccia, il `CAtlStringMgr` consente di allocare, riallocare e libera la memoria usata per archiviare dati di tipo stringa. È possibile implementare il `IAtlMemMgr` interfaccia manualmente o usare una delle classi di gestione della memoria disponibili ATL cinque. I responsabili di memoria di ATL eseguono semplicemente il wrapping di funzionalità di allocazione della memoria esistente:

- [Su CCRTHeap](../atl/reference/ccrtheap-class.md) esegue il wrapping di funzioni di heap CRT standard ([malloc](../c-runtime-library/reference/malloc.md), [gratuito](../c-runtime-library/reference/free.md), e [realloc](../c-runtime-library/reference/realloc.md))

- [CWin32Heap](../atl/reference/cwin32heap-class.md) esegue il wrapping di gestire un heap Win32, usando [HeapAlloc](/windows/desktop/api/heapapi/nf-heapapi-heapalloc), [HeapFree](/windows/desktop/api/heapapi/nf-heapapi-heapfree), e [HeapRealloc](/windows/desktop/api/heapapi/nf-heapapi-heaprealloc)

- [CLocalHeap](../atl/reference/clocalheap-class.md) include le API Win32: [LocalAlloc](/windows/desktop/api/winbase/nf-winbase-localalloc), [LocalFree](/windows/desktop/api/winbase/nf-winbase-localfree), e [LocalRealloc](/windows/desktop/api/winbase/nf-winbase-localrealloc)

- [CGlobalHeap](../atl/reference/cglobalheap-class.md) include le API Win32: [GlobalAlloc](/windows/desktop/api/winbase/nf-winbase-globalalloc), [GlobalFree](/windows/desktop/api/winbase/nf-winbase-globalfree), e [GlobalRealloc](/windows/desktop/api/winbase/nf-winbase-globalrealloc).

- [CComHeap](../atl/reference/ccomheap-class.md) esegue il wrapping di API dell'allocatore COM: [CoTaskMemAlloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemalloc), [CoTaskMemFree](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemfree), e [CoTaskMemRealloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemrealloc)

Ai fini della gestione della memoria, la classe più utile è `CWin32Heap` perché consente di creare più heap indipendenti. Ad esempio, se si desidera utilizzare un heap separato solo per le stringhe, è possibile eseguire le operazioni seguenti:

[!code-cpp[NVC_ATLMFC_Utilities#180](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_1.cpp)]

Usare questo gestore di stringa privata per gestire la memoria per un `CString` variabile, passare un puntatore al gestore come parametro per il `CString` costruttore della variabile:

[!code-cpp[NVC_ATLMFC_Utilities#181](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)
