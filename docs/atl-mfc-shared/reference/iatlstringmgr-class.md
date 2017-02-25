---
title: "IAtlStringMgr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IAtlStringMgr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAtlStringMgr class"
  - "memoria, gestione"
  - "shared classes, IAtlStringMgr"
ms.assetid: 722f0346-a770-4aa7-8f94-177be8dba823
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# IAtlStringMgr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta l'interfaccia a un gestore di memoria `CStringT`.  
  
## Sintassi  
  
```  
  
__interface IAtlStringMgr  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Allocare](../Topic/IAtlStringMgr::Allocate.md)|Chiamare questo metodo per allocare una nuova struttura di dati in formato stringa.|  
|[Clone](../Topic/IAtlStringMgr::Clone.md)|Chiamare questo metodo per restituire un puntatore a un nuovo gestore della stringa da utilizzare con un'altra istanza `CSimpleStringT`.|  
|[Free](../Topic/IAtlStringMgr::Free.md)|Chiamare questo metodo per liberare una struttura di dati in formato stringa.|  
|[GetNilString](../Topic/IAtlStringMgr::GetNilString.md)|Restituisce un puntatore a un oggetto `CStringData` utilizzato dagli oggetti stringa vuota.|  
|[Ridistribuire](../Topic/IAtlStringMgr::Reallocate.md)|Chiamare questo metodo per ripetere una struttura di dati in formato stringa.|  
  
## Note  
 L'interfaccia gestisce la memoria utilizzata dalle classi stringa di MFC indipendente; come [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)e [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md).  
  
 È inoltre possibile utilizzare questa classe per implementare un gestore di memoria personalizzato per la classe personalizzata della stringa.  Per ulteriori informazioni, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## Requisiti  
 **Header:** atlsimpstr.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)