---
title: Allocazione e deallocazione di memoria delle finestre | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- memory allocation, window objects
- memory deallocation
- storage for window objects [MFC]
- memory deallocation, window memory
- window objects [MFC], deallocating memory for
- storage for window objects [MFC], allocating
ms.assetid: 7c962539-8461-4846-b5ca-fe3b15c313dc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 149a8e860913515551fc85be9b49675856d7e129
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415193"
---
# <a name="allocating-and-deallocating-window-memory"></a>Allocazione e deallocazione di memoria delle finestre

Non usare C++ **eliminare** operatore da eliminare definitivamente una finestra cornice o una vista. Chiamare invece il `CWnd` funzione membro `DestroyWindow`. Finestre cornice, pertanto, devono essere allocate nell'heap con l'operatore **nuovo**. Prestare attenzione durante l'allocazione di finestre cornice sullo stack frame o a livello globale. Altre finestre devono essere impostate sullo stack frame laddove possibile.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Creazione di finestre](../mfc/creating-windows.md)

- [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)

- [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)

## <a name="see-also"></a>Vedere anche

[Eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md)

