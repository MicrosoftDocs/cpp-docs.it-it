---
title: "Componenti della finestra di dialogo nel framework | Microsoft Docs"
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
  - "classi della finestra di dialogo, componenti della finestra di dialogo"
  - "modelli di finestra di dialogo, framework MFC"
  - "MFC (finestre di dialogo), informazioni sulle finestre di dialogo MFC"
  - "MFC (finestre di dialogo), creazione"
  - "MFC (finestre di dialogo), risorsa finestra di dialogo"
ms.assetid: 592db160-0a8a-49be-ac72-ead278aca53f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Componenti della finestra di dialogo nel framework
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel framework MFC, una finestra di dialogo ha due componenti:  
  
-   Una risorsa di dialogo\- modello che specifica la posizione della finestra di dialogo e i comandi.  
  
     La finestra di dialogo archivia un modello di finestra di dialogo da cui le finestre crea la finestra di dialogo e visualizzazioni.  Il modello specifica le caratteristiche della finestra di dialogo, quali la dimensione, posizione, stile e i tipi e le posizioni dei comandi della finestra di dialogo.  In genere si utilizza un modello di finestra di dialogo archiviato come risorsa, ma è anche possibile creare un modello in memoria.  
  
-   Una classe di finestre di dialogo, derivata da [CDialog](../mfc/reference/cdialog-class.md), fornire un'interfaccia di programmazione per gestire la finestra di dialogo.  
  
     Una finestra di dialogo è una finestra e verrà associata a una finestra di windows una volta visibile.  Quando la finestra di dialogo viene creata, la risorsa di dialogo\- modello viene utilizzata come modello per creare i controlli finestra figlio per la finestra di dialogo.  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)