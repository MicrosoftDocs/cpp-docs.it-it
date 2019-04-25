---
title: Classi visualizzazione derivate disponibili in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- CView class [MFC], classes derived from
- classes [MFC], derived
- derived classes [MFC], view classes
- view classes [MFC], derived
ms.assetid: dba42178-7459-4ccc-b025-f3d9b8a4b737
ms.openlocfilehash: 61b38f6147a8bde4f6eb42cd144f9f64dac8dbd8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62152904"
---
# <a name="derived-view-classes-available-in-mfc"></a>Classi visualizzazione derivate disponibili in MFC

La tabella seguente illustra le classi di visualizzazione di MFC e le relative relazioni tra loro. Le funzionalità di classe di visualizzazione dipendono da cui deriva la classe di visualizzazione MFC.

### <a name="view-classes"></a>Visualizzazione classi

|Classe|Descrizione|
|-----------|-----------------|
|[CView](../mfc/reference/cview-class.md)|Classe di base di tutte le visualizzazioni.|
|[CCtrlView](../mfc/reference/cctrlview-class.md)|Classe di base `CTreeView`, `CListView`, `CEditView`, e `CRichEditView`. Queste classi consentono di usare l'architettura documento/visualizzazione con i controlli comuni di Windows indicati.|
|[CEditView](../mfc/reference/ceditview-class.md)|Una vista semplice basata su Windows il controllo casella di testo. Consente l'immissione e la modifica del testo e può essere utilizzato come base per un'applicazione di editor di testo semplice. Vedere anche `CRichEditView`.|
|[CRichEditView](../mfc/reference/cricheditview-class.md)|Una vista che contiene un [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) oggetto. Questa classe è analoga a `CEditView`, ma a differenza `CEditView`, `CRichEditView` gestisce testo formattato.|
|[CListView](../mfc/reference/clistview-class.md)|Una vista che contiene un [CListCtrl](../mfc/reference/clistctrl-class.md) oggetto.|
|[CTreeView](../mfc/reference/ctreeview-class.md)|Una vista che contiene un [CTreeCtrl](../mfc/reference/ctreectrl-class.md) oggetto, per le viste che sono simili a finestra Esplora soluzioni in Visual C++.|
|[CScrollView](../mfc/reference/cscrollview-class.md)|Classe di base `CFormView`, `CRecordView`, e `CDaoRecordView`. Implementa lo scorrimento del contenuto della visualizzazione.|
|[CFormView](../mfc/reference/cformview-class.md)|Una visualizzazione di form, una vista che contiene i controlli. Un'applicazione basata su form fornisce uno o più interfacce tale modulo.|
|[CHtmlView](../mfc/reference/chtmlview-class.md)|Una visualizzazione del Web browser con cui all'utente dell'applicazione può esplorare siti nel World Wide Web, nonché le cartelle nel file system locale e in una rete. Visualizzazione del Web browser può interagire anche come un contenitore di documenti attivi.|
|[CRecordView](../mfc/reference/crecordview-class.md)|Visualizzazione di form che consente di visualizzare i record di database ODBC nei controlli. Se si seleziona il supporto ODBC nel progetto, classe di base della visualizzazione è `CRecordView`. La vista è connesso a un `CRowset` oggetto.|
|[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)|Visualizzazione di form che consente di visualizzare i record di database DAO nei controlli. Se si seleziona il supporto DAO nel progetto, classe di base della visualizzazione è `CDaoRecordView`. La vista è connesso a un `CDaoRecordset` oggetto.|
|[COleDBRecordView](../mfc/reference/coledbrecordview-class.md)|Visualizzazione di form che consente di visualizzare i record OLE DB nei controlli. Se si seleziona supporto OLE DB nel progetto, classe di base della visualizzazione è `COleDBRecordView`. La vista è connesso a un `CRowset` oggetto.|

> [!NOTE]
>  A partire dalla versione 4.0, MFC `CEditView` è derivato da `CCtrlView`.

Per usare queste classi nell'applicazione, derivare da esse classi di visualizzazione dell'applicazione. Per informazioni correlate, vedere [scorrimento e ridimensionamento di visualizzazioni](../mfc/scrolling-and-scaling-views.md). Per altre informazioni sulle classi di database, vedere [Panoramica: Programmazione di database](../data/data-access-programming-mfc-atl.md).

## <a name="see-also"></a>Vedere anche

[Uso delle visualizzazioni](../mfc/using-views.md)
