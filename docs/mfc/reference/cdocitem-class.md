---
title: "CDocItem Class | Microsoft Docs"
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
  - "CDocItem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDocItem class"
  - "client document items"
  - "container document items"
  - "document items"
  - "items, documento"
  - "OLE (documenti), items"
  - "server documents"
  - "server documents, document items"
ms.assetid: 84fb8610-a4c8-4211-adc0-e70e8d002c11
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDocItem Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base per gli elementi del documento, ovvero i componenti dei dati di un documento.  
  
## Sintassi  
  
```  
class CDocItem : public CCmdTarget  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocItem::GetDocument](../Topic/CDocItem::GetDocument.md)|Restituisce il documento contenente l'elemento.|  
|[CDocItem::IsBlank](../Topic/CDocItem::IsBlank.md)|Determina se l'elemento contiene di informazioni.|  
  
## Note  
 Gli oggetti di`CDocItem` vengono utilizzati per rappresentare gli elementi OLE in entrambi i documenti client e server.  
  
 Per ulteriori informazioni, vedere l'articolo [contenitori: implementare un contenitore](../../mfc/containers-implementing-a-container.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocItem`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDocument Class](../../mfc/reference/coledocument-class.md)   
 [COleServerItem Class](../../mfc/reference/coleserveritem-class.md)   
 [COleClientItem Class](../../mfc/reference/coleclientitem-class.md)