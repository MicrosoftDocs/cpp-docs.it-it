---
title: "Mappe messaggi (MFC) | Microsoft Docs"
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
  - "mappe messaggi [C++], MFC"
  - "messaggi [C++], Windows"
  - "MFC [C++], messaggi"
  - "messaggi Windows [C++], mappe messaggi"
ms.assetid: 3f9855e4-9d7d-4b64-8f3f-a19ea3cf79ba
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Mappe messaggi (MFC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa sezione dei riferimenti elenca tutte le [macro di mapping dei messaggi](../../mfc/reference/message-map-macros-mfc.md) e tutte le voci della mappa dei messaggi [CWnd](../../mfc/reference/cwnd-class.md) insieme ai prototipi corrispondenti della funzione membro:  
  
|Categoria|Descrizione|  
|---------------|-----------------|  
|[Gestore di messaggi WM\_COMMAND](../../mfc/reference/wm-command-message-handler.md)|Gestisce messaggi **WM\_COMMAND** generati dalle selezioni dei menu dell'utente o dai tasti di scelta dei menu.|  
|[Gestori messaggi di notifica della finestra figlio](../../mfc/reference/child-window-notification-message-handlers.md)|Gestire messaggi di notifica dalle finestre figlio.|  
|[Gestori WM\_ Message](../../mfc/reference/handlers-for-wm-messages.md)|Gestire messaggi **WM\_** come `WM_PAINT`.|  
|[Gestori di messaggi definiti dall'utente](../../mfc/reference/user-defined-handlers.md)|Gestire messaggi definiti dall'utente.|  
  
 \(Per una spiegazione della terminologia e delle convenzioni utilizzate in questo riferimento, vedere [Come utilizzare il riferimento incrociato della mappa messaggi](../../mfc/reference/how-to-use-the-message-map-cross-reference.md).\)  
  
 Poiché Windows è un sistema operativo orientato ai messaggi, larga parte della programmazione per l'ambiente Windows riguarda la gestione dei messaggi.  Ogni volta che avviene un evento come una battuta di un tasto o un clic del mouse, un messaggio viene inviato all'applicazione, che deve quindi gestire l'evento.  
  
 La libreria Microsoft Foundation Class offre un modello di programmazione ottimizzato per la programmazione basata su messaggi.  In questo modello, le "mappe di messaggi" vengono utilizzate per definire quali funzioni gestiranno i diversi messaggi per una particolare classe.  Le mappe di messaggi contengono una o più macro che specificano, per i vari messaggi, quali funzioni li gestiranno.  Ad esempio, una mappa di messaggi che contiene una macro `ON_COMMAND` potrebbe essere simile alla seguente:  
  
 [!code-cpp[NVC_MFCMessageMaps#16](../../mfc/reference/codesnippet/CPP/message-maps-mfc_1.cpp)]  
  
 La macro `ON_COMMAND` viene utilizzata per gestire i messaggi di comando generati dai menu, dai pulsanti e dai tasti di scelta rapida.  Sono disponibili delle [macro](../../mfc/reference/message-map-macros-mfc.md) per eseguire il mapping dei seguenti:  
  
## Messaggi di Windows  
  
-   Notifiche di controllo  
  
-   Messaggi definiti dall'utente  
  
## Messaggi di comando  
  
-   Messaggi registrati definiti dall'utente  
  
-   Messaggi di aggiornamento dell'interfaccia utente  
  
## Intervalli di messaggi  
  
-   Comandi  
  
-   Messaggi del gestore degli aggiornamenti  
  
-   Notifiche di controllo  
  
 Sebbene le macro della mappa dei messaggi siano importanti, in genere non è necessario utilizzarle direttamente.  Questo perché la finestra Proprietà definisce automaticamente le voci della mappa dei messaggi nei file di origine quando la si utilizza per associare le funzioni di gestione dei messaggi e i messaggi.  Ogni qualvolta si desidera modificare o aggiungere una voce della mappa messaggi, è possibile utilizzare la finestra Proprietà.  
  
> [!NOTE]
>  La finestra Proprietà non supporta intervalli della mappa dei messaggi.  È necessario scrivere queste voci della mappa dei messaggi manualmente.  
  
 Tuttavia, le mappe di messaggi sono una parte importante della libreria Microsoft Foundation Class.  È necessario comprendere le loro funzioni, e per essi viene fornita la documentazione.  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)