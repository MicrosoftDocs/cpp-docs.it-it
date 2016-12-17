---
title: "COleDocObjectItem Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDocObjectItem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDocObjectItem class"
  - "containment"
  - "containment, doc object"
  - "doc object containment"
  - "document object containment"
ms.assetid: d150d306-8fd3-4831-b06d-afbe71d8fc9b
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleDocObjectItem Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contenimento del documento attivo di risorse.  
  
## Sintassi  
  
```  
class COleDocObjectItem : public COleClientItem  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocObjectItem::COleDocObjectItem](../Topic/COleDocObjectItem::COleDocObjectItem.md)|Crea un elemento `COleDocObject`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocObjectItem::DoDefaultPrinting](../Topic/COleDocObjectItem::DoDefaultPrinting.md)|Stampa il documento dell'applicazione contenitore utilizzando le impostazioni della stampante predefinita.|  
|[COleDocObjectItem::ExecCommand](../Topic/COleDocObjectItem::ExecCommand.md)|Esegue il comando specificato dall'utente.|  
|[COleDocObjectItem::GetActiveView](../Topic/COleDocObjectItem::GetActiveView.md)|Recupera la visualizzazione attiva del documento.|  
|[COleDocObjectItem::GetPageCount](../Topic/COleDocObjectItem::GetPageCount.md)|Recupera il numero di pagine nel documento dell'applicazione contenitore.|  
|[COleDocObjectItem::OnPreparePrinting](../Topic/COleDocObjectItem::OnPreparePrinting.md)|Prepara il documento dell'applicazione contenitore per stampare.|  
|[COleDocObjectItem::OnPrint](../Topic/COleDocObjectItem::OnPrint.md)|Stampa il documento dell'applicazione contenitore.|  
|[COleDocObjectItem::QueryCommand](../Topic/COleDocObjectItem::QueryCommand.md)|Query per lo stato di uno o più controlli generati dagli eventi dell'interfaccia utente.|  
|[COleDocObjectItem::Release](../Topic/COleDocObjectItem::Release.md)|Elimina la connessione a un elemento collegato OLE e la chiusura se è stata aperta.  Non elimina l'elemento client.|  
  
## Note  
 In MFC, un documento attivo viene gestito in modo analogo a incorporare modificabile normale e sul posto, con le seguenti differenze:  
  
-   `COleDocument`nella classe derivata è presente un elenco degli elementi incorporati; tuttavia, questi elementi possono essere `COleDocObjectItem`elementi derivati da.  
  
-   Quando un documento attivo è attivo, occupa l'intera area client della visualizzazione quando è attivo sul posto.  
  
-   Un contenitore di documenti attivi dispone di controllo completo del menu **Guida**.  
  
-   Il menu **Guida** contiene le voci di menu per il contenitore di documenti attivi che il server.  
  
 Poiché il contenitore di documenti attivi possiede il menu **Guida**, il contenitore è responsabile di inoltrare messaggi del menu **Guida** al server.  Questa integrazione è gestita da `COleDocObjectItem`.  
  
 Per ulteriori informazioni sull'unione dei menu e sull'attivazione del documento attivo, vedere i cenni preliminari su [Contenimento del documento attivo](../../mfc/active-document-containment.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 [COleClientItem](../../mfc/reference/coleclientitem-class.md)  
  
 `COleDocObjectItem`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [MFC campione MFCBIND](../../top/visual-cpp-samples.md)   
 [COleClientItem Class](../../mfc/reference/coleclientitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleClientItem Class](../../mfc/reference/coleclientitem-class.md)   
 [CDocObjectServerItem Class](../../mfc/reference/cdocobjectserveritem-class.md)