---
title: Implementazione di interfaccia di gestione degli eventi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ATL, event handling
- event handling, ATL
- interfaces, event and event sink
ms.assetid: eb2a5b33-88dc-4ce3-bee0-c5c38ea050d7
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3ea192e863fe9813a762c0c948cc141b068c3f43
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="implementing-the-event-handling-interface"></a>Implementazione di interfaccia di gestione degli eventi
ATL è più semplice con i tre elementi necessari per la gestione degli eventi: implementazione dell'interfaccia eventi, segnalare l'origine evento e l'origine evento di annullamento della notifica. La procedura dettagliata, che è necessario eseguire dipende dal tipo di interfaccia dell'evento e i requisiti delle prestazioni dell'applicazione.  
  
 I metodi per implementare un'interfaccia tramite ATL più comuni sono:  
  
-   Deriva direttamente da un'interfaccia personalizzata.  
  
-   Derivazione da [IDispatchImpl](../atl/reference/idispatchimpl-class.md) per le interfacce duali descritte in una libreria dei tipi.  
  
-   Derivazione da [IDispEventImpl](../atl/reference/idispeventimpl-class.md) per dispinterfaces descritto in una libreria dei tipi.  
  
-   Derivazione da [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) per le interfacce dispatch non descritte in una libreria dei tipi o quando si desidera migliorare l'efficienza evitando di caricare le informazioni sul tipo in fase di esecuzione.  
  

 Se si implementa un'interfaccia personalizzata o doppia, è opportuno consigliare l'origine evento chiamando [AtlAdvise](reference/connection-point-global-functions.md#atladvise) o [CComPtrBase:: Advise](../atl/reference/ccomptrbase-class.md#advise). È necessario tenere traccia del cookie restituito dalla chiamata. Chiamare [AtlUnadvise](reference/connection-point-global-functions.md#atlunadvise) per interrompere la connessione.  

  
 Se si implementa un'interfaccia dispatch tramite `IDispEventImpl` o `IDispEventSimpleImpl`, è opportuno consigliare l'origine evento chiamando [IDispEventSimpleImpl:: DispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventadvise). Chiamare [IDispEventSimpleImpl:: DispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventunadvise) per interrompere la connessione.  
  
 Se si utilizza `IDispEventImpl` come classe base di un controllo composito, le origini evento elencate nella mappa del sink sarà consigliato e unadvised automaticamente utilizzando [CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap).  
  
 Il `IDispEventImpl` e `IDispEventSimpleImpl` classi di gestire i cookie per l'utente.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di eventi](../atl/event-handling-and-atl.md)

