---
title: Sequenza di operazioni per la compilazione di applicazioni MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- applications [MFC], developing
ms.assetid: 6973c714-fe20-48c6-926b-de88356b3a3d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ae1169b438a181e22696502352c19353421469b1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="sequence-of-operations-for-building-mfc-applications"></a>Sequenza delle operazioni per la compilazione di applicazioni MFC
La tabella seguente illustra la sequenza generale che è possibile seguire in genere quando si sviluppa l'applicazione MFC.  
  
### <a name="sequence-for-building-an-application-with-the-framework"></a>Sequenza per la creazione di un'applicazione con il Framework  
  
|Attività|Davvero|Dal framework|  
|----------|------------|------------------------|  
|Creare una struttura applicazione.|Eseguire il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md). Specificare le opzioni desiderate nelle pagine di opzioni. Le opzioni includono rendendo l'applicazione, un componente COM, contenitore o entrambe le cose; aggiunta di automazione; e la gestione database compatibile con l'applicazione.|La creazione guidata applicazione MFC crea i file per un'applicazione di base, inclusi i file di origine per l'applicazione, documenti, visualizzazione e finestre cornice; un file di risorse. un file di progetto. e ad altri utenti, tutti adattati in base alle specifiche.|  
|Vedere cosa il framework e la creazione guidata applicazione MFC offre senza aggiungere una riga di codice.|Compilare l'applicazione di base ed eseguirlo in Visual C++.|L'applicazione in esecuzione scheletro deriva standard molti **File**, **modifica**, **vista**, e **Guida** i comandi di menu dal framework. È anche possibile ottenere un menu di Windows completamente funzionale per le applicazioni MDI e il framework gestisce la creazione, disposizione e la distruzione di finestre figlio MDI.|  
|Costruire l'interfaccia utente dell'applicazione.|Usare Visual C++ [editor risorse](../windows/resource-editors.md) di modificare visivamente l'interfaccia utente dell'applicazione:<br /><br /> -Creazione rapida.<br />-Definire tasti di scelta rapida.<br />-Creare finestre di dialogo.<br />: Consente di creare e modificare le bitmap, icone e cursori.<br />: Consente di modificare la barra degli strumenti creato dalla creazione guidata applicazione MFC.<br />: Consente di creare e modificare altre risorse.<br /><br /> È anche possibile testare le finestre di dialogo nell'editor finestre.|Il file di risorse predefinito creato da Creazione guidata applicazione MFC fornisce molte delle risorse che necessarie. Visual C++ consente di modificare le risorse esistenti e aggiungere nuove risorse visivamente e facilmente.|  
|Eseguire il mapping alle funzioni di gestione di menu.|Utilizzare il **eventi** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window) a cui connettersi funzioni nel codice del gestore di menu e tasti di scelta rapida.|La finestra proprietà inserisce le voci della mappa messaggi e i modelli di funzione vuoti nei file di origine, si specifica e consente di gestire molte attività di codifica manuale.|  
|Scrivere il codice del gestore.|Utilizzare la classe di visualizzazione per passare direttamente al codice nell'editor del codice sorgente. Compilare il codice delle funzioni di gestione. Per ulteriori informazioni sull'utilizzo di visualizzazione classi e sulle procedure guidate che aggiungere codice a un progetto, vedere [aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md).|Visualizzazione classi verrà aperto l'editor, scorre il modello di funzione vuoto e posiziona il cursore automaticamente.|  
|Eseguire il mapping ai comandi di pulsanti della barra degli strumenti.|Eseguire il mapping di ogni pulsante sulla barra degli strumenti a un comando di menu o i tasti di scelta rapida assegnando al pulsante l'ID di comando appropriato.|Il framework controlla il disegno, abilitazione, disabilitazione, controllare e altri aspetti visivi dei pulsanti della barra degli strumenti.|  
|Funzioni del gestore di test.|Ricompilare il programma e utilizzare gli strumenti di debug predefiniti per verificare il corretto funzionano dei gestori.|È possibile eseguire o tramite il codice per vedere come vengono chiamati i gestori di traccia. Se è stato compilato il codice, i gestori di eseguono i comandi. Il framework disabilita automaticamente le voci di menu e pulsanti della barra degli strumenti che non sono gestiti.|  
|Aggiungere [finestre di dialogo](../mfc/dialog-boxes.md).|Con l'editor finestre di progettazione risorse modello di finestra di dialogo. Creare quindi una classe di finestra di dialogo e il codice che gestisce la finestra di dialogo.|Il framework gestisce la finestra di dialogo e semplifica il recupero delle informazioni immesse dall'utente.|  
|Inizializzare, convalidare e recuperare i dati della finestra di dialogo.|È inoltre possibile definire come i controlli della finestra di dialogo devono essere inizializzata e convalidata. Utilizzare Visual Studio per aggiungere variabili membro alla classe di finestra di dialogo e associarli ai controlli finestra di dialogo. Specificare le regole di convalida da applicare a ogni controllo quando l'utente immette i dati. Fornire la propria convalide personalizzate se si desidera.|Il framework gestisce la convalida e l'inizializzazione di finestra di dialogo. Se l'utente immette informazioni non valide, il framework visualizza una finestra di messaggio e consente all'utente di immettere nuovamente i dati.|  
|Creazione di classi aggiuntive.|Utilizzare Visualizzazione classi per creare documenti aggiuntive, visualizzazione e le classi di finestre cornice oltre a quelli creati automaticamente tramite la creazione guidata applicazione MFC. È possibile creare classi di database aggiuntive recordset, classi di finestra di dialogo e così via. (Con Visualizzazione classi, è possibile creare classi non derivate da classi MFC.)|Visualizzazione classi aggiunge queste classi per i file di origine e consente di definire le connessioni a tutti i comandi di gestione.|  
|Aggiungere componenti pronti da usare nell'applicazione.|Utilizzare il `New Item dialog box` per aggiungere un'ampia gamma di elementi.|Questi elementi sono facili da integrare nell'applicazione e di risparmiare una notevole lavoro.|  
|Implementare la classe del documento.|Implementare la classe di documento specifico dell'applicazione o le classi. Aggiungere variabili membro per contenere le strutture di dati. Aggiungere le funzioni membro per fornire un'interfaccia per i dati.|Il framework già in grado di interagire con i file di dati di documento. È possibile aprire e chiudere i file del documento, leggere e scrivere i dati del documento e gestire altre interfacce utente. È possibile concentrarsi sul modo in cui vengono modificati i dati del documento.|  
|Implementare l'apertura, salvataggio e salvare come comandi.|Scrivere codice per il documento `Serialize` funzione membro.|Il framework consente di visualizzare finestre di dialogo per la **aprire**, **salvare**, e **Salva con nome** i comandi nel **File** menu. Scrive e legge nuovamente un documento usando il formato di dati specificato nella `Serialize` funzione membro.|  
|Implementare la classe di visualizzazione.|Implementare uno o più classi di visualizzazione corrispondenti ai documenti. Implementare funzioni membro della vista che è stato eseguito il mapping all'interfaccia utente con Visualizzazione classi. Un'ampia gamma di [CView](../mfc/reference/cview-class.md)-classi derivate sono disponibili, tra cui [CListView](../mfc/reference/clistview-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md).|Il framework gestisce la maggior parte della relazione tra un documento e la relativa visualizzazione. Funzioni membro della vista di accedere ai documenti della vista per eseguire il rendering immagine sullo schermo o pagina stampata e aggiornare le strutture di dati del documento in risposta all'utente i comandi di modifica.|  
|Miglioramento della stampa predefinita.|Se è necessario supportare la stampa con più pagine, eseguire l'override di funzioni membro di visualizzazione.|Il framework supporta il **stampa**, **Imposta pagina**, e **anteprima di stampa** comandi il **File** menu. È necessario indicare la modalità di suddivisione del documento in più pagine.|  
|Aggiungere lo scorrimento.|Se è necessario supportare lo scorrimento, derivare la classe o Visualizzazione classi dal [CScrollView](../mfc/reference/cscrollview-class.md).|La vista aggiunge automaticamente le barre di scorrimento quando la finestra di visualizzazione diventa troppo piccola.|  
|Creare visualizzazioni di form.|Se si desidera basare le visualizzazioni su risorse modello di finestra, derivare la classe o Visualizzazione classi dal [CFormView](../mfc/reference/cformview-class.md).|La vista utilizza la risorsa modello di finestra di dialogo per visualizzare i controlli. L'utente può spostarsi dal controllo del controllo nella visualizzazione.|  
|Creazione di form di database.|Se si desidera che un'applicazione di accesso ai dati basato su form, derivare la classe di visualizzazione da [CRecordView](../mfc/reference/crecordview-class.md) (per la programmazione ODBC).|La vista funziona come una visualizzazione form, ma i relativi controlli connessi ai campi di un [CRecordset](../mfc/reference/crecordset-class.md) oggetto che rappresenta una tabella di database. MFC Sposta i dati tra i controlli e recordset per l'utente.|  
|Creare editor di testo semplice.|Se si desidera la visualizzazione sia un semplice editor di testo, derivare la classe o Visualizzazione classi dal [CEditView](../mfc/reference/ceditview-class.md) o [CRichEditView](../mfc/reference/cricheditview-class.md).|La vista fornisce la modifica delle funzioni, supporto per gli Appunti e file di input/output. `CRichEditView`fornisce il testo con stile.|  
|Aggiungere finestre con separatore.|Se si desidera supportare la divisione di finestra, aggiungere un [CSplitterWnd](../mfc/reference/csplitterwnd-class.md) la finestra cornice SDI o alla finestra figlio MDI e associare la finestra [OnCreateClient](../mfc/reference/cframewnd-class.md#oncreateclient) funzione membro.|Il framework fornisce i controlli casella di divisione accanto le barre di scorrimento e gestisce la suddivisione della visualizzazione in più riquadri. Se l'utente si divide una finestra, il framework crea e collega gli oggetti di visualizzazione aggiuntive per il documento.|  
|Compilare, testare e il debug dell'applicazione.|Utilizzare le funzionalità di Visual C++ per compilare, testare e il debug dell'applicazione.|Visual C++ consente di impostare altre opzioni, collegamento e la compilazione. È anche possibile esplorare la struttura di classe e codice sorgente.|  
  
## <a name="see-also"></a>Vedere anche  
 [Sequenza di operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)   
 [Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)   
 [Sequenza di operazioni per la creazione di applicazioni di Database](../mfc/sequence-of-operations-for-creating-database-applications.md)   
 [Compilazione nel framework](../mfc/building-on-the-framework.md)

