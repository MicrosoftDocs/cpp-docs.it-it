---
title: "CView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre figlio, visualizzazioni"
  - "CView class"
  - "document/view architecture"
  - "frame windows [C++], visualizzazioni"
  - "input, and view class"
  - "MDI [C++], view windows"
  - "visualizzazioni multiple"
  - "anteprima di stampa, view windows"
  - "user input [C++], interpreting through view class"
  - "visualizzazioni [C++], view classes"
  - "windows [C++], visualizzazioni"
ms.assetid: 9cff3c56-7564-416b-b9a4-71a9254ed755
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di base per le classi visualizzazione definite dall'utente.  
  
## Sintassi  
  
```  
class AFX_NOVTABLE CView : public CWnd  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CView::CView](../Topic/CView::CView.md)|Costruisce un oggetto `CView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CView::DoPreparePrinting](../Topic/CView::DoPreparePrinting.md)|La finestra di dialogo di stampa e visualizza crea il contesto di dispositivo della stampante, chiamata quando eseguono l'override della funzione membro `OnPreparePrinting`.|  
|[CView::GetDocument](../Topic/CView::GetDocument.md)|Restituisce il documento associato alla visualizzazione.|  
|[CView::IsSelected](../Topic/CView::IsSelected.md)|Verifica se un elemento del documento selezionato.  Richiesto per il supporto di OLE.|  
|[CView::OnDragEnter](../Topic/CView::OnDragEnter.md)|Chiamato quando un elemento viene trascinato nell'area trascinamento della selezione di una visualizzazione.|  
|[CView::OnDragLeave](../Topic/CView::OnDragLeave.md)|Chiamato quando un elemento trascinato consente all'area trascinamento della selezione di una visualizzazione.|  
|[CView::OnDragOver](../Topic/CView::OnDragOver.md)|Chiamato quando un elemento viene trascinato sull'area trascinamento della selezione di una visualizzazione.|  
|[CView::OnDragScroll](../Topic/CView::OnDragScroll.md)|Chiamato per determinare se il cursore viene trascinato nell'area dello scorrimento della finestra.|  
|[CView::OnDrop](../Topic/CView::OnDrop.md)|Chiamato quando un elemento è stato rilasciato nell'area trascinamento della selezione di una visualizzazione, gestore predefinito.|  
|[CView::OnDropEx](../Topic/CView::OnDropEx.md)|Chiamato quando un elemento è stato rilasciato nell'area trascinamento della selezione di una visualizzazione, gestore primario.|  
|[CView::OnInitialUpdate](../Topic/CView::OnInitialUpdate.md)|Chiamato dopo che una visualizzazione viene prima associata a un documento.|  
|[CView::OnPrepareDC](../Topic/CView::OnPrepareDC.md)|Chiamata prima che la funzione membro `OnDraw` venga chiamata per la visualizzazione o la funzione membro `OnPrint` viene chiamato per la stampa o l'anteprima di stampa.|  
|[CView::OnScroll](../Topic/CView::OnScroll.md)|Chiamato quando gli elementi vengono trascinati OLE oltre ai bordi della visualizzazione.|  
|[CView::OnScrollBy](../Topic/CView::OnScrollBy.md)|Chiamato quando una visualizzazione contenente gli elementi OLE sul posto attivi si scorre.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CView::OnActivateFrame](../Topic/CView::OnActivateFrame.md)|Chiamato quando la finestra cornice contenente la visualizzazione viene attivata o disattivata.|  
|[CView::OnActivateView](../Topic/CView::OnActivateView.md)|Chiamato quando una visualizzazione è attivata.|  
|[CView::OnBeginPrinting](../Topic/CView::OnBeginPrinting.md)|Chiamato quando un processo di stampa inizia; override per allocare risorse di \(GDI\) \(application programming Interface\).|  
|[CView::OnDraw](../Topic/CView::OnDraw.md)|Chiamato per eseguire il rendering di un'immagine di documento per la visualizzazione, la stampa, o l'anteprima di stampa.  Implementazione richiesta.|  
|[CView::OnEndPrinting](../Topic/CView::OnEndPrinting.md)|Chiamato quando un processo di stampa termina, override per liberare le risorse GDI.|  
|[CView::OnEndPrintPreview](../Topic/CView::OnEndPrintPreview.md)|Chiamato quando la modalità di anteprima viene annullata.|  
|[CView::OnPreparePrinting](../Topic/CView::OnPreparePrinting.md)|Chiamata prima che il documento venga stampato o visualizzare in anteprima; override per inizializzare la finestra di dialogo di stampa.|  
|[CView::OnPrint](../Topic/CView::OnPrint.md)|Chiamato per stampare o visualizzare in anteprima una pagina del documento.|  
|[CView::OnUpdate](../Topic/CView::OnUpdate.md)|Chiamato per notificare a una visualizzazione che il documento è stato modificato.|  
  
