---
title: "COleDBRecordView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDBRecordView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDBRecordView (classe)"
  - "MFC, OLE DB"
ms.assetid: 98612427-c4c9-4760-b7e1-85b17448add9
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# COleDBRecordView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una visualizzazione che visualizza i record di database nei controlli.  
  
## Sintassi  
  
```  
class COleDBRecordView : public CFormView  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDBRecordView::COleDBRecordView](../Topic/COleDBRecordView::COleDBRecordView.md)|Costruisce un oggetto `COleDBRecordView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDBRecordView::OnGetRowset](../Topic/COleDBRecordView::OnGetRowset.md)|Restituisce un valore standard `HRESULT`.|  
|[COleDBRecordView::OnMove](../Topic/COleDBRecordView::OnMove.md)|Aggiornare il record corrente \(se modificato\) nell'origine dati e quindi passa al record specificato \(successivamente, precedente, primo o l'ultimo\).|  
  
## Note  
 La visualizzazione è una visualizzazione form connessa direttamente a un oggetto `CRowset`.  La visualizzazione viene creata da una risorsa modello di finestra di dialogo che mostra i campi dell'oggetto `CRowset` nei controlli del modello di finestra di dialogo.  L'oggetto `COleDBRecordView` utilizza lo scambio di dati della finestra di dialogo \(DDX\) e la funzionalità di navigazione compilata in `CRowset`, per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del rowset.  `COleDBRecordView` fornisce inoltre un'implementazione predefinita per lo spostamento al primo, record successivo, precedente, oppure ultimo e un'interfaccia per aggiornare il record simultaneamente alla visualizzazione.  
  
 È possibile utilizzare le funzioni DDX con **COleDbRecordView** per recuperare i dati direttamente dal recordset del database e visualizzarli in un controllo di finestra di dialogo.  Con **COleDbRecordView** è necessario utilizzare i metodi **DDX\_\***, ad esempio `DDX_Text`, anziché le funzioni **DDX\_Field\***, quale `DDX_FieldText`.  `DDX_FieldText` non funzionerà con **COleDbRecordView** perché `DDX_FieldText` accetta un argomento aggiuntivo di tipo **CRecordset\*** ad `CRecordView`\) o **CDaoRecordset\*** ad `CDaoRecordView`\).  
  
> [!NOTE]
>  Se si utilizzano gli oggetti di accesso ai dati che \(DAO\) classi anziché le classi di modelli consumer OLE DB, la classe [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) di utilizzare.  Per ulteriori informazioni, vedere l'articolo [cenni preliminari: La programmazione di database](../../data/data-access-programming-mfc-atl.md).  
  
 `COleDBRecordView` tiene traccia della posizione dell'utente nel rowset in modo da poter aggiornare la visualizzazione di record l'interfaccia utente.  Quando l'utente passa alla fine del rowset, sulla visualizzazione di record disabilita gli oggetti dell'interfaccia utente quali le voci di menu e pulsanti della barra degli strumenti — per lo spostamento ulteriormente nella stessa direzione.  
  
 Per ulteriori informazioni sulle classi di rowset, vedere l'articolo [Utilizzando i modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 `COleDBRecordView`  
  
## Requisiti  
 **Header:** afxoledb.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)