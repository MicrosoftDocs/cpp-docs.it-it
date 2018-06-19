---
title: Mappe (MFC) dei messaggi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.messages
dev_langs:
- C++
helpviewer_keywords:
- message maps [MFC], MFC
- Windows messages [MFC], message maps
- messages [MFC], Windows
- MFC, messages
ms.assetid: 3f9855e4-9d7d-4b64-8f3f-a19ea3cf79ba
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4d1479ac7cb119ef206f8c20b6fa53bf7017b8ac
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33371712"
---
# <a name="message-maps-mfc"></a>Mappe messaggi (MFC)
In questa sezione del riferimento sono elencati tutti [macro di mapping dei messaggi](../../mfc/reference/message-map-macros-mfc.md) e tutte le [CWnd](../../mfc/reference/cwnd-class.md) prototipi di funzione le voci della mappa messaggi con il membro corrispondente:  
  
|Category|Descrizione|  
|--------------|-----------------|  
|ON\_gestore di messaggi di comando|Gestisce `WM_COMMAND` messaggi generati dal selezioni di menu utente o i tasti di scelta.|  
|[Gestori di messaggi di notifica finestra figlio](../../mfc/reference/child-window-notification-message-handlers.md)|Gestire i messaggi di notifica da finestre figlio.|  
|[Gestori messaggi WM _](../../mfc/reference/handlers-for-wm-messages.md)|Gestire `WM_` messaggi, ad esempio `WM_PAINT`.|  
|[Gestori di messaggi definiti dall'utente](../../mfc/reference/user-defined-handlers.md)|Gestire i messaggi definiti dall'utente.|  
  
 (Per una spiegazione della terminologia e le convenzioni utilizzate in questo riferimento, vedere [illustrato come utilizzare il riferimento incrociato alla mappa messaggi](../../mfc/reference/how-to-use-the-message-map-cross-reference.md).)  
  
 Poiché Windows è un sistema operativo orientato ai messaggi, gran parte della programmazione per l'ambiente di Windows prevede la gestione dei messaggi. Si verifica ogni volta che un evento, ad esempio un mouse o una sequenza di tasti fare clic su, viene inviato un messaggio per l'applicazione, che deve gestire l'evento.  
  
 La libreria Microsoft Foundation Class offre un modello di programmazione ottimizzato per la programmazione basata su messaggi. In questo modello "mappe messaggi" vengono utilizzate per designare le funzioni che gestirà vari messaggi per una determinata classe. Mappe messaggi contengono uno o più macro che specificare quali messaggi devono essere gestiti dalle quali funzioni. Ad esempio, una mappa di messaggio contenente un `ON_COMMAND` (macro) potrebbe essere simile al seguente:  
  
 [!code-cpp[NVC_MFCMessageMaps#16](../../mfc/reference/codesnippet/cpp/message-maps-mfc_1.cpp)]  
  
 Il `ON_COMMAND` macro viene usata per gestire i messaggi di comando generati dal menu, pulsanti e tasti di scelta rapida. [Macro](../../mfc/reference/message-map-macros-mfc.md) sono disponibili per eseguire il mapping seguente:  
  
## <a name="windows-messages"></a>Messaggi di Windows  
  
-   Notifiche dei controlli  
  
-   Messaggi definiti dall'utente  
  
## <a name="command-messages"></a>Messaggi di comando  
  
-   Registrare i messaggi definiti dall'utente  
  
-   Messaggi di aggiornamento dell'interfaccia utente  
  
## <a name="ranges-of-messages"></a>Intervalli di messaggi  
  
-   Comandi:  
  
-   Aggiornare gestore messaggi  
  
-   Notifiche dei controlli  
  
 Sebbene le macro di mappa dei messaggi sono importanti, in genere non è necessario utilizzarli direttamente. Questo avviene perché la finestra proprietà crea automaticamente le voci della mappa messaggi nei file di origine quando si tenta di associare funzioni di gestione dei messaggi con i messaggi. Ogni volta che si desidera modificare o aggiungere una voce della mappa messaggi, è possibile utilizzare la finestra Proprietà.  
  
> [!NOTE]
>  La finestra proprietà non supporta intervalli della mappa messaggi. È necessario scrivere queste voci della mappa messaggi manualmente.  
  
 Tuttavia, le mappe messaggi sono una parte importante della libreria Microsoft Foundation Class. È necessario comprendere lo scopo e documentazione viene fornita per loro.  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

