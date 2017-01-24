---
title: "Alternative all&#39;architettura documento/visualizzazione | Microsoft Docs"
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
  - "CDocument (classe), requisiti di spazio"
  - "documenti, applicazioni senza"
  - "visualizzazioni, applicazioni senza"
ms.assetid: 2c22f352-a137-45ce-9971-c142173496fb
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Alternative all&#39;architettura documento/visualizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le applicazioni MFC in genere utilizzano l'architettura documento\/visualizzazione per gestire le informazioni, i formati dei file e la rappresentazione visiva dei dati per gli utenti.  Per la maggior parte delle applicazioni desktop, l'architettura documento\/visualizzazione è un'architettura di applicazione appropriata ed efficiente.  Questa architettura separa i dati dalla visualizzazione e, in molti casi, semplifica l'applicazione e riduce il codice ridondante.  
  
 Tuttavia, l'architettura documento\/visualizzazione non è adatta in alcune situazioni.  Considerare i seguenti esempi:  
  
-   Se si sta effettuando il porting di un'applicazione per Windows scritta in C, è necessario completare il porting prima di aggiungere il supporto documento\/visualizzazione all'applicazione.  
  
-   Se si sta scrivendo una semplice classe di utilità, può darsi che sia possibile evitare l'architettura documento\/visualizzazione.  
  
-   Se già il codice originale combina la gestione dei dati e visualizzazione dei dati, non vale la pena spostare il codice al modello documento\/visualizzazione perché è necessario separare i due componenti.  È preferibile lasciare il codice così com'è.  
  
 Per creare un'applicazione che non utilizza l'architettura documento\/visualizzazione, deselezionare la casella di controllo **Supporto architettura documento\/visualizzazione** al passaggio 1 della Creazione guidata applicazione MFC.  Vedere [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) per i dettagli.  
  
> [!NOTE]
>  Le applicazioni basate su finestre di dialogo generate dalla Creazione guidata applicazione MFC non utilizzano l'architettura documento\/visualizzazione, quindi la casella di controllo **Supporto architettura documento\/visualizzazione** è disabilitata se si seleziona la finestra di dialogo come tipo di applicazione.  
  
 Le procedure guidate di Visual C\+\+, nonché gli editor di origine e di finestre di dialogo, utilizzano l'applicazione generata come per qualsiasi altra applicazione generata mediante la creazione guidata.  L'applicazione può supportare le barre degli strumenti, le barre di scorrimento e una barra di stato, e include una casella **Informazioni**.  L'applicazione non registrerà nessun modello di documento e non conterrà una classe documento.  
  
 Si noti che l'applicazione generata ha una classe di visualizzazione, **CChildView**, derivata da `CWnd`.  MFC crea e posiziona un'istanza della classe di visualizzazione all'interno delle finestre di frame create dall'applicazione.  MFC impone ancora di utilizzare una finestra di visualizzazione, in quanto semplifica il posizionamento e la gestione del contenuto dell'applicazione.  È possibile aggiungere codice per il disegno al membro `OnPaint` di questa classe.  Il codice dovrebbe aggiungere le barre di scorrimento alla visualizzazione anziché al frame.  
  
 Poiché l'architettura documento\/visualizzazione fornita da MFC è responsabile dell'implementazione di molte delle funzionalità di base di un'applicazione, la sua assenza del progetto significa che il programmatore è responsabile dell'implementazione di molte funzionalità importanti dell'applicazione:  
  
-   Il menu per l'applicazione contiene solo i comandi `New` e `Exit` nel menu **File**, come previsto dalla creazione guidata applicazione MFC. \(Il comando `New` viene supportato solo per applicazioni MDI, non per le applicazioni SDI senza supporto documento\/visualizzazione.\) La risorsa menu generata non supporterà un elenco "utilizzati di recente" \(MRU\).  
  
-   È necessario aggiungere le funzioni di gestione e le implementazioni di tutti i controlli che verranno supportati dall'applicazione, inclusi **Apri** e **Salva** nel menu **File**.  MFC in genere fornisce il codice per supportare queste funzionalità, ma tale supporto è associato strettamente all'architettura documento\/visualizzazione.  
  
-   La barra degli strumenti per l'applicazione, se viene richiesta, sarà minima.  
  
 Si consiglia di utilizzare la Creazione guidata applicazione MFC per creare applicazioni senza l'architettura documento\/visualizzazione, poiché la procedura guidata garantisce un'architettura MFC corretta.  Tuttavia, se è necessario evitare l'utilizzo della procedura guidata, di seguito sono descritti diversi approcci per non inserire l'architettura documento\/visualizzazione nel codice:  
  
-   Considerare il documento come un appendice non utilizzata e implementare il codice di gestione dei dati nella classe di visualizzazione, come suggerito in precedenza.  L'overhead del documento è relativamente basso.  Un singolo oggetto [CDocument](../mfc/reference/cdocument-class.md) comporta una piccola quantità di overhead di per sé, più il leggero overhead delle classi base **CDocument**, [CCmdTarget](../mfc/reference/ccmdtarget-class.md) e [CObject](../mfc/reference/cobject-class.md).  Entrambe le classi precedenti sono piccole.  
  
     Dichiarato in **CDocument**:  
  
    -   Due oggetti `CString`.  
  
    -   Tre **BOOL**.  
  
    -   Un puntatore `CDocTemplate`.  
  
    -   Un oggetto `CPtrList` contenente un elenco delle visualizzazioni del documento.  
  
     Inoltre, il documento richiede la quantità di tempo per creare l'oggetto documento, i relativi oggetti visualizzazione, una finestra frame e un oggetto modello di documento.  
  
-   Trattare sia il documento che la visualizzazione come appendici inutilizzate.  Inserire il codice di disegno e di gestione dei dati nella finestra frame invece che nella visualizzazione.  Questo approccio è più vicino al modello di programmazione del linguaggio C.  
  
-   Eseguire l'override delle parti del framework MFC che creano il documento e la visualizzazione per evitarne la creazione.  Il processo di creazione del documento ha inizio con una chiamata a `CWinApp::AddDocTemplate`.  Eliminare tale chiamata dalla funzione membro `InitInstance` della classe dell'applicazione e, invece, creare manualmente una finestra frame in `InitInstance`.  Inserire il codice di gestione dei dati nella classe della finestra frame.  Il processo di creazione documento\/visualizzazione è illustrato in [Creazione documento\/visualizzazione](../mfc/document-view-creation.md).  Questo approccio comporta più lavoro e richiede una conoscenza più approfondita del framework, ma elimina completamente il sovraccarico documento\/visualizzazione.  
  
 L'articolo [MFC: Utilizzare classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md) fornisce esempi più concreti delle alternative a documento\/visualizzazione nel contesto delle applicazioni database.  
  
## Vedere anche  
 [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)