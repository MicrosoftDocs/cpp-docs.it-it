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
ms.openlocfilehash: 33d471b41c8f1fd670e25626049ecd9b06b034e1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87195200"
---
# <a name="allocating-and-deallocating-window-memory"></a>Allocazione e deallocazione di memoria delle finestre

Non usare l'operatore C++ **`delete`** per eliminare definitivamente una finestra cornice o una vista. Chiamare invece la `CWnd` funzione membro `DestroyWindow` . Le finestre cornice, pertanto, devono essere allocate nell'heap con operatore **`new`** . Prestare attenzione quando si allocano finestre cornice nella stack frame o a livello globale. Le altre finestre devono essere allocate nel stack frame quando possibile.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione di finestre](creating-windows.md)

- [Sequenza di eliminazione di finestre](window-destruction-sequence.md)

- [Scollegamento di un oggetto CWnd dall'handle HWND](detaching-a-cwnd-from-its-hwnd.md)

## <a name="see-also"></a>Vedere anche

[Eliminazione definitiva di oggetti finestra](destroying-window-objects.md)
