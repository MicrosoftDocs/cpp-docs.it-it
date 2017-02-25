---
title: "Mappe sink di evento | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.maps"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mappe sink di evento"
ms.assetid: a9757eb2-5f4a-45ec-a2cd-ce5eec85b16f
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# Mappe sink di evento
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando un controllo OLE incorporato genera un evento, il contenitore controllo riceve l'evento utilizzando un meccanismo, denominato "una mappa del sink di eventi," fornita da MFC.  Questa mappa del sink di eventi sono definite le funzioni di gestione per ogni evento specifico nonché i parametri di tali eventi.  Per ulteriori informazioni sulle mappe del sink di eventi, vedere l'articolo [Contenitori di controlli ActiveX](../../mfc/activex-control-containers.md).  
  
### Mappe del sink di eventi  
  
|||  
|-|-|  
|[BEGIN\_EVENTSINK\_MAP](../Topic/BEGIN_EVENTSINK_MAP.md)|Iniziare la definizione di una mappa del sink di eventi.|  
|[DECLARE\_EVENTSINK\_MAP](../Topic/DECLARE_EVENTSINK_MAP.md)|Dichiara una mappa del sink di eventi.|  
|[END\_EVENTSINK\_MAP](../Topic/END_EVENTSINK_MAP.md)|Termina la definizione di una mappa del sink di eventi.|  
|[ON\_EVENT](../Topic/ON_EVENT.md)|Definisce un gestore eventi per un evento specifico.|  
|[ON\_EVENT\_RANGE](../Topic/ON_EVENT_RANGE.md)|Definisce un gestore eventi per uno specifico evento generato da un insieme di controlli OLE.|  
|[ON\_EVENT\_REFLECT](../Topic/ON_EVENT_REFLECT.md)|Riceve gli eventi generati dal controllo prima che vengano gestiti dal contenitore del controllo.|  
|[ON\_PROPNOTIFY](../Topic/ON_PROPNOTIFY.md)|Definisce un gestore per le notifiche di proprietà da un controllo OLE.|  
|[ON\_PROPNOTIFY\_RANGE](../Topic/ON_PROPNOTIFY_RANGE.md)|Definisce un gestore per le notifiche della proprietà da un insieme di controlli OLE.|  
|[ON\_PROPNOTIFY\_REFLECT](../Topic/ON_PROPNOTIFY_REFLECT.md)|Riceve le notifiche della proprietà inviate dal controllo prima che vengano gestiti dal contenitore del controllo.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)