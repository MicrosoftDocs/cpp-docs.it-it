---
title: "Documenti attivi su Internet | Microsoft Docs"
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
  - "documenti attivi [C++], creazione"
  - "documenti attivi [C++], istruzioni di programmazione"
  - "documenti attivi [C++], utilizzo di creazioni guidate applicazione"
  - "creazioni guidate applicazione [C++]"
  - "creazioni guidate applicazione [C++], documenti attivi"
ms.assetid: a46bd8a0-e27a-4116-b1bf-dacdb7ae78d1
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Documenti attivi su Internet
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I documenti attivi forniscono un'estensione agli oggetti incorporati tradizionali.  I documenti attivi possono essere a più pagine e visualizzato nell'intera area client.  Fare la negoziazione tradizionale di menu e possono essere impostati modificato nonché in una finestra aperta nell'applicazione server.  Anziché visualizzare poiché un piccolo rettangolo circondato da un bordo tratteggiate, documenti attivi è frame e sempre attivo sul posto completi.  
  
 I documenti attivi possono essere visualizzati in un contenitore come il raccoglitore Microsoft Office, che consente di creare un documento composto composto dei tipi di documento diversi quali Excel, esprimono e il tipo di documento personalizzato, ognuno dei quali può essere modificato frame completo.  I documenti attivi possono essere visualizzati in un browser come Microsoft Internet Explorer, che è un contenitore di documenti attivi.  
  
 **I vantaggi del documento attivo includono:**  
  
-   I documenti possono essere frame, completo dell'intera finestra client.  
  
-   I documenti possono essere aperti in una finestra separata dell'applicazione.  
  
     Affinché il documento sia aperta, l'applicazione di supporto deve essere presente sul client, o scaricata separatamente prima che l'applicazione possa essere eseguita.  Un visualizzatore può essere scritta per fornire la funzionalità limitate \(Word, Excel e PowerPoint fornisce i visualizzatori per i documenti\).  La versione completa dell'applicazione può fornire il supporto completo di modifica.  
  
-   I documenti sono sempre attivi sul posto.  
  
-   I comandi di menu richiamati dal contenitore può essere indirizzato al documento.  
  
-   I documenti possono essere visualizzati in un browser Web.  In questo modo l'assembly senza integrazione tra i documenti e altre pagine Web.  
  
     Un utente può spostarsi una pagina Web HTML, quindi un foglio di calcolo di Excel e quindi a un documento scritto utilizzando il supporto MFC per i documenti attivi.  L'utente può spostarsi mediante l'interfaccia comune web, ad esempio le opzioni del browser senza problemi tra i menu e delle visualizzazioni di una pagina HTML, Excel e il documento dell'applicazione.  
  
-   Tutte le applicazioni vengono visualizzate nel frame comune.  
  
## Requisiti per i documenti attivi  
 Le interfacce elencate nella tabella seguente sono incluse interfacce già richieste per i server incorporati e diverse nuove interfacce specifiche dei documenti attivi.  MFC fornisce un'implementazione predefinita per la maggior parte di queste interfacce nella classe di [COleServerDoc](../mfc/reference/coleserverdoc-class.md).  
  
|Un documento che...|Implementa le interfacce|  
|-------------------------|------------------------------|  
|File di costituito da utilizzare come relativo meccanismo di archiviazione.|`IPersistStorage`.|  
|Supporta la base che incorpora le funzionalità di documenti attivi, inclusi creano dal file.|`IPersistFile`, `IOleObject` e `IDataObject`.|  
|Supporta l'attivazione sul posto.|`IOleInPlaceObject` e `IOleInPlaceActiveObject` \(utilizzando `IOleInPlaceSite` del contenitore e interfacce di **IOleInPlaceFrame** \).|  
|Supporta le estensioni del documento attivo che includono le nuove interfacce.  Alcune interfacce sono facoltative.|`IOleDocument`, `IOleDocumentView`, `IOleCommandTarget` e `IPrint`.|  
  
 MFC offre supporto per il supporto incorporato server esistente estensione ai documenti attivi.  
  
## Aggiungere il supporto del documento attivo in una nuova applicazione  
 Per creare una nuova applicazione con supporto del documento attivo: Nella Creazione guidata applicazione MFC, nella pagina di **Supporto documenti compositi**, nella sezione del supporto composto dal documento" scegliere **Server completo** o **Contenitore\/Server completo** e "in opzioni aggiuntive selezionare" selezionare la casella di controllo per **Server documenti attivi**.  
  
##  <a name="_core_convert_an_existing_mfc_in.2d.process_server_to_an_activex_document_server"></a> Converte un server in\-process MFC esistente in server di documenti attivi  
 Se l'applicazione è stato creato con una versione di Visual C\+\+ precedenti alla versione 4,2 ed è già presente un server in\-process, è possibile aggiungere il supporto del documento attivo utilizzando le modifiche alle seguenti classi:  
  
|Tipo di classe|Precedentemente derivato da|Modifica da derivare da|  
|--------------------|---------------------------------|-----------------------------|  
|Frame sul posto|`COleIPFrameWnd`|**COleDocIPFrameWnd**|  
|Elemento|`COleServerItem`|`CDocObjectServerItem`|  
  
 Anche come modificare le informazioni vengono inserite nel Registro di sistema e renderete numerosi altri le modifiche.  Se l'applicazione attualmente non dispone del supporto di componenti COM, è possibile aggiungere il supporto del server eseguendo la creazione guidata applicazione e integrando il codice specifico componenti COM con l'applicazione esistente.  
  
## Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)