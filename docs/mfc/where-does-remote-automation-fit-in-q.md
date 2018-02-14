---
title: "In quali casi è adatta l'automazione remota? | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: Remote Automation, DCOM
ms.assetid: 4c4c8176-cfc0-44f7-bc87-b690f069ad2f
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9ad6eef0bbaad7860e7f4310ce283efe18c668eb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="where-does-remote-automation-fit-in"></a>In quali casi è adatta l'automazione remota?
DCOM è stato rilasciato nel 1996 ed è disponibile con le piattaforme a 32 e 64 bit. Team di Visual Basic, Microsoft ha sempre considerata Visual Basic utilizzando l'automazione per consentire i relativi componenti comunicare. La mancanza di una versione distribuita limitato notevolmente l'uso di queste funzionalità in ambienti aziendali, in modo il team di sviluppo di Visual Basic 4.0 Enterprise Edition ha deciso di determinare la creazione di un proprio set di componenti remoti per l'automazione parti di OLE e COM. Chiaramente, è stato un obiettivo principale per assicurarsi che il risultato sarebbe compatibile con e quando è diventato disponibile, potrebbe essere sostituito da DCOM. Vengono quindi viene eseguita per implementare l'automazione remota (AR) per le piattaforme Windows a 16 bit e a 32 bit.  
  
 Automazione remota non è associato a un linguaggio specifico, ma fino al rilascio di Visual C++ 4.2 Enterprise Edition, è stato fornito solo con Visual Basic 4.0. Tenere presente che l'automazione remota è interamente classificato da DCOM. Se si ha la possibilità di utilizzare DCOM anziché l'automazione remota nelle applicazioni, è consigliabile farlo. Tuttavia, esistono scenari in cui l'automazione remota è più appropriato:  
  
-   Se si dispone di client a 16 bit.  
  
-   Se l'organizzazione non ha implementato ancora una versione compatibile DCOM di Windows NT o Windows 95.  
  
-   Se si sta aggiornando un gruppo di applicazioni esistente che utilizza l'automazione remota per i componenti C++ di utilizzare al posto di uno o più componenti di Visual Basic.  
  
 Non devono esistere alcuna differenza tra i programmi creati per l'utilizzo dell'automazione remota e quelli creati per utilizzare l'automazione su DCOM e le utilità di configurazione rendono molto semplice passare tra l'automazione remota e DCOM. Di conseguenza, non è difficile aggiornare un'applicazione da automazione remota a DCOM, al termine dell'infrastruttura.  
  
## <a name="see-also"></a>Vedere anche  
 [Cosa fornisce l'automazione remota](what-does-remote-automation-provide-q.md)   
 [Cronologia di DCOM](../mfc/history-of-dcom.md)
