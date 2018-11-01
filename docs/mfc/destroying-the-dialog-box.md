---
title: Eliminazione definitiva della finestra di dialogo
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
ms.openlocfilehash: f84e36a2a002610c294653012c40707fddcaba54
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50607467"
---
# <a name="destroying-the-dialog-box"></a>Eliminazione definitiva della finestra di dialogo

Finestre di dialogo modali sono in genere create nello stack frame ed eliminati definitivamente quando termina la funzione che li ha creati. Distruttore dell'oggetto finestra di dialogo viene chiamato quando l'oggetto esce dall'ambito.

Finestre di dialogo non modali in genere vengono create e possedute da una finestra di visualizzazione o il frame padre, ovvero finestra cornice principale dell'applicazione o una finestra cornice del documento. Il valore predefinito [OnClose](../mfc/reference/cwnd-class.md#onclose) chiamate del gestore [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow), che elimina la finestra di dialogo. Se la finestra di dialogo autonoma, ovvero nessun puntatori o altri tipi di semantica speciale della proprietà, è necessario eseguire l'override [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy) da eliminare definitivamente l'oggetto finestra C++. È inoltre consigliabile eseguire l'override [OnCancel](../mfc/reference/cdialog-class.md#oncancel) e chiamare `DestroyWindow` dal suo interno. In caso contrario, il proprietario della finestra di dialogo deve eliminare definitivamente l'oggetto C++ quando non è più necessario.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

