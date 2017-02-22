---
title: "CMessageMap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMessageMap"
  - "ATL.CMessageMap"
  - "ATL::CMessageMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, gestori messaggi"
  - "CMessageMap class"
  - "message maps, ATL"
ms.assetid: 1f97bc16-a8a0-4cf0-b90f-1778813a5c8e
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CMessageMap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe consente delle mappe dei messaggi di un oggetto siano di accesso da un altro oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class ATL_NO_VTABLE CMessageMap  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMessageMap::ProcessWindowMessage](../Topic/CMessageMap::ProcessWindowMessage.md)|Accede a una mappa messaggi in `CMessageMap`classe derivata da.|  
  
## Note  
 `CMessageMap` è una classe base astratta che consente le mappe messaggi di un oggetto per accedere da un altro oggetto.  Affinché un oggetto di esporre le mappe messaggi, la classe deve derivare da `CMessageMap`.  
  
 ATL utilizza `CMessageMap` per supportare le finestre contenute e concatenare dinamico della mappa messaggi.  Ad esempio, qualsiasi classe contenere un oggetto [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) derivino da `CMessageMap`.  Il codice seguente viene ricavato dall'esempio [Esempio SUBEDIT](../../top/visual-cpp-samples.md).  Con [CComControl](../../atl/reference/ccomcontrol-class.md), la classe `CAtlEdit` automaticamente deriva da `CMessageMap`.  
  
 [!code-cpp[NVC_ATL_Windowing#90](../../atl/codesnippet/CPP/cmessagemap-class_1.h)]  
  
 Poiché la finestra contenuto, `m_EditCtrl`, utilizzerà una mappa messaggi nella classe contenitore, `CAtlEdit` deriva da `CMessageMap`.  
  
 Per ulteriori informazioni sulle mappe messaggi, vedere [Mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "classi di finestre di ATL."  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [CDynamicChain Class](../../atl/reference/cdynamicchain-class.md)   
 [BEGIN\_MSG\_MAP](../Topic/BEGIN_MSG_MAP.md)   
 [ALT\_MSG\_MAP](../Topic/ALT_MSG_MAP.md)   
 [Class Overview](../../atl/atl-class-overview.md)