---
title: "Implementation of a Custom String Manager (Basic Method) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAtlStringMgr class, utilizzo"
ms.assetid: eac5d13e-cbb4-4e82-b01e-f5f2dbcb962a
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementation of a Custom String Manager (Basic Method)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il modo più semplice per personalizzare la combinazione di allocazione della memoria per i dati in formato stringa è di utilizzare ATL\- fornita dalla classe **CAtlStringMgr** ma fornisce le routine di allocazione della memoria.  Il costruttore per **CAtlStringMgr** accetta un solo parametro: un puntatore a un oggetto `IAtlMemMgr`.  `IAtlMemMgr` è una classe base astratta che fornisce un'interfaccia generica a un heap.  Utilizzando l'interfaccia `IAtlMemMgr`, **CAtlStringMgr**, riallocare alloca e libera la memoria utilizzata per archiviare i dati in formato stringa.  È possibile implementare l'interfaccia `IAtlMemMgr` manualmente, o utilizzare uno dei cinque ATL\- fornito le classi del gestore di memoria.  ATL\- fornito con le funzionalità esistenti di allocazione della memoria del wrapping dei gestori della memoria:  
  
-   [CCRTHeap](../atl/reference/ccrtheap-class.md) Esegue il wrapping di heap CRT standard esecuzione \([malloc](../c-runtime-library/reference/malloc.md), [libero](../c-runtime-library/reference/free.md)e [realloc](../c-runtime-library/reference/realloc.md)\)  
  
-   [CWin32Heap](../atl/reference/cwin32heap-class.md) Esegue il wrapping di un handle dell'heap Win32, utilizzando [HeapAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366597), [HeapFree](http://msdn.microsoft.com/library/windows/desktop/aa366701)e [HeapRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366704)  
  
-   [CLocalHeap](../atl/reference/clocalheap-class.md) Esegue il wrapping delle API Win32: [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723), [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730)e [LocalRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366742)  
  
-   [CGlobalHeap](../atl/reference/cglobalheap-class.md) Esegue il wrapping delle API Win32: [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574), [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579)e [GlobalRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366590).  
  
-   [CComHeap](../atl/reference/ccomheap-class.md) Esegue il wrapping l'allocatore API di attività COM: [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727), [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722)e [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280)  
  
 Per la gestione della memoria di stringhe, la classe più utile è `CWin32Heap` perché consente di creare gli heap non più.  Ad esempio, se si desidera utilizzare un heap separato solo per le stringhe, effettuare le operazioni seguenti:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#180](../atl-mfc-shared/codesnippet/CPP/implementation-of-a-custom-string-manager-basic-method_1.cpp)]  
  
 Per utilizzare questo gestore privato della stringa per la gestione della memoria per una variabile `CString`, passare un puntatore all'amministratore come parametro al costruttore della variabile `CString` :  
  
 [!code-cpp[NVC_ATLMFC_Utilities#181](../atl-mfc-shared/codesnippet/CPP/implementation-of-a-custom-string-manager-basic-method_2.cpp)]  
  
## Vedere anche  
 [Memory Management with CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)