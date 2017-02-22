---
title: "Finestre di dialogo | Microsoft Docs"
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
  - "CDialog (classe), MFC (finestre di dialogo)"
  - "MFC (finestre di dialogo)"
  - "MFC, finestre di dialogo"
  - "finestre di dialogo modali, MFC (finestre di dialogo)"
  - "finestre di dialogo non modali, MFC (finestre di dialogo)"
ms.assetid: e4feea1a-8360-4ccb-9b84-507f1ccd9ef3
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Finestre di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le applicazioni per windows indicano spesso con l'utente nelle finestre di dialogo.  La classe [CDialog](../mfc/reference/cdialog-class.md) fornisce un'interfaccia per gestire le finestre di dialogo, l'editor finestre di Visual C\+\+ semplifica la progettazione di finestre di dialogo e creare le risorse del dialogo\- modello e le creazioni guidate codice semplificano il processo di inizializzare e di convalidarne i controlli in una finestra di dialogo e raccogliere i valori immessi dall'utente.  
  
 Le finestre di dialogo sono inclusi i controlli, tra cui:  
  
-   Controlli comuni di Windows quali caselle di modifica, pulsanti, caselle di riepilogo, caselle combinate, i controlli struttura ad albero, i controlli elenco e indicatori di stato.  
  
-   Controlli ActiveX.  
  
-   Controlli creati dal proprietario: controlli che si occupa di disegnare la finestra di dialogo.  
  
 La maggior parte delle finestre di dialogo sono modali, che richiedono all'utente di chiudere la finestra di dialogo prima di utilizzare qualsiasi altra parte del programma.  Ma è possibile creare finestre di dialogo non modale, che consentono al lavoro degli utenti con altre finestre mentre la finestra di dialogo è aperta.  MFC supporta entrambi i tipi di dialogo con classe `CDialog`.  I controlli vengono disposti e gestiti tramite una risorsa di dialogo\- modello, creati con [editor finestre](../mfc/dialog-editor.md).  
  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md), noto anche come le finestre di dialogo della scheda, è finestre di dialogo che contengono "le pagine" dei controlli distinti della finestra di dialogo.  Ciascuna pagina è presente una cartella di file "scheda" all'inizio.  Fare clic su una scheda porta la pagina all'inizio della finestra di dialogo.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Esempio: Verrà visualizzata la finestra di dialogo tramite un comando di menu](../mfc/example-displaying-a-dialog-box-via-a-menu-command.md)  
  
-   [Componenti della finestra di dialogo del framework](../mfc/dialog-box-components-in-the-framework.md)  
  
-   [Modale e finestre di dialogo non modale](../mfc/modal-and-modeless-dialog-boxes.md)  
  
-   [Finestre e le pagine delle proprietà](../mfc/property-sheets-and-property-pages-mfc.md) in una finestra di dialogo  
  
-   [Creare la risorsa finestra di dialogo](../mfc/creating-the-dialog-resource.md)  
  
-   [Creare una classe della finestra di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md)  
  
-   [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)  
  
-   [Scambio di dati della finestra di dialogo \(DDX\) e convalida \(DDV\)](../mfc/dialog-data-exchange-and-validation.md)  
  
-   [L'accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)  
  
-   [Messaggi di windows del mapping alla classe](../mfc/mapping-windows-messages-to-your-class.md)  
  
-   [Funzioni membro comunemente sottoposte](../mfc/commonly-overridden-member-functions.md)  
  
-   [Funzioni membro in genere aggiunte](../mfc/commonly-added-member-functions.md)  
  
-   [Classi comuni della finestra di dialogo](../mfc/common-dialog-classes.md)  
  
-   [Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md)  
  
-   Creare un'applicazione la cui interfaccia utente è una finestra di dialogo: vedere i programmi di esempio di [CMNCTRL2](../top/visual-cpp-samples.md) o di [CMNCTRL1](../top/visual-cpp-samples.md).  La creazione guidata applicazione fornisce anche questa opzione.  
  
-   [Esempi](../mfc/dialog-sample-list.md)  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)