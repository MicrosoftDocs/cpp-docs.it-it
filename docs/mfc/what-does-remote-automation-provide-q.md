---
title: "Cosa fornisce l&#39;automazione remota? | Microsoft Docs"
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
  - "Automazione remota, DCOM"
ms.assetid: 269ad218-e164-40ef-9b87-25fcc8ba21de
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cosa fornisce l&#39;automazione remota?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'automazione remota consente ai programmi di richiamare le implementazioni `IDispatch` su un computer da un altro.  Supporta inoltre altre interfacce richieste da Automazione, in particolare **IEnumVARIANT** per il supporto di raccolta.  Non consente di distribuire qualsiasi altra interfaccia COM \(eccetto **IUnknown**, naturalmente\) e, come automazione normale, contiene il supporto di marshalling solo per i tipi di dati supportati da Automazione.  
  
 Questo set di funzionalità consente a un programma di accedere ai metodi e alle proprietà, incluse quelle che restituiscono raccolte o ulteriori oggetti di automazione, di un oggetto in esecuzione su un nodo di rete accessibile.  Se nel computer client è in esecuzione il software adatto, è possibile che il server chiami nuovamente il client, ancora utilizzando le funzionalità di Automazione \(questo funziona solo per client a 32 bit e 64 bit ed è concettualmente simile agli eventi, sebbene non utilizzi lo stesso meccanismo\).  
  
 Affinché un'applicazione possa essere utilizzata come server Remoto di Automazione, deve essere implementata come un eseguibile, ovvero come "server locale" anziché come "server inproc".  
  
## Vedere anche  
 [In quali casi è adatta l'automazione remota?](../mfc/where-does-remote-automation-fit-in-q.md)   
 [Cronologia di DCOM](../mfc/history-of-dcom.md)