---
title: Eliminazione definitiva di oggetti finestra | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- frame windows [MFC], destroying
- window objects [MFC], deleting
- window objects [MFC], destroying
- window objects [MFC], removing
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 704122f028cd744f0ce064f0153825830144d5b7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401641"
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

