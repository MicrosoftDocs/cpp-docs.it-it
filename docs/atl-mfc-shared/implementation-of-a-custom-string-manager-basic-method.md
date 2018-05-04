---
title: Implementazione di un gestore di stringa personalizzato (metodo di base) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- IAtlStringMgr class, using
ms.assetid: eac5d13e-cbb4-4e82-b01e-f5f2dbcb962a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 259f9533747b266f0be0a782cdc94c98f167d2d2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="implementation-of-a-custom-string-manager-basic-method"></a>Implementazione di un gestore di stringa personalizzato (metodo di base)
Il modo più semplice per personalizzare lo schema di allocazione di memoria per i dati di stringa sono possibile utilizzare ATL fornita dal **CAtlStringMgr** classe ma fornire la propria memoria routine di allocazione. Il costruttore per **CAtlStringMgr** accetta un solo parametro: un puntatore a un `IAtlMemMgr` oggetto. `IAtlMemMgr` è una classe basa astratta che fornisce un'interfaccia generica per un heap. Utilizzando il `IAtlMemMgr` interfaccia, il **CAtlStringMgr** alloca rialloca e libera la memoria utilizzata per archiviare i dati di tipo stringa. È possibile implementare il `IAtlMemMgr` interfaccia manualmente oppure utilizzare una delle cinque classi di gestione di memoria di ATL. I gestori di memoria di ATL eseguito semplicemente il wrapping di funzioni di allocazione di memoria esistenti:  
  
-   [Su CCRTHeap](../atl/reference/ccrtheap-class.md) esegue il wrapping di funzioni di heap CRT standard ([malloc](../c-runtime-library/reference/malloc.md), [libero](../c-runtime-library/reference/free.md), e [realloc](../c-runtime-library/reference/realloc.md))  
  
-   [CWin32Heap](../atl/reference/cwin32heap-class.md) esegue il wrapping di gestire un heap Win32, usando [HeapAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366597), [HeapFree](http://msdn.microsoft.com/library/windows/desktop/aa366701), e [HeapRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366704)  
  
-   [CLocalHeap](../atl/reference/clocalheap-class.md) include le API Win32: [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723), [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730), e [LocalRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366742)  
  
-   [CGlobalHeap](../atl/reference/cglobalheap-class.md) include le API Win32: [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574), [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579), e [GlobalRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366590).  
  
-   [CComHeap](../atl/reference/ccomheap-class.md) esegue il wrapping di API COM dell'allocatore: [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727), [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722), e [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280)  
  
 Ai fini della gestione della memoria, la classe più utile è `CWin32Heap` perché consente di creare più heap indipendenti. Ad esempio, se si desidera utilizzare un heap separato solo per le stringhe, è possibile eseguire le operazioni seguenti:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#180](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_1.cpp)]  
  
 Utilizzare questo gestore di stringhe privato per gestire la memoria per un `CString` variabile, passare un puntatore al gestore come parametro per il `CString` costruttore della variabile:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#181](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)

