---
title: "Esecuzione dell&#39;automazione remota con AUTOCLIK e AUTODRIV | Microsoft Docs"
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
  - "AUTOCLIK (esempio) [MFC]"
ms.assetid: 8900c0de-8dba-4f0a-8d9e-7db77a1f4f46
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Esecuzione dell&#39;automazione remota con AUTOCLIK e AUTODRIV
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

AUTOCLIK è un'applicazione di esempio semplice di server di automazione che è possibile utilizzare come base da cui ottenere ulteriori informazioni sull'automazione remota.  AUTODRIV rappresenta una semplice applicazione client di automazione AUTOCLIK tale unità.  È possibile utilizzarli per illustrare l'automazione remota.  
  
#### Per installare AUTOCLIK.EXE su due computer e controllarla utilizzando l'automazione remota  
  
1.  Installare l'applicazione di esempio di [AUTOCLIK](../top/visual-cpp-samples.md) nel computer di sviluppo.  
  
2.  Compilare AUTOCLIK.EXE.  
  
3.  Eseguire AUTOCLIK.EXE in modo autonomo e quindi chiudere verso il basso.  In questo modo viene registrato come server di automazione.  
  
4.  Copiare AUTOCLIK.EXE a un computer remoto, eseguirlo in quindi chiudere verso il basso.  
  
5.  Eseguire AUTODRIV.EXE nel computer locale e verificare che eseguendone avviare AUTOCLIK.EXE.  Per ottenere ulteriori informazioni su AUTODRIV.EXE, vedere [AUTOCLIK](../top/visual-cpp-samples.md).  
  
6.  Nel computer remoto, avviare AUTMGR32.EXE \(Automation Manager\).  
  
7.  Nel computer remoto, avviare RACMGR32.EXE \(Connection Manager di automazione remota\).  
  
8.  In connessione Manager di automazione remota, AutoClik.Document selezionato dall'elenco di **Classi OLE**.  
  
9. Scegliere criteri di sicurezza del sistema dalla scheda di **Client Access** per concedere l'accesso client a AutoClik.Document.  
  
10. Nel computer locale, RACMGR32.EXE iniziale e AutoClik.Document selezionati da **Classi OLE** l'elenco.  
  
11. Dalla scheda di **Connessione server**, scegliere sia l'indirizzo di rete del computer remoto che il protocollo di rete appropriato.  
  
12. Con AutoClik.Document ancora selezionato nella casella di riepilogo **Classi OLE**, scegliere il comando di **Remoto** dal menu di `Register`.  
  
13. Nel computer locale, sull'esecuzione AUTODRIV.EXE o sul progetto di Visual Basic. equivalente AUTOCLIK.MAK se si desidera che Visual Basic, anziché un MFC, client.  
  
 Nel computer remoto, sarà ora possibile visualizzare AUTOCLIK che si eseguono i controlli avviati dal client locale.  
  
## Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)