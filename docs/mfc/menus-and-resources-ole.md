---
title: "Menu e risorse (OLE) | Microsoft Docs"
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
  - "applicazioni [OLE], menu e risorse"
  - "contenitori [C++], applicazioni contenitore OLE"
  - "attivazione sul posto, menu e risorse OLE"
  - "menu [C++], applicazioni documento OLE"
  - "applicazioni OLE [C++], menu e risorse"
  - "contenitori OLE, menu e risorse"
  - "menu e risorse OLE"
  - "applicazioni server OLE, menu e risorse"
  - "server di modifica visiva OLE"
  - "applicazioni server, menu e risorse OLE"
  - "barre di stato, applicazioni documento OLE"
  - "modifica di stringhe, applicazioni di modifica visiva"
  - "tabelle di stringhe, applicazioni di modifica visiva"
  - "barre degli strumenti [C++], applicazioni documento OLE"
  - "modifica visiva, risorse e menu di applicazione"
ms.assetid: 52bfa086-7d3d-466f-94c7-c7061f3bdb3a
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Menu e risorse (OLE)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo gruppo di articoli viene illustrato l'utilizzo dei menu e le risorse in OLE MFC consente le applicazioni.  
  
 Requisiti aggiuntivi delle posizioni visivi OLE di modifica nel menu e altre risorse fornite dalle applicazioni OLE del documento perché esistono numerosi modi in cui sia le applicazioni server che contenitore \(component\) possono essere avviate e utilizzate.  Ad esempio, un'applicazione a completo\- server può operare in uno di questi tre modi:  
  
-   Supporto singolarmente.  
  
-   Sul posto, modificare un elemento nel contesto di un contenitore.  
  
-   Aprire, modificare un elemento all'esterno del contesto del contenitore, in genere in una finestra separata.  
  
 Ciò comporta tre layout separati di menu, uno per ogni modalità possibile dell'applicazione.  Le tabelle dei tasti di scelta rapida sono necessarie anche per ogni nuova modalità.  Un'applicazione contenitore può supportare l'attivazione sul posto; in caso affermativo, è necessario nuova struttura di menu e delle tabelle dei tasti di scelta rapida collegate.  
  
 L'attivazione sul posto è necessario che il contenitore e applicazioni server sia per negoziare il menu, la barra degli strumenti e lo spazio barra di stato.  Tutte le risorse devono essere progettate a questo scopo.  L'articolo [Menu e risorse: L'unione dei menu](../mfc/menus-and-resources-menu-merging.md) illustrati in dettaglio in questo argomento.  
  
 A causa di questi problemi, le applicazioni OLE di documento create con la creazione guidata applicazione possono disporre di fino a quattro menu e implementa separati della tabella dei tasti di scelta rapida.  Questi vengono utilizzati per i motivi seguenti:  
  
|Nomi delle risorse|Utilizzo|  
|------------------------|--------------|  
|**IDR\_MAINFRAME**|Utilizzato in un'applicazione MDI in assenza di un file aperto, o in un'applicazione SDI indipendentemente dai file aperti.  Si tratta del menu standard utilizzato nelle applicazioni di non OLE.|  
|**IDR\_projectTYPE\<\>**|Utilizzato in un'applicazione MDI se i file vengono aperti.  Utilizzato quando un'applicazione è in esecuzione autonomo.  Si tratta del menu standard utilizzato nelle applicazioni di non OLE.|  
|**\<\>IDR\_projectTYPE\_SRVR\_IP**|Utilizzato dal server o dal contenitore quando un oggetto viene aperto sul posto.|  
|**\<\>IDR\_projectTYPE\_SRVR\_EMB**|Utilizzato da un'applicazione server se un oggetto è aperto senza utilizzare l'attivazione sul posto.|  
  
 Ognuno di questi nomi di risorsa rappresenta un menu e, in genere, una tabella di tasti di scelta rapida.  Un simile schema deve essere utilizzato in applicazioni MFC che non sono creati con la creazione guidata applicazione.  
  
 Gli articoli seguenti vengono illustrati gli argomenti relativi ai contenitori, ai server e all'unione di menu necessaria per implementare l'attivazione sul posto:  
  
-   [Menu e risorse: Aggiunta del contenitore](../mfc/menus-and-resources-container-additions.md)  
  
-   [Menu e risorse: Aggiunta di server](../mfc/menus-and-resources-server-additions.md)  
  
-   [Menu e risorse: L'unione dei menu](../mfc/menus-and-resources-menu-merging.md)  
  
## Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)