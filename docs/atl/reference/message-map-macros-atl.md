---
title: "Message Map Macros (ATL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: eefdd546-8934-4a30-b263-9c06a8addcbd
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Message Map Macros (ATL)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste macro definiscono le mappe dei messaggi e le voci.  
  
|||  
|-|-|  
|[ALT\_MSG\_MAP](../Topic/ALT_MSG_MAP.md)|Contrassegna l'inizio di una mappa messaggi alternativa.|  
|[BEGIN\_MSG\_MAP](../Topic/BEGIN_MSG_MAP.md)|Contrassegna l'inizio della mappa messaggi predefinita.|  
|[CHAIN\_MSG\_MAP\_ALT](../Topic/CHAIN_MSG_MAP_ALT.md)|Catene a una mappa messaggi alternativa nella classe base.|  
|[CHAIN\_MSG\_MAP\_ALT\_MEMBER](../Topic/CHAIN_MSG_MAP_ALT_MEMBER.md)|Catene a una mappa messaggi alternativa in un membro dati della classe.|  
|[CHAIN\_MSG\_MAP](../Topic/CHAIN_MSG_MAP.md)|Catene alla mappa messaggi predefinita nella classe base.|  
|[CHAIN\_MSG\_MAP\_DYNAMIC](../Topic/CHAIN_MSG_MAP_DYNAMIC.md)|Catene alla mappa messaggi in un'altra classe in fase di esecuzione.|  
|[CHAIN\_MSG\_MAP\_MEMBER](../Topic/CHAIN_MSG_MAP_MEMBER.md)|Catene alla mappa messaggi predefinita in un membro dati della classe.|  
|[COMMAND\_CODE\_HANDLER](../Topic/COMMAND_CODE_HANDLER.md)|Esegue il mapping di un messaggio **WM\_COMMAND** a una funzione di gestione, in base al codice della notifica.|  
|[COMMAND\_HANDLER](../Topic/COMMAND_HANDLER.md)|Esegue il mapping di un messaggio **WM\_COMMAND** a una funzione di gestione, in base al codice di notifica e all'identificatore della voce di menu, controllo, o dei tasti di scelta rapida.|  
|[COMMAND\_ID\_HANDLER](../Topic/COMMAND_ID_HANDLER.md)|Esegue il mapping di un messaggio **WM\_COMMAND** a una funzione di gestione, in base all'identificatore della voce di menu, controllo, o dei tasti di scelta rapida.|  
|[COMMAND\_RANGE\_CODE\_HANDLER](../Topic/COMMAND_RANGE_CODE_HANDLER.md)|Esegue il mapping di un messaggio **WM\_COMMAND** a una funzione di gestione, in base al codice di notifica e un intervallo contiguo degli identificatori del controllo.|  
|[COMMAND\_RANGE\_HANDLER](../Topic/COMMAND_RANGE_HANDLER.md)|Esegue il mapping di un messaggio **WM\_COMMAND** a una funzione di gestione, in base a un intervallo contiguo degli identificatori del controllo.|  
|[DECLARE\_EMPTY\_MSG\_MAP](../Topic/DECLARE_EMPTY_MSG_MAP.md)|Implementa una mappa messaggi vuota.|  
|[DEFAULT\_REFLECTION\_HANDLER](../Topic/DEFAULT_REFLECTION_HANDLER.md)|Fornisce un gestore predefinito per i messaggi riprodotti che non sono gestiti in caso contrario.|  
|[END\_MSG\_MAP](../Topic/END_MSG_MAP.md)|Contrassegna la fine di una mappa messaggi.|  
|[FORWARD\_NOTIFICATIONS](../Topic/FORWARD_NOTIFICATIONS.md)|Inoltra i messaggi di notifica alla finestra padre.|  
|[MESSAGE\_HANDLER](../Topic/MESSAGE_HANDLER.md)|Esegue il mapping di un messaggio di Windows a una funzione di gestione.|  
|[MESSAGE\_RANGE\_HANDLER](../Topic/MESSAGE_RANGE_HANDLER.md)|Esegue il mapping di un intervallo contiguo dei messaggi di Windows a una funzione di gestione.|  
|[NOTIFY\_CODE\_HANDLER](../Topic/NOTIFY_CODE_HANDLER.md)|Esegue il mapping di un messaggio **WM\_NOTIFY** a una funzione di gestione, in base al codice della notifica.|  
|[NOTIFY\_HANDLER](../Topic/NOTIFY_HANDLER.md)|Esegue il mapping di un messaggio **WM\_NOTIFY** a una funzione di gestione, in base al codice di notifica e all'identificatore di controllo.|  
|[NOTIFY\_ID\_HANDLER](../Topic/NOTIFY_ID_HANDLER.md)|Esegue il mapping di un messaggio **WM\_NOTIFY** a una funzione di gestione, in base all'identificatore di controllo.|  
|[NOTIFY\_RANGE\_CODE\_HANDLER](../Topic/NOTIFY_RANGE_CODE_HANDLER.md)|Esegue il mapping di un messaggio **WM\_NOTIFY** a una funzione di gestione, in base al codice di notifica e un intervallo contiguo degli identificatori del controllo.|  
|[NOTIFY\_RANGE\_HANDLER](../Topic/NOTIFY_RANGE_HANDLER.md)|Esegue il mapping di un messaggio **WM\_NOTIFY** a una funzione di gestione, in base a un intervallo contiguo degli identificatori del controllo.|  
|[REFLECT\_NOTIFICATIONS](../Topic/REFLECT_NOTIFICATIONS.md)|Derivano i messaggi di notifica della finestra che li ha inviati.|  
|[REFLECTED\_COMMAND\_CODE\_HANDLER](../Topic/REFLECTED_COMMAND_CODE_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_COMMAND** a una funzione di gestione, in base al codice della notifica.|  
|[REFLECTED\_COMMAND\_HANDLER](../Topic/REFLECTED_COMMAND_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_COMMAND** a una funzione di gestione, in base al codice di notifica e all'identificatore della voce di menu, controllo, o dei tasti di scelta rapida.|  
|[REFLECTED\_COMMAND\_ID\_HANDLER](../Topic/REFLECTED_COMMAND_ID_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_COMMAND** a una funzione di gestione, in base all'identificatore della voce di menu, controllo, o dei tasti di scelta rapida.|  
|[REFLECTED\_COMMAND\_RANGE\_CODE\_HANDLER](../Topic/REFLECTED_COMMAND_RANGE_CODE_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_COMMAND** a una funzione di gestione, in base al codice di notifica e un intervallo contiguo degli identificatori del controllo.|  
|[REFLECTED\_COMMAND\_RANGE\_HANDLER](../Topic/REFLECTED_COMMAND_RANGE_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_COMMAND** a una funzione di gestione, in base a un intervallo contiguo degli identificatori del controllo.|  
|[REFLECTED\_NOTIFY\_CODE\_HANDLER](../Topic/REFLECTED_NOTIFY_CODE_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_NOTIFY** a una funzione di gestione, in base al codice della notifica.|  
|[REFLECTED\_NOTIFY\_HANDLER](../Topic/REFLECTED_NOTIFY_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_NOTIFY** a una funzione di gestione, in base al codice di notifica e all'identificatore di controllo.|  
|[REFLECTED\_NOTIFY\_ID\_HANDLER](../Topic/REFLECTED_NOTIFY_ID_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_NOTIFY** a una funzione di gestione, in base all'identificatore di controllo.|  
|[REFLECTED\_NOTIFY\_RANGE\_CODE\_HANDLER](../Topic/REFLECTED_NOTIFY_RANGE_CODE_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_NOTIFY** a una funzione di gestione, in base al codice di notifica e un intervallo contiguo degli identificatori del controllo.|  
|[REFLECTED\_NOTIFY\_RANGE\_HANDLER](../Topic/REFLECTED_NOTIFY_RANGE_HANDLER.md)|Esegue il mapping di un messaggio riprodotto **WM\_NOTIFY** a una funzione di gestione, in base a un intervallo contiguo degli identificatori del controllo.|  
  
## Vedere anche  
 [Macros](../../atl/reference/atl-macros.md)