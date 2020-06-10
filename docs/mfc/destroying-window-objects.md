---
title: Eliminazione definitiva di oggetti finestra
ms.date: 11/04/2016
helpviewer_keywords:
- frame windows [MFC], destroying
- window objects [MFC], deleting
- window objects [MFC], destroying
- window objects [MFC], removing
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
ms.openlocfilehash: 22b483c1005931b229453ae229935c0e716ab726
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621854"
---
# <a name="destroying-window-objects"></a>Eliminazione definitiva di oggetti finestra

È necessario prestare attenzione alle finestre figlio per eliminare l'oggetto finestra di C++ quando l'utente ha terminato la finestra. Se questi oggetti non vengono eliminati definitivamente, non verrà ripristinata la memoria dell'applicazione. Fortunatamente, il Framework gestisce la distruzione della finestra, nonché la creazione di finestre cornice, visualizzazioni e finestre di dialogo. Se si creano finestre aggiuntive, l'utente è responsabile dell'eliminazione.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Sequenza di eliminazione di finestre](window-destruction-sequence.md)

- [Allocazione e deallocazione di memoria delle finestre](allocating-and-deallocating-window-memory.md)

- [Scollegamento di un elemento CWnd dal relativo HWND](detaching-a-cwnd-from-its-hwnd.md)

- [Sequenza generale di creazione finestre](general-window-creation-sequence.md)

- [Eliminazione definitiva di finestre cornice](destroying-frame-windows.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](window-objects.md)
