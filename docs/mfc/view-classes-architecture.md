---
title: Visualizzazione classi (architettura) | Documenti Microsoft
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
- view classes [MFC]
- control views [MFC]
- view classes [MFC], architecture
ms.assetid: 8894579a-1436-441e-b985-83711061e495
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8b2761253da0907b1736754068fa196dda361a8d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="view-classes-architecture"></a>Classi visualizzazione (architettura)
`CView`e le relative classi derivate sono finestre figlio che rappresentano l'area client di una finestra cornice. Le visualizzazioni mostrano i dati e accettano l'input per un documento.  
  
 Una classe di visualizzazione è associata a una classe di documento e una classe della finestra cornice utilizzando un oggetto modello di documento.  
  
 [CView](../mfc/reference/cview-class.md)  
 Classe di base per le viste di dati di un documento specifico dell'applicazione. Viste di visualizzano i dati e di accettano l'input dell'utente per modificare o selezionare i dati. Derivare le classi di visualizzazione da `CView`.  
  
 [CScrollView](../mfc/reference/cscrollview-class.md)  
 Classe di base per le viste con funzionalità di scorrimento. Derivare la classe di visualizzazione da `CScrollView` per lo scorrimento automatico.  
  
## <a name="form-and-record-views"></a>Form e visualizzazioni di Record  
 Visualizzazioni di form sono anche scorrimento di visualizzazioni. Esse si basano su un modello di finestra di dialogo.  
  
 Visualizzazioni di record sono derivate da visualizzazioni di form. Oltre a modello di finestra di dialogo, hanno anche una connessione a un database.  
  
 [CFormView](../mfc/reference/cformview-class.md)  
 Una visualizzazione a scorrimento il cui layout viene definito in un modello di finestra di dialogo. Derivare una classe da `CFormView` per implementare un'interfaccia utente in base a un modello di finestra di dialogo.  
  
 [CDaoRecordView](../mfc/reference/cdaorecordview-class.md)  
 Fornisce una visualizzazione connessa direttamente a un oggetto recordset oggetto DAO (Data Access). Come tutte le visualizzazioni di form, un `CDaoRecordView` si basa su un modello di finestra di dialogo.  
  
 [CHtmlView](../mfc/reference/chtmlview-class.md)  
 Supporta un controllo per l'esplorazione all'interno di un'applicazione Web. Il controllo supporta dynamic HTML in MFC.  
  
 [COLEDBRecordView](../mfc/reference/coledbrecordview-class.md)  
 Fornisce supporto OLE DB di MFC per visualizzazioni di form.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Fornisce una visualizzazione connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Come tutte le visualizzazioni di form, un `CRecordView` si basa su un modello di finestra di dialogo.  
  
## <a name="control-views"></a>Viste di controllo  
 Viste di controllo di visualizzare un controllo come la visualizzazione.  
  
 [CCtrlView](../mfc/reference/cctrlview-class.md)  
 La classe base per tutte le visualizzazioni associate ai controlli di Windows. Le viste basate su controlli sono descritti di seguito.  
  
 [CEditView](../mfc/reference/ceditview-class.md)  
 Controllo di modifica di una vista che contiene uno standard di Windows (vedere [CEdit](../mfc/reference/cedit-class.md)). Modificare la modifica del testo di supporto di controlli, la ricerca, la sostituzione e funzionalità di scorrimento.  
  
 [CRichEditView](../mfc/reference/cricheditview-class.md)  
 Controllo di una vista che contiene un Windows rich edit (vedere [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Oltre alle funzionalità di un controllo di modifica, rich edit controlli supporto tipi di carattere, colori, la formattazione di paragrafo e oggetti OLE incorporati.  
  
 [CListView](../mfc/reference/clistview-class.md)  
 Una vista che contiene un elenco di Windows (vedere [CListCtrl](../mfc/reference/clistctrl-class.md)). Un controllo elenco consente di visualizzare le icone e le stringhe in modo simile al riquadro destro di Esplora File.  
  
 [CTreeView](../mfc/reference/ctreeview-class.md)  
 Una vista che contiene un controllo struttura ad albero di Windows (vedere [CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Un controllo struttura ad albero Visualizza le icone e stringhe disposte in una gerarchia in modo simile al riquadro sinistro di Esplora File.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

