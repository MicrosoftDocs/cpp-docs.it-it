---
title: "Stili dei pulsanti di selezione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSpinButtonCtrl (classe), stili"
  - "controllo pulsante di selezione, stili"
  - "stili, CSpinButtonCtrl"
  - "stili, controllo pulsante di selezione"
ms.assetid: fb4a7f6f-9182-47be-bccf-0728fdc5332f
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili dei pulsanti di selezione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Molte impostazioni per un pulsante di selezione \([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)\) sono controllate dagli stili.  È possibile impostare i seguenti stili utilizzando la finestra di **Proprietà** nell'editor finestre.  
  
-   Verticale o orizzontale di**Orientamento**.  Controlla l'orientamento di pulsanti freccia.  Associato allo stile di `UDS_HORZ`.  
  
-   Uno di**Allineamento** non collegato, in sinistro, o a destra.  Controlla la posizione del pulsante di selezione.  Posizione destra e sinistra il pulsante di selezione accanto alla finestra degli utenti.  La larghezza della finestra buddy è ridotta al pulsante esegui selezione.  Associato agli stili di `UDS_ALIGNRIGHT` e di `UDS_ALIGNLEFT`.  
  
-   **Auto Buddy** Automaticamente selezionare la finestra precedente nell'ordine Z la finestra degli utenti al pulsante esegui selezione.  Nel modello della finestra di dialogo, si tratta del controllo che precede il pulsante di selezione nell'ordine di tabulazione.  Associato allo stile di `UDS_AUTOBUDDY`.  
  
-   **Imposta integer Buddy** Conseguenza il controllo di rotazione per incrementi e diminuire la barra del titolo della finestra degli utenti alle modifiche di posizione corrente.  Associato allo stile di `UDS_SETBUDDYINT`.  
  
-   **Non migliaia** Non inserisce il separatore delle migliaia il valore nel titolo della finestra degli utenti.  Associato allo stile di `UDS_NOTHOUSANDS`.  
  
    > [!NOTE]
    >  Impostare questo stile se si desidera utilizzare per lo scambio di dati della finestra di dialogo \(DDX\) per ottenere il valore intero dal controllo degli utenti.  `DDX_Text` non accetta i separatori delle migliaia incorporati.  
  
-   **A capo automatico** Causa la posizione su "wrapper" come valore viene incrementato o diminuisce oltre l'intervallo del controllo.  Associato allo stile di `UDS_WRAP`.  
  
-   **Tasti freccia** Modo che il pulsante di selezione per incrementare o decrementare la posizione quando il tasto FRECCIA SU e FRECCIA GIÙ premuti.  Associato allo stile di `UDS_ARROWKEYS`.  
  
## Vedere anche  
 [Utilizzo di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)   
 [Controlli](../mfc/controls-mfc.md)