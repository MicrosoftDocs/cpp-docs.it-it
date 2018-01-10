---
title: 'Menu e risorse: aggiunte di Server | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: IDP_OLE_INIT_FAILED
dev_langs: C++
helpviewer_keywords:
- OLE visual editing servers [MFC]
- accelerator tables [MFC], server applications
- visual editing [MFC], application menus and resources
- server applications [MFC], accelerator table
- string tables [MFC], visual editing applications
- servers [MFC], menu additions
- resources [MFC], server applications
- OLE server applications [MFC], menus and resources
- string editing [MFC], visual editing applications
- IDP_OLE_INIT_FAILED macro [MFC]
- server applications [MFC], OLE menus and resources
- OLE initialization failure [MFC]
ms.assetid: 56ce9e8d-8f41-4db8-8dee-e8b0702d057c
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c7aaf4a087fbcfc28686e7ec8d2411d6f7531466
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="menus-and-resources-server-additions"></a>Menu e risorse: aggiunte di server
In questo articolo vengono illustrate le modifiche da apportare ai menu e altre risorse in un'applicazione server (componente) modifica visiva. Un'applicazione server richiede di effettuare numerose aggiunte alla struttura di menu e altre risorse perché può essere avviato in una delle tre modalità: autonoma, o incorporato, sul posto. Come descritto nel [menu e risorse (OLE)](../mfc/menus-and-resources-ole.md) articolo, sono presenti un massimo di quattro gruppi di menu. Tutti e quattro viene utilizzati per un'applicazione server completo MDI, mentre solo tre sono utilizzati per un server ridotto. La creazione guidata applicazione verrà creato il layout di menu necessarie per il tipo di server desiderato. Alcune personalizzazioni potrebbero essere necessarie.  
  
 Se non si utilizza la creazione guidata applicazione, si desidera esaminare HIERSVR. RC, lo script di risorsa per l'applicazione di esempio MFC [HIERSVR](../visual-cpp-samples.md), per visualizzare la modalità di implementazione di queste modifiche.  
  
 Gli argomenti trattati in questo articolo includono:  
  
-   [Aggiunte al Menu di server](#_core_server_menu_additions)  
  
-   [Tasti di scelta rapida aggiunte alla tabella](#_core_server_application_accelerator_table_additions)  
  
-   [Aggiunte alla tabella delle stringhe](../mfc/menus-and-resources-container-additions.md)  
  
-   [Aggiunte di server ridotto](#_core_mini.2d.server_additions)  
  
##  <a name="_core_server_menu_additions"></a>Aggiunte al Menu di server  
 Applicazioni server (componente) devono disporre di risorse di menu aggiunte per supportare la modifica visiva OLE. I menu utilizzati quando l'applicazione viene eseguita in modalità autonoma non devono essere modificati, ma per la compilazione dell'applicazione, è necessario aggiungere due nuove risorse di menu: una per il supporto di attivazione sul posto e uno per il supporto del server sia completamente aperto. Entrambe le risorse di menu vengono utilizzate dalle applicazioni ridotto e full.  
  
-   Per supportare l'attivazione sul posto, è necessario creare una risorsa di menu che è molto simile a quella usata quando eseguiti in modalità autonoma. La differenza in questo menu è che le voci di File e finestra e altre voci di menu che gestiscono l'applicazione e non i dati sono mancanti. L'applicazione contenitore fornirà queste voci di menu. Per ulteriori informazioni e un esempio di, questa tecnica di unione di menu, vedere l'articolo [menu e risorse: unione di Menu](../mfc/menus-and-resources-menu-merging.md).  
  
-   Per supportare l'attivazione completamente aperto, è necessario creare una risorsa di menu quasi identica a quella della risorsa di menu utilizzata quando si esegue in modalità autonoma. La modifica sola a questa risorsa di menu è che alcuni elementi vengono riscritti per riflettere il fatto che il server è impostato su un elemento incorporato in un documento composito.  
  
 Oltre alle modifiche elencate in questo articolo, il file di risorse deve includere AFXOLESV. RC, è necessario per l'implementazione della libreria Microsoft Foundation Class. Questo file è nella sottodirectory MFC\Include.  
  
##  <a name="_core_server_application_accelerator_table_additions"></a>Aggiunte alla tabella tasti di scelta rapida dell'applicazione server  
 Per applicazioni server, è necessario aggiungere due nuove risorse di tabella di tasti di scelta rapida corrispondono direttamente alle risorse di menu nuovo descritte in precedenza. La prima tabella di tasti di scelta rapida viene utilizzata quando l'applicazione server è attivato sul posto. È costituito da tutte le voci nella tabella di tasti di scelta rapida della vista eccetto quelle collegate al File e nella finestra di menu.  
  
 La seconda tabella è quasi una copia esatta della tabella di tasti di scelta rapida della visualizzazione. Eventuali differenze in parallelo le modifiche apportate al menu completamente aperto citato in [aggiunte al Menu di Server](#_core_server_menu_additions).  
  
 Per un esempio di queste modifiche nella tabella di tasti di scelta rapida, confrontare il **IDR_HIERSVRTYPE_SRVR_IP** e **IDR_HIERSVRTYPE_SRVR_EMB** tabelle di tasti di scelta rapida con **IDR_MAINFRAME** Nell'esempio HIERSVR. File RC inclusi nell'esempio OLE MFC [HIERSVR](../visual-cpp-samples.md). I File e finestra di scelta rapida sono presenti nella tabella sul posto e nella tabella incorporata sono copie esatte di essi.  
  
##  <a name="_core_string_table_additions_for_server_applications"></a>Aggiunte alla tabella delle stringhe per le applicazioni Server  
 È necessario in un'applicazione server aggiungere alla tabella solo una stringa, ovvero una stringa per indicare che l'inizializzazione OLE non riuscita. Ad esempio, ecco la voce della tabella di stringhe che genera la creazione guidata applicazione:  
  
|Id|Stringa|  
|--------|------------|  
|**IDP_OLE_INIT_FAILED**|Inizializzazione OLE non riuscita. Assicurarsi che le librerie OLE versione siano corretta.|  
  
##  <a name="_core_mini.2d.server_additions"></a>Aggiunte di server ridotto  
 Si applicano le stesse aggiunte per i server ridotti a quelli elencati in precedenza per i server completi. Poiché in modalità autonoma, è possibile eseguire un server ridotto, il relativo menu principale è molto più piccolo. Nel menu principale creato dalla creazione guidata applicazione ha solo un menu File che contiene solo gli elementi di uscita e circa. Menu incorporati e sul posto e i tasti di scelta rapida per i server ridotti sono identici a quelli per i server completi.  
  
## <a name="see-also"></a>Vedere anche  
 [Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)   
 [Menu e risorse: unione di menu](../mfc/menus-and-resources-menu-merging.md)

