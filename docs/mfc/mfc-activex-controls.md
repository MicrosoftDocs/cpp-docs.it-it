---
title: "Controlli ActiveX MFC | Microsoft Docs"
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
  - "MFC ActiveX Controls (MFC)"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], MFC"
  - "COleControl (classe), controlli ActiveX MFC"
  - "contenitori [C++], controlli ActiveX MFC"
  - "mappe di invio, per controlli ActiveX MFC"
  - "eventi (C++), Controlli ActiveX"
  - "controlli ActiveX MFC [C++]"
  - "controlli ActiveX MFC [C++], stato attivo/interattivo"
  - "controlli ActiveX MFC [C++], contenitori"
  - "controlli ActiveX MFC [C++], serializzazione"
  - "serializzazione [C++], controlli ActiveX MFC"
ms.assetid: c911fb74-3afc-4bf3-a0f5-7922b14d9a1b
caps.latest.revision: 14
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo ActiveX è un componente software riutilizzabile basato sul modello COM \(Component Object Model\) che supporta una vasta gamma di funzionalità OLE e che è possibile personalizzare in modo da rispondere a numerosi requisiti software.  I controlli ActiveX sono progettati per essere utilizzati sia nei normali contenitori di controlli ActiveX sia sulle pagine Web di Internet.  È possibile creare controlli ActiveX o con MFC, descritto di seguito, o con [Active Template Library \(ATL\)](../atl/active-template-library-atl-concepts.md).  
  
 Un controllo ActiveX può disegnarsi all'interno della propria finestra, rispondere ad eventi \(quali i click del mouse\) ed essere gestito mediante un'interfaccia che include le proprietà e i metodi simili a quelle degli oggetti ActiveX.  
  
 Tali controlli possono essere compilati per diversi scopi, ad esempio l'accesso al database, il monitoraggio di dati, o grafiche.  Oltre alla portabilità, i controlli ActiveX supportano le funzionalità non disponibili precedentemente per i controlli ActiveX, come compatibilità con i contenitori OLE esistenti e la possibilità di integrare i relativi menu con i menu del contenitore OLE.  Inoltre, un controllo ActiveX supporta completamente automazione, che consente di esporre le proprietà di lettura e scrittura e di un set di metodi che possono essere chiamati dall'utente che ne detiene il controllo.  
  
 È possibile creare controlli ActiveX senza finestra e controlli che creano una sola finestra quando diventano attivi.  I controlli privi di finestra accelerano la visualizzazione dell'applicazione e consentono di disporre di controlli trasparenti e non rettangolari.  È possibile inoltre caricare proprietà del controllo ActiveX in modo asincrono.  
  
 Un controllo ActiveX viene implementato come server in\-process \(in genere un piccolo oggetto\) che può essere utilizzato in qualsiasi contenitore OLE.  Si noti che la funzionalità di un controllo ActiveX è disponibile solo quando viene utilizzata all'interno di un contenitore OLE progettato per essere a conoscenza dei controlli ActiveX.  Consultare [Trasferire i controlli ActiveX in altre applicazioni](../mfc/containers-for-activex-controls.md) per un elenco di contenitori che supportano i controlli ActiveX.  Questo tipo di contenitore, d'ora in poi chiamato "un contenitore di controlli", può eseguire un controllo ActiveX utilizzando le proprietà e i metodi, e riceve le notifiche dal controllo ActiveX sotto forma di eventi.  Nella seguente figura viene illustrata questa interazione.  
  
 ![Interazione tra un contenitore di controlli ActiveX e un controllo](../mfc/media/vc37221.png "vc37221")  
Interazione tra un contenitore di controlli ActiveX e un controllo ActiveX con finestra  
  
 Per alcune informazioni recenti sull'ottimizzazione dei controlli ActiveX, consultare [Controlli ActiveX MFC: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  
  
 Per creare un controllo ActiveX MFC, consultare [Creare un progetto di controllo ActiveX](../mfc/reference/mfc-activex-control-wizard.md).  
  
 Per ulteriori informazioni, vedere:  
  
-   [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)  
  
