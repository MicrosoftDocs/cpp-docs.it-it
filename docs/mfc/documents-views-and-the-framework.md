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
ms.openlocfilehash: 17956c0b175e978c6e4e2fefcdad5f744929d457
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621832"
---
# <a name="documents-views-and-the-framework"></a>Documenti, visualizzazioni e framework

Il nucleo del framework MFC è costituito dai concetti di documento e visualizzazione. Un documento è un oggetto dati con cui l'utente interagisce in una sessione di modifica. Viene creata dal comando **nuovo** o **Apri** nel menu **file** e in genere viene salvata in un file. (I documenti MFC standard, derivati dalla classe `CDocument` , sono diversi da documenti attivi e documenti compositi OLE). Una vista è un oggetto finestra attraverso il quale l'utente interagisce con un documento.

Gli oggetti chiave in un'applicazione in esecuzione sono:

- Documento o documenti.

   La classe Document (derivata da [CDocument](reference/cdocument-class.md)) specifica i dati dell'applicazione.

   Se si vuole usare la funzionalità OLE nell'applicazione, derivare la classe del documento da [COleDocument](reference/coledocument-class.md) o da una delle classi derivate, a seconda del tipo di funzionalità necessario.

- Visualizzazione o viste.

   La classe di visualizzazione (derivata da [CView](reference/cview-class.md)) è la "finestra" dei dati dell'utente. La classe di visualizzazione controlla il modo in cui l'utente Visualizza i dati del documento e interagisce con esso. In alcuni casi, può essere necessario che un documento disponga di più visualizzazioni dei dati.

   Se è necessario lo scorrimento, derivare da [CScrollView](reference/cscrollview-class.md). Se la visualizzazione dispone di un'interfaccia utente disposta in una risorsa modello di finestra di dialogo, derivare da [CFormView](reference/cformview-class.md). Per i dati di testo semplici, usare o derivare da [CEditView](reference/ceditview-class.md). Per un'applicazione di accesso ai dati basata su form, ad esempio un programma di immissione dei dati, derivare da [CRecordView](reference/crecordview-class.md) (per ODBC). Sono disponibili anche le classi [CTreeView](reference/ctreeview-class.md), [CListView](reference/clistview-class.md)e [CRichEditView](reference/cricheditview-class.md).

- Finestre cornice

   Le visualizzazioni vengono visualizzate all'interno di "finestre cornice del documento". In un'applicazione SDI la finestra cornice del documento è anche la "finestra cornice principale" per l'applicazione. In un'applicazione MDI, le finestre di documento sono finestre figlio visualizzate all'interno di una finestra cornice principale. La classe principale derivata della finestra cornice specifica gli stili e altre caratteristiche delle finestre cornice che contengono le visualizzazioni. Se è necessario personalizzare le finestre cornice, derivare da [CFrameWnd](reference/cframewnd-class.md) per personalizzare la finestra cornice del documento per le applicazioni SDI. Derivare da [CMDIFrameWnd](reference/cmdiframewnd-class.md) per personalizzare la finestra cornice principale per le applicazioni MDI. Derivare inoltre una classe da [CMDIChildWnd](reference/cmdichildwnd-class.md) per personalizzare ogni tipo distinto di finestre cornice di documento MDI supportate dall'applicazione.

- Modello di documento o modelli

   Un modello di documento orchestra la creazione di documenti, visualizzazioni e finestre cornice. Una particolare classe modello di documento, derivata dalla classe [CDocTemplate](reference/cdoctemplate-class.md), crea e gestisce tutti i documenti aperti di un solo tipo. Le applicazioni che supportano più di un tipo di documento hanno più modelli di documento. Utilizzare la classe [CSingleDocTemplate](reference/csingledoctemplate-class.md) per le applicazioni SDI oppure utilizzare la classe [CMultiDocTemplate](reference/cmultidoctemplate-class.md) per le applicazioni MDI.

- Oggetto applicazione

   La classe dell'applicazione (derivata da [CWinApp](reference/cwinapp-class.md)) controlla tutti gli oggetti precedenti e specifica il comportamento dell'applicazione, ad esempio l'inizializzazione e la pulizia. L'unico oggetto applicazione dell'applicazione crea e gestisce i modelli di documento per tutti i tipi di documento supportati dall'applicazione.

- Oggetti thread

   Se l'applicazione crea thread distinti di esecuzione, ad esempio per eseguire calcoli in background, si useranno le classi derivate da [CWinThread](reference/cwinthread-class.md). La stessa [CWinApp](reference/cwinapp-class.md) è derivata da `CWinThread` e rappresenta il thread principale di esecuzione (o il processo principale) nell'applicazione. È anche possibile usare MFC nei thread secondari.

In un'applicazione in esecuzione, questi oggetti rispondono in modo cooperativo alle azioni dell'utente, associati tra loro comandi e altri messaggi. Un singolo oggetto applicazione gestisce uno o più modelli di documento. Ogni modello di documento crea e gestisce uno o più documenti, a seconda che l'applicazione sia SDI o MDI. L'utente Visualizza e modifica un documento tramite una visualizzazione contenuta all'interno di una finestra cornice. Nella figura seguente sono illustrate le relazioni tra questi oggetti per un'applicazione SDI.

![Oggetti in un'applicazione SDI in esecuzione](../mfc/media/vc386v1.gif "Oggetti di un'applicazione SDI in esecuzione") <br/>
Oggetti di un'applicazione SDI in esecuzione

Nella parte restante di questa famiglia di articoli viene illustrato il modo in cui gli strumenti di Framework, la creazione guidata applicazione MFC e gli editor di risorse creano questi oggetti, il modo in cui interagiscono e il modo in cui vengono utilizzati nella programmazione. Documenti, visualizzazioni e finestre cornice sono descritti in modo più dettagliato negli [oggetti finestra](window-objects.md) e nell' [architettura documento/visualizzazione](document-view-architecture.md).

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](using-the-classes-to-write-applications-for-windows.md)
