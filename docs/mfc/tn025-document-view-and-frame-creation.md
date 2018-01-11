---
title: 'Tn025: creazione Di documenti, visualizzazioni e Frame creazione | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.creation
dev_langs: C++
helpviewer_keywords:
- documents [MFC], view and frame creation
- TN025
ms.assetid: 09254d72-6e1d-43db-80e9-693887dbeda2
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 89ca395b19a36c42163b854c8997cce424352ead
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn025-document-view-and-frame-creation"></a>TN025: creazione di documenti, visualizzazioni e frame
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota vengono descritti i problemi di proprietà e di creazione per applicazioni Windows, modelli di documenti, documenti, frame e visualizzazioni.  
  
## <a name="winapp"></a>WinApp  
 Esiste un solo oggetto `CWinApp` nel sistema.  
  
 Viene costruito e inizializzato in modo statico dall'implementazione interna del framework `WinMain`. È necessario derivare da `CWinApp` effettuare alcuna operazione utile (eccezione: le DLL di estensione MFC non è necessario un `CWinApp` istanza, l'inizializzazione viene eseguita `DllMain` invece).  
  
 L'oggetto `CWinApp` possiede un elenco di modelli di documento (un `CPtrList`). Esistono uno o più modelli di documento per applicazione. I modelli di documento vengono caricati in genere dai file di risorse (ovvero una matrice di stringhe) in `CWinApp::InitInstance`.  
  
```  
pTemplate = new CDocTemplate(IDR_MYDOCUMENT, ...);

AddDocTemplate(pTemplate);
```  
  
 L'oggetto `CWinApp` possiede tutte le finestre cornice nell'applicazione. La finestra cornice principale per l'applicazione deve essere archiviata in **CWinApp:: M_pmainwnd**; in genere si imposta `m_pMainWnd` nel `InitInstance` implementazione se si dispone non consente la creazione guidata applicazione per. Per l'interfaccia a documento singolo (SDI) questo è un `CFrameWnd` che funge da finestra principale dell'applicazione nonché l'unica finestra cornice di documento. Per l'interfaccia a più documenti (MDI) questa è una cornice MDI (classe `CMDIFrameWnd`) che funge da finestra principale dell'applicazione contenente tutti i figli di `CFrameWnd`. Ogni finestra figlio è di classe `CMDIChildWnd` (derivata da `CFrameWnd`) e funge da una delle potenzialmente numerose finestre cornice di documento.  
  
## <a name="doctemplates"></a>Modelli di documento  
 `CDocTemplate` è l'autore e il gestore dei documenti. Possiede i documenti che crea. Se l'applicazione utilizza l'approccio basato sulle risorse descritto di seguito, non necessiterà di derivare da `CDocTemplate`.  
  
 Per un'applicazione SDI, la classe `CSingleDocTemplate` tiene traccia di un documento aperto. Per un'applicazione MDI, la classe `CMultiDocTemplate` tiene un elenco (`CPtrList`) di tutti i documenti aperti creati da tale modello. `CDocTemplate::AddDocument` e `CDocTemplate::RemoveDocument` forniscono le funzioni membro virtuali per l'aggiunta o la rimozione di un documento dal modello. `CDocTemplate`è un elemento friend di **CDocument** , pertanto è possibile impostare il metodo protetto **CDocument:: M_pdoctemplate** puntatore all'indietro per scegliere il modello di documento che ha creato il documento.  
  
 `CWinApp` gestisce l'implementazione predefinita di `OnFileOpen`, che a sua volta eseguirà query a tutti i modelli di documento. L'implementazione include la ricerca di documenti già aperti e la decisione su quale formato utilizzare per aprire i nuovi documenti.  
  
 `CDocTemplate` gestisce l'associazione dell'interfaccia utente per documenti e frame.  
  
 `CDocTemplate` tiene il conteggio del numero di documenti senza nome.  
  
## <a name="cdocument"></a>CDocument  
 Oggetto **CDocument** è di proprietà di un `CDocTemplate`.  
  
 I documenti hanno un elenco delle visualizzazioni attualmente aperte (derivate da `CView`) che stanno visualizzando il documento (`CPtrList`).  
  
 I documenti non creano/eliminano definitivamente le visualizzazioni, ma sono collegati l'uno all'altra una volta creati. Quando un documento viene chiuso (ovvero, tramite il comando Chiudi del menu File), tutte le visualizzazioni associate vengono chiuse. Quando l'ultima visualizzazione di un documento viene chiusa (tramite il comando Chiudi della finestra) il documento viene chiuso.  
  
 L'interfaccia `CDocument::AddView`, `RemoveView` viene utilizzata per gestire l'elenco di visualizzazione. **CDocument** è un elemento friend di `CView` , pertanto è possibile impostare il **CView:: M_pdocument** puntatore all'indietro.  
  
## <a name="cframewnd"></a>CFrameWnd  
 Un `CFrameWnd` (noto anche come frame) ha lo stesso ruolo che aveva in MFC 1.0, ma ora la classe `CFrameWnd` è progettata per essere utilizzata in molti casi senza derivare una nuova classe. Le classi derivate `CMDIFrameWnd` e `CMDIChildWnd` sono potenziate, così diversi comandi standard sono già implementati.  
  
 `CFrameWnd` è responsabile della creazione di finestre nell'area client del frame. In genere è presente una finestra principale che riempie l'area client del frame.  
  
 Per una finestra cornice MDI l'area client viene riempita con il controllo MDICLIENT che è a sua volta il padre di tutte le finestre cornice figlio MDI. Per una finestra cornice SDI o una finestra cornice figlio MDI, l'area client di solito viene riempita con un oggetto finestra derivato da `CView`. Nel caso di `CSplitterWnd`, l'area client della visualizzazione viene riempita con l'oggetto finestra `CSplitterWnd` e gli oggetti finestra derivati da `CView` (uno per pannello) e vengono creati come finestre figlio di `CSplitterWnd`.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

