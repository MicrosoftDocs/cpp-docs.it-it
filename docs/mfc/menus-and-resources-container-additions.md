---
title: "Menu e risorse: aggiunte di contenitori | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDP_OLE_INIT_FAILED"
  - "IDP_FAILED_TO_CREATE"
  - "VK_ESCAPE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tabella dei tasti di scelta rapida [C++], applicazioni contenitore"
  - "tabella dei tasti di scelta rapida dell'applicazione [C++]"
  - "CONTAIN (esercitazione)"
  - "IDP_FAILED_TO_CREATE (macro)"
  - "IDP_OLE_INIT_FAILED (macro)"
  - "Collegamenti (voce di menu)"
  - "contenitori OLE, menu e risorse"
  - "modifica visiva, risorse e menu di applicazione"
  - "VK_ESCAPE (tasto)"
ms.assetid: 425448be-8ca0-412e-909a-a3a9ce845288
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Menu e risorse: aggiunte di contenitori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra le modifiche che devono essere apportate ai menu e altre risorse in un'applicazione contenitore di modifica visiva.  
  
 Nelle applicazioni contenitori, due tipi di modifiche dovranno essere eseguiti: modifiche alle risorse esistenti alla modifica di supporto per l'aggiunta e visive OLE di nuove risorse utilizzate per l'attivazione sul posto.  Se si utilizza la creazione guidata applicazione MFC per creare un'applicazione contenitore, questi passaggi vengono eseguiti automaticamente, ma possono richiedere la personalizzazione.  
  
 Se non si utilizza la procedura guidata, è possibile esaminare OCLIENT.RC, lo script di risorsa per l'applicazione di esempio OCLIENT, vedere come queste modifiche sono implementate.  Vedere l'esempio [OCLIENT](../top/visual-cpp-samples.md) oLE MFC.  
  
 Gli argomenti trattati in questo articolo sono:  
  
-   [Aggiunta del menu contenitore](#_core_container_menu_additions)  
  
-   [Aggiunta di una tabella di tasti di scelta rapida](#_core_container_application_accelerator_table_additions)  
  
-   [Aggiunta della tabella di stringhe](#_core_string_table_additions_for_container_applications)  
  
##  <a name="_core_container_menu_additions"></a> Aggiunta del menu contenitore  
 È necessario aggiungere i seguenti elementi al menu Modifica:  
  
|Elemento|Scopo|  
|--------------|-----------|  
|**Inserire il nuovo oggetto**|Aprire la finestra di dialogo OLE insert new object per inserire un elemento collegato o incorporato nel documento.|  
|**Collegamento dell'inserimento**|Inserisce un collegamento all'elemento negli Appunti nel documento.|  
|**Verbo OLE**|Chiama il verbo primario dell'elemento selezionato.  Il testo della voce di menu per riflettere il verbo primario dell'elemento selezionato.|  
|**Collegamenti**|Aprire la finestra di dialogo OLE modifica dei collegamenti per modificare gli elementi collegati esistenti.|  
  
 Oltre alle modifiche elencate in questo articolo, il file di origine deve includere AFXOLECL.RC, richiesto per l'implementazione della libreria MFC.  Il nuovo oggetto inserisci è l'unica aggiunta di menu.  Altri elementi possono essere aggiunti, ma quelli elencati di seguito sono la più comune.  
  
 È necessario creare un nuovo menu per l'applicazione contenitore per supportare l'attivazione sul posto gli elementi contenuti.  Questo menu è dello stesso menu File e menu di scelta rapida della finestra viene utilizzato quando i file vengono aperti, ma dispone di due caratteri inseriti tra loro.  Questi caratteri vengono utilizzati per indicare dove element \(component\) server \(application\) deve inserire i relativi menu quando viene attivato sul posto.  Per ulteriori informazioni su questa tecnica di unione dei menu, vedere [Menu e risorse: L'unione dei menu](../mfc/menus-and-resources-menu-merging.md).  
  
##  <a name="_core_container_application_accelerator_table_additions"></a> Aggiunta di una tabella di tasti di scelta rapida di applicazione contenitore  
 Piccole modifiche alle risorse della tabella dei tasti di scelta rapida di un'applicazione contenitore sono necessari se si supportano l'attivazione sul posto.  La prima modifica consente all'utente di premere il tasto escape \(ESC\) per uscire dalla modalità di modifica sul posto.  Aggiungere la seguente voce alla tabella dei tasti di scelta rapida principale:  
  
|ID|Chiave|Type|  
|--------|------------|----------|  
|**ID\_CANCEL\_EDIT\_CNTR**|VK\_ESCAPE|**VIRTKEY**|  
  
 La seconda modifica prevede la creazione di una nuova tabella dei tasti di scelta rapida che corrisponde alla nuova risorsa menu creata per l'attivazione sul posto.  Questa tabella contiene voci per windows e del file oltre alla voce di **VK\_ESCAPE** precedente.  L'esempio seguente è la tabella dei tasti di scelta rapida creata per l'attivazione sul posto nell'esempio [CONTENITORE](../top/visual-cpp-samples.md)MFC:  
  
|ID|Chiave|Type|  
|--------|------------|----------|  
|`ID_FILE_NEW`|CTRL\+N|**VIRTKEY**|  
|`ID_FILE_OPEN`|CTRL\+O|**VIRTKEY**|  
|**ID\_FILE\_SAVE**|CTRL\+S|**VIRTKEY**|  
|**ID\_FILE\_PRINT**|CTRL\+P|**VIRTKEY**|  
|**ID\_NEXT\_PANE**|VK\_F6|**VIRTKEY**|  
|**ID\_PREV\_PANE**|SHIFT\+VK\_F6|**VIRTKEY**|  
|**ID\_CANCEL\_EDIT\_CNTR**|VK\_ESCAPE|**VIRTKEY**|  
  
##  <a name="_core_string_table_additions_for_container_applications"></a> Aggiunta della tabella di stringhe per le applicazioni contenitori  
 La maggior parte delle modifiche alle tabelle di stringhe per le applicazioni contenitori corrispondono alle voci di menu aggiuntive indicate in [Aggiunta del menu contenitore](#_core_container_menu_additions).  Fornire il testo visualizzato nella barra di stato in ogni voce di menu.  Ad esempio, di seguito sono riportate le voci della tabella di stringhe la creazione guidata applicazione genera:  
  
|ID|String|  
|--------|------------|  
|**IDP\_OLE\_INIT\_FAILED**|Inizializzazione OLE non riuscita.  Assicurarsi che la versione delle librerie OLE sia corretta.|  
|**IDP\_FAILED\_TO\_CREATE**|Impossibile creare l'oggetto.  Accertarsi che l'oggetto sia inserito nel Registro di sistema.|  
  
## Vedere anche  
 [Menu e risorse \(OLE\)](../mfc/menus-and-resources-ole.md)   
 [Menu e risorse: aggiunte di server](../mfc/menus-and-resources-server-additions.md)