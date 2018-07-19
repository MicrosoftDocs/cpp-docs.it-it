---
title: Implementazione di una gestione stringhe personalizzata (metodo di base) | Microsoft Docs
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
ms.openlocfilehash: c393489b8b4d0353ae37a21132f66e0618b3b794
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884584"
---
# <a name="implementation-of-a-custom-string-manager-basic-method"></a>Implementazione di una gestione stringhe personalizzata (metodo di base)
Il modo più semplice per personalizzare lo schema di allocazione di memoria per i dati di stringa consiste nell'usare ATL fornito dal `CAtlStringMgr` classe ma forniscono routine di allocazione della propria memoria. Il costruttore per `CAtlStringMgr` accetta un singolo parametro: un puntatore a un `IAtlMemMgr` oggetto. `IAtlMemMgr` è una classe base astratta che fornisce un'interfaccia generica per un heap. Usando il `IAtlMemMgr` interfaccia, il `CAtlStringMgr` consente di allocare, riallocare e libera la memoria usata per archiviare dati di tipo stringa. È possibile implementare il `IAtlMemMgr` interfaccia manualmente o usare una delle classi di gestione della memoria disponibili ATL cinque. I responsabili di memoria di ATL eseguono semplicemente il wrapping di funzionalità di allocazione della memoria esistente:  
  
-   [Su CCRTHeap](../atl/reference/ccrtheap-class.md) esegue il wrapping di funzioni di heap CRT standard ([malloc](../c-runtime-library/reference/malloc.md), [gratuito](../c-runtime-library/reference/free.md), e [realloc](../c-runtime-library/reference/realloc.md))  
  
-   [CWin32Heap](../atl/reference/cwin32heap-class.md) esegue il wrapping di gestire un heap Win32, usando [HeapAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366597), [HeapFree](http://msdn.microsoft.com/library/windows/desktop/aa366701), e [HeapRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366704)  
  
-   [CLocalHeap](../atl/reference/clocalheap-class.md) include le API Win32: [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723), [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730), e [LocalRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366742)  
  
-   [CGlobalHeap](../atl/reference/cglobalheap-class.md) include le API Win32: [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574), [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579), e [GlobalRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366590).  
  
-   [CComHeap](../atl/reference/ccomheap-class.md) esegue il wrapping di API COM dell'allocatore: [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727), [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722), e [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280)  
  
 Ai fini della gestione della memoria, la classe più utile è `CWin32Heap` perché consente di creare più heap indipendenti. Ad esempio, se si desidera utilizzare un heap separato solo per le stringhe, è possibile eseguire le operazioni seguenti:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#180](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_1.cpp)]  
  
 Usare questo gestore di stringa privata per gestire la memoria per un `CString` variabile, passare un puntatore al gestore come parametro per il `CString` costruttore della variabile:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#181](../atl-mfc-shared/codesnippet/cpp/implementation-of-a-custom-string-manager-basic-method_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)

