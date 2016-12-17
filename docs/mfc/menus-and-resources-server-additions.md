---
title: "Menu e risorse: aggiunte di server | Microsoft Docs"
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
  - "IDP_OLE_INIT_FAILED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tabella dei tasti di scelta rapida [C++], applicazioni server"
  - "IDP_OLE_INIT_FAILED (macro)"
  - "errore di inizializzazione OLE"
  - "applicazioni server OLE, menu e risorse"
  - "server di modifica visiva OLE"
  - "risorse [MFC], applicazioni server"
  - "applicazioni server, tabella dei tasti di scelta rapida"
  - "applicazioni server, menu e risorse OLE"
  - "server, aggiunte di menu"
  - "modifica di stringhe, applicazioni di modifica visiva"
  - "tabelle di stringhe, applicazioni di modifica visiva"
  - "modifica visiva, risorse e menu di applicazione"
ms.assetid: 56ce9e8d-8f41-4db8-8dee-e8b0702d057c
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Menu e risorse: aggiunte di server
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra le modifiche che devono essere apportate ai menu e altre risorse in un'applicazione \(component\) server di modifica visiva.  Un'applicazione server richiede molte aggiunte alla struttura di menu e altre risorse in quanto può essere avviata in tre modi: supporto solo, incorporato, o sul posto.  Come descritto nell'articolo di [Menu e risorse \(OLE\)](../mfc/menus-and-resources-ole.md), esiste un massimo di quattro set di menu.  Le quattro vengono utilizzati per un'applicazione di completo\- server MDI, mentre solo tre utilizzati per un miniserver.  La creazione guidata applicazione creato il layout del menu necessario per il tipo di server desiderato.  La personalizzazione può essere necessaria.  
  
 Se non si utilizza la procedura guidata, è possibile esaminare HIERSVR.RC, lo script di risorsa per l'applicazione di esempio [HIERSVR](../top/visual-cpp-samples.md)MFC, vedere come queste modifiche sono implementate.  
  
 Gli argomenti trattati in questo articolo sono:  
  
-   [Aggiunta di server di menu](#_core_server_menu_additions)  
  
-   [Aggiunta di una tabella di tasti di scelta rapida](#_core_server_application_accelerator_table_additions)  
  
-   [Aggiunta della tabella di stringhe](../mfc/menus-and-resources-container-additions.md)  
  
-   [Aggiunta di Miniserver](#_core_mini.2d.server_additions)  
  
##  <a name="_core_server_menu_additions"></a> Aggiunta di server di menu  
 Le applicazioni \(componenti server\) devono disporre di risorse menu aggiunta alla modifica visiva OLE support.  I menu utilizzati quando l'applicazione viene eseguita in modalità autonoma non devono essere modificati, ma è necessario aggiungere due nuove risorse di menu prima di compilare l'applicazione: uno per supportare l'attivazione sul posto e uno per supportare il server in cui è completamente apri.  Entrambe le risorse di menu vengono utilizzate dalle applicazioni di miniserver e tutti.  
  
-   Per supportare l'attivazione sul posto, è necessario creare una risorsa menu che è molto simile alla risorsa menu utilizzata una volta eseguita in modalità autonoma.  La differenza in questo menu è che gli elementi della finestra e del file \(e tutte le altre voci di menu che si occupano dell'applicazione e non i dati\) mancanti.  L'applicazione contenitore fornirà queste voci di menu.  Per ulteriori informazioni su e un esempio, di questa tecnica di unione dei menu, vedere l'articolo [Menu e risorse: L'unione dei menu](../mfc/menus-and-resources-menu-merging.md).  
  
-   Per supportare l'attivazione completamente aperta, è necessario creare una risorsa menu quasi identica alla risorsa menu utilizzata se eseguito in modalità autonoma.  L'unica modifica a questa risorsa menu è che alcuni elementi vengono ripetuti per riflettere il fatto che il server utilizza un elemento incorporato in un documento composto.  
  
 Oltre alle modifiche elencato in questo articolo, il file di risorse deve includere AFXOLESV.RC, richiesto per l'implementazione della libreria MFC.  Questo file si trova in MFC \\ include la sottodirectory.  
  
##  <a name="_core_server_application_accelerator_table_additions"></a> Aggiunta di una tabella di tasti di scelta rapida dell'applicazione server  
 Due nuove risorse tabella dei tasti di scelta rapida devono essere aggiunti alle applicazioni server; corrispondono direttamente alle risorse di menu descritte in precedenza.  La prima tabella dei tasti di scelta rapida viene utilizzata quando l'applicazione server viene attivata sul posto.  È costituito da tutte le voci nella tabella dei tasti di scelta rapida di visualizzazione ad eccezione di quelle collegate alle finestre e dei file.  
  
 La seconda tabella è quasi una copia completa della tabella dei tasti di scelta rapida della visualizzazione.  Qualsiasi modifica parallele di differenze apportate nel menu totalmente aperto indicato in [Aggiunta di server di menu](#_core_server_menu_additions).  
  
 Per un esempio di queste modifiche della tabella dei tasti di scelta rapida, confrontare le tabelle dei tasti di scelta rapida di **IDR\_HIERSVRTYPE\_SRVR\_EMB** e di **IDR\_HIERSVRTYPE\_SRVR\_IP** con **IDR\_MAINFRAME** nel file di HIERSVR.RC incluso nell'esempio [HIERSVR](../top/visual-cpp-samples.md) oLE MFC.  I tasti di scelta rapida della finestra e di file non dispongono della tabella sul posto e le copie esatte di esse siano nella tabella incorporata.  
  
##  <a name="_core_string_table_additions_for_server_applications"></a> Aggiunta della tabella di stringhe per le applicazioni server  
 La sola aggiunta di una tabella di stringhe è necessaria in un'applicazione server \- una stringa per indicare che l'inizializzazione OLE non è riuscita.  Ad esempio, è riportata la voce della tabella di stringhe che la creazione guidata applicazione genera:  
  
|ID|String|  
|--------|------------|  
|**IDP\_OLE\_INIT\_FAILED**|Inizializzazione OLE non riuscita.  Assicurarsi che la versione delle librerie OLE sia corretta.|  
  
##  <a name="_core_mini.2d.server_additions"></a> Aggiunta di Miniserver  
 Le stesse aggiunte si applicano ai miniservers come quelle elencate in precedenza per i completo\- server.  Poiché un miniserver non può essere eseguito in modalità autonoma, il relativo menu principale è molto più piccolo.  Il menu principale generato dalla creazione guidata applicazioni dispone di un solo menu File, contenente solo all'uscita degli elementi e about.  I menu predefiniti e sul posto e i tasti di scelta rapida per i miniservers sono uguali a quelli per i completo\- server.  
  
## Vedere anche  
 [Menu e risorse \(OLE\)](../mfc/menus-and-resources-ole.md)   
 [Menu e risorse: unione di menu](../mfc/menus-and-resources-menu-merging.md)