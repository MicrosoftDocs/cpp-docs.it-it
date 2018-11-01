---
title: Eliminazione definitiva di oggetti finestra
ms.date: 11/04/2016
helpviewer_keywords:
- frame windows [MFC], destroying
- window objects [MFC], deleting
- window objects [MFC], destroying
- window objects [MFC], removing
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
ms.openlocfilehash: 363ff2a4cee48b1660de87714d73c93e795017cd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50488807"
---
# <a name="destroying-window-objects"></a>Eliminazione definitiva di oggetti finestra

Prestare attenzione con il proprio finestre figlio da eliminare definitivamente l'oggetto finestra C++ quando l'utente ha terminato con la finestra. Se questi oggetti non vengono eliminati definitivamente, l'applicazione non recupererà la memoria. Per fortuna, il framework gestisce distruzione di finestre, nonché la creazione di finestre cornice, visualizzazioni e finestre di dialogo. Se si creano finestre aggiuntive, è responsabile anche alla relativa eliminazione.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)

- [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)

- [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)

- [Sequenza generale di creazione finestre](../mfc/general-window-creation-sequence.md)

- [Eliminazione definitiva di finestre cornice](../mfc/destroying-frame-windows.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)

