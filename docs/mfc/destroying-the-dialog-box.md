---
title: Distruzione della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- dialog boxes [MFC], deleting
- destruction, dialog box
- dialog boxes [MFC], destroying
- dialog boxes [MFC], removing
- modeless dialog boxes [MFC], destroying
- MFC dialog boxes [MFC], destroying
- modal dialog boxes [MFC], destroying
ms.assetid: dabceee7-3639-4d85-bf34-73515441b3d0
ms.openlocfilehash: 8b407c6e832dde7a5865146e7cc12d1840d3234a
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685845"
---
# <a name="destroying-the-dialog-box"></a>Distruzione della finestra di dialogo

Le finestre di dialogo modali vengono in genere create nel stack frame e distrutte al termine della funzione che le ha create. Il distruttore dell'oggetto finestra di dialogo viene chiamato quando l'oggetto esce dall'ambito.

Le finestre di dialogo non modali vengono in genere create e sono di proprietà di una visualizzazione padre o di una finestra cornice, ovvero la finestra cornice principale dell'applicazione o una finestra cornice del documento. Il gestore [OnClose](../mfc/reference/cwnd-class.md#onclose) predefinito chiama [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow), che elimina la finestra di dialogo. Se la finestra di dialogo è autonoma, senza puntatori o altra semantica di proprietà speciale, è necessario eseguire l'override di [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy) per eliminare l'oggetto finestra di dialogo C++. È inoltre consigliabile eseguire l'override di [OnCancel](../mfc/reference/cdialog-class.md#oncancel) e chiamare `DestroyWindow` dall'interno di esso. In caso contrario, il proprietario della finestra di dialogo deve eliminare C++ l'oggetto quando non è più necessario.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)
