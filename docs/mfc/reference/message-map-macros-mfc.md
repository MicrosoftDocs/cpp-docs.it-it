---
title: "Macro della mappa messaggi (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.messages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "demarcazione di messaggi Windows"
  - "macro della mappa messaggi"
  - "intervalli della mappa messaggi"
  - "macro di mapping di messaggi"
  - "mappe messaggi [C++], dichiarazione e demarcazione"
  - "mappe messaggi [C++], macro"
  - "intervalli, mappa messaggi"
  - "messaggi Windows [C++], dichiarazione"
ms.assetid: 531b15ce-32b5-4ca0-a849-bb519616c731
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Macro della mappa messaggi (MFC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per supportare le mappe messaggi, MFC fornisce le seguenti macro:  
  
### Macro di dichiarazione e di delimitazione della mappa messaggi  
  
|||  
|-|-|  
|[DECLARE\_MESSAGE\_MAP](../Topic/DECLARE_MESSAGE_MAP.md)|Indica che una mappa messaggi verranno utilizzate nella classe per eseguire il mapping di messaggi a funzioni \(deve essere utilizzato nella dichiarazione di classe\).|  
|[BEGIN\_MESSAGE\_MAP](../Topic/BEGIN_MESSAGE_MAP.md)|Iniziare la definizione di una mappa messaggi \(che sarà utilizzato nell'implementazione della classe.|  
|[END\_MESSAGE\_MAP](../Topic/END_MESSAGE_MAP.md)|Termina la definizione di una mappa messaggi \(che sarà utilizzato nell'implementazione della classe.|  
  
### Macro di mapping Messaggio\-  
  
|||  
|-|-|  
|[ON\_COMMAND](../Topic/ON_COMMAND.md)|Indica quale funzione gestirà un messaggio di comando specificato.|  
|[ON\_CONTROL](../Topic/ON_CONTROL.md)|Indica quale funzione gestirà un messaggio di notifica del controllo specificato.|  
|[ON\_MESSAGE](../Topic/ON_MESSAGE.md)|Indica quale funzione gestirà un messaggio definito dall'utente.|  
|[ON\_OLECMD](../Topic/ON_OLECMD.md)|Indica quale funzione gestisce un comando di menu da un DocObject o dal relativo contenitore.|  
|[ON\_REGISTERED\_MESSAGE](../Topic/ON_REGISTERED_MESSAGE.md)|Indica quale funzione gestirà un messaggio definito dall'utente registrato.|  
|[ON\_REGISTERED\_THREAD\_MESSAGE](../Topic/ON_REGISTERED_THREAD_MESSAGE.md)|Indica quale funzione gestirà un messaggio definito dall'utente registrato quando si dispone di una classe di `CWinThread`.|  
|[ON\_THREAD\_MESSAGE](../Topic/ON_THREAD_MESSAGE.md)|Indica quale funzione gestirà un messaggio definito dall'utente quando è una classe di `CWinThread`.|  
|[ON\_UPDATE\_COMMAND\_UI](../Topic/ON_UPDATE_COMMAND_UI.md)|Indica quale funzione gestirà un messaggio di comando specificato update dell'interfaccia utente.|  
  
### Macro di intervallo della mappa messaggi  
  
|||  
|-|-|  
|[ON\_COMMAND\_RANGE](../Topic/ON_COMMAND_RANGE.md)|Indica quale funzione gestirà l'intervallo di ID di comandi specificati nei primi due parametri alla macro.|  
|[ON\_UPDATE\_COMMAND\_UI\_RANGE](../Topic/ON_UPDATE_COMMAND_UI_RANGE.md)|Indica il gestore aggiornamento gestirà l'intervallo di ID di comandi specificati nei primi due parametri alla macro.|  
|[ON\_CONTROL\_RANGE](../Topic/ON_CONTROL_RANGE.md)|Indica quale funzione gestirà le notifiche dall'intervallo di controllo ID specificato nel secondo e il terzo parametro alla macro.  Il primo parametro è un messaggio di notifica del controllo, come **BN\_CLICKED**.|  
  
 Per ulteriori informazioni sulle mappe messaggi, le macro della dichiarazione della mappa messaggi e di delimitazione e macro di mapping messaggio\-, vedere [Mappe messaggi](../../mfc/reference/message-maps-mfc.md) e [Argomenti di mapping e di gestione dei messaggi](../../mfc/message-handling-and-mapping.md).  Per ulteriori informazioni sugli intervalli della mappa messaggi, vedere [Gestori per gli intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)