---
title: "CMFCTasksPaneTask Class | Microsoft Docs"
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
  - "CMFCTasksPaneTask"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTasksPaneTask class"
ms.assetid: c5a7513b-cd8f-4e2e-b16f-650e1fe30954
caps.latest.revision: 27
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCTasksPaneTask Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCTasksPaneTask` è una classe di supporto che rappresenta le attività per il controllo del riquadro attività \([CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md)\).  L'oggetto di attività rappresenta un elemento nel gruppo di attività \([CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)\).  Ogni attività può avere un comando che il framework esegue quando un utente fa clic sull'attività e un'icona visualizzata a sinistra del nome attività.  
  
## Sintassi  
  
```  
class CMFCTasksPaneTask : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTask::CMFCTasksPaneTask](../Topic/CMFCTasksPaneTask::CMFCTasksPaneTask.md)|Crea e inizializza un oggetto `CMFCTasksPaneTask`.|  
|`CMFCTasksPaneTask::~CMFCTasksPaneTask`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTask::SetACCData](../Topic/CMFCTasksPaneTask::SetACCData.md)|Determina i dati di accessibilità per l'attività corrente.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTasksPaneTask::m\_bAutoDestroyWindow](../Topic/CMFCTasksPaneTask::m_bAutoDestroyWindow.md)|Determina se la finestra di attività automaticamente distrutto.|  
|[CMFCTasksPaneTask::m\_bIsBold](../Topic/CMFCTasksPaneTask::m_bIsBold.md)|Determina se il framework di un'etichetta di attività in grassetto.|  
|[CMFCTasksPaneTask::m\_dwUserData](../Topic/CMFCTasksPaneTask::m_dwUserData.md)|Contiene dati definiti dal framework associa all'attività.  Impostare su zero se l'attività non dispone di dati collegati.|  
|[CMFCTasksPaneTask::m\_hwndTask](../Topic/CMFCTasksPaneTask::m_hwndTask.md)|Un handle di finestra di attività.|  
|[CMFCTasksPaneTask::m\_nIcon](../Topic/CMFCTasksPaneTask::m_nIcon.md)|L'indice dall'elenco immagini dell'immagine dalle visualizzazioni del framework accanto all'attività.|  
|[CMFCTasksPaneTask::m\_nWindowHeight](../Topic/CMFCTasksPaneTask::m_nWindowHeight.md)|L'altezza della finestra di attività.  Se l'attività non ha finestra di attività, questo valore è zero.|  
|[CMFCTasksPaneTask::m\_pGroup](../Topic/CMFCTasksPaneTask::m_pGroup.md)|Un puntatore a `CMFCTasksPaneTaskGroup` che questa attività appartiene.|  
|[CMFCTasksPaneTask::m\_rect](../Topic/CMFCTasksPaneTask::m_rect.md)|Specifica il rettangolo di delimitazione dell'attività.|  
|[CMFCTasksPaneTask::m\_strName](../Topic/CMFCTasksPaneTask::m_strName.md)|Nome dell'attività.|  
|[CMFCTasksPaneTask::m\_uiCommandID](../Topic/CMFCTasksPaneTask::m_uiCommandID.md)|Specifica l'id di comando di comando che il framework esegue quando l'utente fa clic sull'attività.  Se questo valore non è un ID di comando valido, l'attività viene considerata come etichetta semplice.|  
  
## Note  
 Nella figura seguente viene illustrato un gruppo di attività che contiene tre attività:  
  
 ![Gruppo di attività espanso](../../mfc/reference/media/nexttaskgrpexpand.png "NextTaskGrpExpand")  
  
> [!NOTE]
>  Se un'attività non ha un ID di comando valido, viene trattata come etichetta semplice.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md)  
  
## Requisiti  
 **intestazione:** afxTasksPane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)