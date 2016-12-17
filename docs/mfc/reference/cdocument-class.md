---
title: "CDocument Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDocument"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDocument class"
  - "comandi (gestione), documents and"
  - "comandi (routing), documents and"
  - "documenti [C++], comandi (routing)"
  - "documenti [C++], document classes"
  - "documenti [C++], visualizzazioni multiple"
  - "documenti [C++], serializzazione"
  - "file [C++], documenti"
  - "serializzazione [C++], documents and"
  - "visualizzazioni [C++], documento"
ms.assetid: e5a2891d-e1e1-4599-8c7e-afa9b4945446
caps.latest.revision: 21
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDocument Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di base per le classi definite dall'utente del documento.  
  
## Sintassi  
  
```  
class CDocument : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument::CDocument](../Topic/CDocument::CDocument.md)|Costruisce un oggetto `CDocument`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument::AddView](../Topic/CDocument::AddView.md)|Aggiunge una visualizzazione al documento.|  
|[CDocument::BeginReadChunks](../Topic/CDocument::BeginReadChunks.md)|Inizializza la lettura del blocco.|  
|[CDocument::CanCloseFrame](../Topic/CDocument::CanCloseFrame.md)|Sottoponibile a override avanzato, chiamata prima di chiudere una finestra cornice che visualizza questo documento.|  
|[CDocument::ClearChunkList](../Topic/CDocument::ClearChunkList.md)|Cancella l'elenco di blocco.|  
|[CDocument::ClearPathName](../Topic/CDocument::ClearPathName.md)|Rimuove il percorso dell'oggetto del documento.|  
|[CDocument::DeleteContents](../Topic/CDocument::DeleteContents.md)|Chiamato per eseguire pulizia di documento.|  
|[CDocument::FindChunk](../Topic/CDocument::FindChunk.md)|Cerca un blocco con il GUID specificato.|  
|[CDocument::GetAdapter](../Topic/CDocument::GetAdapter.md)|Restituisce un puntatore a un oggetto implementando l'interfaccia `IDocument`.|  
|[CDocument::GetDocTemplate](../Topic/CDocument::GetDocTemplate.md)|Restituisce un puntatore al modello di documento che descrive il tipo di documento.|  
|[CDocument::GetFile](../Topic/CDocument::GetFile.md)|Restituisce un puntatore all'oggetto desiderato `CFile`.|  
|[CDocument::GetFirstViewPosition](../Topic/CDocument::GetFirstViewPosition.md)|Restituisce la posizione del primo l'elenco delle visualizzazioni, utilizzato per avviare l'iterazione.|  
|[CDocument::GetNextView](../Topic/CDocument::GetNextView.md)|Scorre l'elenco delle visualizzazioni associate al documento.|  
|[CDocument::GetPathName](../Topic/CDocument::GetPathName.md)|Restituisce il percorso del file di dati del documento.|  
|[CDocument::GetThumbnail](../Topic/CDocument::GetThumbnail.md)|Chiamato per creare una bitmap da utilizzare dal provider di anteprima per visualizzare l'anteprima.|  
|[CDocument::GetTitle](../Topic/CDocument::GetTitle.md)|Restituisce il titolo del documento.|  
|[CDocument::InitializeSearchContent](../Topic/CDocument::InitializeSearchContent.md)|Chiamato per inizializzare il contenuto di ricerca per il gestore trovato.|  
|[CDocument::IsModified](../Topic/CDocument::IsModified.md)|Indica se il documento è stato modificato da quando è stato salvato per ultima.|  
|[CDocument::IsSearchAndOrganizeHandler](../Topic/CDocument::IsSearchAndOrganizeHandler.md)|Indica se questa istanza dell'oggetto `CDocument` è stata creata per la ricerca e organizzare il gestore.|  
|[CDocument::LoadDocumentFromStream](../Topic/CDocument::LoadDocumentFromStream.md)|Chiamato per caricare i dati del documento il flusso.|  
|[CDocument::OnBeforeRichPreviewFontChanged](../Topic/CDocument::OnBeforeRichPreviewFontChanged.md)|Prima di completezza di visualizzare in anteprima il tipo chiamata viene modificata.|  
|[CDocument::OnChangedViewList](../Topic/CDocument::OnChangedViewList.md)|Chiamato dopo che una visualizzazione viene aggiunta o rimossa dal documento.|  
|[CDocument::OnCloseDocument](../Topic/CDocument::OnCloseDocument.md)|Chiamato per chiudere il documento.|  
|[CDocument::OnCreatePreviewFrame](../Topic/CDocument::OnCreatePreviewFrame.md)|Chiamato dal framework quando deve creare un frame di anteprima per l'anteprima complesso.|  
|[CDocument::OnDocumentEvent](../Topic/CDocument::OnDocumentEvent.md)|Chiamato dal framework in risposta a un evento del documento.|  
|[CDocument::OnDrawThumbnail](../Topic/CDocument::OnDrawThumbnail.md)|Eseguire l'override di questo metodo in una classe derivata per disegnare il contenuto di anteprima.|  
|[CDocument::OnLoadDocumentFromStream](../Topic/CDocument::OnLoadDocumentFromStream.md)|Chiamato dal framework quando deve caricare i dati del documento il flusso.|  
|[CDocument::OnNewDocument](../Topic/CDocument::OnNewDocument.md)|Chiamato per creare un nuovo documento.|  
|[CDocument::OnOpenDocument](../Topic/CDocument::OnOpenDocument.md)|Chiamato per aprire un documento esistente.|  
|[CDocument::OnPreviewHandlerQueryFocus](../Topic/CDocument::OnPreviewHandlerQueryFocus.md)|Esegue il gestore di anteprima per restituire HWND da chiamare la funzione di GetFocus.|  
|[CDocument::OnPreviewHandlerTranslateAccelerator](../Topic/CDocument::OnPreviewHandlerTranslateAccelerator.md)|Esegue il gestore di anteprima per gestire una sequenza di tasti lasciata nel message pump del processo in cui il gestore eventi preview è in esecuzione.|  
|[CDocument::OnRichPreviewBackColorChanged](../Topic/CDocument::OnRichPreviewBackColorChanged.md)|Quando completezza visualizzare in anteprima il colore di sfondo chiamato è stato modificato.|  
|[CDocument::OnRichPreviewFontChanged](../Topic/CDocument::OnRichPreviewFontChanged.md)|Quando completezza visualizzare in anteprima il tipo chiamata ha modificato.|  
|[CDocument::OnRichPreviewSiteChanged](../Topic/CDocument::OnRichPreviewSiteChanged.md)|Chiamato quando il sito di anteprima complesso ha modificato.|  
|[CDocument::OnRichPreviewTextColorChanged](../Topic/CDocument::OnRichPreviewTextColorChanged.md)|Quando completezza visualizzare in anteprima il colore del testo definito è stato modificato.|  
|[CDocument::OnSaveDocument](../Topic/CDocument::OnSaveDocument.md)|Chiamato per salvare il documento su disco.|  
|[CDocument::OnUnloadHandler](../Topic/CDocument::OnUnloadHandler.md)|Chiamato dal framework quando il gestore di anteprima il download.|  
|[CDocument::PreCloseFrame](../Topic/CDocument::PreCloseFrame.md)|Chiamata prima della finestra cornice viene chiusa.|  
|[CDocument::ReadNextChunkValue](../Topic/CDocument::ReadNextChunkValue.md)|Legge il valore del blocco.|  
|[CDocument::ReleaseFile](../Topic/CDocument::ReleaseFile.md)|Genera un file per renderlo disponibile per l'utilizzo in altre applicazioni.|  
|[CDocument::RemoveChunk](../Topic/CDocument::RemoveChunk.md)|Rimuove un blocco con il GUID specificato.|  
|[CDocument::RemoveView](../Topic/CDocument::RemoveView.md)|Rimuove una visualizzazione del documento.|  
|[CDocument::ReportSaveLoadException](../Topic/CDocument::ReportSaveLoadException.md)|Sottoponibile a override avanzato, chiamato quando un'operazione di salvataggio o aperta non può essere completata a causa di un'eccezione.|  
|[CDocument::SaveModified](../Topic/CDocument::SaveModified.md)|Sottoponibile a override avanzato, chiamato per chiedere all'utente se il documento deve essere salvato.|  
|[CDocument::SetChunkValue](../Topic/CDocument::SetChunkValue.md)|Imposta un valore di blocco.|  
|[CDocument::SetModifiedFlag](../Topic/CDocument::SetModifiedFlag.md)|Impostare un flag che indica che è stato modificato il documento da quando è stato salvato per ultima.|  
|[CDocument::SetPathName](../Topic/CDocument::SetPathName.md)|Imposta il percorso del file di dati utilizzato dal documento.|  
|[CDocument::SetTitle](../Topic/CDocument::SetTitle.md)|Imposta il titolo del documento.|  
|[CDocument::UpdateAllViews](../Topic/CDocument::UpdateAllViews.md)|Notifica tutte le visualizzazioni che il documento è stato modificato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument::OnFileSendMail](../Topic/CDocument::OnFileSendMail.md)|Invia un messaggio di posta elettronica con il documento associato.|  
|[CDocument::OnUpdateFileSendMail](../Topic/CDocument::OnUpdateFileSendMail.md)|Abilita il comando di posta elettronica di inviare se il supporto di posta elettronica è presente.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument::m\_bGetThumbnailMode](../Topic/CDocument::m_bGetThumbnailMode.md)|Specifica che l'oggetto `CDocument` è stato creato da dllhost per le anteprime.  Deve essere `CView::OnDraw`controllato.|  
|[CDocument::m\_bPreviewHandlerMode](../Topic/CDocument::m_bPreviewHandlerMode.md)|Specifica che l'oggetto `CDocument` è stato creato da prevhost per `Rich Preview`.  Deve essere `CView::OnDraw`controllato.|  
|[CDocument::m\_bSearchMode](../Topic/CDocument::m_bSearchMode.md)|Specifica che l'oggetto `CDocument` è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.|  
|[CDocument::m\_clrRichPreviewBackColor](../Topic/CDocument::m_clrRichPreviewBackColor.md)|Specifica il colore di sfondo della finestra di anteprima dettagliata.  Il colore viene impostato dall'host.|  
|[CDocument::m\_clrRichPreviewTextColor](../Topic/CDocument::m_clrRichPreviewTextColor.md)|Specifica il colore di primo piano della finestra di anteprima dettagliata.  Il colore viene impostato dall'host.|  
|[CDocument::m\_lfRichPreviewFont](../Topic/CDocument::m_lfRichPreviewFont.md)|Specifica il tipo di carattere del testo per la finestra di anteprima dettagliata.  Queste informazioni di carattere sono impostate dall'host.|  
  
## Note  
 Un documento rappresenta l'unità di dati che l'utente in genere aperto con il comando aperto il file e salvarlo con il comando salva il file.  
  
 **CDocument** supporta le operazioni standard come creare un documento, il caricamento e salvarla.  Il framework modifica di documenti tramite l'interfaccia definita da **CDocument**.  
  
 Un'applicazione può supportare più di un tipo di documento; ad esempio, un'applicazione potrebbe supportare sia i fogli di calcolo che i documenti di testo.  Ogni tipo di documento include un modello di documento collegato; il modello di documento specifica di risorse, ad esempio menu, icona, o tabella dei tasti di scelta rapida\) vengono utilizzati per tale tipo di documento.  Ogni documento contiene un puntatore al relativo oggetto collegato `CDocTemplate`.  
  
 Gli utenti interagiscono con un documento tramite oggetti [CView](../../mfc/reference/cview-class.md) associati.  Una visualizzazione esegue il rendering di un'immagine di documento in una finestra cornice e interpreta l'input come operazioni nel documento.  Un documento può disporre di più visualizzazioni associate.  Quando l'utente apre una finestra in un documento, il framework crea una visualizzazione e allegarlo al documento.  Il modello di documento specifica il tipo di visualizzazione e della finestra cornice viene utilizzata per visualizzare ogni tipo di documento.  
  
 I documenti fa parte del routing dei comandi standard del framework e controlli di conseguenza di ricezione da componenti standard dell'interfaccia utente \(ad esempio una voce di menu di salvataggio file\).  Un documento riceve i controlli inoltrati tramite la visualizzazione attiva.  Se il documento non gestisce un comando specificato, inoltra il comando al modello di documento che lo gestisce.  
  
 Quando i dati di un documento vengono modificati, ognuna delle visualizzazioni deve riflettere le modifiche.  **CDocument** fornisce la funzione membro [UpdateAllViews](../Topic/CDocument::UpdateAllViews.md) per notificare alle visualizzazioni di tali modifiche, pertanto le visualizzazioni possono essere aggiornata automaticamente in base alle esigenze.  Il framework sono richiede all'utente di salvare un file modificato prima di chiuderlo.  
  
 Per distribuire documenti in un'applicazione tipica, è necessario effettuare quanto segue:  
  
-   Derivare la classe da **CDocument** per ogni tipo di documento.  
  
-   Aggiungere le variabili membro per archiviare i dati di ogni documento.  
  
-   Implementare le funzioni membro per la lettura e la modifica dei dati del documento.  Le visualizzazioni del documento sono gli utenti più importanti di queste funzioni membro.  
  
-   Eseguire l'override della funzione membro [CObject::Serialize](../Topic/CObject::Serialize.md) nella classe del documento per scrivere e leggere i dati del documento da e su disco.  
  
 **CDocument** supporta inviare il documento tramite posta elettronica se il supporto di posta elettronica \(MAPI\) è presente.  Vedere gli articoli [MAPI](../../mfc/mapi.md) e [Supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).  
  
 Per ulteriori informazioni su **CDocument**, vedere [serializzazione](../../mfc/serialization-in-mfc.md), [Argomenti con l'architettura documento](../../mfc/document-view-architecture.md)e [Creazione documento\/visualizzazione](../../mfc/document-view-creation.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocument`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione MDIDOCVW](../../top/visual-cpp-samples.md)   
 [Esempio SNAPVW MFC](../../top/visual-cpp-samples.md)   
 [NPP l'esempio MFC](../../top/visual-cpp-samples.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)