-   [Documenti attivi](../mfc/active-documents.md)  
  
-   [Utilizzo dei controlli ActiveX](../data/ado-rdo/using-activex-controls.md)  
  
-   [\<caps:sentence id\="tgt23" sentenceid\="e07c7a1ebdac21120a91f75018670c81" class\="tgtSentence"\>Controlli ActiveX di individuazione\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms693753)  
  
-   [Aggiornare un controllo ActiveX esistente da utilizzare in internet](../mfc/upgrading-an-existing-activex-control.md)  
  
##  <a name="_core_basic_components_of_an_activex_control"></a> Componenti di base di un controllo ActiveX  
 Un controllo ActiveX utilizza vari elementi per interagire a livello di codice in modo efficiente con un contenitore di controlli e con l'utente.  Queste sono classi [COleControl](../mfc/reference/colecontrol-class.md), un insieme di funzioni degli eventi, e una dispatch map.  
  
 Ogni oggetto del controllo ActiveX sviluppato eredita un insieme completo di funzionalità della classe base MFC, `COleControl`.  Queste funzionalità includono l'attivazione sul posto e la logica di automazione.  `COleControl` può fornire l'oggetto di controllo con la stessa funzionalità dell'oggetto della finestra di MFC, con la possibilità di generare eventi.  `COleControl` può inoltre fornire [controlli privi di finestra](../mfc/providing-windowless-activation.md), che si basano sul relativo contenitore per informazioni su alcune funzionalità che una finestra fornisce \(eventi del mouse, inserimento da tastiera, scrolling\), ma offre una visualizzazione molto più veloce.  
  
 Poiché la classe del controllo deriva da `COleControl`, eredita la funzionalità di invio, ovvero la "generazione", di messaggi, eventi denominati, al contenitore di controlli quando sono soddisfatte determinate condizioni.  Questi eventi sono utilizzati per notificare al contenitore di controlli quando qualcosa di importante si verifica nel controllo.  È possibile inviare informazioni aggiuntive su un evento al contenitore di controlli associando i parametri all'evento.  Per ulteriori informazioni sugli eventi di controllo ActiveX, consultare l'articolo [Controlli ActiveX MFC: Eventi](../mfc/mfc-activex-controls-events.md).  
  
 L'elemento finale è una dispatch map, utilizzata per esporre un insieme di funzioni \(metodi invocati\) e attributi \(proprietà\) definiti all'utente che detiene il controllo.  Le proprietà consentono al contenitore di controlli o all'utente di modificare il controllo in diversi modi.  L'utente può modificare l'aspetto del controllo, modificarne alcuni valori, oppure effettuare richieste di controllo, come accedere a un elemento specifico di dati che il controllo gestisce.  Questa interfaccia è determinata dallo sviluppatore del controllo e viene definita utilizzando **Class View**.  Per ulteriori informazioni sui metodi e le proprietà del controllo ActiveX, consultare gli articoli [Controlli ActiveX MFC: Metodi](../mfc/mfc-activex-controls-methods.md) e [Proprietà](../mfc/mfc-activex-controls-properties.md).  
  
##  <a name="_core_interaction_between_controls_with_windows_and_activex_control_containers"></a> Interazione tra i controlli con le finestre e i contenitori di controlli ActiveX  
 Quando un controllo viene utilizzato in un contenitore di controlli, utilizza due meccanismi per comunicare: espone proprietà e metodi e genera gli eventi.  Nella figura seguente viene illustrato come questi due meccanismi sono implementati.  
  
 ![Comunicazione tra il controllo ActiveX e il relativo contenitore](../mfc/media/vc37222.png "vc37222")  
