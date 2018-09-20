---
title: Stili di pulsante di selezione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- styles [MFC], CSpinButtonCtrl
- CSpinButtonCtrl class [MFC], styles
- styles [MFC], spin button control
- spin button control, styles
ms.assetid: fb4a7f6f-9182-47be-bccf-0728fdc5332f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 71da44858ea018d0393af6267e4bb522a2c57391
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46393594"
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

