---
title: "Cronologia di DCOM | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DCOM"
  - "DCOM, informazioni su DCOM"
  - "Automazione remota, DCOM"
ms.assetid: c21aa0ea-1396-4b52-b77f-88fb0fdd2a5c
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cronologia di DCOM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando l'automazione innanzitutto è stata introdotta all'inizio del 1993, è in grado di utilizzarli solo tra le applicazioni in esecuzione sullo stesso computer.  Tuttavia, poiché condiviso gli stessi supporta il resto di OLE, ovvero, o COM \(Component Object Model\), era previsto sempre che sarebbe "utilizzabile in modalità remota" quando COM stesso è stato aggiornato per includere le funzionalità di accesso remoto.  Inoltre è stato pianificato che la transizione dall'operazione puramente locale all'operazione distribuita richiederebbe modifiche minime o nulle al codice esistente.  
  
 Pertanto le caratteristiche media di "servizi remoti"?  Il COM locale ha stabilito che il consumer di un'interfaccia risiede ed esegue lo stesso computer del provider dell'interfaccia.  Ad esempio, in Microsoft Visual Basic potrebbe archiviare una copia di Microsoft Excel nel computer desktop, ma non è in grado di controllare l'esecuzione di Excel su un altro computer.  Con lo sviluppo DCOM, il consumer di un'interfaccia non deve trovarsi nello stesso computer di quella in cui il provider dell'interfaccia esegue.  
  
 Una volta che il adattasse COM si desidera operare su una rete, qualsiasi interfaccia che non è stata associata a un modello locale di esecuzione \(alcune interfacce è l'impiego intrinseca alle funzionalità del computer locale, come tali interfacce di disegno dei metodi di handle ai contesti di periferica come parametri\) avrebbero la funzionalità di distribuzione.  Un consumer dell'interfaccia farebbe una richiesta per una determinata interfaccia; tale interfaccia può essere fornita da un'istanza di un oggetto in esecuzione o essere eseguito su un computer diverso.  Il meccanismo di distribuzione in COM connetterebbe il consumer al provider in modo che le chiamate al metodo effettuate dal consumer sono stati visualizzati alla fine del provider, in cui sono state eseguite.  Tutti i valori restituiti quindi verranno inviati al consumer.  Ai fini dell'utilità, l'atto di distribuzione è trasparente sia al consumer al provider.  
  
 Tale varie COM esiste.  DCOM \(DCOM per ""\) fornito con le versioni di Windows NT a partire dalle versioni 4,0 e importare Windows 2000.  Dalla fine del 1996, è stato inoltre disponibile per windows 9x.  In entrambi i casi, DCOM include un insieme di sostituzione e le DLL aggiuntivi, con alcune utilità, che forniscono le funzionalità locali e remote COM.  Ora è pertanto una parte inerente piattaforme basata su win32 e verrà reso disponibile su altre piattaforme dalle organizzazioni nel tempo.  
  
## Argomenti della sezione  
 [Dove l'automazione remota rientrano in?](../mfc/where-does-remote-automation-fit-in-q.md)  
  
 [Cosa l'automazione remota fornisce?](../mfc/what-does-remote-automation-provide-q.md)  
  
## Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)