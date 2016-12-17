---
title: "Utilizzo di oggetti finestra | Microsoft Docs"
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
  - "finestre figlio, utilizzo"
  - "oggetti delle finestre, utilizzo"
ms.assetid: f73aa254-90e3-46a9-8e9b-d78b7054a331
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di oggetti finestra
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzo delle richieste di windows per tre tipi di attività:  
  
-   I messaggi di windows management  
  
-   Disegnare la finestra  
  
 Per gestire i messaggi di windows in qualsiasi finestra, inclusi finestre figlio, vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md) associare i messaggi alla classe della finestra di C\+\+.  Scrivere i funzione membro per la gestione dei messaggi nella classe.  
  
 La maggior parte di disegnare di un'applicazione del framework si trova nella visualizzazione, la cui funzione membro di [OnDraw](../Topic/CView::OnDraw.md) viene chiamata ogni volta che il contenuto della finestra devono essere disegnati.  Se la finestra è un elemento figlio della visualizzazione, è possibile delegare parte del disegno di visualizzare la finestra figlio con una chiamata di `OnDraw` delle funzioni membro della finestra.  
  
 In ogni caso, sarà necessario un contesto di dispositivo per disegnare.  È possibile utilizzare la penna predefinita, il pennello e altri oggetti grafici contenuti nel contesto di dispositivo associato alla finestra.  Oppure modificare questi oggetti per ottenere effetti di disegno necessarie.  Al contesto di dispositivo installato come si desidera, chiamare le funzioni membro di classe [CDC](../mfc/reference/cdc-class.md) \(classe di contesto di dispositivo\) per creare linee, forme e testo; per utilizzare colori; e di utilizzare un sistema di coordinate.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Gestione dei messaggi e il mapping](../mfc/message-handling-and-mapping.md)  
  
-   [Disegnare una visualizzazione](../mfc/drawing-in-a-view.md)  
  
-   [Contesti di periferica](../mfc/device-contexts.md)  
  
-   [Oggetti grafici](../mfc/graphic-objects.md)  
  
## Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)