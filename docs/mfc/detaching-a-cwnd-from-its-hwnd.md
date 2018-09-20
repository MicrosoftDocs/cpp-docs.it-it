---
title: Disconnessione di CWnd da HWND | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CWnd
dev_langs:
- C++
helpviewer_keywords:
- HWND, detaching CWnd from
- removing HWNDs from CWnds
- CWnd objects [MFC], detaching from HWND
- detaching CWnds from HWNDs
- Detach method (CWnd class)
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c69703d8c528d82a696fc94be76ac4a569628b4e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392647"
---
# <a name="detaching-a-cwnd-from-its-hwnd"></a>Disconnessione di CWnd da HWND

Se è necessario aggirare object -`HWND` relazione, MFC fornisce un'altra `CWnd` funzione membro [Detach](../mfc/reference/cwnd-class.md#detach), che disconnette l'oggetto finestra C++ dalla finestra di Windows. Ciò impedisce al distruttore di eliminazione della finestra di Windows quando l'oggetto viene eliminato.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Creazione di finestre](../mfc/creating-windows.md)

- [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)

- [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)

