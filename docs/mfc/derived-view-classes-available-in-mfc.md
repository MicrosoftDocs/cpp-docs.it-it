---
title: Classi visualizzazione derivate disponibili in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- CView class [MFC], classes derived from
- classes [MFC], derived
- derived classes [MFC], view classes
- view classes [MFC], derived
ms.assetid: dba42178-7459-4ccc-b025-f3d9b8a4b737
ms.openlocfilehash: dc0f0b10ea291db32c576a7d36b7fc19728fa6ce
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616979"
---
# <a name="derived-view-classes-available-in-mfc"></a>Classi visualizzazione derivate disponibili in MFC

Nella tabella seguente vengono illustrate le classi di visualizzazione di MFC e le relazioni tra di esse. Le funzionalità della classe di visualizzazione dipendono dalla classe di visualizzazione MFC dalla quale deriva.

### <a name="view-classes"></a>Classi di visualizzazione

|Classe|Descrizione|
|-----------|-----------------|
|[CView](reference/cview-class.md)|Classe di base di tutte le visualizzazioni.|
|[CCtrlView](reference/cctrlview-class.md)|Classe di base di `CTreeView` , `CListView` , `CEditView` e `CRichEditView` . Queste classi consentono di utilizzare l'architettura documento/visualizzazione con i controlli comuni di Windows indicati.|
|[CEditView](reference/ceditview-class.md)|Visualizzazione semplice basata sul controllo casella di modifica di Windows. Consente l'immissione e la modifica di testo e può essere utilizzato come base per una semplice applicazione di editor di testo. Vedere anche `CRichEditView`.|
|[CRichEditView](reference/cricheditview-class.md)|Visualizzazione contenente un oggetto [CRichEditCtrl](reference/cricheditctrl-class.md) . Questa classe è analoga a `CEditView` , ma a differenza di `CEditView` , `CRichEditView` gestisce il testo formattato.|
|[CListView](reference/clistview-class.md)|Visualizzazione contenente un oggetto [CListCtrl](reference/clistctrl-class.md) .|
|[CTreeView](reference/ctreeview-class.md)|Visualizzazione contenente un oggetto [CTreeCtrl](reference/ctreectrl-class.md) , per le visualizzazioni simili alla finestra Esplora soluzioni in Visual C++.|
|[CScrollView](reference/cscrollview-class.md)|Classe di base di `CFormView` , `CRecordView` e `CDaoRecordView` . Implementa lo scorrimento del contenuto della visualizzazione.|
|[CFormView](reference/cformview-class.md)|Visualizzazione form, ovvero una visualizzazione contenente controlli. Un'applicazione basata su moduli fornisce una o più interfacce di form di questo tipo.|
|[CHtmlView](reference/chtmlview-class.md)|Una vista Web browser con cui l'utente dell'applicazione può esplorare i siti nell'World Wide Web, nonché le cartelle nel file system locale e in una rete. La visualizzazione Web browser può anche funzionare come contenitore di documenti attivi.|
|[CRecordView](reference/crecordview-class.md)|Visualizzazione form che consente di visualizzare i record del database ODBC nei controlli. Se si seleziona il supporto ODBC nel progetto, la classe di base della vista è `CRecordView` . La visualizzazione è connessa a un `CRowset` oggetto.|
|[CDaoRecordView](reference/cdaorecordview-class.md)|Visualizzazione form che consente di visualizzare i record del database DAO nei controlli. Se si seleziona il supporto DAO nel progetto, la classe di base della vista è `CDaoRecordView` . La visualizzazione è connessa a un `CDaoRecordset` oggetto.|
|[COleDBRecordView](reference/coledbrecordview-class.md)|Visualizzazione form che consente di visualizzare i record OLE DB nei controlli. Se si seleziona OLE DB supporto nel progetto, la classe di base della vista è `COleDBRecordView` . La visualizzazione è connessa a un `CRowset` oggetto.|

> [!NOTE]
> A partire dalla versione 4,0 di MFC, `CEditView` è derivato da `CCtrlView` .

Per usare queste classi nell'applicazione, derivare le classi di visualizzazione dell'applicazione. Per informazioni correlate, vedere [scorrimento e ridimensionamento di visualizzazioni](scrolling-and-scaling-views.md). Per ulteriori informazioni sulle classi di database, vedere [Panoramica: programmazione di database](../data/data-access-programming-mfc-atl.md).

## <a name="see-also"></a>Vedere anche

[Utilizzo delle visualizzazioni](using-views.md)
