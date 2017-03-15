---
title: "Punti di ingresso delle funzioni DLL esportate | Microsoft Docs"
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
  - "esportazione di DLL, funzioni"
  - "MFC, gestione dei dati sullo stato"
  - "gestione dello stato, DLL esportate"
ms.assetid: 3268666e-d24b-44f2-80e8-7c80f73b93ca
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Punti di ingresso delle funzioni DLL esportate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per le funzioni esportate di una DLL, utilizzare la macro [AFX\_MANAGE\_STATE](../Topic/AFX_MANAGE_STATE.md) per mantenere lo stato complessivo appropriato quando si passa dal modulo DLL alla DLL dell'applicazione chiamante.  
  
 Una volta chiamata, questa macro imposta `pModuleState`, un puntatore ad una struttura `AFX_MODULE_STATE` contenente i dati globali del modulo, come lo stato effettivo del modulo per il resto dell'ambito contenitore della funzione.  Alla partenza viene ripristinato automaticamente l'ambito contenente la macro, lo stato effettivo del modulo precedente.  
  
 La commutazione si ottiene creando un'istanza di una classe **AFX\_MODULE\_STATE** sullo stack.  Nel relativo costruttore, questa classe ottiene un puntatore allo stato del modulo corrente e lo memorizza in una variabile membro, quindi imposta `pModuleState` come nuovo stato del modulo effettivo.  Nel relativo distruttore, questa classe ripristina il puntatore memorizzato nella variabile membro come lo stato del modulo effettivo.  
  
 Se si dispone di una funzione esportata, ad esempio una che attiva una finestra di dialogo nella DLL, è necessario aggiungere il seguente codice all'inizio della funzione:  
  
 [!code-cpp[NVC_MFCConnectionPoints#6](../mfc/codesnippet/CPP/exported-dll-function-entry-points_1.cpp)]  
  
 Ciò scambia lo stato del modulo corrente con lo stato restituito da [AfxGetStaticModuleState](../Topic/AfxGetStaticModuleState.md) fino al termine dell'ambito corrente.  
  
 I problemi con le risorse nelle DLL si verificheranno se non viene utilizzata la macro `AFX_MANAGE_STATE`.  Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello della risorsa.  Questo modello viene effettivamente memorizzato nella DLL.  La causa radice consiste nel fatto che l'informazione dello stato del modulo di MFC non è stata passata dalla macro `AFX_MANAGE_STATE`.  Il gestore delle risorse viene recuperato dallo stato del modulo di MFC.  Non passare lo stato del modulo provoca l'utilizzo del gestore delle risorse sbagliato.  
  
 `AFX_MANAGE_STATE` non deve essere collocato in ogni funzione nella DLL.  Ad esempio, `InitInstance` può essere chiamato dal codice MFC nell'applicazione senza `AFX_MANAGE_STATE` perché MFC scambia automaticamente lo stato del modulo prima di `InitInstance` e quindi lo cambia nuovamente dopo che `InitInstance` completa la sua esecuzione.  Lo stesso vale per tutti i gestori della mappa dei messaggi.  Le normali DLL dispongono effettivamente di una speciale routine della finestra principale che cambia automaticamente lo stato del modulo prima di instradare qualsiasi messaggio.  
  
## Vedere anche  
 [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)