Comunicazione tra un contenitore di controlli ActiveX e un controllo ActiveX  
  
 Nella figura precedente viene illustrato anche come altre interfacce OLE \(oltre all'automazione e agli eventi\) vengono gestite dai controlli.  
  
 Tutte le comunicazioni di un controllo con il contenitore vengono eseguite da `COleControl`.  Per gestire alcune delle richieste del contenitore, **COleControl** chiamerà le funzioni membro implementate nella classe del controllo.  Tutti i metodi e le proprietà sono gestiti in questo modo.  La classe del controllo può anche avviare la comunicazione con il contenitore chiamando le funzioni membro di `COleControl`.  Gli eventi vengono generati in questo modo.  
  
##  <a name="_core_active_and_inactive_states_of_an_activex_control"></a> Stati attivi e inattivi di un controllo ActiveX  
 Un controllo presenta due stati di base: attivo e inattivo.  In genere, questi stati venivano distinti se il controllo aveva una finestra.  Un controllo attivo aveva una finestra; un controllo inattivo invece no.  Con l'introduzione dell'attivazione senza finestra, questa differenza non è più universale, ma si applica ancora a più controlli.  
  
 Quando si attiva un [controllo senza finestra](../mfc/providing-windowless-activation.md), vengono richiamati il mouse capture, lo stato attivo, lo scrolling e altri servizi della finestra dal contenitore.  È inoltre possibile [specificare l'interazione con il mouse ai controlli di inattività](../mfc/providing-mouse-interaction-while-inactive.md), nonché creare controlli che [attendono di creare una finestra una volta attivati](../mfc/turning-off-the-activate-when-visible-option.md).  
  
 Quando un controllo con una finestra diventa attivo, è possibile interagire pienamente con il contenitore di controlli, l'utente e il sistema Windows.  Nella figura seguente vengono illustrati i canali di comunicazione tra il controllo ActiveX, il contenitore di controlli e il sistema operativo.  
  
 ![Elaborazione messaggio nel controllo ActiveX attivo nella finestra](../mfc/media/vc37223.png "vc37223")  
Elaborazione dei messaggi Windows in un controllo ActiveX con finestra \(se attivo\)  
  
##  <a name="_core_serializing_activex_elements"></a> Serializzazione  
 La possibilità di serializzare i dati, talvolta definita come persistenza, consente al controllo di scrivere il valore delle proprietà in un'archiviazione permanente.  I controlli possono quindi essere ricreati leggendo lo stato dell'oggetto dall'archiviazione.  
  
 Si noti che un controllo non è responsabile di ottenere l'accesso al supporto di archiviazione.  Invece, il contenitore del controllo è responsabile di fornire il controllo con un supporto di archiviazione da usare a tempi appropriati.  Per ulteriori informazioni sulla serializzazione, consultare l'articolo [Controlli ActiveX MFC: Serializzazione](../mfc/mfc-activex-controls-serializing.md).  Per informazioni sull'ottimizzazione della serializzazione, consultare [Ottimizzare la persistenza e l'inizializzazione](../mfc/optimizing-persistence-and-initialization.md) in controlli ActiveX: Ottimizzazione.  
  
##  <a name="_core_installing_activex_control_classes_and_tools"></a> Installare le classi e gli strumenti del controllo ActiveX  
 Quando si installa Visual C\+\+, le classi di controlli ActiveX MFC e le DLL in fase di esecuzione di controllo ActiveX di debug vengono installate automaticamente se i controlli ActiveX sono selezionati nell'installazione \(vengono selezionati per impostazione predefinita\).  
  
 Per impostazione predefinita, le classi di controlli ActiveX e gli strumenti vengono installati nelle sottodirectory seguenti in \\Program Files\\Microsoft Visual Studio .NET:  
  
-   **\\Common7\\Tools**  
  
     Contiene i file di Test Container \(TstCon32.exe nonché i file della Guida\).  
  
-   **\\Vc7\\atlmfc\\include**  
  
     Contiene i file di inclusione necessari per compilare i controlli ActiveX con MFC  
  
-   **\\Vc7\\atlmfc\\src\\mfc**  
  
     Contiene il codice sorgente per le classi specifiche del controllo ActiveX in MFC  
  
-   **\\Vc7\\atlmfc\\lib**  
  
     Contiene le librerie necessarie per sviluppare controlli ActiveX con MFC  
  
 Vi sono esempi di controlli ActiveX MFC.  Per ulteriori informazioni su questi esempi, consultare [Esempi di controlli: Controlli ActiveX basati su ATL](../top/visual-cpp-samples.md)  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)