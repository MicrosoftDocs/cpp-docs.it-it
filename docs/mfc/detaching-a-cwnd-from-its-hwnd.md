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
ms.openlocfilehash: 2e0484698654cd14f22a92be76a80f71c0f9adf5
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621850"
---
# <a name="detaching-a-cwnd-from-its-hwnd"></a>Disconnessione di CWnd da HWND

Se è necessario aggirare la `HWND` relazione tra oggetti, MFC fornisce un'altra `CWnd` funzione membro, [Detach](reference/cwnd-class.md#detach), che disconnette l'oggetto finestra C++ dalla finestra di Windows. In questo modo si impedisce che il distruttore distrugga la finestra di Windows quando l'oggetto viene eliminato definitivamente.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione di finestre](creating-windows.md)

- [Sequenza di eliminazione di finestre](window-destruction-sequence.md)

- [Allocazione e deallocazione di memoria delle finestre](allocating-and-deallocating-window-memory.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](window-objects.md)
