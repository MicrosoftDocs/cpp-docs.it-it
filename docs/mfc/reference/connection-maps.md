---
title: "Mappe di connessione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.maps"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mappe di connessione"
ms.assetid: 1f25a9bc-6d09-4614-99cf-dc38e8ddfa73
caps.latest.revision: 12
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mappe di connessione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I controlli OLE possono esporre le interfacce per altre applicazioni.  Queste interfacce consentono l'accesso esclusivamente da un contenitore in tale controllo.  Se un controllo OLE desidera accedere alle interfacce esterne di altri oggetti OLE, un punto di connessione deve essere impostato.  Il punto di connessione consente ad un controllo di accesso in uscita per le mappe di invio esterne, come le mappe eventi o le funzioni di notifica.  
  
 La libreria Microsoft Foundation Class offre un modello di programmazione che supporta i punti di connessione.  In questo modello, le "mappe delle connessioni" vengono utilizzate per definire le interfacce o dei punti di connessione per il controllo OLE.  Le mappe di connessioni contengono una macro per ciascun punto di connessione.  Per ulteriori informazioni sulle mappe delle connessioni, vedere la classe [CConnectionPoint](../../mfc/reference/cconnectionpoint-class.md).  
  
 In genere, un controllo supporta solo due punti di connessione: uno per gli eventi e uno per le notifiche delle proprietà.  Questi vengono implementati dalla classe di base `COleControl` e non richiedono un lavoro aggiuntivo del writer di controllo.  Tutti i punti di connessione aggiuntivi che si desiderano implementare nella classe devono essere aggiunti manualmente.  Per supportare le mappe di connessioni e i punti, MFC fornisce le seguenti macro:  
  
### Connessione alle mappe di Dichiarazione e Delimitazione  
  
|||  
|-|-|  
|[BEGIN\_CONNECTION\_PART](../Topic/BEGIN_CONNECTION_PART.md)|Dichiara una classe incorporata che implementa un punto di connessione \(aggiuntivo deve essere utilizzato nella dichiarazione della classe\).|  
|[END\_CONNECTION\_PART](../Topic/END_CONNECTION_PART.md)|Termina la dichiarazione di un punto di connessione \(deve essere utilizzato nella dichiarazione di classe\).|  
|[CONNECTION\_IID](../Topic/CONNECTION_IID.md)|Specifica l'ID dell'interfaccia del punto di connessione del controllo.|  
|[DECLARE\_CONNECTION\_MAP](../Topic/DECLARE_CONNECTION_MAP.md)|Indica che una mappa delle connessioni verrà utilizzata in una classe \(deve essere utilizzata nella dichiarazione della classe\).|  
|[BEGIN\_CONNECTION\_MAP](../Topic/BEGIN_CONNECTION_MAP.md)|Inizia la definizione di una mappa di connessione \(che sarà utilizzata nell'implementazione della classe\).|  
|[END\_CONNECTION\_MAP](../Topic/END_CONNECTION_MAP.md)|Termina la definizione di una mappa di connessione \(che sarà utilizzata nell'implementazione della classe\).|  
|[CONNECTION\_PART](../Topic/CONNECTION_PART.md)|Specifica un punto di connessione nella mappa delle connessioni del controllo.|  
  
 Le seguenti funzioni facilitano un sink per stabilire e disconnettere una connessione utilizzando i punti di connessione:  
  
### Inizializzazione\/Terminazione dei punti di connessione  
  
|||  
|-|-|  
|[AfxConnectionAdvise](../Topic/AfxConnectionAdvise.md)|Stabilisce una connessione tra un'origine e un sink.|  
|[AfxConnectionUnadvise](../Topic/AfxConnectionUnadvise.md)|Interrompe una connessione tra un'origine e un sink.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)