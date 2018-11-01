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
ms.openlocfilehash: fe4d9efa6adcec51d5944755e4a8abb1cc0784e4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50653973"
---
# <a name="detaching-a-cwnd-from-its-hwnd"></a>Disconnessione di CWnd da HWND

Se è necessario aggirare object -`HWND` relazione, MFC fornisce un'altra `CWnd` funzione membro [Detach](../mfc/reference/cwnd-class.md#detach), che disconnette l'oggetto finestra C++ dalla finestra di Windows. Ciò impedisce al distruttore di eliminazione della finestra di Windows quando l'oggetto viene eliminato.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Creazione di finestre](../mfc/creating-windows.md)

- [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)

- [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)

