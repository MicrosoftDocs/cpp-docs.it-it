---
title: "CMFCListCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCListCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCListCtrl class"
ms.assetid: 50d16aee-138c-4f34-8690-cb75d544ef2e
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 31
---
# CMFCListCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCListCtrl` estendere la funzionalità di classe [CListCtrl Class](../../mfc/reference/clistctrl-class.md) supporta la funzionalità avanzata del controllo intestazione [CMFCHeaderCtrl Class](../../mfc/reference/cmfcheaderctrl-class.md).  
  
## Sintassi  
  
```  
class CMFCListCtrl : public CListCtrl  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCListCtrl::EnableMarkSortedColumn](../Topic/CMFCListCtrl::EnableMarkSortedColumn.md)|Consente di contrassegnare una colonna ordinata con un colore di sfondo diverso.|  
|[CMFCListCtrl::EnableMultipleSort](../Topic/CMFCListCtrl::EnableMultipleSort.md)|Attiva la modalità più di ordinamento.|  
|[CMFCListCtrl::GetHeaderCtrl](../Topic/CMFCListCtrl::GetHeaderCtrl.md)|Restituisce un riferimento al controllo intestazione sottolineato.|  
|[CMFCListCtrl::IsMultipleSort](../Topic/CMFCListCtrl::IsMultipleSort.md)|Controllare se il controllo elenco è in modalità più di ordinamento.|  
|[CMFCListCtrl::OnCompareItems](../Topic/CMFCListCtrl::OnCompareItems.md)|Chiamato dal framework quando deve confrontare due elementi di controllo list.|  
|[CMFCListCtrl::OnGetCellBkColor](../Topic/CMFCListCtrl::OnGetCellBkColor.md)|Chiamato dal framework quando deve stabilire il colore di sfondo di una singola cella.|  
|[CMFCListCtrl::OnGetCellFont](../Topic/CMFCListCtrl::OnGetCellFont.md)|Chiamato dal framework quando deve ottenere il carattere per la cella che viene disegnata.|  
|[CMFCListCtrl::OnGetCellTextColor](../Topic/CMFCListCtrl::OnGetCellTextColor.md)|Chiamato dal framework quando deve stabilire il colore del testo di una singola cella.|  
|[CMFCListCtrl::RemoveSortColumn](../Topic/CMFCListCtrl::RemoveSortColumn.md)|Rimuove una colonna di ordinamento dall'elenco delle colonne ordinate.|  
|[CMFCListCtrl::SetSortColumn](../Topic/CMFCListCtrl::SetSortColumn.md)|Imposta la colonna ordinata corrente e l'ordinamento.|  
|[CMFCListCtrl::Sort](../Topic/CMFCListCtrl::Sort.md)|Nel controllo elenco.|  
  
## Note  
 `CMFCListCtrl` offre due miglioramenti alla classe [CListCtrl Class](../../mfc/reference/clistctrl-class.md).  Innanzitutto, indica che l'ordine delle colonne è un'opzione disponibile automaticamente tracciando una freccia di ordinamento nell'intestazione.  In secondo luogo, supporta l'ordinamento dei dati su più colonne contemporaneamente.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCListCtrl`.  L'esempio mostra come creare un controllo elenco, le colonne di inserimento, elementi di inserimento, impostare il testo di un elemento e impostare il tipo di controllo list.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#25](../../mfc/codesnippet/CPP/cmfclistctrl-class_1.h)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#26](../../mfc/codesnippet/CPP/cmfclistctrl-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListCtrl](../../mfc/reference/clistctrl-class.md)  
  
 [CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)  
  
## Requisiti  
 **intestazione:** afxlistctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CListCtrl Class](../../mfc/reference/clistctrl-class.md)