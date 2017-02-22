---
title: "COleDropSource Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDropSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDropSource class"
  - "trascinamento della selezione, drop source"
  - "operazioni di trascinamento"
  - "drop target, dragging data to"
ms.assetid: d3eecc5f-a70b-4a01-b705-7d2c098ebe17
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# COleDropSource Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente i dati da trascinare una destinazione di rilascio.  
  
## Sintassi  
  
```  
class COleDropSource : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDropSource::COleDropSource](../Topic/COleDropSource::COleDropSource.md)|Costruisce un oggetto `COleDropSource`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDropSource::GiveFeedback](../Topic/COleDropSource::GiveFeedback.md)|Modifica del cursore durante l'operazione di trascinamento della selezione.|  
|[COleDropSource::OnBeginDrag](../Topic/COleDropSource::OnBeginDrag.md)|Gestisce il mouse capture durante un'operazione di trascinamento.|  
|[COleDropSource::QueryContinueDrag](../Topic/COleDropSource::QueryContinueDrag.md)|Verifica se trascinare deve continuare.|  
  
## Note  
 La classe [COleDropTarget](../../mfc/reference/coledroptarget-class.md) gestisce la parte dell'operazione di trascinamento della selezione.  L'oggetto `COleDropSource` è responsabile di determinare quando un'operazione di trascinamento avvia, di fornire un feedback durante un'operazione di trascinamento e di determinare quando l'operazione di trascinamento termina.  
  
 Per utilizzare un oggetto `COleDropSource`, è sufficiente chiamare il costruttore.  Ciò semplifica il processo di determinazione di eventi, ad esempio un clic del mouse, un iniziare un'operazione di trascinamento tramite la funzione [COleDataSource::DoDragDrop](../Topic/COleDataSource::DoDragDrop.md), [COleClientItem::DoDragDrop](../Topic/COleClientItem::DoDragDrop.md), o [COleServerItem::DoDragDrop](../Topic/COleServerItem::DoDragDrop.md).  Queste funzioni creano un oggetto `COleDropSource` automaticamente.  È possibile modificare il comportamento predefinito delle funzioni sottoponibili a override `COleDropSource`.  Queste funzioni membro saranno definite in momenti appropriati dal framework.  
  
 Per ulteriori informazioni sulle operazioni di trascinamento della selezione tramite OLE, vedere l'articolo [Trascinamento della selezione \(OLE\)](../../mfc/drag-and-drop-ole.md).  
  
 Per ulteriori informazioni, vedere [IDropSource](http://msdn.microsoft.com/library/windows/desktop/ms690071) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDropSource`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [MFC campione HIERSVR](../../top/visual-cpp-samples.md)   
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)