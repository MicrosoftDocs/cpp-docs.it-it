---
title: Chiusura della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], closing
- dialog boxes [MFC], closing
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
ms.openlocfilehash: fe57c5603f1b0e9ea0b6fb9e6ea8d80bec961f6e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50448113"
---
# <a name="closing-the-dialog-box"></a>Chiusura della finestra di dialogo

Finestra di dialogo modale viene chiusa quando l'utente sceglie uno dei relativi pulsanti, in genere il pulsante OK o il pulsante Annulla. Se si sceglie il pulsante OK o Annulla, Windows inviare l'oggetto finestra di dialogo un **BN_CLICKED** messaggio di notifica del controllo con il pulsante dell'ID, ovvero **IDOK** oppure **IDCANCEL**. `CDialog` fornisce funzioni gestore predefinite per questi messaggi: `OnOK` e `OnCancel`. La chiamata di gestori predefiniti di `EndDialog` funzione membro per chiudere la finestra di dialogo. È inoltre possibile chiamare `EndDialog` dal codice. Per altre informazioni, vedere la [EndDialog](../mfc/reference/cdialog-class.md#enddialog) la funzione membro della classe `CDialog` nel *riferimenti alla libreria MFC*.

Per disporre di chiusura ed eliminazione di una finestra di dialogo non modale, eseguire l'override `PostNcDestroy` e richiamare il **eliminare** operatore sul **ciò** puntatore. [La finestra di dialogo di eliminazione definitiva](../mfc/destroying-the-dialog-box.md) illustra le operazioni successive.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

