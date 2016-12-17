---
title: "Finestre cornice | Microsoft Docs"
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
  - "CFrameWnd (classe), finestre cornice"
  - "finestre cornice documento"
  - "finestre cornice [C++]"
  - "finestre cornice [C++], informazioni sulle finestre cornice"
  - "MDI [C++], finestre cornice"
  - "MFC [C++], finestre cornice"
  - "Single Document Interface (SDI)"
  - "Single Document Interface (SDI), finestre cornice"
  - "finestre con separatore, e finestre cornice"
  - "visualizzazioni [C++], e finestre cornice"
  - "classi di finestra [C++], cornice"
  - "finestre [C++], MDI"
ms.assetid: 40677339-8135-4f5e-aba6-3fced3078077
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Finestre cornice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un'applicazione viene eseguita in windows, l'utente interagisce con documenti visualizzati nelle finestre.  Una finestra cornice di documento ha due componenti principali: il frame e il contenuto che incorniciano.  Una finestra cornice di documento può essere una finestra cornice di [interfaccia a documento singolo](../mfc/sdi-and-mdi.md) \(SDI\) o una finestra figlio di [interfaccia a documenti multipli](../mfc/sdi-and-mdi.md) \(MDI\).  Le finestre gestisce la maggior parte dell'interazione utente con la finestra cornice: spostamento e ridimensionamento la finestra, chiusura e ridurla e di ingrandimento.  Gestire i contenuti nel frame.  
  
## Le finestre e visualizzazioni  
 Il framework MFC utilizza l'autenticazione windows per contenere le visualizzazioni.  I due componenti \- frame e contenuto \- sono rappresentate e gestite da due classi diverse in MFC.  Una classe della finestra cornice gestisce il frame e una classe di visualizzazione gestisce il contenuto.  La finestra di visualizzazione è un elemento figlio della finestra cornice.  Interazione da disegno e altri con il documento ha luogo nell'area client della visualizzazione, non l'area client della finestra cornice.  La finestra cornice fornisce un frame visibili intorno a una visualizzazione, completa con una barra del titolo e controlli come i menu di controllo, pulsanti della finestra standard per ridurre a icona e di ingrandimento della finestra e dei controlli per ridimensionare la finestra.  "Contenuto" sono costituite dall'area client della finestra, che è occupata da una finestra figlio alla visualizzazione.  Nella figura seguente è illustrata la relazione tra una finestra cornice e una visualizzazione.  
  
 ![Visualizzazione di una finestra cornice](../mfc/media/vc37fx1.png "vc37FX1")  
Finestra cornice e visualizzazione  
  
## Le finestre e finestre con separatore  
 Un'altra eliminazione comune prevede che una finestra cornice incornici più visualizzazioni, in genere utilizzando [finestra con separatore](../mfc/multiple-document-types-views-and-frame-windows.md).  In una finestra con separatore, l'area client della finestra cornice è occupata da una finestra con separatore, che a sua volta contiene più finestre figlio, denominata riquadri, che rappresentano visualizzazioni.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
 **Argomenti generali della finestra cornice**  
  
-   [Oggetti Window](../mfc/window-objects.md)  
  
-   [Classi della finestra cornice](../mfc/frame-window-classes.md)  
  
-   [Le classi della finestra cornice hanno creato dalla procedura guidata applicazione](../mfc/frame-window-classes-created-by-the-application-wizard.md)  
  
-   [Stili finestra cornice](../mfc/frame-window-styles-cpp.md)  
  
-   [Le finestre che fanno](../mfc/what-frame-windows-do.md)  
  
 **Argomenti sull'utilizzo delle finestre**  
  
-   [Utilizzo delle finestre](../mfc/using-frame-windows.md)  
  
-   [Creazione delle finestre di documento](../mfc/creating-document-frame-windows.md)  
  
-   [Eliminazione permanente delle finestre](../mfc/destroying-frame-windows.md)  
  
-   [Gestione di finestre figlio MDI](../mfc/managing-mdi-child-windows.md)  
  
-   [Gestire la visualizzazione corrente](../mfc/managing-the-current-view.md) in una finestra cornice che contiene più di una visualizzazione  
  
-   [Gestione dei menu, le barre di controllo e i tasti di scelta rapida \(altri oggetti che condividono lo spazio della finestra cornice\)](../mfc/managing-menus-control-bars-and-accelerators.md)  
  
 **Argomenti sulle funzionalità speciali della finestra cornice**  
  
-   [Trascinandone i file](../mfc/dragging-and-dropping-files-in-a-frame-window.md) da Esplora file o dal File Manager in una finestra cornice  
  
-   [Rispondendo allo scambio dinamico dati \(DDE\)](../mfc/responding-to-dynamic-data-exchange-dde.md)  
  
-   [Stati di Semimodal: Guida di Windows sensibile al contesto \(che orchestra altre azioni window](../mfc/orchestrating-other-window-actions.md)  
  
-   [Stati di Semimodal: stampa e anteprima di stampa \(che orchestrano altre azioni window](../mfc/orchestrating-other-window-actions.md)  
  
 **Argomenti su altri tipi di finestre**  
  
-   [Utilizzo delle visualizzazioni](../mfc/using-views.md)  
  
-   [Finestre di dialogo](../mfc/dialog-boxes.md)  
  
-   [Controlli](../mfc/controls-mfc.md)  
  
## Vedere anche  
 [Windows](../mfc/windows.md)