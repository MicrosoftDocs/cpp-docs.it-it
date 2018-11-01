---
title: Sequenza di distruzione di finestre
ms.date: 11/04/2016
helpviewer_keywords:
- destruction, windows
- destroying windows
- sequence [MFC], window destruction
- CWnd objects [MFC], destruction sequence
- sequence [MFC]
- windows [MFC], destroying
ms.assetid: 2d819196-6240-415f-a308-db43745e616c
ms.openlocfilehash: 07312d6c7bba219cebcfa2c73a8d66c9c97ec08e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50571353"
---
# <a name="window-destruction-sequence"></a>Sequenza di distruzione di finestre

Nel framework MFC, quando l'utente chiude la finestra cornice, impostazione predefinita della finestra [OnClose](../mfc/reference/cwnd-class.md#onclose) chiamate del gestore [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). È l'ultima funzione membro viene chiamato quando la finestra di Windows viene eliminata [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), che esegue una pulizia, chiama il [predefinito](../mfc/reference/cwnd-class.md#default) membro funzione per eseguire la pulizia di Windows e infine chiama il funzione membro virtuale [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). Il [CFrameWnd](../mfc/reference/cframewnd-class.md) implementazione di `PostNcDestroy` Elimina l'oggetto finestra C++.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)

- [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)

## <a name="see-also"></a>Vedere anche

[Eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md)

