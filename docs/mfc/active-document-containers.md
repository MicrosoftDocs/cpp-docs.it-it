---
title: "Contenitore documenti attivi | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori documenti attivi [C++]"
  - "documenti attivi [C++], contenitori"
  - "contenitori [C++], documento attivo"
  - "MFC COM [C++], contenimento dei documenti attivi"
ms.assetid: ba20183a-8b4c-440f-9031-e5fcc41d391b
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitore documenti attivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un contenitore di documenti attivi, ad esempio il raccoglitore Microsoft Office o Internet Explorer, è possibile utilizzare diversi documenti di tipi di applicazione diversi in singolo frame \(anziché forzarvi per creare e utilizzare i frame di applicazione più per ogni tipo di documento\).  
  
 MFC fornisce un supporto completo per i contenitori di documenti attivi nella classe di `COleDocObjectItem`.  È possibile utilizzare la Creazione guidata applicazione MFC per creare un contenitore di documenti attivi selezionando la casella di controllo **Contenitore documento attivo** nella pagina di **Supporto documenti compositi** la Creazione guidata applicazione MFC.  Per ulteriori informazioni, vedere [Creare un'applicazione contenitore di documenti attivi](../mfc/creating-an-active-document-container-application.md).  
  
 Per ulteriori informazioni sui contenitori di documenti attivi, vedere:  
  
-   [Requisiti del contenitore](#container_requirements)  
  
-   [Oggetti sito del documento](#document_site_objects)  
  
-   [Oggetti visivi del sito](#view_site_objects)  
  
-   [Oggetto frame](#frame_object)  
  
-   [L'unione di menu?](../mfc/help-menu-merging.md)  
  
-   [Stampa a livello di codice](../mfc/programmatic-printing.md)  
  
-   [Destinazioni comando](../mfc/message-handling-and-command-targets.md)  
  
##  <a name="container_requirements"></a> Requisiti del contenitore  
 Il supporto del documento attivo in un contenitore di documenti attivi implica più solo le implementazioni: è necessario inoltre la conoscenza di utilizzare le interfacce di un oggetto contenuto.  Lo stesso vale per le estensioni del documento attivo, in cui il contenitore inoltre necessario sapere come utilizzare tali interfacce nei documenti attivi di estensione stessi.  
  
 Un contenitore di documenti attivi che integra i documenti attivi deve:  
  
-   Sia in grado di archiviazione dell'oggetto di gestione tramite l'interfaccia di **IPersistStorage** , ovvero, deve fornire un'istanza di `IStorage` in ogni documento attivo.  
  
-   Supporta la base che incorpora le funzionalità dei documenti OLE, necessitanti "il sito" di oggetti \(uno per documento o incorporare\) che utilizza **IOleClientSite**  e **IAdviseSink**.  
  
-   Supporta l'attivazione sul posto di oggetti incorporati o documenti attivi.  Gli oggetti sito del contenitore devono implementare `IOleInPlaceSite` e l'oggetto frame del contenitore deve fornire **IOleInPlaceFrame**.  
  
-   Supporta le estensioni di documenti attivi implementando `IOleDocumentSite` per fornire un meccanismo per il contenitore parlino con documento.  Facoltativamente, il contenitore può implementare interfacce `IOleCommandTarget` e `IContinueCallback` del documento attivo per accettare i controlli semplici quali stampa o salvataggio.  
  
 L'oggetto frame, gli oggetti visualizzazione e un oggetto contenitore è possibile implementare **IOleCommandTarget** per supportare la spedizione dei controlli sicuri, come illustrato in [Destinazioni comando](../mfc/message-handling-and-command-targets.md).  La visualizzazione e gli oggetti contenitore è anche possibile implementare `IPrint` e `IContinueCallback`, per supportare la stampa a livello di codice, come illustrato in [Stampa a livello di codice](../mfc/programmatic-printing.md).  
  
 Nella figura seguente vengono illustrate le relazioni tra concettuali un contenitore e i relativi componenti \(a sinistra\) e il documento attivo e i relativi punti di vista \(a destra\).  Il documento attivo gestisce la memoria e dati e visualizzazioni o facoltativamente stampa di visualizzazione di dati.  Le interfacce in grassetto sono quelle necessarie per la partecipazione del documento attivo; tali grassetto e corsivo sono facoltativi.  Tutte le altre interfacce necessarie.  
  
 ![Interfacce del contenitore documenti attivo](../mfc/media/vc37gj1.png "vc37gj1")  
  
 Un documento che supporta un solo punto di vista può implementare sia i componenti del documento di visualizzazione \(ovvero le interfacce corrispondenti\) in una singola classe concreta.  Inoltre, un sito del contenitore che solo i supporti una visualizzazione alla volta possono combinare il sito del documento e il sito di visualizzazione in un'unica classe concreta del sito.  L'oggetto frame del contenitore, tuttavia, deve rimanere distinto e la parte del documento client solo è inclusa qui per assegnare un'immagine completa dell'architettura; non è influenzata dall'architettura di contenimento del documento attivo.  
  
##  <a name="document_site_objects"></a> Oggetti sito del documento  
 Nell'architettura di contenimento del documento attivo, un sito del documento è analogo a un oggetto client del sito nei documenti OLE con l'aggiunta dell'interfaccia di `IOleDocument` :  
  
 `interface IOleDocumentSite : IUnknown`  
  
 `{`  
  
 `HRESULT ActivateMe(IOleDocumentView *pViewToActivate);`  
  
 `}`  
  
 Il sito del documento è concettualmente il contenitore per uno o più oggetti "sito di visualizzazione".  Ogni oggetto visualizzazione del sito è associato a singoli oggetti visualizzazione del documento gestito dal sito del documento.  Se il contenitore supporta un solo punto di vista del sito del documento, pertanto può implementare il sito del documento e il sito di visualizzazione con una sola classe concreta.  
  
##  <a name="view_site_objects"></a> Oggetti visivi del sito  
 L'oggetto di visualizzazione del sito di un contenitore gestisce lo spazio di visualizzazione per una determinata visualizzazione di un documento.  Oltre a supportare l'interfaccia standard di `IOleInPlaceSite`, un sito di visualizzazione implementa anche in genere `IContinueCallback` per il controllo di stampa a livello di codice. Si noti che l'oggetto visualizzato non eseguire una query per `IContinueCallback` mai in modo da essere effettivamente essere implementato su qualsiasi oggetto che il contenitore long.\)  
  
 Un contenitore che supporta più visualizzazioni deve essere in grado di creare oggetti del sito di visualizzazione multipla all'interno del sito del documento.  In questo modo ogni visualizzazione con i servizi separati deactivate e di attivazione direttamente con `IOleInPlaceSite`.  
  
##  <a name="frame_object"></a> Oggetto frame  
 L'oggetto frame del contenitore, è in genere, lo stesso frame utilizzato per l'attivazione sul posto nei documenti OLE, ovvero, tale che gestisce la negoziazione della barra degli strumenti e di menu.  Un oggetto visualizzazione può accedere a questo oggetto frame con **IOleInPlaceSite::GetWindowContext**, che fornisce inoltre l'accesso all'oggetto contenitore che rappresenta il documento contenitore \(in grado di gestire la negoziazione a livello del riquadro della barra degli strumenti e l'enumerazione contenuto dell'oggetto\).  
  
 Un contenitore di documenti attivi può aumentare il frame aggiungendo `IOleCommandTarget`.  Ciò consente ai controlli di ricezione che si verificano nell'interfaccia utente del documento attivo nello stesso modo in cui tale interfaccia può consentire a un contenitore inviare gli stessi controlli \(come **File New**, **Apri**, **Salva come**, **Stampa**; **Modifica copia**, **Incolla**, **Annulla** e altre\) a un documento attivo.  Per ulteriori informazioni, vedere [Destinazioni comando](../mfc/message-handling-and-command-targets.md).  
  
## Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)