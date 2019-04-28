---
title: Classi visualizzazione (Windows)
ms.date: 11/04/2016
f1_keywords:
- vc.classes.view
helpviewer_keywords:
- form and record views [MFC]
- splitter window classes [MFC]
- view classes [MFC], Windows
ms.assetid: b11683fb-9f43-4de3-9499-2b55775f9870
ms.openlocfilehash: ad58fd6fa2548c2cf320baf75b8fc33a835ddd55
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62296618"
---
# <a name="view-classes-windows"></a>Classi visualizzazione (Windows)

`CView` e le relative classi derivate sono finestre figlio che rappresentano l'area client di una finestra cornice. Le viste mostrano i dati e accettano l'input per un documento.

Una classe di visualizzazione è associata a una classe documento e una classe della finestra cornice usando un oggetto modello di documento.

[CView](../mfc/reference/cview-class.md)<br/>
Classe di base per le visualizzazioni specifiche dell'applicazione di dati del documento. Viste di visualizzano i dati e accettano l'input dell'utente per modificare o selezionare i dati. Derivare la classe di visualizzazione o le classi da `CView`.

[CScrollView](../mfc/reference/cscrollview-class.md)<br/>
Classe di base per le viste con funzionalità di scorrimento. Derivare la classe di visualizzazione da `CScrollView` per lo scorrimento automatico.

## <a name="form-and-record-views"></a>Form e le visualizzazioni di Record

Le visualizzazioni di form sono anche scorrimento di visualizzazioni. Si basano su un modello di finestra di dialogo.

Le visualizzazioni di record sono derivate dalle visualizzazioni di form. Oltre a modello della finestra di dialogo, hanno anche una connessione a un database.

[CFormView](../mfc/reference/cformview-class.md)<br/>
Una visualizzazione a scorrimento la cui layout viene definito in un modello di finestra di dialogo. Derivare una classe da `CFormView` per implementare un'interfaccia utente basata su un modello di finestra di dialogo.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Fornisce un modulo visualizzazione connessa direttamente a un oggetto recordset oggetto DAO (Data Access). Come tutte le visualizzazioni di form, un `CDaoRecordView` si basa su un modello di finestra di dialogo.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Fornisce un modulo visualizzazione connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Come tutte le visualizzazioni di form, un `CRecordView` si basa su un modello di finestra di dialogo.

[CHtmlEditView](../mfc/reference/chtmleditview-class.md)<br/>
Visualizzazione di form che fornisce la funzionalità della piattaforma di modifica WebBrowser HTML.

## <a name="control-views"></a>Viste di controllo

Controllo consente di visualizzare un controllo come relativa visualizzazione.

[CCtrlView](../mfc/reference/cctrlview-class.md)<br/>
Classe di base per tutte le visualizzazioni associate ai controlli di Windows. Le visualizzazioni basate su controlli sono descritti di seguito.

[CEditView](../mfc/reference/ceditview-class.md)<br/>
Controllo di modifica di una vista che contiene uno standard di Windows (vedere [CEdit](../mfc/reference/cedit-class.md)). Modificare la modifica del testo di supporto di controlli, la ricerca, la sostituzione e funzionalità di scorrimento.

[CRichEditView](../mfc/reference/cricheditview-class.md)<br/>
Controllo di modifica di una vista che contiene un Windows avanzata (vedere [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Oltre alle funzionalità di un controllo di modifica, rich edit controlli supporto per tipi di carattere, colori, la formattazione dei paragrafi e gli oggetti OLE incorporati.

[CListView](../mfc/reference/clistview-class.md)<br/>
Vista contenente un controllo elenco di Windows (vedere [CListCtrl](../mfc/reference/clistctrl-class.md)). Un controllo elenco consente di visualizzare una raccolta di elementi, ognuno costituito da un'icona e un'etichetta, in modo analogo nel riquadro a destra di Esplora File.

[CTreeView](../mfc/reference/ctreeview-class.md)<br/>
Una vista che contiene un controllo struttura ad albero di Windows (vedere [CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Un controllo struttura ad albero visualizza un elenco gerarchico di icone e le etichette disposti in modo simile al riquadro sinistro di Esplora File.

## <a name="related-classes"></a>Classi correlate

`CSplitterWnd` Consente di disporre di più visualizzazioni all'interno di una finestra cornice singola. `CPrintDialog` e `CPrintInfo` supporta la possibilità di stampa e anteprima di stampa di viste. `CRichEditDoc` e `CRichEditCntrItem` vengono usati con `CRichEditView` per implementare funzionalità di contenitore OLE.

[CSplitterWnd](../mfc/reference/csplitterwnd-class.md)<br/>
Una finestra che l'utente può suddividere in più riquadri. Questi riquadri possono essere ridimensionati dall'utente o dimensioni fisse.

[CPrintDialog](../mfc/reference/cprintdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la stampa di un file.

[CPrintInfo](../mfc/reference/cprintinfo-structure.md)<br/>
Una struttura contenente informazioni su un processo di anteprima di stampa o stampa. Usato da `CView`di stampa di architettura.

[CRichEditDoc](../mfc/reference/cricheditdoc-class.md)<br/>
Gestisce l'elenco di elementi OLE client appartenenti a un `CRichEditView`.

[CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)<br/>
Fornisce l'accesso lato client a un elemento archiviato nell'oggetto OLE un `CRichEditView`.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
