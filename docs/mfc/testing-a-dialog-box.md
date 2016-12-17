---
title: "Testing a Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "Test Dialog command"
  - "testing, dialog boxes"
  - "dialog boxes, testing"
ms.assetid: 45034ee9-c554-4f4b-8c46-6ddefdee8951
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Testing a Dialog Box
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si progetta una finestra di dialogo, è possibile simularne e verificarne il comportamento in fase di esecuzione senza compilare il programma. In questo modo è possibile:  
  
-   Digitare un testo, selezionare elementi dagli elenchi della casella combinata, attivare o disattivare le opzioni e scegliere i comandi.  
  
-   Testare l'ordine di tabulazione.  
  
-   Verificare il raggruppamento di controlli, quali pulsanti di opzione e caselle di controllo.  
  
-   Verificare i tasti di scelta rapida per i controlli nella finestra di dialogo.  
  
    > [!NOTE]
    >  Le connessioni al codice della finestra di dialogo effettuate tramite le procedure guidate non vengono incluse nella simulazione.  
  
 Durante la verifica di una finestra di dialogo, la posizione in cui quest'ultima viene visualizzata è in genere relativa alla finestra principale del programma. Se la proprietà Absolute Align della finestra di dialogo è stata impostata su True, la posizione in cui viene visualizzata la finestra di dialogo viene definita in base all'angolo superiore sinistro dello schermo.  
  
### Per testare una finestra di dialogo  
  
1.  Quando l'editor finestre è la finestra attiva, sulla barra dei menu scegliere **Formato**, **Verifica finestra di dialogo**.  
  
2.  Per terminare la simulazione, premere ESC oppure scegliere il pulsante **Chiudi** nella finestra di dialogo da testare.  
  
 Per informazioni su come aggiungere risorse ai progetti gestiti, vedere [Risorse nelle applicazioni desktop](../Topic/Resources%20in%20Desktop%20Apps.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Dialog Editor](../mfc/dialog-editor.md)   
 [Attivazione o disattivazione della visualizzazione della barra degli strumenti dell'editor finestre](../mfc/showing-or-hiding-the-dialog-editor-toolbar.md)