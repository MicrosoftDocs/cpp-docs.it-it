---
description: 'Altre informazioni su: Visualizza classi (architettura)'
title: Classi visualizzazione (architettura)
ms.date: 09/17/2019
helpviewer_keywords:
- form and record views [MFC]
- view classes [MFC]
- control views [MFC]
- view classes [MFC], architecture
ms.assetid: 8894579a-1436-441e-b985-83711061e495
ms.openlocfilehash: fe883c34ad8bd3948ee65ecec25151cc4dd2416c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143130"
---
# <a name="view-classes-architecture"></a>Classi visualizzazione (architettura)

`CView` e le classi derivate sono finestre figlio che rappresentano l'area client di una finestra cornice. Le visualizzazioni mostrano i dati e accettano l'input per un documento.

Una classe di visualizzazione è associata a una classe di documento e a una classe della finestra cornice usando un oggetto modello di documento.

[CView](../mfc/reference/cview-class.md)<br/>
Classe base per le visualizzazioni specifiche dell'applicazione dei dati di un documento. Le visualizzazioni visualizzano i dati e accettano l'input dell'utente per modificare o selezionare i dati. Derivare le classi di visualizzazione da `CView` .

[CScrollView](../mfc/reference/cscrollview-class.md)<br/>
Classe base per le visualizzazioni con funzionalità di scorrimento. Derivare la classe di visualizzazione da `CScrollView` per lo scorrimento automatico.

## <a name="form-and-record-views"></a>Visualizzazioni form e record

Anche le visualizzazioni form sono viste a scorrimento. Sono basate su un modello di finestra di dialogo.

Le visualizzazioni di record sono derivate da visualizzazioni form. Oltre al modello della finestra di dialogo, dispone anche di una connessione a un database.

[CFormView](../mfc/reference/cformview-class.md)<br/>
Visualizzazione a scorrimento il cui layout è definito in un modello di finestra di dialogo. Derivare una classe da `CFormView` per implementare un'interfaccia utente basata su un modello di finestra di dialogo.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Fornisce una visualizzazione form connessa direttamente a un oggetto recordset DAO (Data Access Object). Analogamente a tutte le visualizzazioni form, un `CDaoRecordView` è basato su un modello di finestra di dialogo. DAO viene usato con i database di Access ed è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

[CHtmlView](../mfc/reference/chtmlview-class.md)<br/>
Supporta un controllo per l'esplorazione Web all'interno di un'applicazione. Il controllo supporta il codice HTML dinamico in MFC.

[COLEDBRecordView](../mfc/reference/coledbrecordview-class.md)<br/>
Fornisce il supporto OLE DB MFC per le visualizzazioni di form.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Fornisce una visualizzazione form connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Analogamente a tutte le visualizzazioni form, un `CRecordView` è basato su un modello di finestra di dialogo.

## <a name="control-views"></a>Visualizzazioni di controllo

Le visualizzazioni di controllo visualizzano un controllo come visualizzazione.

[CCtrlView](../mfc/reference/cctrlview-class.md)<br/>
Classe base per tutte le visualizzazioni associate ai controlli Windows. Le visualizzazioni basate sui controlli sono descritte di seguito.

[CEditView](../mfc/reference/ceditview-class.md)<br/>
Vista che contiene un controllo di modifica standard di Windows (vedere [CEdit](../mfc/reference/cedit-class.md)). I controlli di modifica supportano la modifica del testo, la ricerca, la sostituzione e le funzionalità di scorrimento.

[CRichEditView](../mfc/reference/cricheditview-class.md)<br/>
Visualizzazione contenente un controllo Rich Edit di Windows (vedere [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Oltre alle funzionalità di un controllo di modifica, i controlli Rich Edit supportano i tipi di carattere, i colori, la formattazione dei paragrafi e gli oggetti OLE incorporati.

[CListView](../mfc/reference/clistview-class.md)<br/>
Visualizzazione contenente un controllo elenco di Windows (vedere [CListCtrl](../mfc/reference/clistctrl-class.md)). Un controllo elenco Visualizza le icone e le stringhe in modo simile al riquadro destro di Esplora file.

[CTreeView](../mfc/reference/ctreeview-class.md)<br/>
Visualizzazione contenente un controllo albero di Windows (vedere [CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Un controllo struttura ad albero Visualizza le icone e le stringhe disposte in una gerarchia in modo simile al riquadro sinistro di Esplora file.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../mfc/class-library-overview.md)
