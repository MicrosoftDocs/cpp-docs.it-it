---
title: Documenti, visualizzazioni e Framework | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- document templates [MFC], template objects
- applications [MFC]
- MFC, application framework
- application objects [MFC], relation to other MFC objects
- documents [MFC]
- MFC, documents
- document objects [MFC], in relation to other MFC objects
- view objects [MFC], relation to other MFC objects
- MFC, views
- document/view architecture [MFC], about document/view architecture
- objects [MFC], MFC applications
- MFC object relationships
- thread objects [MFC]
ms.assetid: 409ddd9b-66ad-4625-84f7-bf55a41d697b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 13a78c769a3c32f0293598ec6bd3c07788ea07b5
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929222"
---
# <a name="documents-views-and-the-framework"></a>Documenti, visualizzazioni e framework
Gli elementi centrali del framework MFC sono i concetti di documento e la visualizzazione. Un documento è un oggetto dati con cui l'utente interagisce in una sessione di modifica. Viene creato dal **New** o **Apri** comando il **File** menu e viene in genere salvata in un file. (Documenti MFC standard, derivati dalla classe `CDocument`, sono diversi dai documenti attivi e documenti composti OLE.) Una vista è un oggetto finestra tramite il quale l'utente interagisce con un documento.  
  
 Gli oggetti chiavi in un'applicazione in esecuzione sono:  
  
-   Il documento o documenti.  
  
     La classe del documento (derivato da [CDocument](../mfc/reference/cdocument-class.md)) specifica i dati dell'applicazione.  
  
     Se si vuole la funzionalità OLE nell'applicazione, derivare la classe documento da [COleDocument](../mfc/reference/coledocument-class.md) o una delle relative classi derivate, a seconda del tipo di funzionalità necessarie.  
  
-   La vista o le viste.  
  
     Classe di visualizzazione (derivato da [CView](../mfc/reference/cview-class.md)) dell'utente "finestra sui dati." La classe di visualizzazione controlla la modalità con cui l'utente vede i dati del documento e interagisce con esso. In alcuni casi, è possibile un documento per disporre di più visualizzazioni dei dati.  
  
     Se è necessario lo scorrimento, derivare [CScrollView](../mfc/reference/cscrollview-class.md). Se la vista dispone di un'interfaccia utente che è disposto in una risorsa modello di finestra di dialogo, derivare [CFormView](../mfc/reference/cformview-class.md). Per i dati di testo semplice, utilizza o si deriva da [CEditView](../mfc/reference/ceditview-class.md). Per un'applicazione di accesso ai dati basato su form, ad esempio un programma di immissione di dati, derivare [CRecordView](../mfc/reference/crecordview-class.md) (per ODBC). Sono inoltre disponibili le classi [CTreeView](../mfc/reference/ctreeview-class.md), [CListView](../mfc/reference/clistview-class.md), e [CRichEditView](../mfc/reference/cricheditview-class.md).  
  
-   Finestre cornice  
  
     Le viste vengono visualizzate all'interno di "finestre cornice del documento". In un'applicazione SDI, la finestra cornice di documento è "finestra cornice principale" per l'applicazione. In un'applicazione MDI, finestre di documento sono finestre figlio visualizzate all'interno di una finestra cornice principale. La classe finestra cornice principale derivata specifica gli stili e altre caratteristiche delle finestre cornice che contengono le visualizzazioni. Se è necessario personalizzare le finestre cornice, derivare [CFrameWnd](../mfc/reference/cframewnd-class.md) per personalizzare la finestra cornice di documento per le applicazioni SDI. Derivare [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) per personalizzare la finestra cornice principale per le applicazioni MDI. Una classe derivata da [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) per personalizzare ogni singolo tipo di finestre cornice di documento MDI che supporta l'applicazione.  
  
-   I modelli o il modello di documento  
  
     Un modello di documento Orchestra la creazione di documenti, visualizzazioni e finestre cornice. Un modello di documento specifico, derivata dalla classe [CDocTemplate](../mfc/reference/cdoctemplate-class.md), crea e gestisce tutti i documenti aperti di un tipo. Le applicazioni che supportano più di un tipo di documento dispongono di più modelli di documento. Classe usata [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) per le applicazioni SDI o la classe [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) per le applicazioni MDI.  
  
-   L'oggetto applicazione  
  
     Classe dell'applicazione (derivato da [CWinApp](../mfc/reference/cwinapp-class.md)) controlla tutti gli oggetti sopra e specifica il comportamento dell'applicazione, ad esempio l'inizializzazione e pulizia. Quello dell'applicazione e dell'applicazione solo l'oggetto crea e gestisce i modelli di documento per l'applicazione supporta i tipi di qualsiasi documento.  
  
-   Oggetti thread  
  
     Se l'applicazione crea thread di esecuzione, ad esempio, per eseguire calcoli in background, verranno usate classi derivate da [CWinThread](../mfc/reference/cwinthread-class.md). [CWinApp](../mfc/reference/cwinapp-class.md) sua volta deriva da `CWinThread` e rappresenta il thread principale di esecuzione (o il processo principale) nell'applicazione. È inoltre possibile utilizzare MFC in thread secondari.  
  
 In un'applicazione in esecuzione, questi oggetti in modo cooperativo rispondono alle azioni utente, raggruppati per comandi e altri messaggi. Una singola applicazione gestisce uno o più modelli di documento. Ogni modello di documento crea e gestisce uno o più documenti (a seconda che l'applicazione sia SDI o MDI). L'utente visualizza e modifica dei documenti tramite una vista contenuto all'interno di una finestra cornice. Nella figura seguente mostra le relazioni tra questi oggetti per un'applicazione SDI.  
  
 ![Gli oggetti in un'applicazione SDI in esecuzione](../mfc/media/vc386v1.gif "vc386v1")  
Oggetti di un'applicazione SDI in esecuzione  
  
 Il resto di questa serie di articoli viene illustrato come gli strumenti di framework, la creazione guidata applicazione MFC e l'editor di risorse, creare questi oggetti, come interagiscono tra loro e come è usarli nella fase di programmazione. Documenti, visualizzazioni e finestre cornice sono descritti più dettagliatamente nelle [oggetti delle finestre](../mfc/window-objects.md) e [architettura documento/visualizzazione](../mfc/document-view-architecture.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
