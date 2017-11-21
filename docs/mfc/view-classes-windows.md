---
title: Visualizzare le classi (Windows) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.classes.view
dev_langs: C++
helpviewer_keywords:
- form and record views [MFC]
- splitter window classes [MFC]
- view classes [MFC], Windows
ms.assetid: b11683fb-9f43-4de3-9499-2b55775f9870
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0148ead7a978389f763efbe9ee6306ec7a5839cd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="view-classes-windows"></a>Classi visualizzazione (Windows)
`CView`e le relative classi derivate sono finestre figlio che rappresentano l'area client di una finestra cornice. Le visualizzazioni mostrano i dati e accettano l'input per un documento.  
  
 Una classe di visualizzazione è associata a una classe di documento e una classe della finestra cornice utilizzando un oggetto modello di documento.  
  
 [CView](../mfc/reference/cview-class.md)  
 Classe di base per le viste di dati di un documento specifico dell'applicazione. Viste di visualizzano i dati e di accettano l'input dell'utente per modificare o selezionare i dati. Derivare la classe di visualizzazione o le classi da `CView`.  
  
 [CScrollView](../mfc/reference/cscrollview-class.md)  
 Classe di base per le viste con funzionalità di scorrimento. Derivare la classe di visualizzazione da `CScrollView` per lo scorrimento automatico.  
  
## <a name="form-and-record-views"></a>Form e visualizzazioni di Record  
 Visualizzazioni di form sono anche scorrimento di visualizzazioni. Esse si basano su un modello di finestra di dialogo.  
  
 Visualizzazioni di record sono derivate da visualizzazioni di form. Oltre a modello di finestra di dialogo, hanno anche una connessione a un database.  
  
 [CFormView](../mfc/reference/cformview-class.md)  
 Una visualizzazione a scorrimento il cui layout viene definito in un modello di finestra di dialogo. Derivare una classe da `CFormView` per implementare un'interfaccia utente in base a un modello di finestra di dialogo.  
  
 [CDaoRecordView](../mfc/reference/cdaorecordview-class.md)  
 Fornisce una visualizzazione connessa direttamente a un oggetto recordset oggetto DAO (Data Access). Come tutte le visualizzazioni di form, un `CDaoRecordView` si basa su un modello di finestra di dialogo.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Fornisce una visualizzazione connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Come tutte le visualizzazioni di form, un `CRecordView` si basa su un modello di finestra di dialogo.  
  
 [CHtmlEditView](../mfc/reference/chtmleditview-class.md)  
 Visualizzazione form che fornisce la funzionalità della piattaforma di modifica WebBrowser HTML.  
  
## <a name="control-views"></a>Viste di controllo  
 Viste di controllo di visualizzare un controllo come la visualizzazione.  
  
 [CCtrlView](../mfc/reference/cctrlview-class.md)  
 La classe base per tutte le visualizzazioni associate ai controlli di Windows. Le viste basate su controlli sono descritti di seguito.  
  
 [CEditView](../mfc/reference/ceditview-class.md)  
 Controllo di modifica di una vista che contiene uno standard di Windows (vedere [CEdit](../mfc/reference/cedit-class.md)). Modificare la modifica del testo di supporto di controlli, la ricerca, la sostituzione e funzionalità di scorrimento.  
  
 [CRichEditView](../mfc/reference/cricheditview-class.md)  
 Controllo di una vista che contiene un Windows rich edit (vedere [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Oltre alle funzionalità di un controllo di modifica, rich edit controlli supporto tipi di carattere, colori, la formattazione di paragrafo e oggetti OLE incorporati.  
  
 [CListView](../mfc/reference/clistview-class.md)  
 Una vista che contiene un elenco di Windows (vedere [CListCtrl](../mfc/reference/clistctrl-class.md)). Un controllo elenco consente di visualizzare una raccolta di elementi, ciascuno costituito da un'icona e un'etichetta, in modo simile al riquadro destro di Esplora File.  
  
 [CTreeView](../mfc/reference/ctreeview-class.md)  
 Una vista che contiene un controllo struttura ad albero di Windows (vedere [CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Un controllo struttura ad albero visualizza un elenco gerarchico di icone ed etichette disposte in modo simile al riquadro sinistro di Esplora File.  
  
## <a name="related-classes"></a>Classi correlate  
 `CSplitterWnd`Consente di disporre di più visualizzazioni all'interno di una finestra cornice singola. `CPrintDialog`e `CPrintInfo` supportano la possibilità di stampa e anteprima di stampa di viste. `CRichEditDoc`e `CRichEditCntrItem` vengono utilizzati con `CRichEditView` per implementare funzionalità di contenitore OLE.  
  
 [CSplitterWnd](../mfc/reference/csplitterwnd-class.md)  
 Una finestra che l'utente è suddiviso in più riquadri. Questi riquadri possono essere ridimensionati dall'utente o a dimensione fissa.  
  
 [CPrintDialog](../mfc/reference/cprintdialog-class.md)  
 Fornisce una finestra di dialogo standard per la stampa di un file.  
  
 [CPrintInfo](../mfc/reference/cprintinfo-structure.md)  
 Una struttura contenente informazioni su un processo di anteprima di stampa o stampa. Utilizzato da `CView`dell'architettura di stampa.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Gestisce l'elenco di elementi client OLE in un `CRichEditView`.  
  
 [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)  
 Fornisce l'accesso sul lato client a OLE elemento archiviato in un `CRichEditView`.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

