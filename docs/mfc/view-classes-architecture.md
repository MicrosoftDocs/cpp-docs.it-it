---
title: Visualizzazione classi (architettura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.view
dev_langs:
- C++
helpviewer_keywords:
- form and record views [MFC]
- view classes [MFC]
- control views [MFC]
- view classes [MFC], architecture
ms.assetid: 8894579a-1436-441e-b985-83711061e495
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 12987a7563b685018de64201d60d0447d3a5d4cc
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46393820"
---
# <a name="view-classes-architecture"></a>Classi visualizzazione (architettura)

`CView` e le relative classi derivate sono finestre figlio che rappresentano l'area client di una finestra cornice. Le viste mostrano i dati e accettano l'input per un documento.

Una classe di visualizzazione è associata a una classe documento e una classe della finestra cornice usando un oggetto modello di documento.

[CView](../mfc/reference/cview-class.md)<br/>
Classe di base per le visualizzazioni specifiche dell'applicazione di dati del documento. Viste di visualizzano i dati e accettano l'input dell'utente per modificare o selezionare i dati. Derivare le classi di visualizzazione da `CView`.

[CScrollView](../mfc/reference/cscrollview-class.md)<br/>
Classe di base per le viste con funzionalità di scorrimento. Derivare la classe di visualizzazione da `CScrollView` per lo scorrimento automatico.

## <a name="form-and-record-views"></a>Form e le visualizzazioni di Record

Le visualizzazioni di form sono anche scorrimento di visualizzazioni. Si basano su un modello di finestra di dialogo.

Le visualizzazioni di record sono derivate dalle visualizzazioni di form. Oltre a modello della finestra di dialogo, hanno anche una connessione a un database.

[CFormView](../mfc/reference/cformview-class.md)<br/>
Una visualizzazione a scorrimento la cui layout viene definito in un modello di finestra di dialogo. Derivare una classe da `CFormView` per implementare un'interfaccia utente basata su un modello di finestra di dialogo.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Fornisce un modulo visualizzazione connessa direttamente a un oggetto recordset oggetto DAO (Data Access). Come tutte le visualizzazioni di form, un `CDaoRecordView` si basa su un modello di finestra di dialogo.

[CHtmlView](../mfc/reference/chtmlview-class.md)<br/>
Supporta un controllo per la navigazione all'interno di un'applicazione Web. Il controllo supporta l'HTML dinamico in MFC.

[COLEDBRecordView](../mfc/reference/coledbrecordview-class.md)<br/>
Fornisce supporto OLE DB di MFC per le visualizzazioni di form.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Fornisce un modulo visualizzazione connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Come tutte le visualizzazioni di form, un `CRecordView` si basa su un modello di finestra di dialogo.

## <a name="control-views"></a>Viste di controllo

Controllo consente di visualizzare un controllo come relativa visualizzazione.

[CCtrlView](../mfc/reference/cctrlview-class.md)<br/>
Classe di base per tutte le visualizzazioni associate ai controlli di Windows. Le visualizzazioni basate su controlli sono descritti di seguito.

[CEditView](../mfc/reference/ceditview-class.md)<br/>
Controllo di modifica di una vista che contiene uno standard di Windows (vedere [CEdit](../mfc/reference/cedit-class.md)). Modificare la modifica del testo di supporto di controlli, la ricerca, la sostituzione e funzionalità di scorrimento.

[CRichEditView](../mfc/reference/cricheditview-class.md)<br/>
Controllo di modifica di una vista che contiene un Windows avanzata (vedere [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Oltre alle funzionalità di un controllo di modifica, rich edit controlli supporto per tipi di carattere, colori, la formattazione dei paragrafi e gli oggetti OLE incorporati.

[CListView](../mfc/reference/clistview-class.md)<br/>
Vista contenente un controllo elenco di Windows (vedere [CListCtrl](../mfc/reference/clistctrl-class.md)). Un controllo elenco consente di visualizzare le icone e le stringhe in modo analogo nel riquadro a destra di Esplora File.

[CTreeView](../mfc/reference/ctreeview-class.md)<br/>
Una vista che contiene un controllo struttura ad albero di Windows (vedere [CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Un controllo albero vengono visualizzate le icone e le stringhe disposti in una gerarchia in modo simile al riquadro sinistro di Esplora File.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

