---
title: "CMFCTasksPaneTaskGroup Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCTasksPaneTaskGroup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTasksPaneTaskGroup class"
ms.assetid: 2111640b-a46e-4b27-b033-29e88632b86a
caps.latest.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 35
---
# CMFCTasksPaneTaskGroup Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCTasksPaneTaskGroup` è una classe di supporto utilizzata dal controllo [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md).  Oggetti di tipo `CMFCTasksPaneTaskGroup` rappresentano *un gruppo di attività*.  Il gruppo di attività è un elenco di elementi che le visualizzazioni del framework in una finestra separata con un pulsante di compressione.  La casella potrebbe avere una didascalia facoltativa \(nome del gruppo.  Se un gruppo è compresso, l'elenco di attività non è visibile.  
  
## Sintassi  
  
```  
class CMFCTasksPaneTaskGroup : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup](../Topic/CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup.md)|Costruisce un oggetto `CMFCTasksPaneTaskGroup`.|  
|`CMFCTasksPaneTaskGroup::~CMFCTasksPaneTaskGroup`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::SetACCData](../Topic/CMFCTasksPaneTaskGroup::SetACCData.md)|Determina i dati di accessibilità per il gruppo di attività corrente.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::m\_bIsBottom](../Topic/CMFCTasksPaneTaskGroup::m_bIsBottom.md)|Determina se il gruppo di attività viene allineato al bordo inferiore del controllo del riquadro attività.|  
|[CMFCTasksPaneTaskGroup::m\_bIsCollapsed](../Topic/CMFCTasksPaneTaskGroup::m_bIsCollapsed.md)|Determina se il gruppo di attività è compresso.|  
|[CMFCTasksPaneTaskGroup::m\_bIsSpecial](../Topic/CMFCTasksPaneTaskGroup::m_bIsSpecial.md)|Determina se il gruppo di attività è *speciale.* Il framework visualizzare le didascalie speciali in un colore diverso.|  
|[CMFCTasksPaneTaskGroup::m\_lstTasks](../Topic/CMFCTasksPaneTaskGroup::m_lstTasks.md)|Contiene l'elenco delle attività.|  
|[CMFCTasksPaneTaskGroup::m\_rect](../Topic/CMFCTasksPaneTaskGroup::m_rect.md)|Specifica il rettangolo di delimitazione della barra del titolo del gruppo.|  
|[CMFCTasksPaneTaskGroup::m\_rectGroup](../Topic/CMFCTasksPaneTaskGroup::m_rectGroup.md)|Specifica il rettangolo di delimitazione di gruppo.|  
|[CMFCTasksPaneTaskGroup::m\_strName](../Topic/CMFCTasksPaneTaskGroup::m_strName.md)|Specifica il nome del gruppo.|  
  
## Note  
 Nella figura seguente viene illustrato un gruppo di attività espanso:  
  
 ![Gruppo di attività espanso](../../mfc/reference/media/nexttaskgrpexpand.png "NextTaskGrpExpand")  
  
 Nella figura seguente viene illustrato un gruppo di attività compresso:  
  
 ![Gruppo di attività compresso](../../mfc/reference/media/nexttaskgrpcollapse.png "NextTaskGrpCollapse")  
  
 Nella figura seguente viene illustrato un gruppo di attività senza una didascalia:  
  
 ![Gruppo di attività senza didascalia](../../mfc/reference/media/nexttaskgrpnocapt.png "NextTaskGrpNoCapt")  
  
 Nella figura seguente vengono illustrate due gruppi di attività.  Il primo gruppo di attività è contrassegnato come speciale impostando il flag `m_bIsSpecial` a `TRUE`, mentre il secondo gruppo di attività non è speciale.  Si noti come la didascalia per il primo gruppo di attività è più scura del secondo gruppo di attività:  
  
 ![Gruppo di attività speciale](../../mfc/reference/media/nexttaskgrpspecial.png "NextTaskGrpSpecial")  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)  
  
## Requisiti  
 **intestazione:** afxTasksPane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md)   
 [CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)