---
title: "Mappe eventi | Microsoft Docs"
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
  - "mappe eventi"
ms.assetid: 1ed53aee-bc53-43cd-834a-6fb935c0d29b
caps.latest.revision: 15
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mappe eventi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ogni volta che un controllo deve notificare al relativo contenitore un'azione \(determinata dallo sviluppatore del controllo\) si sia verificata \(ad esempio viene premuto un tasto, il clic del mouse, oppure una modifica allo stato del controllo\) chiama una funzione degli eventi.  Questa funzione notifica al contenitore di controlli che un'azione importante si è verificata generando l'evento correlato.  
  
 La libreria Microsoft Foundation Class offre un modello ottimizzato di programmazione per generare gli eventi.  In questo modello, le "mappe eventi" vengono utilizzate per designare per un determinato controllo quali funzioni generare e quali eventi.  Le mappe eventi contengono una macro per ogni evento.  Ad esempio, una mappa evento che genera un evento Click potrebbe ricondursi alla seguente:  
  
 [!code-cpp[NVC_MFCAxCtl#16](../../mfc/reference/codesnippet/CPP/event-maps_1.cpp)]  
  
 La macro **EVENT\_STOCK\_CLICK** indica che il controllo genera un evento Click ogni volta che rileva un clic del mouse.  Per un elenco più dettagliato di altri eventi, vedere l'articolo [Controlli ActiveX: Eventi](../../mfc/mfc-activex-controls-events.md).  Le macro sono inoltre disponibili per indicare gli eventi personalizzati.  
  
 Sebbene le macro di mapping degli eventi sono importanti, non vengono inserite in genere direttamente.  Questo perché la finestra Proprietà automaticamente crea nel file sorgente le voci di mapping degli eventi quando la si utilizza per associare le funzioni degli eventi con gli eventi.  Ogni qualvolta che si desidera modificare o aggiungere una voce di mapping degli eventi, è possibile utilizzare la finestra Proprietà.  
  
 Per supportare le mappe eventi, MFC fornisce le seguenti macro:  
  
### Dichiarazione e delimitazione della mappa eventi  
  
|||  
|-|-|  
|[DECLARE\_EVENT\_MAP](../Topic/DECLARE_EVENT_MAP.md)|Dichiarare che una mappa eventi verrà utilizzata in una classe per eseguire il mapping degli eventi alle funzioni degli eventi \(deve essere utilizzato nella dichiarazione di classe\).|  
|[BEGIN\_EVENT\_MAP](../Topic/BEGIN_EVENT_MAP.md)|Iniziare la definizione di una mappa eventi \(che sarà utilizzata nell'implementazione della classe\).|  
|[END\_EVENT\_MAP](../Topic/END_EVENT_MAP.md)|Finire la definizione di una mappa eventi \(che sarà utilizzata nell'implementazione della classe\).|  
  
### Macro per il Mapping degli eventi  
  
|||  
|-|-|  
|[EVENT\_CUSTOM](../Topic/EVENT_CUSTOM.md)|Indica quale funzione degli eventi consente di generare l'evento specificato.|  
|[EVENT\_CUSTOM\_ID](../Topic/EVENT_CUSTOM_ID.md)|Indica quale funzione degli eventi consente di generare l'evento specificato, con un designato ID di invio.|  
  
### Macro per il Mapping di messaggi  
  
|||  
|-|-|  
|[ON\_OLEVERB](../Topic/ON_OLEVERB.md)|Indica un verbo personalizzato gestito dal controllo OLE.|  
|[ON\_STDOLEVERB](../Topic/ON_STDOLEVERB.md)|Eseguire l'override di un mapping dei verbi standard dei controlli OLE.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)