---
title: "Classi visualizzazione (Windows) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.view"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "visualizzazioni di record e form"
  - "barra di divisione di classi di finestra"
  - "classi visualizzazione, Windows"
ms.assetid: b11683fb-9f43-4de3-9499-2b55775f9870
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi visualizzazione (Windows)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`CView` e le relative classi derivate sono finestre figlio che rappresentano l'area client di una finestra cornice.  I dati su visualizza visualizzazioni e accettano input di un documento.  
  
 Una classe di visualizzazione è associata a una classe document e una classe della finestra cornice utilizzando un oggetto modello di documento.  
  
 [CView](../mfc/reference/cview-class.md)  
 La classe base per le visualizzazioni specifiche dei dati di un documento.  Le visualizzazioni visualizzare i dati e accettano input dell'utente per modificare o selezionare i dati.  Derivare la classe o classi di visualizzazione da `CView`.  
  
 [CScrollView](../mfc/reference/cscrollview-class.md)  
 La classe base per le visualizzazioni con le funzionalità di scorrimento.  Derivare la classe di visualizzazione da `CScrollView` per lo scorrimento automatico.  
  
## Form e visualizzazioni di record  
 Le Visualizzazioni Maschere si stanno scorrendo visualizzazioni.  Sono basate su un modello di finestra di dialogo.  
  
 Le visualizzazioni di record vengono derivate dalle visualizzazioni maschere.  Oltre al modello di finestra di dialogo, dispongono anche di una connessione a un database.  
  
 [CFormView](../mfc/reference/cformview-class.md)  
 Una visualizzazione a scorrimento di cui il layout è definito nel modello di finestra di dialogo.  Derivare la classe da `CFormView` per implementare un'interfaccia utente basata su un modello di finestra di dialogo.  
  
 [CDaoRecordView](../mfc/reference/cdaorecordview-class.md)  
 Fornisce una visualizzazione form connessa direttamente a un oggetto recordset di \(DAO\) dell'oggetto di accesso ai dati.  Come tutte le visualizzazioni maschere, `CDaoRecordView` è basato su un modello di finestra di dialogo.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Fornisce una visualizzazione form connessa direttamente a un oggetto recordset ODBC \(open database connectivity\).  Come tutte le visualizzazioni maschere, `CRecordView` è basato su un modello di finestra di dialogo.  
  
 [CHtmlEditView](../mfc/reference/chtmleditview-class.md)  
 Una visualizzazione form che fornisce la funzionalità della piattaforma di modifica HTML disponibili in inglese\).  
  
## Visualizzazione controlli  
 Le visualizzazioni controlli visualizzare un controllo come relativa visualizzazione.  
  
 [CCtrlView](../mfc/reference/cctrlview-class.md)  
 La classe base per tutte le visualizzazioni associata ai controlli Windows.  Le visualizzazioni basate sui controlli vengono descritte di seguito.  
  
 [CEditView](../mfc/reference/ceditview-class.md)  
 Una visualizzazione contenente un controllo edit standard di windows \(vedere [CEdit](../mfc/reference/cedit-class.md)\).  Modifica del testo di supporto dei controlli di modifica, ricerca, sostituendo e lo scorrimento le funzionalità.  
  
 [CRichEditView](../mfc/reference/cricheditview-class.md)  
 Una visualizzazione contenente un controllo Rich Edit di windows \(vedere [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\).  Oltre alle funzionalità di un controllo di modifica, i controlli Rich Edit supportano i tipi, i colori, la formattazione dei paragrafi e gli oggetti OLE incorporati.  
  
 [CListView](../mfc/reference/clistview-class.md)  
 Una visualizzazione contenente un controllo elenco di windows \(vedere [CListCtrl](../mfc/reference/clistctrl-class.md)\).  Un controllo elenco visualizza una raccolta di elementi, ognuno costituito da un'icona e di un'etichetta, in modo simile al riquadro destro di Esplora file.  
  
 [CTreeView](../mfc/reference/ctreeview-class.md)  
 Una visualizzazione contenente un controllo struttura ad albero delle finestre \(vedere [Problemi](../mfc/reference/ctreectrl-class.md)\).  Un controllo struttura ad albero disponibile un elenco gerarchico delle icone e le etichette disposte in un simile a sinistra del riquadro modo Esplora file.  
  
## Classi correlate  
 `CSplitterWnd` consente di eseguire contemporaneamente più visualizzazioni all'interno di una singola finestra cornice.  `CPrintDialog` e `CPrintInfo` supportano la possibilità di anteprima di stampa e di stampa delle visualizzazioni.  `CRichEditDoc` e `CRichEditCntrItem` vengono utilizzati con `CRichEditView` per implementare le funzionalità contenitore OLE.  
  
 [CSplitterWnd](../mfc/reference/csplitterwnd-class.md)  
 Una finestra che l'utente può dividere in più riquadri.  Questi riquadri possono essere ridimensionabili dall'utente o dalla dimensioni fisse.  
  
 [CPrintDialog](../mfc/reference/cprintdialog-class.md)  
 Fornisce una finestra di dialogo standard di stampa di file.  
  
 [CPrintInfo](../mfc/reference/cprintinfo-structure.md)  
 Una struttura contenente informazioni su un processo di anteprima di stampa o di stampa.  Utilizzato da `CView` che stampa architettura.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Gestisce l'elenco di elementi client OLE in `CRichEditView`.  
  
 [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)  
 Fornisce l'accesso lato client a un elemento OLE archiviato in `CRichEditView`.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)