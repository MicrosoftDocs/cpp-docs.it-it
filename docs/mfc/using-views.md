---
title: "Utilizzo delle visualizzazioni | Microsoft Docs"
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
  - "CView (classe), architettura visualizzazione"
  - "disegno, dati"
  - "interazione con utenti e ruoli di classe visualizzazione"
  - "MFC, visualizzazioni"
  - "dati di disegno"
  - "dati di rendering"
  - "input utente, interpretazione mediante classe visualizzazione"
  - "classi visualizzazione, ruolo nella visualizzazione dei dati di applicazione"
  - "classi visualizzazione, ruolo nella gestione dell'interazione dell'utente"
  - "visualizzazioni, utilizzo"
ms.assetid: dc3de6ad-5c64-4317-8f10-8bdcc38cdbd5
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Utilizzo delle visualizzazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le responsabilità della visualizzazione sono di visualizzare graficamente i dati del documento all'utente e di accettare e interpretare l'input dell'utente come operazioni nel documento.  Le attività per la creazione della classe di visualizzazione:  
  
-   Scrivere la funzione membro di visualizzazione di [OnDraw](../Topic/CView::OnDraw.md) della classe, che esegue il rendering dei dati del documento.  
  
-   Connettere i messaggi appropriati e gli oggetti dell'interfaccia utente di windows come voci di menu alle funzioni membro per la gestione dei messaggi nella classe di visualizzazione.  
  
-   Implementare i gestori per interpretare l'input dell'utente.  
  
 Inoltre, potrebbe essere necessario eseguire l'override di altre funzioni membro di `CView` nella classe di visualizzazione derivata.  In particolare, è possibile eseguire l'override [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) per eseguire un'inizializzazione speciale per la visualizzazione e [OnUpdate](../Topic/CView::OnUpdate.md) eseguire l'elaborazione speciale necessaria prima della visualizzazione viene ridisegnato.  Per i documenti a più pagine, è anche necessario eseguire l'override di [OnPreparePrinting](../Topic/CView::OnPreparePrinting.md) per inizializzare la finestra di dialogo stampa e il numero di pagine da stampare e di altre informazioni.  Per ulteriori informazioni sull'override funzioni membro di `CView`, vedere la classe [CView](../mfc/reference/cview-class.md) in *Riferimento MFC*.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Classi di visualizzazione derivate disponibili in MFC](../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Disegnare una visualizzazione](../mfc/drawing-in-a-view.md)  
  
-   [Interpretazione di input con una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)  
  
-   [Il ruolo della visualizzazione in stampa](../mfc/role-of-the-view-in-printing.md)  
  
-   [Visualizzazioni di ridimensionamento e di spostamento](../mfc/scrolling-and-scaling-views.md)  
  
-   [Inizializzazione e pulizia di documento e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)  
  
## Vedere anche  
 [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)   
 [CFormView Class](../mfc/reference/cformview-class.md)   
 [Visualizzazioni di record \(accesso ai dati MFC\)](../data/record-views-mfc-data-access.md)   
 [Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)