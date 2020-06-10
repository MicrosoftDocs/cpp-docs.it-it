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
ms.openlocfilehash: 02546559183d0e14973bc2e5ccb26a4570a39b1e
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623260"
---
# <a name="allocating-and-deallocating-window-memory"></a>Allocazione e deallocazione di memoria delle finestre

Non usare l'operatore C++ **Delete per eliminare** definitivamente una finestra cornice o una vista. Chiamare invece la `CWnd` funzione membro `DestroyWindow` . Le finestre cornice, pertanto, devono essere allocate nell'heap con Operator **New**. Prestare attenzione quando si allocano finestre cornice nella stack frame o a livello globale. Le altre finestre devono essere allocate nel stack frame quando possibile.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione di finestre](creating-windows.md)

- [Sequenza di eliminazione di finestre](window-destruction-sequence.md)

- [Scollegamento di un elemento CWnd dal relativo HWND](detaching-a-cwnd-from-its-hwnd.md)

## <a name="see-also"></a>Vedere anche

[Eliminazione definitiva di oggetti finestra](destroying-window-objects.md)
