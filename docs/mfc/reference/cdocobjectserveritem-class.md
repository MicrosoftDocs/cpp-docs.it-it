---
title: "CDocObjectServerItem Class | Microsoft Docs"
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
  - "CDocObjectServerItem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX documents [C++], document server"
  - "CDocObjectServerItem class"
  - "docobject server"
  - "document object server"
  - "servers [C++], ActiveX documents"
  - "servers [C++], doc objects"
ms.assetid: 530f7156-50c8-4806-9328-602c9133f622
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDocObjectServerItem Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Verbi del server OLE di risorse specificatamente per i server di DocObject.  
  
## Sintassi  
  
```  
class CDocObjectServerItem : public COleServerItem  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServerItem::CDocObjectServerItem](../Topic/CDocObjectServerItem::CDocObjectServerItem.md)|Costruisce un oggetto `CDocObjectServerItem`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServerItem::GetDocument](../Topic/CDocObjectServerItem::GetDocument.md)|Recupera un puntatore al documento contenente l'elemento.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServerItem::OnHide](../Topic/CDocObjectServerItem::OnHide.md)|Genera un'eccezione se il framework tenta di nascondere un elemento di DocObject.|  
|[CDocObjectServerItem::OnShow](../Topic/CDocObjectServerItem::OnShow.md)|Chiamato dal framework per preparare l'elemento di DocObject attivo sul posto.  Se l'elemento non è un DocObject, chiama [COleServerItem::OnShow](../Topic/COleServerItem::OnShow.md).|  
  
## Note  
 `CDocObjectServerItem` definisce le funzioni membro sottoponibili a override: [OnHide](../Topic/CDocObjectServerItem::OnHide.md), [OnOpen](http://msdn.microsoft.com/it-it/7a9b1363-6ad8-4732-9959-4e35c07644fd)e [OnShow](../Topic/CDocObjectServerItem::OnShow.md).  
  
 Per utilizzare `CDocObjectServerItem`, assicurarsi che un override [OnGetEmbeddedItem](../Topic/COleServerDoc::OnGetEmbeddedItem.md) nel `COleServerDoc`nella classe derivata restituisce un nuovo oggetto `CDocObjectServerItem`.  Se è necessario modificare la funzionalità dell'elemento, è possibile creare una nuova istanza del proprio `CDocObjectServerItem`classe derivata da.  
  
 Per ulteriori informazioni su DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md)*in riferimenti alla libreria MFC*.  Vedere anche [Primi passaggi Internet: documenti attivi](../../mfc/active-documents-on-the-internet.md) e [documenti attivi](../../mfc/active-documents-on-the-internet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 [COleServerItem](../../mfc/reference/coleserveritem-class.md)  
  
 `CDocObjectServerItem`  
  
## Requisiti  
 **Header:** afxdocob.h  
  
## Vedere anche  
 [COleServerItem Class](../../mfc/reference/coleserveritem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocObjectServer Class](../../mfc/reference/cdocobjectserver-class.md)   
 [COleDocObjectItem Class](../../mfc/reference/coledocobjectitem-class.md)