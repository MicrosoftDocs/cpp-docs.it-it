---
description: 'Altre informazioni su: scollegamento di un CWnd dal relativo HWND'
title: Disconnessione di CWnd da HWND
ms.date: 11/04/2016
helpviewer_keywords:
- HWND, detaching CWnd from
- removing HWNDs from CWnds
- CWnd objects [MFC], detaching from HWND
- detaching CWnds from HWNDs
- Detach method (CWnd class)
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
ms.openlocfilehash: a3bb1c50b769724ff9ea0f7cdcd2d1fa92cb3a84
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327811"
---
# <a name="detaching-a-cwnd-from-its-hwnd"></a>Disconnessione di CWnd da HWND

Se è necessario aggirare la `HWND` relazione tra oggetti, MFC fornisce un'altra `CWnd` funzione membro, [Detach](reference/cwnd-class.md#detach), che disconnette l'oggetto finestra C++ dalla finestra di Windows. In questo modo si impedisce che il distruttore distrugga la finestra di Windows quando l'oggetto viene eliminato definitivamente.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione di finestre](creating-windows.md)

- [Sequenza di eliminazione di finestre](window-destruction-sequence.md)

- [Allocazione e deallocazione di memoria delle finestre](allocating-and-deallocating-window-memory.md)

## <a name="see-also"></a>Vedi anche

[Oggetti finestra](window-objects.md)
