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
ms.openlocfilehash: 96b559fcda4825aec71ba4b5c1dd8c3cd319b83d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="spin-button-styles"></a>Stili dei pulsanti di selezione
Molte delle impostazioni per un pulsante di selezione ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)) sono controllate dagli stili. È possibile impostare gli stili seguenti utilizzando la **proprietà** finestra dell'editor della finestra di dialogo.  
  
-   **Orientamento** verticale o orizzontale. Controlla l'orientamento dei pulsanti freccia. Associata con il `UDS_HORZ` stile.  
  
-   **Allineamento** scollegato, sinistra o destra. Controlla il percorso del pulsante di selezione. A sinistra e destra è possibile posizionare il pulsante di selezione accanto alla finestra buddy. La larghezza della finestra buddy è ridotto per supportare il pulsante di selezione. Associata con il `UDS_ALIGNLEFT` e `UDS_ALIGNRIGHT` stili.  
  
-   **Auto Buddy** selezionare automaticamente la finestra precedente nell'ordine Z come finestra buddy del pulsante di selezione. In un modello di finestra di dialogo, questo è il controllo che precede il pulsante di selezione nell'ordine di tabulazione. Associata con il `UDS_AUTOBUDDY` stile.  
  
-   **Set Buddy Integer** fa sì che il controllo di selezione incrementare e decrementare la didascalia della finestra buddy come le modifiche della posizione corrente. Associata con il `UDS_SETBUDDYINT` stile.  
  
-   **No Thousands** non inserire le migliaia separatore nel valore della didascalia della finestra buddy. Associata con il `UDS_NOTHOUSANDS` stile.  
  
    > [!NOTE]
    >  Impostare questo stile se si desidera utilizzare dialog data exchange (DDX) per ottenere il valore integer dal controllo correlato. `DDX_Text` non accetta i separatori delle migliaia incorporati.  
  
-   **Eseguire il wrapping** provoca il ritorno a "il wrapping" come il valore viene incrementato o decrementato oltre l'intervallo del controllo. Associata con il `UDS_WRAP` stile.  
  
-   **Tasti di direzione** incrementare o decrementare la posizione quando vengono premuti i tasti freccia su e freccia giù del pulsante di selezione. Associata con il `UDS_ARROWKEYS` stile.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

