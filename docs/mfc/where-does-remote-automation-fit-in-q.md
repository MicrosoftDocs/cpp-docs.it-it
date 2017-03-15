---
title: "In quali casi &#232; adatta l&#39;automazione remota? | Microsoft Docs"
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
ms.assetid: 4c4c8176-cfc0-44f7-bc87-b690f069ad2f
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# In quali casi &#232; adatta l&#39;automazione remota?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

DCOM è stato rilasciato nel 1996 ed è disponibile con il 32 bit e le piattaforme a 64 bit solo.  Il team di Visual Basic a Microsoft ha avuto sempre Visual Basic come utilizzando l'automazione per consentire ai relativi componenti mediante.  La mancanza di versione distribuita è limitato notevolmente l'utilizzo di queste funzionalità negli ambienti aziendali, in modo da Visual Basic 4.0 Enterprise di sviluppo del team ha deciso di esaminare la creazione del proprio set di componenti remoti per le parti di automazione OLE e COM.  Naturalmente, un obiettivo principale è quella di assicurarsi che il risultato sarebbe stata compatibile con ed è stato sostituito da DCOM quando diventano disponibili.  Quindi ha proseguito fino all'automazione remota \(RA\) sia per il 16 bit che le piattaforme Windows a 32 bit.  
  
 L'automazione remota non è uguagliata a un linguaggio specifico, ma fino alla versione di Visual C\+\+ 4.2 Enterprise Edition, è stata fornita solo con Visual Basic 4.0.  Tenere presente che l'automazione remota è inclusa interamente da DCOM.  Se è possibile utilizzare DCOM invece di automazione remota nelle applicazioni, è necessario farlo.  Tuttavia, esistono situazioni in cui l'automazione remota è più appropriato:  
  
-   Ovunque sia client a 16 bit.  
  
-   Se l'organizzazione non ha srotolato una versione DCOM\- abilitata di Windows NT o Windows 95 nuovamente.  
  
-   Se si aggiorna una suite di applicazione esistente che utilizza l'automazione remota per utilizzare i componenti di C\+\+ anziché uno o più componenti di Visual Basic.  
  
 Non deve essere differenza tra i programmi creati per utilizzare l'automazione remota e quelli creati per utilizzare l'automazione su DCOM e le utilità di configurazione rendono molto semplice passare l'operazione tra automazione remota e DCOM.  Pertanto, non è difficile aggiornare un'applicazione di automazione remota a DCOM una volta che l'infrastruttura esistente.  
  
## Vedere anche  
 [Cosa fornisce l'automazione remota?](../mfc/what-does-remote-automation-provide-q.md)   
 [Cronologia di DCOM](../mfc/history-of-dcom.md)