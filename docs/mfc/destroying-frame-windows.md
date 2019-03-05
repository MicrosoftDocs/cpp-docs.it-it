---
title: Distruzione di finestre cornice
ms.date: 11/04/2016
f1_keywords:
- PostNcDestroy
helpviewer_keywords:
- Default method [MFC]
- DestroyWindow method [MFC]
- frame windows [MFC], destroying
- OnNcDestroy method, and frame windows
- document frame windows [MFC], destroying
- destroying frame windows
- MFC, frame windows
- windows [MFC], destroying
- OnClose method [MFC]
- PostNcDestroy method [MFC]
ms.assetid: 5affca77-1999-4507-a2b2-9aa226611b4b
ms.openlocfilehash: b64298bd2b0f14c30c824d78947a17628adec8b5
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57258203"
---
# <a name="destroying-frame-windows"></a>Distruzione di finestre cornice

Il framework MFC gestisce distruzione di finestre, nonché la creazione delle finestre associate con framework documenti e visualizzazioni. Se si creano finestre aggiuntive, è responsabile anche alla relativa eliminazione.

In framework, quando l'utente chiude la finestra cornice, impostazione predefinita della finestra [OnClose](../mfc/reference/cwnd-class.md#onclose) chiamate del gestore [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). È l'ultima funzione membro viene chiamato quando la finestra di Windows viene eliminata [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), che esegue una pulizia, chiama il [predefinito](../mfc/reference/cwnd-class.md#default) membro funzione per eseguire la pulizia di Windows e infine chiama il funzione membro virtuale [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). Il [CFrameWnd](../mfc/reference/cframewnd-class.md) implementazione di `PostNcDestroy` Elimina l'oggetto finestra C++. È sconsigliabile usare C++ **eliminare** operatore su una finestra cornice. In alternativa, usare `DestroyWindow`.

Quando si chiude la finestra principale, la chiusura dell'applicazione. Se vi vengono modificati documenti non salvati, il framework visualizza una finestra di messaggio per chiedere se i documenti devono essere salvati e assicura che i documenti appropriati vengono salvati se necessario.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)

## <a name="see-also"></a>Vedere anche

[Uso di finestre cornice](../mfc/using-frame-windows.md)
