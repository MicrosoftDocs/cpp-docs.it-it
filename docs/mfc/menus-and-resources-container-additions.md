---
title: 'Menu e risorse: aggiunte di contenitori | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- IDP_OLE_INIT_FAILED
- IDP_FAILED_TO_CREATE
- VK_ESCAPE
dev_langs:
- C++
helpviewer_keywords:
- application accelerator table [MFC]
- VK_ESCAPE key [MFC]
- IDP_FAILED_TO_CREATE macro [MFC]
- visual editing, application menus and resources
- OLE containers [MFC], menus and resources
- accelerator tables [MFC], container applications
- IDP_OLE_INIT_FAILED macro [MFC]
- CONTAIN tutorial [MFC]
- Links menu item [MFC]
ms.assetid: 425448be-8ca0-412e-909a-a3a9ce845288
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 437b80a0766a07b181a60743e79bdbaf32347de4
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930546"
---
# <a name="menus-and-resources-container-additions"></a>Menu e risorse: aggiunte di contenitori
In questo articolo vengono illustrate le modifiche che devono essere apportate per i comandi di menu e altre risorse in un'applicazione contenitore di modifica visiva.  
  
 Nelle applicazioni contenitore, è necessario apportare due tipi di modifiche: le modifiche alle risorse esistenti per supportare la modifica visiva OLE e aggiunta di nuove risorse utilizzato per l'attivazione sul posto. Se si utilizza la creazione guidata applicazione per creare l'applicazione contenitore, questi passaggi verranno eseguiti automaticamente, ma potrebbe richiedono alcune personalizzazioni.  
  
 Se non si utilizza la creazione guidata applicazione, è possibile esaminare OCLIENT. RC, lo script di risorsa per l'applicazione di esempio OCLIENT per vedere come vengono implementate le modifiche. Vedere l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).  
  
 Gli argomenti trattati in questo articolo includono:  
  
-   [Aggiunte di Menu di contenitori](#_core_container_menu_additions)  
  
-   [Tasti di scelta rapida aggiunte alla tabella](#_core_container_application_accelerator_table_additions)  
  
-   [Aggiunte alla tabella delle stringhe](#_core_string_table_additions_for_container_applications)  
  
##  <a name="_core_container_menu_additions"></a> Aggiunte di Menu di contenitori  
 Il menu Modifica, è necessario aggiungere gli elementi seguenti:  
  
|Elemento|Scopo|  
|----------|-------------|  
|**Inserisci nuovo oggetto**|Apre la finestra di dialogo di inserimento oggetto OLE per inserire un elemento collegato o incorporato all'interno del documento.|  
|**Incolla collegamento**|Incolla un collegamento all'elemento negli Appunti nel documento.|  
|**Verbo OLE**|Chiama verbo primario dell'elemento selezionato. Il testo di questo elemento nel menu cambia per riflettere il verbo primario dell'elemento selezionato.|  
|**Links**|Apre la finestra di dialogo Modifica collegamenti OLE per modificare gli elementi collegati esistenti.|  
  
 Oltre alle modifiche elencate in questo articolo, il file di origine deve includere anche AFXOLECL. RC, è necessario per l'implementazione della libreria Microsoft Foundation Class. Inserisci nuovo oggetto consiste nell'aggiunta solo menu desiderato. È possibile aggiungere altri elementi, ma quelli elencati di seguito sono i più comuni.  
  
 Se si desidera supportare l'attivazione sul posto di elementi contenuti, è necessario creare un nuovo menu per l'applicazione contenitore. Questo menu è costituito da menu di scelta rapida finestra utilizzata quando sono file aperti, ma dispone di due separatori tra le dal menu File stesso. I separatori vengono utilizzati per indicare dove l'elemento server (componente) (applicazioni) devono essere inseriti i menu quando attivato sul posto. Per ulteriori informazioni su questa tecnica di unione di menu, vedere [menu e risorse: unione di Menu](../mfc/menus-and-resources-menu-merging.md).  
  
##  <a name="_core_container_application_accelerator_table_additions"></a> Aggiunte alla tabella tasti di scelta rapida dell'applicazione contenitore  
 Piccole modifiche alle risorse nella tabella di tasti di scelta rapida di un'applicazione contenitore sono necessari se si intende supportare l'attivazione sul posto. La prima modifica consente all'utente di premere il tasto ESC per annullare la modalità di modifica sul posto. Aggiungere la seguente voce alla tabella dei tasti di scelta rapida principali:  
  
|Id|Chiave|Tipo|  
|--------|---------|----------|  
|ID_CANCEL_EDIT_CNTR|VK_ESCAPE|**VIRTKEY**|  
  
 La seconda modifica consiste nel creare una nuova tabella di tasti di scelta rapida che corrisponde alla nuova risorsa di menu creata per l'attivazione sul posto. Questa tabella contiene le voci per i menu File e finestra oltre alla voce VK_ESCAPE precedente. L'esempio seguente è la tabella di tasti di scelta rapida creata per l'attivazione sul posto nell'esempio MFC [contenitore](../visual-cpp-samples.md):  
  
|Id|Chiave|Tipo|  
|--------|---------|----------|  
|ID_FILE_NEW|CTRL+N|**VIRTKEY**|  
|ID_FILE_OPEN|CTRL+O|**VIRTKEY**|  
|ID_FILE_SAVE|CTRL+S|**VIRTKEY**|  
|ID_FILE_PRINT|CTRL+P|**VIRTKEY**|  
|ID_NEXT_PANE|VK_F6|**VIRTKEY**|  
|ID_PREV_PANE|MAIUSC + VK_F6|**VIRTKEY**|  
|ID_CANCEL_EDIT_CNTR|VK_ESCAPE|**VIRTKEY**|  
  
##  <a name="_core_string_table_additions_for_container_applications"></a> Aggiunte alla tabella delle stringhe per le applicazioni contenitore  
 La maggior parte delle modifiche a tabelle di stringhe per le applicazioni contenitore corrispondono alle voci di menu aggiuntivi indicate in [aggiunte al Menu contenitore](#_core_container_menu_additions). Forniscono il testo visualizzato nella barra di stato quando viene visualizzata ogni voce di menu. Ad esempio, ecco le voci della tabella stringa che genera la creazione guidata applicazione:  
  
|Id|Stringa|  
|--------|------------|  
|IDP_OLE_INIT_FAILED|Inizializzazione OLE non riuscita. Assicurarsi che le librerie OLE sono la versione corretta.|  
|IDP_FAILED_TO_CREATE|Impossibile creare l'oggetto. Verificare che l'oggetto sia stato immesso nel Registro di sistema.|  
  
## <a name="see-also"></a>Vedere anche  
 [Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)   
 [Menu e risorse: aggiunte di server](../mfc/menus-and-resources-server-additions.md)

