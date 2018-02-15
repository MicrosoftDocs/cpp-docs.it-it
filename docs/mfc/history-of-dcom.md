---
title: Cronologia di DCOM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Remote Automation, DCOM
- DCOM, about DCOM
- DCOM
ms.assetid: c21aa0ea-1396-4b52-b77f-88fb0fdd2a5c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6ef567c39c93c3d43fdfc0fa63886144b03cd474
ms.sourcegitcommit: fa7a6dccddce3747389c91277a53e296f905305c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="history-of-dcom"></a>Cronologia di DCOM
Quando l'automazione è stata introdotta nel 1993, è stato in grado di usata solo tra le applicazioni in esecuzione nello stesso computer. Tuttavia, perché condiviso molti del resto delle OLE, ovvero, COM (Component Object Model), era evidente che sarebbe stata "utilizzabile in remoto" quando in COM è stato aggiornato per includere funzionalità di accesso remoto. Inoltre stata pianificata che richieda il passaggio dall'operazione esclusivamente locale all'operazione distribuita senza alcuna modifica al codice esistente.  
  
 In modo "remoting" cosa COM locale determinato che il consumer di un'interfaccia si trovino ed eseguire nello stesso computer del provider di tale interfaccia. Ad esempio, Microsoft Visual Basic è possibile controllare una copia di Microsoft Excel nel computer desktop, ma non è stato in grado di indirizzare l'esecuzione di Excel in un altro computer. Con lo sviluppo di distributed COM, il consumer di un'interfaccia non è più deve trovarsi nello stesso computer a quello in cui viene eseguito il provider di interfaccia.  
  
 Una volta COM è stato adattato per operare su una rete, quindi qualsiasi interfaccia che non è stato associato a un modello di esecuzione locale (alcune interfacce hanno inerente affidamento sulle funzioni di computer locale, ad esempio quelli disegno interfacce il cui metodi sono gli handle di contesti di dispositivo come i parametri) avrebbe la funzionalità di distribuzione. Un consumer di interfaccia renderebbe una richiesta per una determinata interfaccia. tale interfaccia può essere fornita da un'istanza di un oggetto in esecuzione (o da eseguire) su un computer diverso. Il meccanismo di distribuzione all'interno di COM si connetterà il consumer per il provider in modo che le chiamate dal consumer appariranno alla fine del provider, in cui verrebbero eseguite. Qualsiasi restituiscono i valori vengono quindi inviati nuovamente al consumer. A tutti gli effetti, l'azione di distribuzione è trasparente per il consumer sia il provider.  
  
 Diversi COM sono ora disponibili. DCOM (per "distributed COM") è fornito con le versioni di Windows NT a partire dalla versione 4.0, tra cui Windows 2000. Dalla fine del 1996, è stato disponibile per Windows 9x x. In entrambi i casi, DCOM include un set di sostituzione e altre DLL, con alcune utilità, che forniscono funzionalità COM locali e remote. Pertanto è parte integrante delle piattaforme basate su Win32 e verrà resa disponibile in altre piattaforme da altre organizzazioni nel tempo.  
  
## <a name="in-this-section"></a>In questa sezione  
 [In cui di utilizzo dell'automazione remota](where-does-remote-automation-fit-in-q.md)  
  
 [Cosa fornisce l'automazione remota](what-does-remote-automation-provide-q.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)
