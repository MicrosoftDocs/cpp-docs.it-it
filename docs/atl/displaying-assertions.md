---
title: "Displaying Assertions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "asserzioni, debug"
  - "asserzioni, visualizzazione"
  - "debug [ATL], displaying assertions"
  - "debug di asserzioni"
ms.assetid: fa353fe8-4656-4384-a5d2-8866bc977f06
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Displaying Assertions
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se il client connesso al servizio sembra non risponda, il servizio può asserire e visualizzare una finestra di messaggio che non è possibile vedere.  È possibile verificarlo utilizzando il debugger di Visual C\+\+ per eseguire il debug del codice \(vedere [Utilizzando Gestione attività](../atl/using-task-manager.md) precedentemente in questa sezione\).  
  
 Se si determina che il servizio viene visualizzata una finestra di messaggio che non è visibile, è possibile impostare l'opzione **Allow Service to Interact with Desktop** per utilizzare il servizio di nuovo.  Questa opzione è un parametro di avvio che consente tutte le finestre di messaggio visualizzato dal servizio per visualizzare il desktop.  Per impostare l'opzione, aprire l'applicazione del Pannello di controllo servizi, selezionare il servizio, scegliere **Startup**quindi l'opzione **Allow Service to Interact with Desktop**.  
  
## Vedere anche  
 [Debugging Tips](../atl/debugging-tips.md)