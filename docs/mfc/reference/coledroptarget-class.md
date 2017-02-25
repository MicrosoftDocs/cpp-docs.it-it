---
title: "COleDropTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDropTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDropTarget class"
  - "trascinamento della selezione, drop target"
  - "drop commands"
  - "drop commands, accettazione"
ms.assetid: a58c9a48-6a93-4357-b078-4594df258311
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# COleDropTarget Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un meccanismo di comunicazione tra una finestra e le librerie OLE.  
  
## Sintassi  
  
```  
class COleDropTarget : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDropTarget::COleDropTarget](../Topic/COleDropTarget::COleDropTarget.md)|Costruisce un oggetto `COleDropTarget`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDropTarget::OnDragEnter](../Topic/COleDropTarget::OnDragEnter.md)|Chiamato quando il cursore viene portato alla finestra.|  
|[COleDropTarget::OnDragLeave](../Topic/COleDropTarget::OnDragLeave.md)|Chiamato quando il cursore viene trascinato dalla finestra.|  
|[COleDropTarget::OnDragOver](../Topic/COleDropTarget::OnDragOver.md)|Chiamato ripetutamente quando il cursore viene trascinato nella finestra.|  
|[COleDropTarget::OnDragScroll](../Topic/COleDropTarget::OnDragScroll.md)|Chiamato per determinare se il cursore viene trascinato nell'area dello scorrimento della finestra.|  
|[COleDropTarget::OnDrop](../Topic/COleDropTarget::OnDrop.md)|Chiamato quando i dati vengono rilasciati nella finestra, gestore predefinito.|  
|[COleDropTarget::OnDropEx](../Topic/COleDropTarget::OnDropEx.md)|Chiamato quando i dati vengono rilasciati nella finestra, gestore iniziale.|  
|[COleDropTarget::Register](../Topic/COleDropTarget::Register.md)|Registra la finestra come destinazione di rilascio valida.|  
|[COleDropTarget::Revoke](../Topic/COleDropTarget::Revoke.md)|Determina la finestra all'interruzione di come destinazione di rilascio valida.|  
  
## Note  
 Creare un oggetto di questa classe consente a una finestra accettare i dati tramite il meccanismo di trascinamento della selezione OLE.  
  
 Per visualizzare una finestra per accettare i comandi di selezione, è necessario innanzitutto creare un oggetto classe `COleDropTarget` e chiamare la funzione [Il registro](../Topic/COleDropTarget::Register.md) con un puntatore all'oggetto desiderato `CWnd` come unico parametro.  
  
 Per ulteriori informazioni sulle operazioni di trascinamento della selezione tramite OLE, vedere l'articolo [Trascinamento della selezione \(OLE\)](../../mfc/drag-and-drop-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDropTarget`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [Esempio HIERSVR MFC](../../top/visual-cpp-samples.md)   
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDropSource Class](../../mfc/reference/coledropsource-class.md)