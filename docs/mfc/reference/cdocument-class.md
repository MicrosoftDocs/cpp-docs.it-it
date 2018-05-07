---
title: CDocument (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDocument
- AFXWIN/CDocument
- AFXWIN/CDocument::CDocument
- AFXWIN/CDocument::AddView
- AFXWIN/CDocument::BeginReadChunks
- AFXWIN/CDocument::CanCloseFrame
- AFXWIN/CDocument::ClearChunkList
- AFXWIN/CDocument::ClearPathName
- AFXWIN/CDocument::DeleteContents
- AFXWIN/CDocument::FindChunk
- AFXWIN/CDocument::GetAdapter
- AFXWIN/CDocument::GetDocTemplate
- AFXWIN/CDocument::GetFile
- AFXWIN/CDocument::GetFirstViewPosition
- AFXWIN/CDocument::GetNextView
- AFXWIN/CDocument::GetPathName
- AFXWIN/CDocument::GetThumbnail
- AFXWIN/CDocument::GetTitle
- AFXWIN/CDocument::InitializeSearchContent
- AFXWIN/CDocument::IsModified
- AFXWIN/CDocument::IsSearchAndOrganizeHandler
- AFXWIN/CDocument::LoadDocumentFromStream
- AFXWIN/CDocument::OnBeforeRichPreviewFontChanged
- AFXWIN/CDocument::OnChangedViewList
- AFXWIN/CDocument::OnCloseDocument
- AFXWIN/CDocument::OnCreatePreviewFrame
- AFXWIN/CDocument::OnDocumentEvent
- AFXWIN/CDocument::OnDrawThumbnail
- AFXWIN/CDocument::OnLoadDocumentFromStream
- AFXWIN/CDocument::OnNewDocument
- AFXWIN/CDocument::OnOpenDocument
- AFXWIN/CDocument::OnPreviewHandlerQueryFocus
- AFXWIN/CDocument::OnPreviewHandlerTranslateAccelerator
- AFXWIN/CDocument::OnRichPreviewBackColorChanged
- AFXWIN/CDocument::OnRichPreviewFontChanged
- AFXWIN/CDocument::OnRichPreviewSiteChanged
- AFXWIN/CDocument::OnRichPreviewTextColorChanged
- AFXWIN/CDocument::OnSaveDocument
- AFXWIN/CDocument::OnUnloadHandler
- AFXWIN/CDocument::PreCloseFrame
- AFXWIN/CDocument::ReadNextChunkValue
- AFXWIN/CDocument::ReleaseFile
- AFXWIN/CDocument::RemoveChunk
- AFXWIN/CDocument::RemoveView
- AFXWIN/CDocument::ReportSaveLoadException
- AFXWIN/CDocument::SaveModified
- AFXWIN/CDocument::SetChunkValue
- AFXWIN/CDocument::SetModifiedFlag
- AFXWIN/CDocument::SetPathName
- AFXWIN/CDocument::SetTitle
- AFXWIN/CDocument::UpdateAllViews
- AFXWIN/CDocument::OnFileSendMail
- AFXWIN/CDocument::OnUpdateFileSendMail
- AFXWIN/CDocument::m_bGetThumbnailMode
- AFXWIN/CDocument::m_bPreviewHandlerMode
- AFXWIN/CDocument::m_bSearchMode
- AFXWIN/CDocument::m_clrRichPreviewBackColor
- AFXWIN/CDocument::m_clrRichPreviewTextColor
- AFXWIN/CDocument::m_lfRichPreviewFont
dev_langs:
- C++
helpviewer_keywords:
- CDocument [MFC], CDocument
- CDocument [MFC], AddView
- CDocument [MFC], BeginReadChunks
- CDocument [MFC], CanCloseFrame
- CDocument [MFC], ClearChunkList
- CDocument [MFC], ClearPathName
- CDocument [MFC], DeleteContents
- CDocument [MFC], FindChunk
- CDocument [MFC], GetAdapter
- CDocument [MFC], GetDocTemplate
- CDocument [MFC], GetFile
- CDocument [MFC], GetFirstViewPosition
- CDocument [MFC], GetNextView
- CDocument [MFC], GetPathName
- CDocument [MFC], GetThumbnail
- CDocument [MFC], GetTitle
- CDocument [MFC], InitializeSearchContent
- CDocument [MFC], IsModified
- CDocument [MFC], IsSearchAndOrganizeHandler
- CDocument [MFC], LoadDocumentFromStream
- CDocument [MFC], OnBeforeRichPreviewFontChanged
- CDocument [MFC], OnChangedViewList
- CDocument [MFC], OnCloseDocument
- CDocument [MFC], OnCreatePreviewFrame
- CDocument [MFC], OnDocumentEvent
- CDocument [MFC], OnDrawThumbnail
- CDocument [MFC], OnLoadDocumentFromStream
- CDocument [MFC], OnNewDocument
- CDocument [MFC], OnOpenDocument
- CDocument [MFC], OnPreviewHandlerQueryFocus
- CDocument [MFC], OnPreviewHandlerTranslateAccelerator
- CDocument [MFC], OnRichPreviewBackColorChanged
- CDocument [MFC], OnRichPreviewFontChanged
- CDocument [MFC], OnRichPreviewSiteChanged
- CDocument [MFC], OnRichPreviewTextColorChanged
- CDocument [MFC], OnSaveDocument
- CDocument [MFC], OnUnloadHandler
- CDocument [MFC], PreCloseFrame
- CDocument [MFC], ReadNextChunkValue
- CDocument [MFC], ReleaseFile
- CDocument [MFC], RemoveChunk
- CDocument [MFC], RemoveView
- CDocument [MFC], ReportSaveLoadException
- CDocument [MFC], SaveModified
- CDocument [MFC], SetChunkValue
- CDocument [MFC], SetModifiedFlag
- CDocument [MFC], SetPathName
- CDocument [MFC], SetTitle
- CDocument [MFC], UpdateAllViews
- CDocument [MFC], OnFileSendMail
- CDocument [MFC], OnUpdateFileSendMail
- CDocument [MFC], m_bGetThumbnailMode
- CDocument [MFC], m_bPreviewHandlerMode
- CDocument [MFC], m_bSearchMode
- CDocument [MFC], m_clrRichPreviewBackColor
- CDocument [MFC], m_clrRichPreviewTextColor
- CDocument [MFC], m_lfRichPreviewFont
ms.assetid: e5a2891d-e1e1-4599-8c7e-afa9b4945446
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 696b0d63a7b81b550e99981f199132713fe8a6ed
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cdocument-class"></a>CDocument (classe)
Fornisce la funzionalità di base per le classi documento definite dall'utente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDocument : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument::CDocument](#cdocument)|Costruisce un oggetto `CDocument`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument:: AddView](#addview)|Collega una vista al documento.|  
|[CDocument::BeginReadChunks](#beginreadchunks)|Inizializza blocco lettura.|  
|[CDocument::CanCloseFrame](#cancloseframe)|Advanced sottoponibile a override; chiamato prima di chiudere una finestra cornice, visualizzazione di questo documento.|  
|[CDocument::ClearChunkList](#clearchunklist)|Cancella l'elenco di blocco.|  
|[CDocument::ClearPathName](#clearpathname)|Cancella il percorso dell'oggetto documento.|  
|[CDocument::DeleteContents](#deletecontents)|Chiamato per eseguire la pulizia del documento.|  
|[CDocument::FindChunk](#findchunk)|Cerca un blocco con GUID specificato.|  
|[CDocument::GetAdapter](#getadapter)|Restituisce un puntatore all'oggetto che implementa `IDocument` interfaccia.|  
|[CDocument::GetDocTemplate](#getdoctemplate)|Restituisce un puntatore al modello di documento che descrive il tipo del documento.|  
|[CDocument::GetFile](#getfile)|Restituisce un puntatore all'oggetto desiderato `CFile` oggetto.|  
|[CDocument::GetFirstViewPosition](#getfirstviewposition)|Restituisce la posizione del primo nell'elenco di viste. utilizzato per avviare l'iterazione.|  
|[CDocument::GetNextView](#getnextview)|Scorrere l'elenco di viste associate al documento.|  
|[CDocument::GetPathName](#getpathname)|Restituisce il percorso del file di dati del documento.|  
|[CDocument::GetThumbnail](#getthumbnail)|Chiamato per creare una bitmap per essere utilizzata dal provider di anteprima per visualizzare l'anteprima.|  
|[CDocument::GetTitle](#gettitle)|Restituisce il titolo del documento.|  
|[CDocument::InitializeSearchContent](#initializesearchcontent)|Chiamato per inizializzare il contenuto di ricerca per il gestore di ricerca.|  
|[CDocument::IsModified](#ismodified)|Indica se il documento è stato modificato dall'ultimo salvataggio.|  
|[CDocument::IsSearchAndOrganizeHandler](#issearchandorganizehandler)|Indica se questa istanza di `CDocument` per ricerca & Organizza gestore è stato creato l'oggetto.|  
|[CDocument::LoadDocumentFromStream](#loaddocumentfromstream)|Chiamato per caricare i dati del documento dal flusso.|  
|[CDocument::OnBeforeRichPreviewFontChanged](#onbeforerichpreviewfontchanged)|Chiamato prima che venga modificato tipo di carattere Anteprima avanzata.|  
|[CDocument::OnChangedViewList](#onchangedviewlist)|Chiamato dopo che una vista viene aggiunto o rimosso dal documento.|  
|[CDocument::OnCloseDocument](#onclosedocument)|Chiamata eseguita per chiudere il documento.|  
|[CDocument::OnCreatePreviewFrame](#oncreatepreviewframe)|Chiamato dal framework quando è necessario creare un frame di anteprima per l'anteprima avanzata.|  
|[CDocument::OnDocumentEvent](#ondocumentevent)|Chiamato dal framework in risposta a un evento di documento.|  
|[CDocument::OnDrawThumbnail](#ondrawthumbnail)|Eseguire l'override di questo metodo in una classe derivata per disegnare il contenuto di anteprima.|  
|[CDocument::OnLoadDocumentFromStream](#onloaddocumentfromstream)|Chiamato dal framework quando è necessario caricare i dati del documento dal flusso.|  
|[CDocument::OnNewDocument](#onnewdocument)|Chiamato per creare un nuovo documento.|  
|[CDocument:: OnOpenDocument](#onopendocument)|Chiamata eseguita per aprire un documento esistente.|  
|[CDocument::OnPreviewHandlerQueryFocus](#onpreviewhandlerqueryfocus)|Indirizza il gestore di anteprima per restituire HWND dalla chiamata di funzione GetFocus.|  
|[CDocument::OnPreviewHandlerTranslateAccelerator](#onpreviewhandlertranslateaccelerator)|Indirizza il gestore di anteprima per gestire una sequenza di tasti passato dal message pump del processo in cui è in esecuzione il gestore di anteprima.|  
|[CDocument::OnRichPreviewBackColorChanged](#onrichpreviewbackcolorchanged)|Chiamato quando viene modificato il colore di sfondo di anteprima avanzata.|  
|[CDocument::OnRichPreviewFontChanged](#onrichpreviewfontchanged)|Chiamato quando il tipo di carattere Anteprima avanzata.|  
|[CDocument::OnRichPreviewSiteChanged](#onrichpreviewsitechanged)|Chiamato quando viene modificato il sito di anteprima avanzata.|  
|[CDocument::OnRichPreviewTextColorChanged](#onrichpreviewtextcolorchanged)|Chiamato quando viene modificato il colore del testo Anteprima avanzata.|  
|[CDocument::OnSaveDocument](#onsavedocument)|Chiamata eseguita per salvare il documento su disco.|  
|[CDocument::OnUnloadHandler](#onunloadhandler)|Chiamato dal framework quando sta per essere scaricato il gestore di anteprima.|  
|[CDocument::PreCloseFrame](#precloseframe)|Chiamata eseguita prima della chiusura della finestra cornice.|  
|[CDocument::ReadNextChunkValue](#readnextchunkvalue)|Legge il valore di blocco successivo.|  
|[CDocument::ReleaseFile](#releasefile)|Rilascia un file per renderlo disponibile per l'utilizzo da altre applicazioni.|  
|[CDocument::RemoveChunk](#removechunk)|Rimuove un blocco con GUID specificato.|  
|[CDocument::RemoveView](#removeview)|Scollega una visualizzazione dal documento.|  
|[CDocument::ReportSaveLoadException](#reportsaveloadexception)|Advanced sottoponibile a override; chiamata eseguita quando un oggetto aperto o Impossibile completare l'operazione di salvataggio a causa di un'eccezione.|  
|[CDocument:: SaveModified](#savemodified)|Advanced sottoponibile a override; chiamata eseguita per chiedere all'utente se il documento deve essere salvato.|  
|[CDocument::SetChunkValue](#setchunkvalue)|Imposta un valore di blocco.|  
|[CDocument::SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica che il documento si è modificati dall'ultimo salvataggio.|  
|[CDocument::SetPathName](#setpathname)|Imposta il percorso del file di dati usato dal documento.|  
|[CDocument::SetTitle](#settitle)|Imposta il titolo del documento.|  
|[UpdateAllViews](#updateallviews)|Notifica a tutte le viste del documento è stato modificato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument:: OnFileSendMail](#onfilesendmail)|Invia un messaggio di posta elettronica con il documento allegato.|  
|[CDocument:: OnUpdateFileSendMail](#onupdatefilesendmail)|Abilita il comando Invia messaggi se è presente il supporto di posta elettronica.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument::m_bGetThumbnailMode](#m_bgetthumbnailmode)|Specifica che `CDocument` oggetto è stato creato da dllhost per le anteprime. Non deve essere archiviato `CView::OnDraw`.|  
|[CDocument::m_bPreviewHandlerMode](#m_bpreviewhandlermode)|Specifica che `CDocument` oggetto è stato creato da prevhost per `Rich Preview`. Non deve essere archiviato `CView::OnDraw`.|  
|[CDocument::m_bSearchMode](#m_bsearchmode)|Specifica che `CDocument` oggetto è stato creato da un indicizzatore o un'altra applicazione di ricerca.|  
|[CDocument::m_clrRichPreviewBackColor](#m_clrrichpreviewbackcolor)|Specifica il colore di sfondo della finestra di anteprima avanzata. Questo colore è impostato dall'host.|  
|[CDocument::m_clrRichPreviewTextColor](#m_clrrichpreviewtextcolor)|Specifica il colore di primo piano della finestra di anteprima avanzata. Questo colore è impostato dall'host.|  
|[CDocument::m_lfRichPreviewFont](#m_lfrichpreviewfont)|Specifica il carattere di testo per la finestra di anteprima avanzata. Queste informazioni di carattere viene impostate dall'host.|  
  
## <a name="remarks"></a>Note  
 Un documento rappresenta l'unità di dati che l'utente in genere viene aperto con il comando File Apri e Salva con il comando Salva.  
  
 **CDocument** supporta le operazioni standard, ad esempio la creazione di un documento, il caricamento e averlo salvato. Il framework di modifica di documenti tramite l'interfaccia definita da **CDocument**.  
  
 Un'applicazione può supportare più di un tipo di documento. ad esempio, un'applicazione potrebbe supportare sia i fogli di calcolo e documenti di testo. Ogni tipo di documento è un modello di documento associato. il modello di documento specifica le risorse (ad esempio, menu, icona o i tasti di scelta rapida tabella) vengono utilizzate per il tipo di documento. Ogni documento contiene un puntatore a esso associata `CDocTemplate` oggetto.  
  
 Gli utenti interagiscono con un documento tramite il [CView](../../mfc/reference/cview-class.md) oggetti associati. Una vista esegue il rendering di un'immagine del documento in una finestra cornice e interpreta l'input dell'utente come operazioni sul documento. Un documento può disporre di più visualizzazioni associate. Quando l'utente apre una finestra in un documento, il framework crea una vista che viene associato al documento. Il modello di documento specifica il tipo di visualizzazione e la finestra cornice vengono utilizzati per visualizzare ogni tipo di documento.  
  
 Documenti fanno parte dello standard del framework di routing di comandi e di conseguenza ricevono comandi da componenti dell'interfaccia utente standard (ad esempio, la voce di menu Salva). Un documento riceve comandi inoltrati per la visualizzazione attiva. Se il documento non gestisce un comando specifico, in cui viene inoltrato il comando per il modello di documento che lo gestisce.  
  
 Quando vengono modificati i dati di un documento, ognuna delle visualizzazioni deve riflettere tali modifiche. **CDocument** fornisce il [UpdateAllViews](#updateallviews) funzione membro per la notifica le visualizzazioni di tali modifiche, in modo le viste possono ridisegnarsi in base alle esigenze. Inoltre, il framework richiede all'utente di salvare un file modificato prima della chiusura.  
  
 Per implementare i documenti in una tipica applicazione, è necessario eseguire le operazioni seguenti:  
  
-   Derivare una classe da **CDocument** per ogni tipo di documento.  
  
-   Aggiungere variabili membro per archiviare i dati di ogni documento.  
  
-   Implementare le funzioni membro per leggere e modificare i dati del documento. Le visualizzazioni del documento sono gli utenti più importanti di queste funzioni membro.  
  
-   Eseguire l'override di [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) funzione membro nella classe di documento per scrivere e leggere i dati del documento al e dal disco.  
  
 **CDocument** supporta l'invio al documento tramite posta elettronica se è presente il supporto di posta elettronica (MAPI). Vedere gli articoli [MAPI](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).  
  
 Per ulteriori informazioni su **CDocument**, vedere [serializzazione](../../mfc/serialization-in-mfc.md), [argomenti relativi all'architettura documento/visualizzazione](../../mfc/document-view-architecture.md), e [creazione documento/visualizzazione](../../mfc/document-view-creation.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocument`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="addview"></a>  CDocument:: AddView  
 Chiamare questa funzione per associare una vista al documento.  
  
```  
void AddView(CView* pView);
```  
  
### <a name="parameters"></a>Parametri  
 `pView`  
 Punta alla visualizzazione da aggiungere.  
  
### <a name="remarks"></a>Note  
 Questa funzione aggiunge la visualizzazione specificata all'elenco di viste associate del documento. la funzione imposta inoltre il proprio puntatore documento al documento. Il framework chiama questa funzione quando ci si connette un oggetto vista appena creata in un documento. Questo errore si verifica in risposta a un comando File nuovo, Apri o una nuova finestra o in una finestra con separatore divisa.  
  
 Chiamare questa funzione solo se si creano manualmente e collegamento di una vista. In genere si consentirà il framework di connettersi a documenti e visualizzazioni definendo un [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) oggetto per associare una classe documento, una classe di visualizzazione e classe finestra cornice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocViewSDI#12](../../mfc/codesnippet/cpp/cdocument-class_1.cpp)]  
  
##  <a name="beginreadchunks"></a>  CDocument::BeginReadChunks  
 Inizializza blocco lettura.  
  
```  
virtual void BeginReadChunks ();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="cancloseframe"></a>  CDocument::CanCloseFrame  
 Chiamato dal framework prima della chiusura di una finestra cornice Visualizza il documento.  
  
```  
virtual BOOL CanCloseFrame(CFrameWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 `pFrame`  
 Punta alla finestra cornice di una vista associata al documento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è sicuro chiudere la finestra cornice. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita controlla se sono presenti altre finestre cornice Visualizza il documento. Se la finestra cornice specificata è l'ultimo che consente di visualizzare il documento, la funzione richiede all'utente di salvare il documento, se è stato modificato. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando viene chiusa una finestra cornice. Si tratta di un avanzato sottoponibile a override.  
  
##  <a name="cdocument"></a>  CDocument::CDocument  
 Costruisce un **CDocument** oggetto.  
  
```  
CDocument();
```  
  
### <a name="remarks"></a>Note  
 Il framework gestisce la creazione di documenti per l'utente. Eseguire l'override di [OnNewDocument](#onnewdocument) funzione membro per eseguire l'inizializzazione su una base per ogni documento; ciò è particolarmente importante in applicazioni single document interface (SDI).  
  
##  <a name="clearchunklist"></a>  CDocument::ClearChunkList  
 Cancella l'elenco di blocco.  
  
```  
virtual void ClearChunkList ();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="clearpathname"></a>  CDocument::ClearPathName  
 Cancella il percorso dell'oggetto documento.  
  
```  
virtual void ClearPathName();
```  
  
### <a name="remarks"></a>Note  
 Cancellare il percorso da un `CDocument` oggetto provoca l'applicazione richiedere all'utente quando il documento viene quindi salvato. In questo modo un **salvare** comando si comportano come un **Salva con nome** comando.  
  
##  <a name="deletecontents"></a>  CDocument::DeleteContents  
 Chiamato dal framework per eliminare i dati del documento senza eliminare il **CDocument** oggetto stesso.  
  
```  
virtual void DeleteContents();
```  
  
### <a name="remarks"></a>Note  
 Viene chiamato prima che il documento è di essere eliminati. Viene inoltre chiamato per verificare che un documento è vuoto prima che venga riutilizzato. Ciò è particolarmente importante per un'applicazione SDI, che utilizza un solo documento. ogni volta che l'utente crea o apre un altro documento, viene riutilizzato il documento. Chiamare questa funzione per implementare un' "Modifica Cancella tutto" o un comando simile che elimina tutti i dati del documento. L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per eliminare i dati nel documento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#57](../../mfc/codesnippet/cpp/cdocument-class_2.cpp)]  
  
##  <a name="findchunk"></a>  CDocument::FindChunk  
 Cerca un blocco con un GUID specificato.  
  
```  
virtual POSITION FindChunk(
    REFCLSID guid,  
    DWORD pid);
```  
  
### <a name="parameters"></a>Parametri  
 `guid`  
 Specifica il GUID di un blocco da trovare.  
  
 `pid`  
 Specifica un PID di un blocco da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Posizione nell'elenco di blocco interno, se ha esito positivo. In caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getadapter"></a>  CDocument::GetAdapter  
 Restituisce un puntatore a un oggetto che implementa il `IDocument` interfaccia.  
  
```  
virtual ATL::IDocument* GetAdapter();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un oggetto che implementa il `IDocument` interfaccia.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdoctemplate"></a>  CDocument::GetDocTemplate  
 Chiamare questa funzione per ottenere un puntatore al modello di documento per questo tipo di documento.  
  
```  
CDocTemplate* GetDocTemplate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al modello di documento per questo tipo di documento o **NULL** se il documento non è gestito da un modello di documento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#58](../../mfc/codesnippet/cpp/cdocument-class_3.cpp)]  
  
##  <a name="getfile"></a>  CDocument::GetFile  
 Chiamare questa funzione membro per ottenere un puntatore a un `CFile` oggetto.  
  
```  
virtual CFile* GetFile(
    LPCTSTR lpszFileName,  
    UINT nOpenFlags,  
    CFileException* pError);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFileName`  
 Stringa che rappresenta il percorso del file desiderato. Il percorso potrebbe essere relativo o assoluto.  
  
 `pError`  
 Un puntatore a un oggetto eccezione di file esistente che indica lo stato di completamento dell'operazione.  
  
 `nOpenFlags`  
 La condivisione e modalità di accesso. Specifica l'azione da eseguire all'apertura del file. È possibile combinare le opzioni elencate nel costruttore CFile [CFile::CFile](../../mfc/reference/cfile-class.md#cfile) usando l'operatore OR (&#124;) (operatore). Sono richieste l'autorizzazione di un accesso e all'opzione di una condivisione il **modeCreate** e **modeNoInherit** modalità sono facoltative.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CFile` oggetto.  
  
##  <a name="getfirstviewposition"></a>  CDocument::GetFirstViewPosition  
 Chiamare questa funzione per ottenere la posizione della prima vista nell'elenco di viste associate al documento.  
  
```  
virtual POSITION GetFirstViewPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per l'iterazione con la [GetNextView](#getnextview) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#59](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]  
  
##  <a name="getnextview"></a>  CDocument::GetNextView  
 Chiamare questa funzione per scorrere tutte le visualizzazioni del documento.  
  
```  
virtual CView* GetNextView(POSITION& rPosition) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `rPosition`  
 Un riferimento a un **posizione** valore restituito da una precedente chiamata al `GetNextView` o [GetFirstViewPosition](#getfirstviewposition) funzioni membro. Questo valore non deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla visualizzazione identificato da `rPosition`.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce la visualizzazione identificata da `rPosition` e quindi imposta `rPosition` per il **posizione** valore nella visualizzazione successiva nell'elenco. Se la vista recuperata è l'ultimo nell'elenco, quindi `rPosition` è impostato su **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#59](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]  
  
##  <a name="getpathname"></a>  CDocument::GetPathName  
 Chiamare questa funzione per ottenere il percorso completo del file del documento.  
  
```  
const CString& GetPathName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Percorso completo del documento. Questa stringa è vuota se il documento non è stato salvato o non dispone di un file di disco associato.  
  
##  <a name="getthumbnail"></a>  CDocument::GetThumbnail  
 Crea una bitmap per essere utilizzato dal provider di anteprima per visualizzare l'anteprima.  
  
```  
virtual BOOL GetThumbnail(
    UINT cx,  
    HBITMAP* phbmp,  
    DWORD* pdwAlpha);
```  
  
### <a name="parameters"></a>Parametri  
 `cx`  
 Specifica la larghezza e altezza della bitmap.  
  
 `phbmp`  
 Contiene un handle per una bitmap, quando la funzione ha esito positivo.  
  
 `pdwAlpha`  
 Contiene un valore DWORD che specifica il valore del canale alfa, quando la funzione ha esito positivo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se una bitmap per l'anteprima è stata creata correttamente; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettitle"></a>  CDocument::GetTitle  
 Chiamare questa funzione per ottenere il titolo del documento, in genere derivato dal nome file del documento.  
  
```  
const CString& GetTitle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il titolo del documento.  
  
##  <a name="initializesearchcontent"></a>  CDocument::InitializeSearchContent  
 Chiamato per inizializzare il contenuto di ricerca per il gestore di ricerca.  
  
```  
virtual void InitializeSearchContent ();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata per inizializzare il contenuto di ricerca. Il contenuto deve essere una stringa con parti delimitate da ";". Selezionare, ad esempio,"; rettangolo; elemento OLE".  
  
##  <a name="ismodified"></a>  CDocument::IsModified  
 Chiamare questa funzione per determinare se il documento è stato modificato dall'ultimo salvataggio.  
  
```  
virtual BOOL IsModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato modificato dopo l'ultimo salvataggio; in caso contrario 0.  
  
##  <a name="issearchandorganizehandler"></a>  CDocument::IsSearchAndOrganizeHandler  
 Indica se questa istanza di `CDocument` è stato creato per il gestore di ricerca & Organizza.  
  
```  
BOOL IsSearchAndOrganizeHandler() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se questa istanza di `CDocument` è stato creato per il gestore di ricerca & Organizza.  
  
### <a name="remarks"></a>Note  
 Attualmente, questa funzione restituisce `TRUE` solo per i gestori di anteprima avanzata implementati in un timeout del server di elaborazione. È possibile impostare i flag appropriati (m_bPreviewHandlerMode, m_bSearchMode, m_bGetThumbnailMode) il livello di applicazione per rendere questa funzione restituito `TRUE`.  
  
##  <a name="loaddocumentfromstream"></a>  CDocument::LoadDocumentFromStream  
 Chiamato per caricare i dati del documento da un flusso.  
  
```  
virtual HRESULT LoadDocumentFromStream(
    IStream* pStream,  
    DWORD dwGrfMode);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 Puntatore a un flusso. Il flusso viene fornito dalla Shell.  
  
 `dwGrfMode`  
 Modalità di accesso nel flusso.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione di caricamento ha esito positivo, in caso contrario HRESULT con un codice di errore.  
  
### <a name="remarks"></a>Note  
 È possibile eseguire l'override di questo metodo in una classe derivata per personalizzare la modalità caricare i dati dal flusso.  
  
##  <a name="m_bgetthumbnailmode"></a>  CDocument::m_bGetThumbnailMode  
 Specifica che il `CDocument` oggetto è stato creato da dllhost per le anteprime. Non deve essere archiviato `CView::OnDraw`.  
  
```  
BOOL m_bGetThumbnailMode;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE` indica che il documento è stato creato da dllhost per le anteprime.  
  
##  <a name="m_bpreviewhandlermode"></a>  CDocument::m_bPreviewHandlerMode  
 Specifica che il `CDocument` oggetto è stato creato da prevhost per l'anteprima avanzata. Non deve essere archiviato `CView::OnDraw`.  
  
```  
BOOL m_bPreviewHandlerMode;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE` indica che il documento è stato creato da prevhost per l'anteprima avanzata.  
  
##  <a name="m_bsearchmode"></a>  CDocument::m_bSearchMode  
 Specifica che il `CDocument` oggetto è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.  
  
```  
BOOL m_bSearchMode;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE` indica che il documento è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.  
  
##  <a name="m_clrrichpreviewbackcolor"></a>  CDocument::m_clrRichPreviewBackColor  
 Specifica il colore di sfondo della finestra di anteprima avanzata. Questo colore è impostato dall'host.  
  
```  
COLORREF m_clrRichPreviewBackColor;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_clrrichpreviewtextcolor"></a>  CDocument::m_clrRichPreviewTextColor  
 Specifica il colore di primo piano della finestra di anteprima avanzata. Questo colore è impostato dall'host.  
  
```  
COLORREF m_clrRichPreviewTextColor;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_lfrichpreviewfont"></a>  CDocument::m_lfRichPreviewFont  
 Specifica il tipo di carattere per la finestra di anteprima avanzata. Queste informazioni di carattere viene impostate dall'host.  
  
```  
CFont m_lfRichPreviewFont;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onbeforerichpreviewfontchanged"></a>  CDocument::OnBeforeRichPreviewFontChanged  
 Chiamato prima che venga modificato il tipo di carattere Anteprima avanzata.  
  
```  
virtual void OnBeforeRichPreviewFontChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onchangedviewlist"></a>  CDocument::OnChangedViewList  
 Chiamato dal framework dopo una vista viene aggiunto o rimosso dal documento.  
  
```  
virtual void OnChangedViewList();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione controlla se l'ultima visualizzazione viene rimosso e, in tal caso, Elimina il documento. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando il framework aggiunge o rimuove una vista. Ad esempio, se si desidera che il documento rimangono aperti anche quando nessuna visualizzazione associata, l'override della funzione.  
  
##  <a name="onclosedocument"></a>  CDocument::OnCloseDocument  
 Chiamato dal framework quando il documento viene chiuso, in genere come parte del comando File Close.  
  
```  
virtual void OnCloseDocument();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione Elimina tutti i frame utilizzati per la visualizzazione del documento, chiude la visualizzazione, la pulizia del contenuto del documento e quindi chiama il [DeleteContents](#deletecontents) funzione membro per eliminare il documento dati.  
  
 Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale pulizia quando il framework chiude un documento. Ad esempio, se il documento rappresenta un record in un database, è consigliabile eseguire l'override di questa funzione per chiudere il database. È necessario chiamare la versione della classe di base di questa funzione dalla sostituzione.  
  
##  <a name="oncreatepreviewframe"></a>  CDocument::OnCreatePreviewFrame  
 Chiamato dal framework quando è necessario creare un frame di anteprima per l'anteprima avanzata.  
  
```  
virtual BOOL OnCreatePreviewFrame();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se il frame è stato creato correttamente; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondocumentevent"></a>  CDocument::OnDocumentEvent  
 Chiamato dal framework in risposta a un evento di documento.  
  
```  
virtual void OnDocumentEvent(DocumentEvent deEvent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `deEvent`  
 Tipo di dati enumerato che descrive il tipo di evento.  
  
### <a name="remarks"></a>Note  
 Gli eventi del documento potrebbero influire sulla più classi. Questo metodo è responsabile della gestione degli eventi di documento che interessano diverso da classi di [CDocument (classe)](../../mfc/reference/cdocument-class.md). Attualmente, l'unica classe che deve rispondere a eventi di documento è il [CDataRecoveryHandler classe](../../mfc/reference/cdatarecoveryhandler-class.md). Il `CDocument` classe dispone di altri metodi sostituibile responsabile della gestione l'effetto sul `CDocument`.  
  
 Nella tabella seguente sono elencati i valori possibili per `deEvent` e gli eventi che corrispondono alla.  
  
|Valore|Evento corrispondente|  
|-----------|-------------------------|  
|`onAfterNewDocument`|È stato creato un nuovo documento.|  
|`onAfterOpenDocument`|È stato aperto un nuovo documento.|  
|`onAfterSaveDocument`|Il documento è stato salvato.|  
|`onAfterCloseDocument`|Il documento è stato chiuso.|  
  
##  <a name="ondrawthumbnail"></a>  CDocument::OnDrawThumbnail  
 Eseguire l'override di questo metodo in una classe derivata per disegnare l'immagine di anteprima.  
  
```  
virtual void OnDrawThumbnail(
    CDC& dc,  
    LPRECT lprcBounds);
```  
  
### <a name="parameters"></a>Parametri  
 `dc`  
 Un riferimento a un contesto di dispositivo.  
  
 `lprcBounds`  
 Specifica un rettangolo di delimitazione dell'area in cui deve essere disegnato l'anteprima.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onfilesendmail"></a>  CDocument:: OnFileSendMail  
 Invia un messaggio tramite l'host della posta elettronica residenti (se presente) con il documento come allegato.  
  
```  
void OnFileSendMail();
```  
  
### <a name="remarks"></a>Note  
 `OnFileSendMail` le chiamate [OnSaveDocument](#onsavedocument) per serializzare (documenti senza nome e modificati in un file temporaneo, che viene quindi inviato tramite posta elettronica Salva). Se il documento non è stato modificato, un file temporaneo non è necessaria. viene inviato originale. `OnFileSendMail` Carica MAPI32. DLL se non è già stato caricato.  
  
 Un'implementazione speciale di `OnFileSendMail` per [COleDocument](../../mfc/reference/coledocument-class.md) gestisce correttamente i file compositi.  
  
 **CDocument** supporta l'invio al documento tramite posta elettronica se è presente il supporto di posta elettronica (MAPI). Vedere gli articoli [MAPI argomenti](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).  
  
##  <a name="onloaddocumentfromstream"></a>  CDocument::OnLoadDocumentFromStream  
 Chiamato dal framework quando è necessario caricare i dati del documento da un flusso.  
  
```  
virtual HRESULT OnLoadDocumentFromStream(
    IStream* pStream,  
    DWORD grfMode);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 Puntatore a un flusso in ingresso.  
  
 `grfMode`  
 Modalità di accesso nel flusso.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il caricamento ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onnewdocument"></a>  CDocument::OnNewDocument  
 Chiamato dal framework come parte del comando File nuovo.  
  
```  
virtual BOOL OnNewDocument();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato correttamente inizializzato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama la [DeleteContents](#deletecontents) funzione membro per assicurarsi che il documento è vuoto e quindi contrassegna il nuovo documento come pulita. Eseguire l'override di questa funzione per inizializzare la struttura di dati per un nuovo documento. È necessario chiamare la versione della classe di base di questa funzione dalla sostituzione.  
  
 Se l'utente sceglie il comando File nuovo in un'applicazione SDI, il framework utilizza questa funzione per reinizializzare il documento esistente anziché crearne uno nuovo. Se l'utente sceglie il nuovo File in un'applicazione di multiple document interface (MDI), il framework crea un nuovo documento ogni volta e quindi chiama questa funzione per inizializzarla. In questa funzione anziché nel costruttore per il comando File nuovo per essere efficace per le applicazioni SDI, è necessario inserire il codice di inizializzazione.  
  
 Si noti che esistono casi in `OnNewDocument` viene chiamato due volte. Questo errore si verifica quando il documento incorporato come un Server di documenti ActiveX. Viene innanzitutto chiamata la funzione il `CreateInstance` (metodo) (esposti dal `COleObjectFactory`-classe derivata) e una seconda volta per il `InitNew` (metodo) (esposti dal `COleServerDoc`-classe derivata).  
  
### <a name="example"></a>Esempio  
 Negli esempi seguenti sono disponibili metodi alternativi per l'inizializzazione di un oggetto documento.  
  
 [!code-cpp[NVC_MFCDocView#60](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#61](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#62](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]  
  
##  <a name="onopendocument"></a>  CDocument:: OnOpenDocument  
 Chiamato dal framework come parte del comando File Apri.  
  
```  
virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPathName`  
 Punta al percorso del documento da aprire.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato caricato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione consente di aprire il file specificato, le chiamate di [DeleteContents](#deletecontents) chiama la funzione membro per assicurarsi che il documento è vuoto, [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per leggere il file il contenuto e quindi contrassegnato come di pulizia. Eseguire l'override di questa funzione se si desidera utilizzare un nome diverso dal meccanismo di archiviazione o il meccanismo di file. Ad esempio, è possibile scrivere un'applicazione in cui i documenti rappresentano i record in un database anziché in file separati.  
  
 Se l'utente sceglie il comando Apri File in un'applicazione SDI, il framework utilizza questa funzione per reinizializzare esistente **CDocument** oggetto, anziché crearne uno nuovo. Se l'utente sceglie Apri File in un'applicazione MDI, il framework crea un nuovo **CDocument** oggetto ogni volta e quindi chiama questa funzione per inizializzarla. In questa funzione anziché nel costruttore per il comando Apri File per essere efficace per le applicazioni SDI, è necessario inserire il codice di inizializzazione.  
  
### <a name="example"></a>Esempio  
 Negli esempi seguenti sono disponibili metodi alternativi per l'inizializzazione di un oggetto documento.  
  
 [!code-cpp[NVC_MFCDocView#60](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#61](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#62](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#63](../../mfc/codesnippet/cpp/cdocument-class_8.cpp)]  
  
##  <a name="onpreviewhandlerqueryfocus"></a>  CDocument::OnPreviewHandlerQueryFocus  
 Indirizza il gestore di anteprima per restituire HWND recuperati dalla chiamata di `GetFocus` (funzione).  
  
```  
virtual HRESULT OnPreviewHandlerQueryFocus(HWND* phwnd);
```  
  
### <a name="parameters"></a>Parametri  
 `phwnd`  
 [out] Quando termina, questo metodo contiene un puntatore a HWND restituito dalla chiamata di `GetFocus` funzione dal thread in primo piano del gestore di anteprima.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se ha esito positivo. o un valore di errore in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onpreviewhandlertranslateaccelerator"></a>  CDocument::OnPreviewHandlerTranslateAccelerator  
 Indirizza il gestore di anteprima per gestire una sequenza di tasti passato dal message pump del processo in cui è in esecuzione il gestore di anteprima.  
  
```  
virtual HRESULT OnPreviewHandlerTranslateAccelerator(MSG* pmsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pmsg`  
 [in] Puntatore a una finestra di messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Se il messaggio di sequenza di tasti può essere elaborato dal gestore di anteprima, il gestore elabora e restituisce S_OK. Se il gestore di anteprima non è in grado di elaborare il messaggio di sequenza di tasti, offre all'host tramite `IPreviewHandlerFrame::TranslateAccelerator`. Se l'host elabora il messaggio, questo metodo restituisce S_OK. Se l'host non in grado di elaborare il messaggio, questo metodo restituisce S_FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onrichpreviewbackcolorchanged"></a>  CDocument::OnRichPreviewBackColorChanged  
 Chiamato quando viene modificato il colore di sfondo anteprima avanzata.  
  
```  
virtual void OnRichPreviewBackColorChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onrichpreviewfontchanged"></a>  CDocument::OnRichPreviewFontChanged  
 Chiamato quando viene modificato il tipo di carattere Anteprima avanzata.  
  
```  
virtual void OnRichPreviewFontChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onrichpreviewsitechanged"></a>  CDocument::OnRichPreviewSiteChanged  
 Chiamato quando viene modificato il sito di anteprima avanzata.  
  
```  
virtual void OnRichPreviewSiteChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onrichpreviewtextcolorchanged"></a>  CDocument::OnRichPreviewTextColorChanged  
 Chiamato quando viene modificato il colore del testo Anteprima avanzata.  
  
```  
virtual void OnRichPreviewTextColorChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onsavedocument"></a>  CDocument::OnSaveDocument  
 Chiamato dal framework come parte del comando File Salva o Salva con nome.  
  
```  
virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPathName`  
 Punta a un percorso completo in cui deve essere salvato il file.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato salvato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione consente di aprire il file specificato, le chiamate [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per scrivere i dati del documento per file e i segni di documento come eseguire la pulizia. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando il framework consente di salvare un documento. Ad esempio, è possibile scrivere un'applicazione in cui i documenti rappresentano i record in un database anziché in file separati.  
  
##  <a name="onunloadhandler"></a>  CDocument::OnUnloadHandler  
 Chiamato dal framework quando viene scaricato il gestore di anteprima.  
  
```  
virtual void OnUnloadHandler();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onupdatefilesendmail"></a>  CDocument:: OnUpdateFileSendMail  
 Consente di **ID_FILE_SEND_MAIL** comando se è presente il supporto di posta elettronica (MAPI).  
  
```  
void OnUpdateFileSendMail(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore al [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto associato di **ID_FILE_SEND_MAIL** comando.  
  
### <a name="remarks"></a>Note  
 In caso contrario la funzione rimuove il **ID_FILE_SEND_MAIL** comando dal menu, inclusi i separatori sopra o sotto il menu elemento come appropriato. MAPI è abilitata se MAPI32. DLL è presente nel percorso e, nella sezione del file WIN [posta elettronica]. File INI, MAPI = 1. La maggior parte delle applicazioni di inserire questo comando dal menu File.  
  
 **CDocument** supporta l'invio al documento tramite posta elettronica se è presente il supporto di posta elettronica (MAPI). Vedere gli articoli [MAPI argomenti](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).  
  
##  <a name="precloseframe"></a>  CDocument::PreCloseFrame  
 Questa funzione membro viene chiamata dal framework prima la finestra cornice viene eliminato definitivamente.  
  
```  
virtual void PreCloseFrame(CFrameWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 `pFrame`  
 Puntatore al [CFrameWnd](../../mfc/reference/cframewnd-class.md) che contiene l'oggetto associato **CDocument** oggetto.  
  
### <a name="remarks"></a>Note  
 Può essere sostituito per fornire pulizia personalizzata, ma assicurarsi di chiamare anche la classe base.  
  
 Il valore predefinito di `PreCloseFrame` non esegue alcuna operazione **CDocument**. Il **CDocument**-classi derivate [COleDocument](../../mfc/reference/coledocument-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) utilizzare questa funzione membro.  
  
##  <a name="readnextchunkvalue"></a>  CDocument::ReadNextChunkValue  
 Legge il valore di blocco successivo.  
  
```  
virtual BOOL ReadNextChunkValue(IFilterChunkValue** ppValue);
```  
  
### <a name="parameters"></a>Parametri  
 `ppValue`  
 [out] Quando la funzione restituisce un risultato, `ppValue` contiene il valore che è stato letto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="releasefile"></a>  CDocument::ReleaseFile  
 Questa funzione membro viene chiamata dal framework per rilasciare un file, rendendo disponibili per l'uso da altre applicazioni.  
  
```  
virtual void ReleaseFile(
    CFile* pFile,  
    BOOL bAbort);
```  
  
### <a name="parameters"></a>Parametri  
 `pFile`  
 Un puntatore all'oggetto CFile da rilasciare.  
  
 `bAbort`  
 Specifica se il file deve essere rilasciato tramite `CFile::Close` o `CFile::Abort`. **FALSE** se il file deve essere liberata usando [CFile::Close](../../mfc/reference/cfile-class.md#close); **TRUE** se il file deve essere liberata usando [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).  
  
### <a name="remarks"></a>Note  
 Se `bAbort` è **TRUE**, `ReleaseFile` chiamate `CFile::Abort`, mentre il file viene rilasciato. `CFile::Abort` non genererà un'eccezione.  
  
 Se `bAbort` è **FALSE**, `ReleaseFile` chiamate `CFile::Close` e il file viene rilasciato.  
  
 Eseguire l'override di questa funzione membro per richiedere un intervento dell'utente prima che il file viene rilasciato.  
  
##  <a name="removechunk"></a>  CDocument::RemoveChunk  
 Rimuove un blocco con il GUID specificato.  
  
```  
virtual void RemoveChunk(
    REFCLSID guid,  
    DWORD pid);
```  
  
### <a name="parameters"></a>Parametri  
 `Guid`  
 Specifica il GUID di un blocco da rimuovere.  
  
 `Pid`  
 Specifica il PID di un blocco da rimuovere.  
  
### <a name="remarks"></a>Note  
  
##  <a name="removeview"></a>  CDocument::RemoveView  
 Chiamare questa funzione per scollegare una vista da un documento.  
  
```  
void RemoveView(CView* pView);
```  
  
### <a name="parameters"></a>Parametri  
 `pView`  
 Punta alla visualizzazione in corso la rimozione.  
  
### <a name="remarks"></a>Note  
 Questa funzione rimuove la visualizzazione specificata dall'elenco di viste associate del documento. Imposta inoltre il proprio puntatore documento su **NULL**. Questa funzione viene chiamata dal framework quando viene chiusa una finestra cornice o viene chiuso un riquadro di una finestra con separatore.  
  
 Chiamare questa funzione solo se si è manualmente lo scollegamento di una vista. In genere si consentirà il framework scollegare i documenti e visualizzazioni definendo un [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) oggetto per associare una classe documento, una classe di visualizzazione e classe finestra cornice.  
  
 Vedere l'esempio in [AddView](#addview) per un esempio di implementazione.  
  
##  <a name="reportsaveloadexception"></a>  CDocument::ReportSaveLoadException  
 Chiamata eseguita se viene generata un'eccezione (in genere un [CFileException](../../mfc/reference/cfileexception-class.md) o [eccezione CArchiveException](../../mfc/reference/carchiveexception-class.md)) durante il salvataggio o il caricamento del documento.  
  
```  
virtual void ReportSaveLoadException(
    LPCTSTR lpszPathName,  
    CException* e,  
    BOOL bSaving,  
    UINT nIDPDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPathName`  
 Punta al nome del documento che è stato salvato o caricato.  
  
 *e*  
 Punta all'eccezione generata. Potrebbe essere **NULL**.  
  
 *bSaving*  
 Flag che indica quale operazione era in corso; diverso da zero se il documento viene salvato, 0 se il documento è stato caricato.  
  
 `nIDPDefault`  
 Identificatore del messaggio di errore da visualizzare se la funzione non corrisponde a uno più specifico.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita esamina l'oggetto eccezione e cerca un messaggio di errore che descrive la causa. Se non viene trovato un messaggio specifico o se *e* è **NULL**, il messaggio generale specificato il `nIDPDefault` parametro viene utilizzato. La funzione quindi visualizza una finestra di messaggio contenente il messaggio di errore. Eseguire l'override di questa funzione fornire messaggi di errore personalizzate aggiuntive. Si tratta di un avanzato sottoponibile a override.  
  
##  <a name="savemodified"></a>  CDocument:: SaveModified  
 Chiamato dal framework prima che sia un documento modificato per essere chiuso.  
  
```  
virtual BOOL SaveModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è possibile continuare e chiudere il documento. 0 se il documento non deve essere chiuso.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione consente di visualizzare una finestra di messaggio che chiede all'utente se si desidera salvare le modifiche al documento, se qualsiasi sono stato apportato. Eseguire l'override di questa funzione se il programma richiede una diversa procedura richiesta. Si tratta di un avanzato sottoponibile a override.  
  
##  <a name="setchunkvalue"></a>  CDocument::SetChunkValue  
 Imposta un valore di blocco.  
  
```  
virtual BOOL SetChunkValue (IFilterChunkValue* pValue);
```  
  
### <a name="parameters"></a>Parametri  
 `pValue`  
 Specifica un valore di blocco da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setmodifiedflag"></a>  CDocument::SetModifiedFlag  
 Dopo avere apportato le modifiche al documento, chiamare questa funzione.  
  
```  
virtual void SetModifiedFlag(BOOL bModified = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bModified`  
 Flag che indica se il documento è stato modificato.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione in modo coerente, consente di garantire che il framework richiede all'utente di salvare le modifiche prima di chiudere un documento. In genere è consigliabile utilizzare il valore predefinito di **TRUE** per il `bModified` parametro. Per contrassegnare un documento come eseguire la pulizia (non modificato), chiamare questa funzione con un valore di **FALSE**.  
  
##  <a name="setpathname"></a>  CDocument::SetPathName  
 Chiamare questa funzione per specificare il percorso completo del file del documento.  
  
```  
virtual void SetPathName(
    LPCTSTR lpszPathName,  
    BOOL bAddToMRU = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPathName`  
 Punta alla stringa da utilizzare come percorso per il documento.  
  
 `bAddToMRU`  
 Determina se il nome del file viene aggiunto al più recente (MRU) elenco dei file usati. Se **TRUE,** viene aggiunto il nome del file; se **FALSE**, non viene aggiunto.  
  
### <a name="remarks"></a>Note  
 A seconda del valore di `bAddToMRU` il percorso viene aggiunto o non aggiunti all'elenco MRU gestito dall'applicazione. Si noti che alcuni documenti non sono associati a un file su disco. Chiamare questa funzione solo se si esegue l'override l'implementazione predefinita per l'apertura e salvataggio di file usati dal framework.  
  
##  <a name="settitle"></a>  CDocument::SetTitle  
 Chiamare questa funzione per specificare il titolo del documento (la stringa visualizzata nella barra del titolo di una finestra cornice).  
  
```  
virtual void SetTitle(LPCTSTR lpszTitle);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTitle`  
 Punta alla stringa da usare come titolo del documento.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione Aggiorna i titoli di tutte le finestre cornice che consentono di visualizzare il documento.  
  
##  <a name="updateallviews"></a>  UpdateAllViews  
 Chiamare questa funzione dopo che il documento è stato modificato.  
  
```  
void UpdateAllViews(
    CView* pSender,  
    LPARAM lHint = 0L,  
    CObject* pHint = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pSender`  
 Fa riferimento alla vista che il documento, modificato o **NULL** se tutte le visualizzazioni devono essere aggiornati.  
  
 `lHint`  
 Contiene informazioni sulla modifica.  
  
 `pHint`  
 Punta a un oggetto di archiviazione di informazioni sulla modifica.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare questa funzione dopo la chiamata di [SetModifiedFlag](#setmodifiedflag) funzione membro. Questa funzione informa ogni visualizzazione associata al documento, ad eccezione della visualizzazione da `pSender`, che il documento è stato modificato. In genere chiamare questa funzione dalla classe di visualizzazione dopo che l'utente ha modificato il documento tramite una vista.  
  
 Questa funzione chiama la [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate) visualizzare la funzione membro per ognuna delle visualizzazioni del documento, ad eccezione di invio, passando `pHint` e `lHint`. Utilizzare questi parametri per passare informazioni alle visualizzazioni sulle modifiche apportate al documento. È possibile codificare informazioni tramite `lHint` e/o è possibile definire un [CObject](../../mfc/reference/cobject-class.md)-derivata per archiviare informazioni sulle modifiche e passare un oggetto di tale classe mediante `pHint`. Eseguire l'override di `CView::OnUpdate` funzione membro nel [CView](../../mfc/reference/cview-class.md)-derivata per ottimizzare l'aggiornamento della visualizzazione della vista in base alle informazioni passate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#64](../../mfc/codesnippet/cpp/cdocument-class_9.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDIDOCVW](../../visual-cpp-samples.md)   
 [Esempio MFC SNAPVW](../../visual-cpp-samples.md)   
 [Esempio MFC NPP](../../visual-cpp-samples.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)
