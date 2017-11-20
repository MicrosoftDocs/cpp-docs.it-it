---
title: Classi di visualizzazione disponibili in MFC derivate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CView class [MFC], classes derived from
- classes [MFC], derived
- derived classes [MFC], view classes
- view classes [MFC], derived
ms.assetid: dba42178-7459-4ccc-b025-f3d9b8a4b737
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: da8136b8090004312ba4b9a91f25fc66461eb5d0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="derived-view-classes-available-in-mfc"></a>Classi visualizzazione derivate disponibili in MFC
Nella tabella seguente mostra in visualizzazione classi MFC e le relative relazioni uno a altro. Le funzionalità di classe di visualizzazione è dipendono da cui deriva la classe di visualizzazione MFC.  
  
### <a name="view-classes"></a>Classi visualizzazione  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[CView](../mfc/reference/cview-class.md)|Classe di base di tutte le visualizzazioni.|  
|[CCtrlView](../mfc/reference/cctrlview-class.md)|Classe di base `CTreeView`, `CListView`, `CEditView`, e `CRichEditView`. Queste classi consentono di utilizzare l'architettura documento/visualizzazione con controlli comuni di Windows indicati.|  
|[CEditView](../mfc/reference/ceditview-class.md)|Controllo casella di testo di una visualizzazione semplice basata su Windows. Consente l'immissione e modifica del testo e può essere utilizzato come base per un'applicazione di editor di testo semplice. Vedere anche `CRichEditView`.|  
|[CRichEditView](../mfc/reference/cricheditview-class.md)|Una vista che contiene un [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) oggetto. Questa classe è analoga a `CEditView`, ma diversamente da quanto accade `CEditView`, `CRichEditView` gestisce testo formattato.|  
|[CListView](../mfc/reference/clistview-class.md)|Una vista che contiene un [CListCtrl](../mfc/reference/clistctrl-class.md) oggetto.|  
|[CTreeView](../mfc/reference/ctreeview-class.md)|Una vista che contiene un [CTreeCtrl](../mfc/reference/ctreectrl-class.md) oggetto, per le viste che sono simili a questa finestra di Esplora soluzioni in Visual C++.|  
|[CScrollView](../mfc/reference/cscrollview-class.md)|Classe di base `CFormView`, `CRecordView`, e `CDaoRecordView`. Implementa lo scorrimento del contenuto della visualizzazione.|  
|[CFormView](../mfc/reference/cformview-class.md)|Visualizzazione di form, una vista che contiene i controlli. Un'applicazione basata su form fornisce uno o più interfacce tale modulo.|  
|[CHtmlView](../mfc/reference/chtmlview-class.md)|Una visualizzazione Web browser con cui all'utente dell'applicazione può esplorare siti nel World Wide Web, nonché le cartelle nel file system locale e in una rete. La visualizzazione del browser Web funziona anche come un contenitore di documenti attivi.|  
|[CRecordView](../mfc/reference/crecordview-class.md)|Visualizzazione form che consente di visualizzare i record del database ODBC nei controlli. Se si seleziona il supporto ODBC nel progetto, la classe base della vista è `CRecordView`. La visualizzazione è collegata a un `CRowset` oggetto.|  
|[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)|Visualizzazione form che mostra i record di database DAO nei controlli. Se si seleziona il supporto per DAO il progetto, classe di base della vista è `CDaoRecordView`. La visualizzazione è collegata a un `CDaoRecordset` oggetto.|  
|[COleDBRecordView](../mfc/reference/coledbrecordview-class.md)|Visualizzazione form che visualizza record OLE DB nei controlli. Se si seleziona il supporto OLE DB nel progetto, la classe base della vista è `COleDBRecordView`. La visualizzazione è collegata a un `CRowset` oggetto.|  
  
> [!NOTE]
>  A partire dalla versione 4.0, MFC `CEditView` è derivato da `CCtrlView`.  
  
 Per utilizzare queste classi nell'applicazione, derivare da esse classi di visualizzazione dell'applicazione. Per informazioni correlate, vedere [scorrimento e ridimensionamento di visualizzazioni](../mfc/scrolling-and-scaling-views.md). Per ulteriori informazioni sulle classi di database, vedere [Panoramica: programmazione di Database](../data/data-access-programming-mfc-atl.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle visualizzazioni](../mfc/using-views.md)

