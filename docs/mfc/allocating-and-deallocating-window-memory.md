---
title: Allocazione e deallocazione di memoria delle finestre
ms.date: 11/04/2016
helpviewer_keywords:
- memory allocation, window objects
- memory deallocation
- storage for window objects [MFC]
- memory deallocation, window memory
- window objects [MFC], deallocating memory for
- storage for window objects [MFC], allocating
ms.assetid: 7c962539-8461-4846-b5ca-fe3b15c313dc
ms.openlocfilehash: a9bbf92a586a910dfa4e81774ce4817c9cf458e9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50582494"
---
# <a name="allocating-and-deallocating-window-memory"></a>Allocazione e deallocazione di memoria delle finestre

Non usare C++ **eliminare** operatore da eliminare definitivamente una finestra cornice o una vista. Chiamare invece il `CWnd` funzione membro `DestroyWindow`. Finestre cornice, pertanto, devono essere allocate nell'heap con l'operatore **nuovo**. Prestare attenzione durante l'allocazione di finestre cornice sullo stack frame o a livello globale. Altre finestre devono essere impostate sullo stack frame laddove possibile.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Creazione di finestre](../mfc/creating-windows.md)

- [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)

- [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)

## <a name="see-also"></a>Vedere anche

[Eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md)

