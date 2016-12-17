---
title: "Ciclo di vita di una finestra di dialogo | Microsoft Docs"
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
  - "finestre di dialogo, ciclo di vita"
  - "ciclo di vita delle finestre di dialogo"
  - "MFC (finestre di dialogo), ciclo di vita"
  - "finestre di dialogo modali, ciclo di vita"
  - "finestre di dialogo non modali, ciclo di vita"
ms.assetid: e16fd78e-238d-4f31-8c9d-8564f3953bd9
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ciclo di vita di una finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante il ciclo di vita di una finestra di dialogo, l'utente richiama la finestra di dialogo, in genere in un gestore comando che crea e inizializza l'oggetto della finestra di dialogo, l'utente interagisce con la finestra di dialogo e chiusa la finestra.  
  
 Per le finestre di dialogo modali, il gestore raccoglie tutti i dati immessi dall'utente una volta chiusa la finestra.  Poiché l'oggetto della finestra di dialogo esiste dopo la relativa finestra di dialogo è chiusa, è possibile utilizzare semplicemente le variabili membro della classe della finestra di dialogo per estrarre i dati.  
  
 Per le finestre di dialogo non modale, è possibile estrarre spesso i dati dall'oggetto finestra di dialogo mentre la finestra di dialogo è ancora visualizzata.  A un certo punto, l'oggetto della finestra di dialogo viene eliminato; quando si verifica dipende dal codice.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Creazione e visualizzazione delle finestre di dialogo](../mfc/creating-and-displaying-dialog-boxes.md)  
  
-   [Creare finestre di dialogo modali](../mfc/creating-modal-dialog-boxes.md)  
  
-   [Creare finestre di dialogo non modale](../mfc/creating-modeless-dialog-boxes.md)  
  
-   [Utilizzando un modello di finestra di dialogo in memoria](../mfc/using-a-dialog-template-in-memory.md)  
  
-   [Impostare il colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-box’s-background-color.md)  
  
-   [Inizializzare la finestra di dialogo](../mfc/initializing-the-dialog-box.md)  
  
-   [I messaggi di windows management nella finestra di dialogo](../mfc/handling-windows-messages-in-your-dialog-box.md)  
  
-   [Recupero di dati dall'oggetto finestra di dialogo](../mfc/retrieving-data-from-the-dialog-object.md)  
  
-   [Chiudere la finestra di dialogo](../mfc/closing-the-dialog-box.md)  
  
-   [Eliminare la finestra di dialogo](../mfc/destroying-the-dialog-box.md)  
  
-   [Scambio di dati della finestra di dialogo \(DDX\) e convalida \(DDV\)](../mfc/dialog-data-exchange-and-validation.md)  
  
-   [Finestre di dialogo delle proprietà](../mfc/property-sheets-and-property-pages-mfc.md)  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)