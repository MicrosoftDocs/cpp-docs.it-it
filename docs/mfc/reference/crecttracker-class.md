---
title: "CRectTracker Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRectTracker"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRectTracker class"
  - "displaying items"
  - "resizing items"
ms.assetid: 99caa7f2-3c0d-4a42-bbee-e5d1d342d4ee
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CRectTracker Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente un elemento da visualizzare, spostare e ridimensionare di ADAM diversi.  
  
## Sintassi  
  
```  
  
class CRectTracker  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRectTracker::CRectTracker](../Topic/CRectTracker::CRectTracker.md)|Costruisce un oggetto `CRectTracker`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRectTracker::AdjustRect](../Topic/CRectTracker::AdjustRect.md)|Chiamato quando il rettangolo viene ridimensionato.|  
|[CRectTracker::Draw](../Topic/CRectTracker::Draw.md)|Esegue il rendering del rettangolo.|  
|[CRectTracker::DrawTrackerRect](../Topic/CRectTracker::DrawTrackerRect.md)|Chiamato quando disegnare il bordo di un oggetto `CRectTracker`.|  
|[CRectTracker::GetHandleMask](../Topic/CRectTracker::GetHandleMask.md)|Chiamato per ottenere la maschera dei quadratini di ridimensionamento di un elemento `CRectTracker`.|  
|[CRectTracker::GetTrueRect](../Topic/CRectTracker::GetTrueRect.md)|Restituisce larghezza e altezza del rettangolo, inclusi i quadratini di ridimensionamento.|  
|[CRectTracker::HitTest](../Topic/CRectTracker::HitTest.md)|Restituisce la posizione corrente del cursore correlato all'oggetto `CRectTracker`.|  
|[CRectTracker::NormalizeHit](../Topic/CRectTracker::NormalizeHit.md)|Normalizza un codice dell'hit test.|  
|[CRectTracker::OnChangedRect](../Topic/CRectTracker::OnChangedRect.md)|Chiamato quando il rettangolo è stato ridimensionato o stato spostato.|  
|[CRectTracker::SetCursor](../Topic/CRectTracker::SetCursor.md)|Imposta il cursore, come la posizione del rettangolo.|  
|[CRectTracker::Track](../Topic/CRectTracker::Track.md)|Consente di modificare il rettangolo.|  
|[CRectTracker::TrackRubberBand](../Topic/CRectTracker::TrackRubberBand.md)|Consente al consumer "a" gomma\- banda la selezione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRectTracker::m\_nHandleSize](../Topic/CRectTracker::m_nHandleSize.md)|Determina la dimensione dei quadratini di ridimensionamento.|  
|[CRectTracker::m\_nStyle](../Topic/CRectTracker::m_nStyle.md)|Stili correnti di tracker.|  
|[CRectTracker::m\_rect](../Topic/CRectTracker::m_rect.md)|Posizione corrente \(in pixel\) del rettangolo.|  
|[CRectTracker::m\_sizeMin](../Topic/CRectTracker::m_sizeMin.md)|Determina la larghezza e l'altezza minima del rettangolo.|  
  
## Note  
 `CRectTracker` non dispone di una classe base.  
  
 Sebbene la classe `CRectTracker` è progettata per consentire all'utente di interagire con gli elementi OLE tramite un'interfaccia grafica, il relativo utilizzo non è limitato alle applicazioni OLE\- abilitate.  Può essere utilizzato in qualsiasi punto tale interfaccia utente è obbligatorio.  
  
 i bordi di`CRectTracker` possono essere linee continue o tratteggiate.  L'elemento può essere attribuito un bordo tratteggiato o essere sovrapposte di modello tratteggiato per indicare i diversi stati dell'elemento.  È possibile inserire otto quadratini di ridimensionamento sul bordo interno o esterno dell'elemento.  \(Per una spiegazione dei quadratini di ridimensionamento, vedere [GetHandleMask](../Topic/CRectTracker::GetHandleMask.md)\). Infine, `CRectTracker` consente di modificare l'orientamento di un elemento durante il ridimensionamento.  
  
 Per utilizzare `CRectTracker`, costruire un oggetto `CRectTracker` e specificare i quali stati di visualizzazione vengono inizializzati.  È quindi possibile utilizzare questa interfaccia per fornire all'utente feedback visivo sullo stato corrente dell'elemento OLE associato all'oggetto `CRectTracker`.  
  
 Per ulteriori informazioni su l `CRectTracker`, vedere l'articolo [tracker](../../mfc/trackers.md).  
  
## Gerarchia di ereditarietà  
 `CRectTracker`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [MFC campione il TRACKER](../../top/visual-cpp-samples.md)   
 [L'esempio DRAWCLI MFC](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleResizeBar Class](../../mfc/reference/coleresizebar-class.md)   
 [CRect Class](../../atl-mfc-shared/reference/crect-class.md)   
 [CRectTracker::GetHandleMask](../Topic/CRectTracker::GetHandleMask.md)