---
title: Stili dei pulsanti di selezione | Documenti Microsoft
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
ms.openlocfilehash: 223b7e0875a5382edf5f4d350c9343d117768c41
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953778"
---
# <a name="spin-button-styles"></a>Stili dei pulsanti di selezione
Molte delle impostazioni per un pulsante di selezione ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)) sono controllate dagli stili. È possibile impostare gli stili seguenti utilizzando la **proprietà** finestra nell'editor finestre.  
  
-   **Orientamento** verticale o orizzontale. Controlla l'orientamento dei pulsanti freccia. Associato allo stile UDS_HORZ.  
  
-   **Allineamento** scollegato, sinistra o destra. Controlla il percorso del pulsante di selezione. Left e Right posizionare il pulsante di selezione accanto alla finestra di contatto. La larghezza della finestra buddy è ridotto per supportare il pulsante di selezione. Associati con gli stili UDS_ALIGNLEFT e UDS_ALIGNRIGHT.  
  
-   **Auto Buddy** selezionare automaticamente la finestra precedente nell'ordine Z come finestra buddy del pulsante di selezione. In un modello di finestra di dialogo, si tratta del controllo che precede il pulsante di selezione nell'ordine di tabulazione. Associato allo stile UDS_AUTOBUDDY.  
  
-   **Set Buddy Integer** fa sì che il controllo di selezione incrementare e decrementare la didascalia della finestra buddy come le modifiche della posizione corrente. Associato allo stile UDS_SETBUDDYINT.  
  
-   **No Thousands** non inserire le migliaia separatore nel valore della didascalia della finestra buddy. Associato allo stile UDS_NOTHOUSANDS.  
  
    > [!NOTE]
    >  Impostare questo stile se si desidera utilizzare dialog data exchange (DDX) per ottenere il valore integer dal controllo correlato. `DDX_Text` non accetta i separatori delle migliaia incorporati.  
  
-   **Eseguire il wrapping** provoca il ritorno a "il wrapping" come il valore viene incrementato o decrementato oltre l'intervallo del controllo. Associato allo stile UDS_WRAP.  
  
-   **Tasti di direzione** incrementare o decrementare la posizione quando vengono premuti i tasti freccia su e freccia giù del pulsante di selezione. Associato allo stile UDS_ARROWKEYS.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

