---
title: "TN025: creazione di documenti, visualizzazioni e frame | Microsoft Docs"
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
  - "vc.creation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "documenti, creazione di visualizzazioni e frame"
  - "TN025"
ms.assetid: 09254d72-6e1d-43db-80e9-693887dbeda2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN025: creazione di documenti, visualizzazioni e frame
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descrive i problemi di proprietà e di creazione per WinApps, DocTemplates, Documenti, Frame e Visualizzazioni.  
  
## WinApp  
 Esiste un solo oggetto `CWinApp` nel sistema.  
  
 Viene costruito e inizializzato in modo statico dall'implementazione interna del framework `WinMain`.  È necessario derivare da `CWinApp` per eseguire ogni operazione utile \(eccezione: le DLL di estensione non devono avere un'istanza di `CWinApp` — l'inizializzazione viene eseguita in `DllMain`\).  
  
 L'oggetto `CWinApp` possiede un elenco dei modelli di documento \(un `CPtrList`\).  Esistono uno o più modelli di documento per applicazione.  DocTemplates vengono caricati generalmente dai file di risorse \(ovvero un array di string\) in `CWinApp::InitInstance`.  
  
```  
pTemplate = new CDocTemplate(IDR_MYDOCUMENT, ...);  
AddDocTemplate(pTemplate);  
```  
  
 L'oggetto `CWinApp` possiede tutte le finestre frame nell'applicazione.  La finestra frame principale per l'applicazione deve essere archiviata in **CWinApp::m\_pMainWnd**; in genere si imposta `m_pMainWnd` nell'implementazione di `InitInstance` se non si lascia che l'AppWizard lo faccia automaticamente.  Per l'interfaccia a documento singolo \(SDI\) questo è un `CFrameWnd` che funge da finestra frame principale dell'applicazione nonché la sola finestra frame di documento.  Per l'interfaccia a più documenti \(MDI\) questo è un MDI\-Frame \(classe `CMDIFrameWnd`\) che funge da finestra frame principale dell'applicazione contenente tutti i figli di `CFrameWnd`.  Ogni finestra figlio è di classe `CMDIChildWnd` \(derivata da `CFrameWnd`\) e funge da una delle potenzialmente molte finestre frame di documento.  
  
## DocTemplates  
 Il `CDocTemplate` è l'autore e il gestore dei documenti.  Possiede i documenti che crea.  Se l'applicazione utilizza l'approccio basato sulle risorse descritto di seguito, non necessiterà di derivare da `CDocTemplate`.  
  
 Per un'applicazione SDI, la classe `CSingleDocTemplate` tiene traccia di un documento aperto.  Per un'applicazione MDI, la classe `CMultiDocTemplate` tiene un elenco \(un `CPtrList`\) di tutti i documenti aperti creati da tale modello.  `CDocTemplate::AddDocument` e `CDocTemplate::RemoveDocument` forniscono funzioni membro virtuali per l'aggiunta o la rimozione di un documento dal modello.  `CDocTemplate` è un amico di **CDocument** pertanto è possibile impostare il puntatore protetto **CDocument::m\_pDocTemplate** per puntare al modello del documento che ha creato il documento.  
  
 `CWinApp` gestisce l'implementazione predefinita di `OnFileOpen`, che a sua volta farà query a tutti i modelli doc.  L'implementazione include la ricerca dei documenti già aperti e la decisione del formato in cui aprire i nuovi documenti.  
  
 `CDocTemplate` gestisce l'associazione interfaccia utente per documenti e frame.  
  
 `CDocTemplate` tiene un contatore del numero di documenti senza nome.  
  
## CDocument  
 Un **CDocument** è di proprietà di un `CDocTemplate`.  
  
 I documenti hanno un elenco delle visualizzazioni attualmente aperte \(derivate da `CView`\) che stanno visualizzando il documento \(un `CPtrList`\).  
  
 I documenti non creano\/eliminano le visualizzazioni, ma sono collegati l'un l'altro una volta creati.  Quando un documento viene chiuso \(ovvero, tramite File\/Chiudi\), tutte le visualizzazioni associate verranno chiuse.  Quando l'ultima visualizzazione in un documento viene chiusa \(ovvero, Finestra\/Chiudi\) il documento verrà chiuso.  
  
 L' interfaccia `CDocument::AddView`, `RemoveView` viene utilizzata per gestire l'elenco di visualizzazione.  **CDocument** è un amico di `CView` pertanto è possibile impostare il puntatore **CView::m\_pDocument**.  
  
## CFrameWnd  
 Un `CFrameWnd` \(noto anche come frame\) ha lo stesso ruolo come in MFC 1,0, ma ora la classe `CFrameWnd` è progettata per essere utilizzata in molti casi senza derivare una nuova classe.  Le classi derivate `CMDIFrameWnd` e `CMDIChildWnd` vengono potenziate così diversi comandi standard sono già implementati.  
  
 Il `CFrameWnd` è responsabile della creazione di finestre nell'area client del frame.  In genere è presente una finestra principale che riempie l'area client del frame.  
  
 Per una finestra MDI\- frame, l'area client viene riempita con il controllo MDICLIENT che è a sua volta il padre di tutte le finestre frame Figlio\-MDI.  Per una finestra Frame\-SDI o una finestra frame Figlio\-MDI, l'area client di solito viene riempita con un oggetto finestra derivato da `CView`.  Nel caso di `CSplitterWnd`, l'area client della visualizzazione viene riempita con l'oggetto finestra `CSplitterWnd` e l'oggetto finestra derivate da `CView` \(uno per riquadro diviso\) e vengono creati come finestre figlio di `CSplitterWnd`.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)