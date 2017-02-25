---
title: "Documenti, visualizzazioni e framework | Microsoft Docs"
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
  - "oggetti applicazione [C++], relazione con altri oggetti MFC"
  - "applicazioni [MFC]"
  - "oggetti documento, in relazione con altri oggetti MFC"
  - "modelli di documento, oggetti modello"
  - "architettura documento/visualizzazione, informazioni sull'architettura documento/visualizzazione"
  - "documenti [C++]"
  - "MFC [C++], framework applicazione"
  - "MFC [C++], documenti"
  - "MFC [C++], visualizzazioni"
  - "relazioni di oggetti MFC"
  - "oggetti [C++], MFC (applicazioni)"
  - "oggetti thread"
  - "oggetti visualizzazione, relazione con altri oggetti MFC"
ms.assetid: 409ddd9b-66ad-4625-84f7-bf55a41d697b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Documenti, visualizzazioni e framework
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Al centro del framework MFC sono i concetti di documento e della visualizzazione.  Un documento è un oggetto dati con cui l'utente interagisce in una sessione di modifica.  Viene creato il comando `Nuovo` o **Apri** nel menu**File** e in genere viene salvato in un file. \(I documenti standard di MFC, derivati dalla classe **CDocument**, sono diversi dai documenti attivi e composti da documenti OLE.\) Una visualizzazione è un oggetto finestra in cui l'utente interagisce con un documento.  
  
 Gli oggetti principali in un'applicazione in esecuzione sono:  
  
-   Il documento o documenti.  
  
     La classe document \(derivata da [CDocument](../mfc/reference/cdocument-class.md)\) specifica i dati dell'applicazione.  
  
     Se si desidera che la funzionalità OLE nell'applicazione, derivare la classe del documento da [COleDocument](../mfc/reference/coledocument-class.md) o da una delle relative classi derivate, a seconda del tipo di funzionalità necessarie.  
  
-   La visualizzazione o visualizzazioni.  
  
     La classe di visualizzazione \(derivata da [CView](../mfc/reference/cview-class.md)\) rappresenta la finestra dell'utente "su dati." I controlli di visualizzazione della classe come utente vedere i dati del documento e interagisce.  In alcuni casi, potrebbe essere richiesto un documento per disporre di più visualizzazioni dei dati.  
  
     Se è necessario scorrere, derivare da [CScrollView](../mfc/reference/cscrollview-class.md).  Se il punto di vista dispone di un'interfaccia utente che è verificata in una risorsa di dialogo\- modello, derivare da [CFormView](../mfc/reference/cformview-class.md).  Per i dati semplici del testo, utilizzare o derivare da [CEditView](../mfc/reference/ceditview-class.md).  Per un'applicazione di accesso ai dati basata su form, ad esempio un programma di immissione dati, derivare da [CRecordView](../mfc/reference/crecordview-class.md) \(per ODBC\).  Sono inoltre disponibili le classi [CTreeView](../mfc/reference/ctreeview-class.md), [CListView](../mfc/reference/clistview-class.md) e [CRichEditView](../mfc/reference/cricheditview-class.md).  
  
-   Le finestre cornici  
  
     Le visualizzazioni sono interno viene visualizzato "le finestre del documento." In un'applicazione SDI, la finestra cornice di documento è anche "la finestra cornice principale" per l'applicazione.  In un'applicazione MDI, le finestre di documento sono finestre figlio vengono visualizzate in una finestra cornice principale.  La classe derivata della finestra cornice principale specificare stili e altre caratteristiche delle finestre che contengono i punti di vista.  Se è necessario personalizzare le finestre cornici, derivare da [CFrameWnd](../mfc/reference/cframewnd-class.md) per personalizzare la finestra cornice di documento per applicazioni SDI.  Derivazione da [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) per personalizzare la propria finestra cornice principale per le applicazioni MDI.  Anche derivare una classe da [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) per personalizzare ciascun tipo distinto di windows le finestre cornice MDI supportata dall'applicazione.  
  
-   Il modello di documento o modelli  
  
     Un modello di documento orchestra la creazione di documenti, visualizzazioni e delle finestre.  Una determinata classe modello di documento, derivata dalla classe [CDocTemplate](../mfc/reference/cdoctemplate-class.md), crea e gestisce tutti i documenti aperti di un tipo.  Le applicazioni che supportano più di un tipo di documento sono disponibili modelli di documenti multipli.  Utilizzare la classe [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) per le applicazioni SDI, o la classe [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) di utilizzo di applicazioni MDI.  
  
-   L'oggetto application  
  
     La classe dell'applicazione \(derivata da [CWinApp](../mfc/reference/cwinapp-class.md)\) consente di controllare tutti gli oggetti sopra e specificare il comportamento dell'applicazione come inizializzazione e pulizia.  Tale e solo l'oggetto application delle applicazioni creare e gestire i modelli di documento per i tipi di documento che l'applicazione supporta.  
  
-   Oggetti del thread  
  
     Se l'applicazione crea i thread distinti di esecuzione, ad esempio eseguire i calcoli in background \- utilizzate le classi derivate da [CWinThread](../mfc/reference/cwinthread-class.md).  [CWinApp](../mfc/reference/cwinapp-class.md) sua volta deriva da `CWinThread` e rappresenta il thread principale dell'esecuzione \(o del processo principale dell'applicazione.  È inoltre possibile utilizzare MFC in thread secondari.  
  
 In un'applicazione in esecuzione, questi oggetti in modo cooperativo rispondono insieme alle azioni utente, al limite dai controlli e ad altri messaggi.  Un singolo oggetto un'applicazione gestisce uno o più modelli di documento.  Ogni modello di documento crea e gestisce uno o più documenti \(a seconda se l'applicazione è SDI o MDI\).  L'utente visualizza e modificare un documento con una visualizzazione contenuta in una finestra cornice.  Nella figura seguente vengono illustrate le relazioni tra questi oggetti per un'applicazione SDI.  
  
 ![Oggetti di un'applicazione SDI in esecuzione](../mfc/media/vc386v1.png "vc386V1")  
Oggetti di un'applicazione SDI in esecuzione  
  
 La parte restante della famiglia di articoli viene descritto come gli strumenti del framework, la Creazione guidata applicazione MFC e gli editor di risorse, creare questi oggetti, come interagiscono tra loro e come vengono utilizzate nella programmazione.  I documenti, visualizzazioni e le finestre sono illustrati in dettaglio in [Oggetti Window](../mfc/window-objects.md) e in [L'architettura documento\/visualizzazione](../mfc/document-view-architecture.md).  
  
## Vedere anche  
 [Utilizzo delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)