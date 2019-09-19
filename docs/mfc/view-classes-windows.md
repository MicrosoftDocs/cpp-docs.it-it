---
title: Classi visualizzazione (Windows)
ms.date: 09/17/2019
f1_keywords:
- vc.classes.view
helpviewer_keywords:
- form and record views [MFC]
- splitter window classes [MFC]
- view classes [MFC], Windows
ms.assetid: b11683fb-9f43-4de3-9499-2b55775f9870
ms.openlocfilehash: f3e9ea2ebf3eb0ce04fde0339aaf0243686248a9
ms.sourcegitcommit: 2f96e2fda591d7b1b28842b2ea24e6297bcc3622
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2019
ms.locfileid: "71096036"
---
# <a name="view-classes-windows"></a>Classi visualizzazione (Windows)

`CView`e le classi derivate sono finestre figlio che rappresentano l'area client di una finestra cornice. Le visualizzazioni mostrano i dati e accettano l'input per un documento.

Una classe di visualizzazione è associata a una classe di documento e a una classe della finestra cornice usando un oggetto modello di documento.

[CView](../mfc/reference/cview-class.md)<br/>
Classe base per le visualizzazioni specifiche dell'applicazione dei dati di un documento. Le visualizzazioni visualizzano i dati e accettano l'input dell'utente per modificare o selezionare i dati. Derivare la classe o le classi `CView`di visualizzazione da.

[CScrollView](../mfc/reference/cscrollview-class.md)<br/>
Classe base per le visualizzazioni con funzionalità di scorrimento. Derivare la classe di `CScrollView` visualizzazione da per lo scorrimento automatico.

## <a name="form-and-record-views"></a>Visualizzazioni form e record

Anche le visualizzazioni form sono viste a scorrimento. Sono basate su un modello di finestra di dialogo.

Le visualizzazioni di record sono derivate da visualizzazioni form. Oltre al modello della finestra di dialogo, dispone anche di una connessione a un database.

[CFormView](../mfc/reference/cformview-class.md)<br/>
Visualizzazione a scorrimento il cui layout è definito in un modello di finestra di dialogo. Derivare una classe `CFormView` da per implementare un'interfaccia utente basata su un modello di finestra di dialogo.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Fornisce una visualizzazione form connessa direttamente a un oggetto recordset DAO (Data Access Object). Analogamente a tutte le visualizzazioni `CDaoRecordView` form, un è basato su un modello di finestra di dialogo. DAO viene usato con i database di Access ed è supportato tramite Office 2013. 3,6 è la versione finale ed è considerata obsoleta.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Fornisce una visualizzazione form connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Analogamente a tutte le visualizzazioni `CRecordView` form, un è basato su un modello di finestra di dialogo.

[CHtmlEditView](../mfc/reference/chtmleditview-class.md)<br/>
Visualizzazione form che fornisce la funzionalità della piattaforma di modifica HTML WebBrowser.

## <a name="control-views"></a>Visualizzazioni di controllo

Le visualizzazioni di controllo visualizzano un controllo come visualizzazione.

[CCtrlView](../mfc/reference/cctrlview-class.md)<br/>
Classe base per tutte le visualizzazioni associate ai controlli Windows. Le visualizzazioni basate sui controlli sono descritte di seguito.

[CEditView](../mfc/reference/ceditview-class.md)<br/>
Vista che contiene un controllo di modifica standard di Windows (vedere [CEdit](../mfc/reference/cedit-class.md)). I controlli di modifica supportano la modifica del testo, la ricerca, la sostituzione e le funzionalità di scorrimento.

[CRichEditView](../mfc/reference/cricheditview-class.md)<br/>
Visualizzazione contenente un controllo Rich Edit di Windows (vedere [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Oltre alle funzionalità di un controllo di modifica, i controlli Rich Edit supportano i tipi di carattere, i colori, la formattazione dei paragrafi e gli oggetti OLE incorporati.

[CListView](../mfc/reference/clistview-class.md)<br/>
Visualizzazione contenente un controllo elenco di Windows (vedere [CListCtrl](../mfc/reference/clistctrl-class.md)). Un controllo elenco Visualizza una raccolta di elementi, ciascuno costituito da un'icona e un'etichetta, in modo simile al riquadro destro di Esplora file.

[CTreeView](../mfc/reference/ctreeview-class.md)<br/>
Visualizzazione contenente un controllo albero di Windows (vedere [CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Un controllo struttura ad albero Visualizza un elenco gerarchico di icone ed etichette disposti in modo simile al riquadro sinistro di Esplora file.

## <a name="related-classes"></a>Classi correlate

`CSplitterWnd`consente di avere più visualizzazioni in una singola finestra cornice. `CPrintDialog`e `CPrintInfo` supportano la funzionalità di anteprima di stampa e stampa delle visualizzazioni. `CRichEditDoc`e `CRichEditCntrItem` vengono utilizzati con `CRichEditView` per implementare le funzionalità del contenitore OLE.

[CSplitterWnd](../mfc/reference/csplitterwnd-class.md)<br/>
Finestra che l'utente può dividere in più riquadri. Questi riquadri possono essere ridimensionati in base all'utente o alle dimensioni fisse.

[CPrintDialog](../mfc/reference/cprintdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la stampa di un file.

[CPrintInfo](../mfc/reference/cprintinfo-structure.md)<br/>
Struttura che contiene informazioni su un processo di stampa o di anteprima di stampa. Utilizzato dall' `CView`architettura di stampa di.

[CRichEditDoc](../mfc/reference/cricheditdoc-class.md)<br/>
Mantiene l'elenco di elementi client OLE presenti in un oggetto `CRichEditView`.

[CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)<br/>
Fornisce accesso sul lato client a un elemento OLE archiviato in un `CRichEditView`oggetto.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
