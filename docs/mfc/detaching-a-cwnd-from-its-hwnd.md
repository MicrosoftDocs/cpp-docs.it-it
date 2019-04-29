---
title: Disconnessione di CWnd da HWND
ms.date: 11/04/2016
f1_keywords:
- CWnd
helpviewer_keywords:
- HWND, detaching CWnd from
- removing HWNDs from CWnds
- CWnd objects [MFC], detaching from HWND
- detaching CWnds from HWNDs
- Detach method (CWnd class)
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
ms.openlocfilehash: 259af94958f88643e9c3ce725b25c4e92cc38226
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394572"
---
# <a name="detaching-a-cwnd-from-its-hwnd"></a>Disconnessione di CWnd da HWND

Se è necessario aggirare object -`HWND` relazione, MFC fornisce un'altra `CWnd` funzione membro [Detach](../mfc/reference/cwnd-class.md#detach), che disconnette l'oggetto finestra C++ dalla finestra di Windows. Ciò impedisce al distruttore di eliminazione della finestra di Windows quando l'oggetto viene eliminato.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Creazione di finestre](../mfc/creating-windows.md)

- [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)

- [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)
