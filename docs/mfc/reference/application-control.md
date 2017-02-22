---
title: "Controllo Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controllo applicazione"
ms.assetid: c1f69f15-e0fe-4515-9f36-d63d31869deb
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Controllo Application
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

OLE richiede il controllo sostanziale sulle applicazioni e i relativi oggetti.  Le DLL di sistema OLE è possibile avviare e rilasciare le applicazioni automaticamente, coordini la loro creazione e modifica di oggetti, e così via.  Le funzioni in questo argomento soddisfare tali requisiti.  Oltre a essere chiamato dalle DLL di sistema OLE, queste funzioni devono talvolta essere chiamate dalle applicazioni anche.  
  
### Controllo dell'applicazione  
  
|||  
|-|-|  
|[AfxOleCanExitApp](../Topic/AfxOleCanExitApp.md)|Indica se l'applicazione può terminare.|  
|[AfxOleGetMessageFilter](../Topic/AfxOleGetMessageFilter.md)|Recupera il filtro messaggi dell'applicazione corrente.|  
|[AfxOleGetUserCtrl](../Topic/AfxOleGetUserCtrl.md)|Recupera il flag di controllo utente corrente.|  
|[AfxOleSetUserCtrl](../Topic/AfxOleSetUserCtrl.md)|Imposta o deselezionare il flag del controllo utente.|  
|[AfxOleLockApp](../Topic/AfxOleLockApp.md)|Incrementa il conteggio complessivo del framework del numero di oggetti attivi in un'applicazione.|  
|[AfxOleUnlockApp](../Topic/AfxOleUnlockApp.md)|Decrementa il conteggio del framework del numero di oggetti attivi in un'applicazione.|  
|[AfxOleRegisterServerClass](../Topic/AfxOleRegisterServerClass.md)|Registra un server nel Registro di sistema OLE.|  
|[AfxOleSetEditMenu](../Topic/AfxOleSetEditMenu.md)|Implementa l'interfaccia utente per il comando dell'oggetto *typename*.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)