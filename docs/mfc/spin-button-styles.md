---
title: Stili dei pulsanti di selezione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- styles [MFC], CSpinButtonCtrl
- CSpinButtonCtrl class [MFC], styles
- styles [MFC], spin button control
- spin button control, styles
ms.assetid: fb4a7f6f-9182-47be-bccf-0728fdc5332f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fa4b2ae42175e2d4fc2ddb3317ef76b6b4dec8d3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="spin-button-styles"></a>Stili dei pulsanti di selezione
Molte delle impostazioni per un pulsante di selezione ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)) sono controllate dagli stili. È possibile impostare gli stili seguenti utilizzando la **proprietà** finestra dell'editor della finestra di dialogo.  
  
-   **Orientamento** verticale o orizzontale. Controlla l'orientamento dei pulsanti freccia. Associata con il `UDS_HORZ` stile.  
  
-   **Allineamento** associati, a sinistra o destra. Controlla il percorso del pulsante di selezione. A sinistra e destra è possibile posizionare il pulsante di selezione accanto alla finestra buddy. La larghezza della finestra buddy è ridotto per supportare il pulsante di selezione. Associata con il `UDS_ALIGNLEFT` e `UDS_ALIGNRIGHT` stili.  
  
-   **Auto Buddy** selezionare automaticamente la finestra precedente nell'ordine Z come finestra buddy del pulsante di selezione. In un modello di finestra di dialogo, questo è il controllo che precede il pulsante di selezione nell'ordine di tabulazione. Associata con il `UDS_AUTOBUDDY` stile.  
  
-   **Set Buddy Integer** fa sì che il controllo di selezione incrementare e decrementare la didascalia della finestra buddy come le modifiche della posizione corrente. Associata con il `UDS_SETBUDDYINT` stile.  
  
-   **No Thousands** non inserisce le migliaia separatore nel valore della didascalia della finestra buddy. Associata con il `UDS_NOTHOUSANDS` stile.  
  
    > [!NOTE]
    >  Impostare questo stile se si desidera utilizzare dialog data exchange (DDX) per ottenere il valore integer dal controllo correlato. `DDX_Text`non accetta i separatori delle migliaia incorporati.  
  
-   **Eseguire il wrapping** determina la posizione "capo" quando il valore viene incrementato o decrementato oltre l'intervallo del controllo. Associata con il `UDS_WRAP` stile.  
  
-   **Tasti di direzione** incrementare o decrementare la posizione quando vengono premuti i tasti freccia su e freccia giù del pulsante di selezione. Associata con il `UDS_ARROWKEYS` stile.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

