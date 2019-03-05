---
title: Stili dei pulsanti di selezione
ms.date: 11/04/2016
helpviewer_keywords:
- styles [MFC], CSpinButtonCtrl
- CSpinButtonCtrl class [MFC], styles
- styles [MFC], spin button control
- spin button control, styles
ms.assetid: fb4a7f6f-9182-47be-bccf-0728fdc5332f
ms.openlocfilehash: d955ba1d76ee4d5648613ddaf6c5f6a652f3d3af
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304867"
---
# <a name="spin-button-styles"></a>Stili dei pulsanti di selezione

Molte delle impostazioni per un pulsante di selezione ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)) sono controllate dagli stili. È possibile impostare gli stili seguenti usando il **proprietà** finestra nell'editor finestre.

- **Orientamento** verticale o orizzontale. Controlla l'orientamento dei pulsanti freccia. Associato allo stile UDS_HORZ.

- **Allineamento** scollegate, a sinistra o destra. Controlla il percorso del pulsante di selezione. Left e Right posizionare il pulsante di selezione accanto alla finestra buddy. La larghezza della finestra buddy viene ridotto per adattare il pulsante di selezione. Associati con gli stili UDS_ALIGNLEFT e UDS_ALIGNRIGHT.

- **Auto Buddy** seleziona automaticamente la finestra precedente nell'ordine Z come finestra buddy del pulsante di selezione. In un modello di finestra di dialogo, si tratta del controllo che precede il pulsante di selezione in ordine di tabulazione. Associato allo stile UDS_AUTOBUDDY.

- **Set Buddy Integer** fa sì che il controllo di selezione aumentare e diminuire la didascalia della finestra buddy come le modifiche della posizione corrente. Associato allo stile UDS_SETBUDDYINT.

- **No Thousands** non inserisce le migliaia separatore nel valore nella barra del titolo della finestra buddy. Associato allo stile UDS_NOTHOUSANDS.

    > [!NOTE]
    >  Impostare questo stile se si desidera utilizzare dialog data exchange (DDX) per ottenere il valore integer dal controllo degli utenti. `DDX_Text` non accetta i separatori delle migliaia incorporati.

- **Eseguire il wrapping** determina la posizione a "wrap" come il valore viene incrementato o decrementato oltre l'intervallo del controllo. Associato allo stile UDS_WRAP.

- **Tasti di direzione** incrementare o diminuire la posizione quando vengono premuti i tasti freccia su e freccia giù del pulsante di selezione. Associato allo stile UDS_ARROWKEYS.

## <a name="see-also"></a>Vedere anche

[Uso di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
