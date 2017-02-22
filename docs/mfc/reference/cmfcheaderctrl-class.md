---
title: "CMFCHeaderCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCHeaderCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCHeaderCtrl class"
ms.assetid: 2f5fbf7b-5c75-42db-9216-640b1628f777
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 31
---
# CMFCHeaderCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCHeaderCtrl` supporta più colonne in un controllo intestazione.  
  
## Sintassi  
  
```  
class CMFCHeaderCtrl : public CHeaderCtrl  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCHeaderCtrl::CMFCHeaderCtrl](../Topic/CMFCHeaderCtrl::CMFCHeaderCtrl.md)|Costruisce un oggetto `CMFCHeaderCtrl`.|  
|`CMFCHeaderCtrl::~CMFCHeaderCtrl`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCHeaderCtrl::EnableMultipleSort](../Topic/CMFCHeaderCtrl::EnableMultipleSort.md)|Abilita o disabilita *la modalità di ordinamento a più colonne* per il controllo intestazione corrente.|  
|[CMFCHeaderCtrl::GetColumnState](../Topic/CMFCHeaderCtrl::GetColumnState.md)|Indica se una colonna non è ordinata o, viene ordinato in ordine crescente o decrescente.|  
|[CMFCHeaderCtrl::GetSortColumn](../Topic/CMFCHeaderCtrl::GetSortColumn.md)|Recupera l'indice in base zero della prima colonna ordinata nel controllo intestazione.|  
|`CMFCHeaderCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCHeaderCtrl::IsAscending](../Topic/CMFCHeaderCtrl::IsAscending.md)|Indica se una colonna del controllo intestazione è ordinata in ordine crescente.|  
|[CMFCHeaderCtrl::IsDialogControl](../Topic/CMFCHeaderCtrl::IsDialogControl.md)|Indica se la finestra padre del controllo intestazione corrente è una finestra di dialogo.|  
|[CMFCHeaderCtrl::IsMultipleSort](../Topic/CMFCHeaderCtrl::IsMultipleSort.md)|Indica se il controllo intestazione corrente è *in modalità di ordinamento su più colonne*.|  
|[CMFCHeaderCtrl::RemoveSortColumn](../Topic/CMFCHeaderCtrl::RemoveSortColumn.md)|Rimozione della colonna specificata dall'elenco delle colonne di ordinamento.|  
|[CMFCHeaderCtrl::SetSortColumn](../Topic/CMFCHeaderCtrl::SetSortColumn.md)|Imposta l'ordine di una colonna specificata in un controllo intestazione.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCHeaderCtrl::OnDrawItem](../Topic/CMFCHeaderCtrl::OnDrawItem.md)|Chiamato dal framework per disegnare una colonna del controllo intestazione.|  
|[CMFCHeaderCtrl::OnDrawSortArrow](../Topic/CMFCHeaderCtrl::OnDrawSortArrow.md)|Chiamato dal framework per disegnare la freccia di ordinamento.|  
|[CMFCHeaderCtrl::OnFillBackground](../Topic/CMFCHeaderCtrl::OnFillBackground.md)|Chiamato dal framework per riempire lo sfondo di una colonna del controllo intestazione.|  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto con la classe `CMFCHeaderCtrl` e come attivare *la modalità di ordinamento a più colonne* per il controllo intestazione corrente.  
  
 [!code-cpp[NVC_MFC_RibbonApp#24](../../mfc/reference/codesnippet/CPP/cmfcheaderctrl-class_1.cpp)]  
  
## Note  
 La classe `CMFCHeaderCtrl` estrae una freccia di ordinamento per una colonna del controllo intestazione per indicare che la colonna è ordinata.  Utilizzare *la modalità di ordinamento a più colonne* se un gruppo di colonne nel controllo elenco padre \([CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md)\) può essere ordinato contemporaneamente.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)  
  
 [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md)  
  
## Requisiti  
 **intestazione:** afxheaderctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md)