## Note  
 Una visualizzazione è associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo o una stampante e interpreta l'input come operazioni nel documento.  
  
 Una visualizzazione è una finestra figlio di un frame.  Più visualizzazione è possibile condividere una finestra cornice, come nel caso di una finestra con separatore.  La relazione tra una classe di visualizzazione, una classe finestra cornice e una classe di documento viene stabilita da un oggetto `CDocTemplate`.  Quando l'utente apre una nuova finestra oppure suddivide esistente, il framework crea una nuova visualizzazione e allegarlo al documento.  
  
 Una visualizzazione può essere associata a un solo documento, ma un documento può disporre di più visualizzazioni associate a immediatamente, ad esempio se il documento viene visualizzato in una finestra con separatore o nelle finestre figlio in un'applicazione di \(MDI\) dell'interfaccia a documenti multipli.  L'applicazione può supportare tipi diversi di visualizzazione per un tipo di documento specificato; ad esempio, un elaboratore di testi potrebbe fornire sia una visualizzazione di testo completo di un documento da una visualizzazione della struttura che mostra solo le intestazioni della sezione.  Questi tipi diversi di visualizzazioni possono essere inseriti in applicazioni utilizzano separate o in riquadri separati di una singola finestra cornice se si utilizza una finestra con separatore.  
  
 Una visualizzazione può essere responsabile di gestire vari tipi di input, come input della tastiera, l'input del mouse o inviato mediante il trascinamento della selezione nonché comandi da menu, barre degli strumenti, o barre di scorrimento.  Una visualizzazione riceve i controlli inoltrati dalla finestra cornice.  Se la visualizzazione non gestisce un comando specificato, inoltra il comando al documento collegato.  Come tutte le destinazioni comando, una visualizzazione gestisce i messaggi tramite mappa messaggi.  
  
 La visualizzazione è responsabile della visualizzazione e la modifica dei dati del documento ma non di archiviarle.  Il documento fornisce una visualizzazione con le informazioni necessarie sui dati.  È possibile lasciare direttamente i membri dati l'accesso di visualizzazione del documento, oppure fornire funzioni membro nella classe del documento per la classe di visualizzazione della chiamata.  
  
 Quando le modifiche dei dati di un documento, la visualizzazione responsabile delle modifiche in genere chiama la funzione [CDocument::UpdateAllViews](../Topic/CDocument::UpdateAllViews.md) per il documento, che notifica tutte le altre visualizzazioni chiamando la funzione membro `OnUpdate` per ciascuno.  L'implementazione predefinita `OnUpdate` invalida l'intera area client della visualizzazione.  È possibile eseguirne l'override per invalidare solo le aree dell'area client che eseguono il mapping alle parti modifica del documento.  
  
 Per utilizzare `CView`, derivare una classe da e implementare la funzione membro `OnDraw` per eseguire la visualizzazione.  È inoltre possibile utilizzare `OnDraw` per eseguire la stampa e anteprima di stampa.  Il framework gestisce il ciclo di stampa per la stampa e visualizzare l'anteprima del documento.  
  
 Una visualizzazione gestisce i messaggi della barra di scorrimento con funzioni membro [CWnd::OnVScroll](../Topic/CWnd::OnVScroll.md) e [CWnd::OnHScroll](../Topic/CWnd::OnHScroll.md).  È possibile implementare la gestione dei messaggi della barra di scorrimento in queste funzioni, o la classe derivata [CScrollView](../../mfc/reference/cscrollview-class.md)`CView` per gestire lo scorrimento automaticamente.  
  
 Oltre a `CScrollView`, la libreria MFC fornisce nove altre classi derivate da `CView`:  
  
-   [CCtrlView](../../mfc/reference/cctrlview-class.md), una visualizzazione che consente l'utilizzo di documento e l'architettura di visualizzazione con la struttura ad albero, l'elenco e i controlli Rich Edit.  
  
-   [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md), una visualizzazione record del database presenti nei controlli della finestra di dialogo.  
  
-   [CEditView](../../mfc/reference/ceditview-class.md), una visualizzazione che fornisce un editor di testo su più righe semplice.  È possibile utilizzare un oggetto `CEditView` come un controllo in una finestra di dialogo e visualizzazione in un documento.  
  
-   [CFormView](../../mfc/reference/cformview-class.md), una visualizzazione scorrevole che contiene i controlli finestra di dialogo e è basata su una risorsa modello di finestra di dialogo.  
  
-   [CListView](../../mfc/reference/clistview-class.md), una visualizzazione che consente l'utilizzo di documento e l'architettura di visualizzazione con i controlli elenco.  
  
-   [CRecordView](../../mfc/reference/crecordview-class.md), una visualizzazione che visualizza i record di database in controlli finestra di dialogo.  
  
-   [CRichEditView](../../mfc/reference/cricheditview-class.md), una visualizzazione che consente l'utilizzo di documento e l'architettura di visualizzazione con i controlli Rich Edit.  
  
-   [CScrollView](../../mfc/reference/cscrollview-class.md), una visualizzazione che fornisce automaticamente il supporto di scorrimento.  
  
-   [CTreeView](../../mfc/reference/ctreeview-class.md), una visualizzazione che consente l'utilizzo di documento e l'architettura di visualizzazione con i controlli struttura ad albero.  
  
 La classe `CView` dispone inoltre di una classe derivata di implementazione denominata **CPreviewView**, utilizzata dal framework per eseguire visualizzare l'anteprima di stampa.  Questa classe fornisce il supporto per le funzionalità specifiche nella finestra di anteprima di stampa, ad esempio una barra degli strumenti, un'anteprima della pagina doppia o unica e zoom, ovvero, ingrandicente l'immagine visualizzata in anteprima.  Non è necessario chiamare o eseguire l'override di una qualsiasi delle funzioni membro di CPreviewView a meno che non si desideri implementare un'interfaccia personalizzata per l'anteprima di stampa \(ad esempio, se si desidera supportare la modifica in modalità anteprima di stampa\).  Per ulteriori informazioni su l `CView`, vedere [L'architettura documento\/visualizzazione](../../mfc/document-view-architecture.md) e [stampa](../../mfc/printing.md).  Inoltre, vedere [nota tecnica 30](../../mfc/tn030-customizing-printing-and-print-preview.md) per ulteriori informazioni sulla personalizzazione dell'anteprima di stampa.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CView`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione MDIDOCVW](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [CSplitterWnd Class](../../mfc/reference/csplitterwnd-class.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CDocument Class](../../mfc/reference/cdocument-class.md)