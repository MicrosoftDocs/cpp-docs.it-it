---
title: "Classi visualizzazione derivate disponibili in MFC | Microsoft Docs"
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
  - "classi [C++], derivati"
  - "CView (classe), classi derivate da"
  - "classi derivate, classi visualizzazione"
  - "classi visualizzazione, derivati"
ms.assetid: dba42178-7459-4ccc-b025-f3d9b8a4b737
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi visualizzazione derivate disponibili in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il seguente le classi visualizzazione mostra MFC della tabella e le relative relazioni all'altro.  Le funzionalità della classe di visualizzazione dipendono dalla classe di visualizzazione MFC da cui deriva.  
  
### Classi di visualizzazione  
  
|Classe|Descrizione|  
|------------|-----------------|  
|[CView](../mfc/reference/cview-class.md)|Classe base di tutti visualizzazioni.|  
|[CCtrlView](../mfc/reference/cctrlview-class.md)|Classe base di `CTreeView`, di `CListView`, di `CEditView` e di `CRichEditView`.  Queste classi consentono di utilizzare l'architettura documento\/visualizzazione con i controlli comuni di Windows visualizzati.|  
|[CEditView](../mfc/reference/ceditview-class.md)|Una visualizzazione semplice basata sul controllo casella di modifica di windows.  Consente di immettere e modificare il testo e può essere utilizzato come base per un editor di testo semplice.  Vedere anche `CRichEditView`.|  
|[CRichEditView](../mfc/reference/cricheditview-class.md)|Una visualizzazione che contiene un oggetto [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md).  Questa classe è analoga a `CEditView`, a differenza di `CEditView`, testo formattato degli handle di `CRichEditView`.|  
|[CListView](../mfc/reference/clistview-class.md)|Una visualizzazione che contiene un oggetto [CListCtrl](../mfc/reference/clistctrl-class.md).|  
|[CTreeView](../mfc/reference/ctreeview-class.md)|Una visualizzazione che contiene un oggetto [Problemi](../mfc/reference/ctreectrl-class.md), per le visualizzazioni che assomigliano alla finestra Esplora soluzioni in Visual C\+\+.|  
|[CScrollView](../mfc/reference/cscrollview-class.md)|Classe base di `CFormView`, di `CRecordView` e di `CDaoRecordView`.  Metodi che scorrono il contenuto della visualizzazione.|  
|[CFormView](../mfc/reference/cformview-class.md)|Una visualizzazione form, una visualizzazione contenente i controlli.  Un'applicazione basata su form fornisce uno o più tali interfacce del form.|  
|[CHtmlView](../mfc/reference/chtmlview-class.md)|Il punto di vista del browser con cui l'utente dell'applicazione può esplorare i siti del world wide web nonché cartelle nel file system locale e in rete.  Il punto di vista del browser può anche essere utilizzata come contenitore di documenti attivi.|  
|[CRecordView](../mfc/reference/crecordview-class.md)|Una visualizzazione form che record di database ODBC presenti nei controlli.  Se si seleziona il supporto di ODBC nel progetto, la classe base della visualizzazione è `CRecordView`.  La visualizzazione è connessa a un oggetto di `CRowset`.|  
|[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)|Una visualizzazione form che record di database DAO presenti nei controlli.  Se si seleziona il supporto di DAO nel progetto, la classe base della visualizzazione è `CDaoRecordView`.  La visualizzazione è connessa a un oggetto di `CDaoRecordset`.|  
|[COleDBRecordView](../mfc/reference/coledbrecordview-class.md)|Una visualizzazione form che visualizza record OLE DB nei controlli.  Se si seleziona il supporto di OLE DB nel progetto, la classe base della visualizzazione è `COleDBRecordView`.  La visualizzazione è connessa a un oggetto di `CRowset`.|  
  
> [!NOTE]
>  A partire dalla versione 4,0 di MFC, `CEditView` è derivato da `CCtrlView`.  
  
 Per utilizzare queste classi nell'applicazione, derivare le classi di visualizzazione dell'applicazione da esse.  Per informazioni correlate, vedere [Visualizzazioni di ridimensionamento e di spostamento](../mfc/scrolling-and-scaling-views.md).  Per ulteriori informazioni sulle classi di database, vedere [Cenni preliminari: La programmazione di database](../data/data-access-programming-mfc-atl.md).  
  
## Vedere anche  
 [Utilizzo delle visualizzazioni](../mfc/using-views.md)