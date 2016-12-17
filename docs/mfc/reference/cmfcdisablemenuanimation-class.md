---
title: "CMFCDisableMenuAnimation Class | Microsoft Docs"
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
  - "CMFCDisableMenuAnimation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDisableMenuAnimation class"
ms.assetid: c6eb07da-c382-43d6-8028-007f2320e50e
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCDisableMenuAnimation Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Disabilita l'animazione di menu di scelta rapida.  
  
## Sintassi  
  
```  
class CMFCDisableMenuAnimation  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDisableMenuAnimation::CMFCDisableMenuAnimation`|Costruisce un oggetto `CMFCDisableMenuAnimation`.|  
|`CMFCDisableMenuAnimation::~CMFCDisableMenuAnimation`|Distruttore|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCDisableMenuAnimation::Restore](../Topic/CMFCDisableMenuAnimation::Restore.md)|Ripristino dell'animazione precedente che il framework utilizzato per visualizzare un menu di scelta rapida.|  
  
### Membri di dati  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDisableMenuAnimation::m_animType`|Archivia il tipo di animazione precedente del menu di scelta rapida.|  
  
### Note  
 Utilizzare questa classe di supporto per disabilitare temporaneamente l'animazione di menu di scelta rapida \(ad esempio, quando si sviluppa il mouse o i comandi da tastiera\).  
  
 Un oggetto `CMFCDisableMenuAnimation` disabilita l'animazione di menu di scelta rapida di vita.  Il costruttore consente l'animazione corrente del menu di scelta rapida nel campo `m_animType` e set che l'animazione corrente tipi a `CMFCPopupMenu::NO_ANIMATION`.  Il distruttore ripristina il tipo di animazione precedente.  
  
 È possibile creare un oggetto `CMFCDisableMenuAnimation` nello stack per disabilitare l'animazione di menu di scelta rapida di una singola funzione.  Se si desidera disabilitare l'animazione di menu di scelta rapida tra le funzioni, creare un oggetto `CMFCDisableMenuAnimation` nell'heap e quindi eliminarlo quando si desidera ripristinare l'animazione di menu di scelta rapida.  
  
## Esempio  
 Di seguito viene illustrato come utilizzare lo stack per disabilitare temporaneamente animazione dei menu.  
  
 [!code-cpp[NVC_MFC_Misc#1](../../mfc/reference/codesnippet/CPP/cmfcdisablemenuanimation-class_1.h)]  
  
## Gerarchia di ereditarietà  
 [CMFCDisableMenuAnimation](../../mfc/reference/cmfcdisablemenuanimation-class.md)  
  
## Requisiti  
 **intestazione:** afxpopupmenu.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)