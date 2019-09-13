---
title: Stili dei pulsanti di selezione
ms.date: 09/09/2019
helpviewer_keywords:
- styles [MFC], CSpinButtonCtrl
- CSpinButtonCtrl class [MFC], styles
- styles [MFC], spin button control
- spin button control, styles
ms.assetid: fb4a7f6f-9182-47be-bccf-0728fdc5332f
ms.openlocfilehash: 1aae4b7e4c63929ebe03c97d50f05754bc13ec26
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907864"
---
# <a name="spin-button-styles"></a>Stili dei pulsanti di selezione

Molte impostazioni per un pulsante di selezione ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)) sono controllate dagli stili. È possibile impostare gli stili seguenti utilizzando la [creazione guidata classe](reference/mfc-class-wizard.md).

- **Orientamento** Verticale o orizzontale. Controlla l'orientamento dei pulsanti freccia. Associato allo stile UDS_HORZ.

- **Allineamento** Uno di Unattached, Left o right. Controlla la posizione del pulsante di selezione. Posizionare il pulsante di selezione accanto alla finestra buddy. La larghezza della finestra di Buddy viene ridotta per contenere il pulsante di selezione. Associato agli stili UDS_ALIGNLEFT e UDS_ALIGNRIGHT.

- **Buddy automatico** Seleziona automaticamente la finestra precedente nella finestra dell'ordine Z come finestra di contatto per il pulsante di selezione. In un modello di finestra di dialogo, si tratta del controllo che precede il pulsante di selezione nell'ordine di tabulazione. Associato allo stile UDS_AUTOBUDDY.

- **Imposta Integer Buddy** Fa in modo che il controllo di selezione incrementi e decrementa la didascalia della finestra di Buddy Man mano che cambia la posizione corrente. Associato allo stile UDS_SETBUDDYINT.

- **Nessuna migliaia** Non inserisce il separatore delle migliaia nel valore nella didascalia della finestra di Buddy. Associato allo stile UDS_NOTHOUSANDS.

    > [!NOTE]
    >  Impostare questo stile se si desidera utilizzare Dialog Data Exchange (DDX) per ottenere il valore integer dal controllo buddy. `DDX_Text`non accetta separatori di migliaia incorporati.

- A **capo automatico** Fa in modo che la posizione venga sottoposta a wrapping quando il valore viene incrementato o decrementato oltre l'intervallo del controllo. Associato allo stile UDS_WRAP.

- **Tasti** di direzione Fa in modo che il pulsante di selezione incrementi o decresca la posizione quando vengono premuti i tasti freccia su e freccia giù. Associato allo stile UDS_ARROWKEYS.

## <a name="see-also"></a>Vedere anche

[Uso di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
