---
title: Allocazione e deallocazione di memoria delle finestre | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- memory allocation, window objects
- memory deallocation
- storage for window objects [MFC]
- memory deallocation, window memory
- window objects [MFC], deallocating memory for
- storage for window objects [MFC], allocating
ms.assetid: 7c962539-8461-4846-b5ca-fe3b15c313dc
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4933ea9f079a18c4147db2da96b99653c5ddda26
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="allocating-and-deallocating-window-memory"></a>Allocazione e deallocazione di memoria delle finestre
Non utilizzare C++ **eliminare** operatore da eliminare definitivamente una finestra cornice o una vista. Chiamare invece il `CWnd` funzione membro `DestroyWindow`. Finestre cornice, pertanto, devono essere allocate sull'heap con operatore **nuova**. Prestare attenzione durante l'allocazione di finestre cornice nello stack frame o a livello globale. Altre finestre devono essere allocati nel frame dello stack quando possibile.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Creazione di finestre](../mfc/creating-windows.md)  
  
-   [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)  
  
-   [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md)

