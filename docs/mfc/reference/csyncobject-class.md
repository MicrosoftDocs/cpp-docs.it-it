---
title: "CSyncObject Class | Microsoft Docs"
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
  - "CSyncObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSyncObject class"
  - "classi di sincronizzazione, CSyncObject"
ms.assetid: c62ea6eb-a17b-4e01-aed4-321fc435a5f4
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSyncObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe virtuale pura che fornisce le funzionalità comuni agli oggetti di sincronizzazione in Win32.  
  
## Sintassi  
  
```  
class CSyncObject : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSyncObject::CSyncObject](../Topic/CSyncObject::CSyncObject.md)|Costruisce un oggetto `CSyncObject`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSyncObject::Lock](../Topic/CSyncObject::Lock.md)|Accede all'oggetto di sincronizzazione.|  
|[CSyncObject::Unlock](../Topic/CSyncObject::Unlock.md)|Accede all'oggetto di sincronizzazione.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSyncObject::operator HANDLE](../Topic/CSyncObject::operator%20HANDLE.md)|Fornisce l'accesso all'oggetto di sincronizzazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSyncObject::m\_hObject](../Topic/CSyncObject::m_hObject.md)|Un handle per l'oggetto di sincronizzazione sottostante.|  
  
## Note  
 La libreria MFC fornisce molte classi derivate da `CSyncObject`.  Questi sono [CEvent](../../mfc/reference/cevent-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md)e [CSemaphore](../../mfc/reference/csemaphore-class.md).  
  
 Per informazioni su come utilizzare gli oggetti di sincronizzazione, vedere l'articolo [multithreading: Utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CSyncObject`  
  
## Requisiti  
 **Header:** afxmt.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)