---
title: Classi visualizzazione derivate disponibili in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- CView class [MFC], classes derived from
- classes [MFC], derived
- derived classes [MFC], view classes
- view classes [MFC], derived
ms.assetid: dba42178-7459-4ccc-b025-f3d9b8a4b737
ms.openlocfilehash: 12b31074e4fcc2ed6a83e3669e1044f5b9caedab
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373498"
---
# <a name="derived-view-classes-available-in-mfc"></a>Classi visualizzazione derivate disponibili in MFC

Nella tabella seguente vengono illustrate le classi di visualizzazione di MFC e le relative relazioni tra loro. Le funzionalità della classe di visualizzazione dipendono dalla classe di visualizzazione MFC da cui deriva.

### <a name="view-classes"></a>Visualizza classi

|Classe|Descrizione|
|-----------|-----------------|
|[CView](../mfc/reference/cview-class.md)|Classe base di tutte le viste.|
|[CCtrlView](../mfc/reference/cctrlview-class.md)|Classe base `CTreeView` `CListView`di `CEditView`, `CRichEditView`, , e . Queste classi consentono di utilizzare l'architettura documento/visualizzazione con i controlli comuni di Windows indicati.|
|[CEditView](../mfc/reference/ceditview-class.md)|Una visualizzazione semplice basata sul controllo casella di modifica di Windows.A simple view based on the Windows edit box control. Consente l'immissione e la modifica di testo e può essere utilizzato come base per una semplice applicazione editor di testo. Vedere anche `CRichEditView`.|
|[CRichEditView](../mfc/reference/cricheditview-class.md)|Visualizzazione contenente un oggetto [CRichEditCtrl.](../mfc/reference/cricheditctrl-class.md) Questa classe è analoga `CEditView`a `CEditView` `CRichEditView` , ma a differenza di , gestisce il testo formattato.|
|[CListView](../mfc/reference/clistview-class.md)|Visualizzazione contenente un oggetto [CListCtrl.](../mfc/reference/clistctrl-class.md)|
|[CTreeView](../mfc/reference/ctreeview-class.md)|Una visualizzazione che contiene un [cTreeCtrl](../mfc/reference/ctreectrl-class.md) oggetto, per le visualizzazioni che assomigliano alla finestra Esplora soluzioni in Visual C.|
|[CScrollView](../mfc/reference/cscrollview-class.md)|Classe base `CFormView` `CRecordView`di `CDaoRecordView`, , e . Implementa lo scorrimento del contenuto della visualizzazione.|
|[CFormView](../mfc/reference/cformview-class.md)|Una visualizzazione modulo, una visualizzazione che contiene controlli. Un'applicazione basata su form fornisce una o più interfacce di form di questo tipo.|
|[Chtmlview](../mfc/reference/chtmlview-class.md)|Una visualizzazione del browser Web con cui l'utente dell'applicazione può esplorare i siti sul World Wide Web, nonché le cartelle nel file system locale e in una rete. La visualizzazione del browser Web può funzionare anche come contenitore di documenti attivi.|
|[CRecordView](../mfc/reference/crecordview-class.md)|Visualizzazione Maschera che visualizza i record del database ODBC nei controlli. Se si seleziona il supporto ODBC nel progetto, `CRecordView`la classe base della visualizzazione è . La vista è `CRowset` connessa a un oggetto.|
|[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)|Visualizzazione form che visualizza i record del database DAO nei controlli. Se si seleziona il supporto DAO nel progetto, `CDaoRecordView`la classe base della visualizzazione è . La vista è `CDaoRecordset` connessa a un oggetto.|
|[COleDBRecordView](../mfc/reference/coledbrecordview-class.md)|Visualizzazione form che visualizza record OLE DB nei controlli. Se si seleziona il supporto OLE DB nel progetto, la classe base della visualizzazione è `COleDBRecordView`. La vista è `CRowset` connessa a un oggetto.|

> [!NOTE]
> A partire da MFC `CEditView` versione 4.0, deriva da `CCtrlView`.

Per usare queste classi nell'applicazione, derivare le classi di visualizzazione dell'applicazione da esse. Per informazioni correlate, consultate [Scorrimento e ridimensionamento delle viste.](../mfc/scrolling-and-scaling-views.md) Per ulteriori informazioni sulle classi di database, vedere [Panoramica: Programmazione di database](../data/data-access-programming-mfc-atl.md).

## <a name="see-also"></a>Vedere anche

[Utilizzo delle visualizzazioni](../mfc/using-views.md)
