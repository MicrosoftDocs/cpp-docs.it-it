---
title: "CMFCTabDropTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCTabDropTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTabDropTarget class"
ms.assetid: 9777b7b6-10da-4c4b-b1d1-7ea795b0f1cb
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CMFCTabDropTarget Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un meccanismo di comunicazione tra un controllo Struttura a schede e le librerie OLE.  
  
## Sintassi  
  
```  
class CMFCTabDropTarget : public COleDropTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCTabDropTarget::CMFCTabDropTarget`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCTabDropTarget::OnDragEnter](../Topic/CMFCTabDropTarget::OnDragEnter.md)|Chiamato dal framework quando l'utente trascina un oggetto in una finestra della scheda.  \(Override [COleDropTarget::OnDragEnter](../Topic/COleDropTarget::OnDragEnter.md)\).|  
|[CMFCTabDropTarget::OnDragLeave](../Topic/CMFCTabDropTarget::OnDragLeave.md)|Chiamato dal framework quando l'utente trascina un oggetto dalla finestra a schede che ha lo stato attivo.  \(Override [COleDropTarget::OnDragLeave](../Topic/COleDropTarget::OnDragLeave.md)\).|  
|[CMFCTabDropTarget::OnDragOver](../Topic/CMFCTabDropTarget::OnDragOver.md)|Chiamato dal framework quando l'utente trascina un oggetto nella finestra della scheda che ha lo stato attivo.  \(Override [COleDropTarget::OnDragOver](../Topic/COleDropTarget::OnDragOver.md)\).|  
|[CMFCTabDropTarget::OnDropEx](../Topic/CMFCTabDropTarget::OnDropEx.md)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse alla fine di un'operazione di trascinamento.  \(Override [COleDropTarget::OnDropEx](../Topic/COleDropTarget::OnDropEx.md)\).|  
|[CMFCTabDropTarget::Register](../Topic/CMFCTabDropTarget::Register.md)|Registrato come uno che può essere la destinazione di un'operazione di trascinamento della selezione OLE.|  
  
### Note  
 Questa classe fornisce il supporto di trascinamento della selezione alla classe `CMFCBaseTabCtrl`.  Se l'applicazione inizializza le librerie OLE tramite la funzione [AfxOleInit](../Topic/AfxOleInit.md), gli oggetti `CMFCBaseTabCtrl` si registrano per le operazioni di trascinamento.  
  
 La classe `CMFCTabDropTarget` estende la classe di base utilizzando la scheda sotto il cursore quando un'operazione di trascinamento si verifica attivo.  Per ulteriori informazioni sulle operazioni di trascinamento, vedere [Trascinamento della selezione \(OLE\)](../../mfc/drag-and-drop-ole.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCTabDropTarget` e utilizzare il metodo `Register`.  
  
 [!code-cpp[NVC_MFC_RibbonApp#39](../../mfc/reference/codesnippet/CPP/cmfctabdroptarget-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [COleDropTarget](../../mfc/reference/coledroptarget-class.md)  
  
 [CMFCTabDropTarget](../../mfc/reference/cmfctabdroptarget-class.md)  
  
## Requisiti  
 **intestazione:** afxbasetabctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Trascinamento della selezione \(OLE\)](../../mfc/drag-and-drop-ole.md)