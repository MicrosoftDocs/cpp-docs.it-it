---
title: "Finestre di dialogo modali e non modali | Microsoft Docs"
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
  - "MFC (finestre di dialogo), modali"
  - "MFC (finestre di dialogo), non modali"
  - "finestre di dialogo modali"
  - "finestre di dialogo non modali"
ms.assetid: e83df336-5994-4b8f-8233-7942f997315b
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Finestre di dialogo modali e non modali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare la classe [CDialog](../mfc/reference/cdialog-class.md) per gestire due tipi di finestre di dialogo:  
  
-   *Finestre di dialogo modali*, che richiedono all'utente di rispondere prima di procedere del programma  
  
-   *Finestre di dialogo non modale*, che rimangono nello schermo e sono disponibili in qualsiasi momento ma supportano altre attività dell'utente  
  
 Modifica e le procedure delle risorse per creare un modello di finestra di dialogo sono identiche per modale e finestre di dialogo non modale.  
  
 Creazione di una finestra di dialogo per il programma richiede i seguenti passaggi:  
  
1.  Utilizzare [editor finestre](../mfc/dialog-editor.md) per progettare la finestra di dialogo e creare la risorsa di dialogo\- modello.  
  
2.  Creare una classe di finestre di dialogo.  
  
3.  Connettersi [i controlli di risorsa finestra di dialogo gestori di messaggi](../mfc/adding-event-handlers-for-dialog-box-controls.md) nella classe della finestra di dialogo.  
  
4.  Aggiungere i membri dati associati a comandi della finestra di dialogo e specificare [scambio di dati della finestra di dialogo](../mfc/dialog-data-exchange.md) e [convalida di dati della finestra di dialogo](../mfc/dialog-data-validation.md) per i controlli.  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)