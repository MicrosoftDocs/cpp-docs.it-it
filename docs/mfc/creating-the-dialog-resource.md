---
title: "Creazione della risorsa finestra di dialogo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "risorse finestra di dialogo"
  - "modelli di finestra di dialogo, creazione della risorsa finestra di dialogo"
  - "MFC (finestre di dialogo), creazione"
  - "MFC (finestre di dialogo), risorsa finestra di dialogo"
  - "risorse [MFC], creazione di finestre di dialogo"
  - "modelli, creazione"
ms.assetid: 0b83bd33-14d3-4611-8129-fccdae18053e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Creazione della risorsa finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per progettare la [finestra di dialogo](../mfc/dialog-boxes.md) e per creare la risorsa finestra di dialogo, utilizzare l'[editor finestre](../mfc/dialog-editor.md).  Nell'editor finestre, è possibile:  
  
-   Regolare le dimensioni e la posizione della finestra di dialogo quando verrà visualizzata.  
  
-   Trascinare vari tipi di controlli da una tavolozza dei controlli e rilasciarli dove si desidera nella finestra di dialogo.  
  
-   Posizionare i controlli con i pulsanti di allineamento nella barra degli strumenti.  
  
-   Testare la finestra di dialogo simulando l'aspetto e il comportamento che avrà nel programma.  Nella modalità test, è possibile modificare i controlli della finestra di dialogo digitando il testo nelle caselle di testo, facendo clic sui pulsanti, e così via.  
  
 Al termine, la risorsa modello di finestra di dialogo viene archiviata nel file di script di risorsa dell'applicazione.  In seguito è possibile modificarla se necessario.  Per una descrizione completa di come creare e modificare le risorse finestra di dialogo, vedere gli argomenti relativi all'[editor finestre](../mfc/dialog-editor.md).  Questa tecnica viene inoltre utilizzata per creare risorse modello di finestra di dialogo per le classi [CFormView](../mfc/reference/cformview-class.md) e [CRecordView](../mfc/reference/crecordview-class.md).  
  
 Quando l'aspetto della finestra di dialogo è soddisfacente, creare una classe di finestra di dialogo ed eseguire il mapping dei messaggi, come illustrato in [Creazione di una classe di finestre di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md).  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)