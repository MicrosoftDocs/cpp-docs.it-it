---
title: Mappe (MFC) del messaggio | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.messages
dev_langs:
- C++
helpviewer_keywords:
- message maps [C++], MFC
- Windows messages [C++], message maps
- messages [C++], Windows
- MFC [C++], messages
ms.assetid: 3f9855e4-9d7d-4b64-8f3f-a19ea3cf79ba
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: bb31d35e221c9f5d06dc34408bed500b4a18b077
ms.lasthandoff: 02/24/2017

---
# <a name="message-maps-mfc"></a>Mappe messaggi (MFC)
Questa sezione della documentazione sono elencati tutti [macro di mapping dei messaggi](../../mfc/reference/message-map-macros-mfc.md) e tutte le [CWnd](../../mfc/reference/cwnd-class.md) le voci della mappa messaggi con il membro corrispondente prototipi di funzione:  
  
|Categoria|Descrizione|  
|--------------|-----------------|  
|[Gestore di messaggi WM_COMMAND](../../mfc/reference/wm-command-message-handler.md)|Gestisce **WM_COMMAND** messaggi generati da selezioni di menu utente o i tasti di scelta.|  
|[Gestori di messaggi di notifica finestra figlio](../../mfc/reference/child-window-notification-message-handlers.md)|Gestire i messaggi di notifica da finestre figlio.|  
|[Gestori messaggi WM _](../../mfc/reference/handlers-for-wm-messages.md)|Gestire **WM _** messaggi, ad esempio `WM_PAINT`.|  
|[Gestori di messaggi definiti dall'utente](../../mfc/reference/user-defined-handlers.md)|Gestire i messaggi definiti dall'utente.|  
  
 (Per una spiegazione della terminologia e le convenzioni utilizzate in questo riferimento, vedere [come utilizzare il riferimento incrociato alla mappa messaggi](../../mfc/reference/how-to-use-the-message-map-cross-reference.md).)  
  
 Poiché Windows è un sistema orientato ai messaggi, gran parte della programmazione per l'ambiente di Windows prevede la gestione dei messaggi. Si verifica ogni volta fare clic su un evento, ad esempio un mouse o una sequenza di tasti, viene inviato un messaggio all'applicazione, che deve quindi gestire l'evento.  
  
 La libreria Microsoft Foundation Class offre un modello di programmazione ottimizzato per la programmazione basata su messaggi. In questo modello, "messaggio mappe" vengono utilizzate per designare le funzioni gestirà vari messaggi per una determinata classe. Mappe messaggi contengono uno o più macro che specificano quali messaggi verranno gestiti da quali funzioni. Ad esempio, una mappa di messaggio contenente un `ON_COMMAND` macro potrebbe essere simile alla seguente:  
  
 [!code-cpp[NVC_MFCMessageMaps&#16;](../../mfc/reference/codesnippet/cpp/message-maps-mfc_1.cpp)]  
  
 Il `ON_COMMAND` macro viene utilizzata per gestire i messaggi di comando generati dal menu, pulsanti e tasti di scelta rapida. [Macro](../../mfc/reference/message-map-macros-mfc.md) sono disponibili per eseguire il mapping seguente:  
  
## <a name="windows-messages"></a>Messaggi Windows  
  
-   Controllare le notifiche  
  
-   Messaggi definiti dall'utente  
  
## <a name="command-messages"></a>Messaggi di comando  
  
-   Registrare i messaggi definiti dall'utente  
  
-   Messaggi di aggiornamento dell'interfaccia utente  
  
## <a name="ranges-of-messages"></a>Intervalli di messaggi  
  
-   Comandi  
  
-   Aggiornamento del gestore messaggi  
  
-   Controllare le notifiche  
  
 Sebbene le macro di mappe messaggi siano importanti, in genere non è necessario utilizzarli direttamente. Questo avviene perché la finestra proprietà crea automaticamente le voci della mappa messaggi nei file di origine quando si utilizza per associare i messaggi di funzioni di gestione dei messaggi. Ogni volta che si desidera modificare o aggiungere una voce della mappa messaggi, è possibile utilizzare la finestra Proprietà.  
  
> [!NOTE]
>  La finestra proprietà non supporta intervalli della mappa messaggi. È necessario scrivere queste voci della mappa messaggi manualmente.  
  
 Tuttavia, le mappe messaggi sono una parte importante della libreria Microsoft Foundation Class. È necessario comprendere lo scopo e per essi viene fornita una documentazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)


