---
title: "Utilizzo delle visualizzazioni di record OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDBRecordView (classe), panoramica"
  - "MFC, visualizzazioni di record"
  - "visualizzazioni record OLE DB"
  - "OLE DB, visualizzazioni di record"
  - "visualizzazioni di record, oggetti di visualizzazione dei record"
  - "rowset, visualizzazioni di record"
ms.assetid: 1cd3e595-ce08-43d8-a0a9-d03b5d3e24ce
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo delle visualizzazioni di record OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per visualizzare i dati dei rowset OLE DB in un'applicazione MFC, è necessario utilizzare la classe MFC [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md).  Un oggetto visualizzazione record creato da `COleDBRecordView` consente di visualizzare i record di database nei controlli MFC.  La visualizzazione record è una visualizzazione form di una finestra di dialogo connessa direttamente a un oggetto rowset OLE DB creato dalla classe modello `CRowset`.  Il recupero di un handle per l'oggetto rowset è un'operazione semplice:  
  
```  
COleDBRecordView myRecordView;  
...  
// CProductAccessor is a user record class  
CRowset<CAccessor<CProductAccessor>> myRowSet = myRecordView.OnGetRowset();  
```  
  
 La visualizzazione contiene i campi dell'oggetto `CRowset` nei controlli della finestra di dialogo.  L'oggetto `COleDBRecordView` utilizza Dialog Data Exchange \(DDX\) e la funzionalità di navigazione compilata in `CRowset` \(**MoveFirst**, `MoveNext`, `MovePrev` e `MoveLast`\) per automatizzare lo spostamento dei dati tra i controlli sul form e i campi del rowset.  `COleDBRecordView` tiene traccia della posizione dell'utente nel rowset in modo che la visualizzazione dei record possa aggiornare l'interfaccia utente e fornisce un metodo [OnMove](../Topic/COleDBRecordView::OnMove.md) per aggiornare il record corrente prima di passare a un altro.  
  
 È possibile utilizzare le funzioni DDX con **COleDbRecordView** per recuperare i dati direttamente dal recordset del database e visualizzarli in un controllo di finestra di dialogo.  Con **COleDbRecordView** è necessario utilizzare i metodi **DDX\_\***, ad esempio `DDX_Text`, anziché le funzioni **DDX\_Field\***, quale `DDX_FieldText`.  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)   
 [COleDBRecordView Class](../../mfc/reference/coledbrecordview-class.md)