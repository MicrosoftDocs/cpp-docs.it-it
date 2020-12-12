---
description: 'Altre informazioni su: eliminazione definitiva di oggetti finestra'
title: Eliminazione definitiva di oggetti finestra
ms.date: 11/04/2016
helpviewer_keywords:
- frame windows [MFC], destroying
- window objects [MFC], deleting
- window objects [MFC], destroying
- window objects [MFC], removing
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
ms.openlocfilehash: c2837ba6b9f568d7f6ab0175ae3ad99c31ccdc7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327813"
---
# <a name="destroying-window-objects"></a>Eliminazione definitiva di oggetti finestra

È necessario prestare attenzione alle finestre figlio per eliminare l'oggetto finestra di C++ quando l'utente ha terminato la finestra. Se questi oggetti non vengono eliminati definitivamente, non verrà ripristinata la memoria dell'applicazione. Fortunatamente, il Framework gestisce la distruzione della finestra, nonché la creazione di finestre cornice, visualizzazioni e finestre di dialogo. Se si creano finestre aggiuntive, l'utente è responsabile dell'eliminazione.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Sequenza di eliminazione di finestre](window-destruction-sequence.md)

- [Allocazione e deallocazione di memoria delle finestre](allocating-and-deallocating-window-memory.md)

- [Scollegamento di un oggetto CWnd dall'handle HWND](detaching-a-cwnd-from-its-hwnd.md)

- [Sequenza di creazione finestra generale](general-window-creation-sequence.md)

- [Eliminazione di finestre cornice](destroying-frame-windows.md)

## <a name="see-also"></a>Vedi anche

[Oggetti finestra](window-objects.md)
