---
title: Mapping di messaggi Windows a classi
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], Windows messages
- message maps [MFC], in dialog class
- Windows messages [MFC], mapping in dialog classes
- messages to dialog class [MFC]
- mappings [MFC], messages to dialog class [MFC]
- message maps [MFC], mapping Windows messages to classes
- messages to dialog class [MFC], mapping
ms.assetid: a4c6fd1f-1d33-47c9-baa0-001755746d6d
ms.openlocfilehash: 37c0f61f4d38e3e152d9dd508c9487782ebdf81a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630460"
---
# <a name="mapping-windows-messages-to-your-class"></a>Mapping di messaggi Windows a classi

Se occorre una finestra di dialogo per gestire i messaggi di Windows, eseguire l'override di funzioni gestore appropriato. A tale scopo, utilizzare la finestra delle proprietà per [mapping dei messaggi di](../mfc/reference/mapping-messages-to-functions.md) alla classe di finestra di dialogo. Questo viene registrata una voce della mappa messaggi per ogni messaggio e le funzioni membro di gestore di messaggi viene aggiunto alla classe. Usare l'editor di codice sorgente di Visual C++ per scrivere codice nei gestori di messaggi.

È anche possibile eseguire l'override di funzioni membro di [CDialog](../mfc/reference/cdialog-class.md) e le relative classi base, soprattutto [CWnd](../mfc/reference/cwnd-class.md).

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Gestione di messaggi e mapping](../mfc/message-handling-and-mapping.md)

- [Funzioni membro comunemente sottoposte a override](../mfc/commonly-overridden-member-functions.md)

- [Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

