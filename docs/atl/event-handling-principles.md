---
title: Principi (ATL) di gestione degli eventi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- event handling, implementing
- event handling, advising event sources
- interfaces, event and event sink
- dual interfaces, event interfaces
- event handling, dual event interfaces
ms.assetid: d17ca7cb-54f2-4658-ab8b-b721ac56801d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c37544f7b9083bbfa890961ef40e0c9f26aecc2c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="event-handling-principles"></a>Principi di gestione degli eventi
Esistono tre passaggi comuni a tutti la gestione degli eventi. È necessario:  
  
-   Implementa l'interfaccia eventi sull'oggetto.  
  
-   Informare l'origine eventi che l'oggetto richiede la ricezione di eventi.  
  
-   Annullare gli avvisi per l'origine evento quando l'oggetto non serve più la ricezione di eventi.  
  
 La modalità di implementazione dell'interfaccia eventi dipenderà dal relativo tipo. Un'interfaccia di evento può essere vtable, doppio o un'interfaccia dispatch. È attivo nella finestra di progettazione dell'origine evento per definire l'interfaccia. è attivo per implementare tale interfaccia.  
  
> [!NOTE]
>  Anche se non esistono alcun motivi tecnici che un'interfaccia di evento non può essere duale, esistono una serie di motivi una progettazione ottimale per evitare l'utilizzo di queste interfacce. Tuttavia, si tratta di una decisione presa da progettazione/responsabile dell'implementazione dell'evento *origine*. Poiché si sta lavorando dal punto di vista dell'evento `sink`, è necessario per consentire la possibilità che potrebbe non avere qualsiasi scelta, per implementare un'interfaccia duale evento. Per ulteriori informazioni sulle interfacce duali, vedere [interfacce duali e ATL](../atl/dual-interfaces-and-atl.md).  
  
 Notifica all'origine eventi può essere suddivisi in tre passaggi:  
  
-   L'oggetto di origine per eseguire una query [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857).  
  
-   Chiamare [IConnectionPointContainer:: FindConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms692476) passando l'IID dell'interfaccia eventi che desiderato. Se l'esito è positivo, verrà restituito il [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318) interfaccia su un oggetto punto di connessione.  
  
-   Chiamare [IConnectionPoint::](http://msdn.microsoft.com/library/windows/desktop/ms678815) passando il **IUnknown** del sink di evento. Se l'esito è positivo, verrà restituito un `DWORD` cookie che rappresenta la connessione.  
  
 Dopo aver registrato correttamente l'interesse dimostrato nella ricezione degli eventi, i metodi sull'interfaccia di eventi dell'oggetto verranno chiamati in base agli eventi generati dall'oggetto di origine. Quando non è necessario ricevere eventi, è possibile passare il cookie al punto di connessione tramite [IConnectionPoint:: Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms686608). Questa verrà interrotta la connessione tra origine e sink.  
  
 Fare attenzione a evitare i riferimenti di cicli durante la gestione degli eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di eventi](../atl/event-handling-and-atl.md)

