---
title: Disconnessione di CWnd da HWND
ms.date: 11/04/2016
helpviewer_keywords:
- HWND, detaching CWnd from
- removing HWNDs from CWnds
- CWnd objects [MFC], detaching from HWND
- detaching CWnds from HWNDs
- Detach method (CWnd class)
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
ms.openlocfilehash: f7a6f97ba9f1dd3a928a5450c1a899ce09a4ac5f
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446965"
---
# <a name="detaching-a-cwnd-from-its-hwnd"></a>Disconnessione di CWnd da HWND

Se è necessario aggirare la relazione`HWND` oggetto, MFC fornisce un'altra `CWnd` funzione membro, [Disconnetti](../mfc/reference/cwnd-class.md#detach), che disconnette l' C++ oggetto finestra dalla finestra di Windows. In questo modo si impedisce che il distruttore distrugga la finestra di Windows quando l'oggetto viene eliminato definitivamente.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione di finestre](../mfc/creating-windows.md)

- [Sequenza di distruzione della finestra](../mfc/window-destruction-sequence.md)

- [Allocazione e deallocazione della memoria della finestra](../mfc/allocating-and-deallocating-window-memory.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)
