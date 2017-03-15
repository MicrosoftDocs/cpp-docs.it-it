---
title: "Contenitori di controlli ActiveX | Microsoft Docs"
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
  - "contenitori dei controlli ActiveX [C++]"
  - "controlli OLE [C++], contenitori"
ms.assetid: 0eb1a713-e607-4c79-a0c7-67c5f1fd5fab
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Contenitori di controlli ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un contenitore di controlli ActiveX è un contenitore che supporta completamente i controlli ActiveX e può includerli nelle proprie finestre e nelle finestre di dialogo.  Un controllo ActiveX rappresenta un elemento di software riutilizzabile che si può utilizzare in molti progetti di sviluppo.  I controlli consentono all'utente dell'applicazione di accedere ai database, di monitorare i dati e di effettuare varie selezioni all'interno delle applicazioni.  Per ulteriori informazioni sui controlli ActiveX, vedere l'articolo [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md).  
  
 In genere i contenitori dei controlli possono assumere due forme in un progetto:  
  
-   Finestre di dialogo e finestre simili alle finestre di dialogo come le visualizzazioni di form, dove un controllo ActiveX viene utilizzato in qualche punto nella finestra di dialogo.  
  
-   Finestre in un'applicazione, dove un controllo ActiveX viene utilizzato in una barra degli strumenti o in un'altra posizione nella finestra dell'utente.  
  
 Il contenitore dei controlli ActiveX interagisce con il controllo mediante [metodi](../mfc/mfc-activex-controls-methods.md) e [proprietà](../mfc/mfc-activex-controls-properties.md) esposti.  Questi metodi e proprietà, accessibili e modificabili dal contenitore dei controlli, sono accessibili tramite una classe wrapper nel progetto del contenitore dei controlli ActiveX.  Il controllo ActiveX incorporato può anche interagire con il contenitore generando \(inviando\) [eventi](../mfc/mfc-activex-controls-events.md) per notificare al contenitore che un'azione si è verificata.  Il contenitore dei controlli può scegliere di agire oppure no su queste notifiche.  
  
 Articoli aggiuntivi in cui vengono illustrati diversi argomenti, dalla creazione di un progetto del contenitore dei controlli ActiveX a problemi di base di implementazione relativi ai contenitori dei controlli ActiveX creati con Visual C\+\+:  
  
-   [Creazione di un contenitore di controlli ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control-container.md)  
  
-   [Contenitori per i controlli ActiveX](../mfc/containers-for-activex-controls.md)  
  
-   [Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX](../mfc/activex-control-containers-manually-enabling-activex-control-containment.md)  
  
-   [Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli](../mfc/inserting-a-control-into-a-control-container-application.md)  
  
-   [Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md)  
  
-   [Contenitori di controlli ActiveX: gestione di eventi da un controllo ActiveX](../mfc/activex-control-containers-handling-events-from-an-activex-control.md)  
  
-   [Contenitori di controlli ActiveX: visualizzazione e modifica delle proprietà dei controlli](../mfc/activex-control-containers-viewing-and-modifying-control-properties.md)  
  
-   [Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX](../mfc/programming-activex-controls-in-a-activex-control-container.md)  
  
-   [Contenitori di controlli ActiveX: utilizzo di controlli in un contenitore diverso da una finestra di dialogo](../mfc/activex-control-containers-using-controls-in-a-non-dialog-container.md)  
  
 Per ulteriori informazioni sull'utilizzo dei controlli ActiveX in una finestra di dialogo, vedere gli argomenti dell'[Editor finestre](../mfc/dialog-editor.md).  
  
 Per un elenco degli articoli relativi ai dettagli sullo sviluppo dei controlli ActiveX con l'utilizzo di Visual C\+\+ e per le classi dei controlli ActiveX MFC, vedere [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md).  Gli elementi sono raggruppati per categorie funzionali.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)