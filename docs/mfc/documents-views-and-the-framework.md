---
title: Documenti, visualizzazioni e framework
ms.date: 11/19/2018
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
ms.openlocfilehash: 799035976ea55988a635f7dc9b667e87c48d8f7e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406162"
---
# <a name="documents-views-and-the-framework"></a>Documenti, visualizzazioni e framework

Il fulcro del framework MFC sono i concetti di documento e visualizzazione. Un documento è un oggetto dati con cui interagisce l'utente in una sessione di modifica. Viene creato dal **New** o **Open** comando il **File** menu e in genere viene salvato in un file. (Documenti MFC standard, derivati dalla classe `CDocument`, sono diverse da documenti attivi e i documenti compositi di OLE.) Una vista è un oggetto finestra tramite il quale l'utente interagisce con un documento.

Gli oggetti chiave in un'applicazione in esecuzione sono:

- Il documento o documenti.

   La classe del documento (derivato da [CDocument](../mfc/reference/cdocument-class.md)) specifica i dati dell'applicazione.

   Se si vuole la funzionalità OLE nell'applicazione, derivare la classe documento da [COleDocument](../mfc/reference/coledocument-class.md) o una delle relative classi derivate, a seconda del tipo di funzionalità necessarie.

- La vista o le viste.

   Classe di visualizzazione (derivato da [CView](../mfc/reference/cview-class.md)) è "finestra sui dati" il suo. La classe di visualizzazione consente di controllare come l'utente visualizza i dati del documento e interagisce con essa. In alcuni casi, è possibile un documento per disporre di più visualizzazioni dei dati.

   Se è necessario lo scorrimento, derivano da [CScrollView](../mfc/reference/cscrollview-class.md). Se la vista presenta un'interfaccia utente che è disposto in una risorsa modello di finestra di dialogo, derivare da [CFormView](../mfc/reference/cformview-class.md). Per i dati di testo semplice, utilizzare o derivati dal [CEditView](../mfc/reference/ceditview-class.md). Per un'applicazione di accesso ai dati basato su form, ad esempio un programma di immissione dati, derivare dalla classe [CRecordView](../mfc/reference/crecordview-class.md) (per ODBC). Sono inoltre disponibili le classi [CTreeView](../mfc/reference/ctreeview-class.md), [CListView](../mfc/reference/clistview-class.md), e [CRichEditView](../mfc/reference/cricheditview-class.md).

- Finestre cornice

   Le visualizzazioni vengono mostrate all'interno di "finestre cornice del documento". In un'applicazione SDI, la finestra cornice di documento è anche la "finestra cornice principale" per l'applicazione. In un'applicazione MDI, le finestre dei documenti sono finestre figlio visualizzate all'interno di una finestra cornice principale. La classe della finestra cornice principale derivata specifica gli stili e altre caratteristiche delle finestre cornice che contengono le visualizzazioni. Se è necessario personalizzare le finestre cornice, derivare da [CFrameWnd](../mfc/reference/cframewnd-class.md) per personalizzare la finestra cornice di documento per le applicazioni SDI. Derivativo [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) per personalizzare la finestra cornice principale per le applicazioni MDI. Una classe derivata da [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) per personalizzare ogni singolo tipo di finestre cornice di documento MDI che supporta l'applicazione.

- Il modello di documento o i modelli

   Un modello di documento gestisce inoltre la creazione di documenti, visualizzazioni e finestre cornice. Una classe di modello di documento specifico, derivata dalla classe [CDocTemplate](../mfc/reference/cdoctemplate-class.md), crea e gestisce tutti i documenti aperti di un tipo. Le applicazioni che supportano più di un tipo di documento hanno più modelli di documento. Classe usata [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) per le applicazioni SDI o classe di utilizzo [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) per le applicazioni MDI.

- L'oggetto applicazione

   La classe dell'applicazione (derivato da [CWinApp](../mfc/reference/cwinapp-class.md)) controlla tutti gli oggetti sopra e specifica il comportamento dell'applicazione, ad esempio l'inizializzazione e pulizia. Quello dell'applicazione e dell'applicazione solo l'oggetto crea e gestisce i modelli di documento per l'applicazione supporta i tipi di qualsiasi documento.

- Oggetti thread

   Se l'applicazione crea thread di esecuzione distinti, ad esempio, per eseguire calcoli in background, si userà le classi derivate da [CWinThread](../mfc/reference/cwinthread-class.md). [CWinApp](../mfc/reference/cwinapp-class.md) a sua volta è derivato da `CWinThread` e rappresenta il thread principale di esecuzione (o il processo principale) nell'applicazione. È anche possibile usare MFC nel thread secondari.

In un'applicazione in esecuzione, questi oggetti in modo cooperativo rispondono alle azioni dell'utente, grazie a comandi e gli altri messaggi. Una singola applicazione gestisce uno o più modelli di documento. Ogni modello di documento crea e gestisce uno o più documenti (a seconda che l'applicazione sia SDI o MDI). L'utente visualizza e modifica dei documenti tramite una vista contenuta all'interno di una finestra cornice. La figura seguente mostra le relazioni tra questi oggetti per un'applicazione SDI.

![Gli oggetti in un'applicazione SDI in esecuzione](../mfc/media/vc386v1.gif "gli oggetti in un'applicazione SDI in esecuzione") <br/>
Oggetti di un'applicazione SDI in esecuzione

La parte restante di questa serie di articoli illustra come gli strumenti di framework, la creazione guidata applicazione MFC e l'editor di risorse, creare questi oggetti, come interagiscono tra loro e come si usarli nella fase di programmazione. Documenti, visualizzazioni e finestre cornice sono descritti più dettagliatamente [oggetti Window](../mfc/window-objects.md) e [architettura documento/visualizzazione](../mfc/document-view-architecture.md).

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
