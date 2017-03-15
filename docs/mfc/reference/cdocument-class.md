---
title: CDocument (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDocument
dev_langs:
- C++
helpviewer_keywords:
- documents [C++], serialization
- files [C++], documents
- command handling, documents and
- documents [C++], document classes
- documents [C++], multiple views
- serialization [C++], documents and
- CDocument class
- command routing, documents and
- views [C++], document
- documents [C++], command routing
ms.assetid: e5a2891d-e1e1-4599-8c7e-afa9b4945446
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 4d64b95f77139d984b855e710f3951434e489dd5
ms.lasthandoff: 02/24/2017

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
|[CDocument:: AddView](#addview)|Collega una visualizzazione del documento.|  
|[CDocument::BeginReadChunks](#beginreadchunks)|Inizializza blocco di lettura.|  
|[CDocument::CanCloseFrame](#cancloseframe)|Advanced sottoponibile a override; chiamato prima di chiudere una finestra cornice la visualizzazione di questo documento.|  
|[CDocument::ClearChunkList](#clearchunklist)|Cancella l'elenco di blocco.|  
|[CDocument::ClearPathName](#clearpathname)|Cancella il percorso dell'oggetto documento.|  
|[CDocument::DeleteContents](#deletecontents)|Chiamato per eseguire la pulizia del documento.|  
|[CDocument::FindChunk](#findchunk)|Cerca un blocco con GUID specificato.|  
|[CDocument::GetAdapter](#getadapter)|Restituisce un puntatore all'oggetto che implementa `IDocument` interfaccia.|  
|[CDocument::GetDocTemplate](#getdoctemplate)|Restituisce un puntatore al modello di documento che descrive il tipo del documento.|  
|[CDocument::GetFile](#getfile)|Restituisce un puntatore all'oggetto desiderato `CFile` oggetto.|  
|[CDocument::GetFirstViewPosition](#getfirstviewposition)|Restituisce la posizione del primo nell'elenco delle viste. utilizzato per avviare l'iterazione.|  
|[CDocument::GetNextView](#getnextview)|Scorrere l'elenco delle viste associato al documento.|  
|[CDocument::GetPathName](#getpathname)|Restituisce il percorso del file di dati del documento.|  
|[CDocument::GetThumbnail](#getthumbnail)|Chiamato per creare un'immagine bitmap per essere utilizzato dal provider di anteprima per visualizzare l'anteprima.|  
|[CDocument::GetTitle](#gettitle)|Restituisce il titolo del documento.|  
|[CDocument::InitializeSearchContent](#initializesearchcontent)|Chiamato per inizializzare il contenuto di ricerca per il gestore della ricerca.|  
|[CDocument::IsModified](#ismodified)|Indica se il documento è stato modificato dopo l'ultimo salvataggio.|  
|[CDocument::IsSearchAndOrganizeHandler](#issearchandorganizehandler)|Indica se questa istanza di `CDocument` per ricerca / organizza gestore è stato creato l'oggetto.|  
|[CDocument::LoadDocumentFromStream](#loaddocumentfromstream)|Chiamato per caricare i dati del documento dal flusso.|  
|[CDocument::OnBeforeRichPreviewFontChanged](#onbeforerichpreviewfontchanged)|Chiamato prima del tipo di carattere Anteprima avanzata.|  
|[CDocument::OnChangedViewList](#onchangedviewlist)|Chiamato dopo che una vista viene aggiunto o rimosso dal documento.|  
|[CDocument::OnCloseDocument](#onclosedocument)|Chiamata per chiudere il documento.|  
|[CDocument::OnCreatePreviewFrame](#oncreatepreviewframe)|Chiamato dal framework quando è necessario creare una cornice di anteprima per l'anteprima avanzata.|  
|[CDocument::OnDocumentEvent](#ondocumentevent)|Chiamato dal framework in risposta a un evento di documento.|  
|[CDocument::OnDrawThumbnail](#ondrawthumbnail)|L'override del metodo in una classe derivata per disegnare il contenuto di anteprima.|  
|[CDocument::OnLoadDocumentFromStream](#onloaddocumentfromstream)|Chiamato dal framework quando è necessario caricare i dati del documento dal flusso.|  
|[CDocument::OnNewDocument](#onnewdocument)|Chiamato per creare un nuovo documento.|  
|[CDocument:: OnOpenDocument](#onopendocument)|Chiamato per aprire un documento esistente.|  
|[CDocument::OnPreviewHandlerQueryFocus](#onpreviewhandlerqueryfocus)|Indirizza il gestore di anteprime per restituire HWND dalla chiamata della funzione GetFocu.|  
|[CDocument::OnPreviewHandlerTranslateAccelerator](#onpreviewhandlertranslateaccelerator)|Indirizza il gestore di anteprime per gestire una sequenza di tasti passato dal message pump di processo in cui viene eseguito il gestore di anteprime.|  
|[CDocument::OnRichPreviewBackColorChanged](#onrichpreviewbackcolorchanged)|Chiamato quando viene modificato il colore di sfondo anteprima avanzata.|  
|[CDocument::OnRichPreviewFontChanged](#onrichpreviewfontchanged)|Chiamato quando viene modificato il carattere Anteprima avanzata.|  
|[CDocument::OnRichPreviewSiteChanged](#onrichpreviewsitechanged)|Chiamato quando l'anteprima avanzata sito è stato modificato.|  
|[CDocument::OnRichPreviewTextColorChanged](#onrichpreviewtextcolorchanged)|Chiamato quando viene modificato il colore di testo Anteprima avanzata.|  
|[CDocument::OnSaveDocument](#onsavedocument)|Chiamato per salvare il documento su disco.|  
|[CDocument::OnUnloadHandler](#onunloadhandler)|Chiamato dal framework quando il gestore di anteprime è in corso lo scaricamento.|  
|[CDocument::PreCloseFrame](#precloseframe)|Chiamato prima che venga chiuso la finestra cornice.|  
|[CDocument::ReadNextChunkValue](#readnextchunkvalue)|Legge il valore di blocco successivo.|  
|[CDocument::ReleaseFile](#releasefile)|Rilascia un file per renderlo disponibile per l'uso da altre applicazioni.|  
|[CDocument::RemoveChunk](#removechunk)|Rimuove un blocco con GUID specificato.|  
|[CDocument::RemoveView](#removeview)|Consente di scollegare il documento di una visualizzazione.|  
|[CDocument::ReportSaveLoadException](#reportsaveloadexception)|Advanced sottoponibile a override; chiamato quando un oggetto aperto o Impossibile completare l'operazione di salvataggio a causa di un'eccezione.|  
|[CDocument:: SaveModified](#savemodified)|Advanced sottoponibile a override; chiamato per chiedere all'utente se il documento deve essere salvato.|  
|[CDocument::SetChunkValue](#setchunkvalue)|Imposta un valore di blocco.|  
|[CDocument::SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica che si è modificati il documento all'ultimo salvataggio.|  
|[CDocument::SetPathName](#setpathname)|Imposta il percorso del file di dati utilizzato dal documento.|  
|[CDocument::SetTitle](#settitle)|Imposta il titolo del documento.|  
|[UpdateAllViews](#updateallviews)|Notifica a tutte le viste del documento è stato modificato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocument:: OnFileSendMail](#onfilesendmail)|Invia un messaggio di posta elettronica con il documento allegato.|  
|[CDocument:: OnUpdateFileSendMail](#onupdatefilesendmail)|Consente il comando Invia messaggi se è presente il supporto di posta elettronica.|  
  
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
 Un documento rappresenta l'unità di dati che l'utente in genere viene aperto con il comando Apri File e salvato con il comando Salva.  
  
 **CDocument** supporta operazioni standard, ad esempio la creazione di un documento, caricamento e salvataggio. Il framework consente di modificare documenti tramite l'interfaccia definita da **CDocument**.  
  
 Un'applicazione può supportare più di un tipo di documento. ad esempio, un'applicazione può supportare sia i fogli di calcolo e documenti di testo. Ogni tipo di documento è un modello di documento associato. il modello di documento specifica le risorse (ad esempio, menu, icona o tasto di scelta rapida tabella) vengono utilizzate per il tipo di documento. Ogni documento contiene un puntatore a essa associati `CDocTemplate` oggetto.  
  
 Gli utenti interagiscono con un documento tramite il [CView](../../mfc/reference/cview-class.md) oggetti associati. Esegue il rendering di un'immagine in una finestra cornice del documento e interpreta l'input dell'utente come operazioni sul documento di una visualizzazione. Un documento può avere più visualizzazioni associate. Quando l'utente apre una finestra in un documento, il framework crea una vista che viene associato al documento. Il modello di documento specifica il tipo di visualizzazione e la finestra cornice vengono utilizzati per visualizzare ogni tipo di documento.  
  
 Documenti fanno parte dello standard del framework routing di comandi e di conseguenza ricevono comandi da componenti dell'interfaccia utente standard (ad esempio, la voce di menu Salva). Un documento riceve comandi inoltrati per la visualizzazione attiva. Se il documento non gestisce un determinato comando, in cui viene inoltrato il comando per il modello di documento che lo gestisce.  
  
 Quando vengono modificati i dati del documento, ognuna delle visualizzazioni deve riflettere tali modifiche. **CDocument** fornisce il [UpdateAllViews](#updateallviews) funzione membro inviare le visualizzazioni di tali modifiche, in modo che le viste ridisegnarsi in base alle esigenze. Inoltre, il framework richiede all'utente di salvare un file modificato prima della chiusura.  
  
 Per implementare i documenti in un'applicazione tipica, è necessario eseguire le operazioni seguenti:  
  
-   Derivare una classe da **CDocument** per ogni tipo di documento.  
  
-   Aggiungere variabili membro per archiviare i dati di ciascun documento.  
  
-   Implementare le funzioni membro per leggere e modificare i dati del documento. Visualizzazioni del documento sono gli utenti più importanti di queste funzioni membro.  
  
-   Eseguire l'override di [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) funzione membro nella classe del documento per scrivere e leggere i dati del documento a e dal disco.  
  
 **CDocument** supporta l'invio del documento tramite posta elettronica se è presente il supporto di posta elettronica (MAPI). Vedere gli articoli [MAPI](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).  
  
 Per ulteriori informazioni su **CDocument**, vedere [serializzazione](../../mfc/serialization-in-mfc.md), [argomenti relativi all'architettura documento/visualizzazione](../../mfc/document-view-architecture.md), e [creazione documento/visualizzazione](../../mfc/document-view-creation.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocument`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-nameaddviewa--cdocumentaddview"></a><a name="addview"></a>CDocument:: AddView  
 Chiamare questa funzione per associare una visualizzazione al documento.  
  
```  
void AddView(CView* pView);
```  
  
### <a name="parameters"></a>Parametri  
 `pView`  
 Punta alla vista da aggiungere.  
  
### <a name="remarks"></a>Note  
 Questa funzione aggiunge la visualizzazione specificata all'elenco di viste associate del documento. la funzione imposta anche il proprio puntatore documento al documento. Il framework chiama questa funzione quando ci si collega un oggetto vista appena creata in un documento. Ciò si verifica in risposta a un comando Nuovo File, Apri File o nuova finestra o in una finestra con separatore divisa.  
  
 Chiamare questa funzione solo se si stanno creando e associare una visualizzazione manualmente. In genere si consentirà il framework connettersi documenti e visualizzazioni definendo un [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per associare una classe documento, classe di visualizzazione e classe finestra cornice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocViewSDI&#12;](../../mfc/codesnippet/cpp/cdocument-class_1.cpp)]  
  
##  <a name="a-namebeginreadchunksa--cdocumentbeginreadchunks"></a><a name="beginreadchunks"></a>CDocument::BeginReadChunks  
 Inizializza blocco di lettura.  
  
```  
virtual void BeginReadChunks ();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecancloseframea--cdocumentcancloseframe"></a><a name="cancloseframe"></a>CDocument::CanCloseFrame  
 Chiamato dal framework prima della chiusura di una finestra cornice di documento.  
  
```  
virtual BOOL CanCloseFrame(CFrameWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 `pFrame`  
 Punta alla finestra cornice di una vista associata al documento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è possibile chiudere la finestra cornice. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita controlla se esistono altre finestre cornice Visualizza il documento. Se la finestra cornice specificata è l'ultimo che visualizza il documento, la funzione richiede all'utente di salvare il documento se è stato modificato. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando viene chiusa una finestra cornice. Questa è un' sottoponibile a override.  
  
##  <a name="a-namecdocumenta--cdocumentcdocument"></a><a name="cdocument"></a>CDocument::CDocument  
 Costruisce un **CDocument** oggetto.  
  
```  
CDocument();
```  
  
### <a name="remarks"></a>Note  
 Il framework gestisce la creazione di documenti per l'utente. Eseguire l'override di [OnNewDocument](#onnewdocument) funzione membro per eseguire l'inizializzazione su una base di ogni documento; ciò è particolarmente importante in applicazioni single document interface (SDI).  
  
##  <a name="a-nameclearchunklista--cdocumentclearchunklist"></a><a name="clearchunklist"></a>CDocument::ClearChunkList  
 Cancella l'elenco di blocco.  
  
```  
virtual void ClearChunkList ();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameclearpathnamea--cdocumentclearpathname"></a><a name="clearpathname"></a>CDocument::ClearPathName  
 Cancella il percorso dell'oggetto documento.  
  
```  
virtual void ClearPathName();
```  
  
### <a name="remarks"></a>Note  
 Cancellare il percorso da un `CDocument` oggetto fa sì che l'applicazione richiedere all'utente quando il documento viene quindi salvato. In questo modo un **salvare** comando comportarsi come un **Salva con nome** comando.  
  
##  <a name="a-namedeletecontentsa--cdocumentdeletecontents"></a><a name="deletecontents"></a>CDocument::DeleteContents  
 Chiamato dal framework di eliminare i dati del documento senza eliminare il **CDocument** oggetto stesso.  
  
```  
virtual void DeleteContents();
```  
  
### <a name="remarks"></a>Note  
 Viene chiamato prima che il documento è di essere eliminati. Viene inoltre chiamato per verificare che un documento sia vuoto prima che venga riutilizzato. Ciò è particolarmente importante per un'applicazione SDI, che utilizza un solo documento. il documento viene riutilizzato ogni volta che l'utente crea o apre un altro documento. Chiamare questa funzione per implementare un' "Modifica Cancella tutto" o un comando simile che elimina tutti i dati del documento. L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per eliminare i dati nel documento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#57;](../../mfc/codesnippet/cpp/cdocument-class_2.cpp)]  
  
##  <a name="a-namefindchunka--cdocumentfindchunk"></a><a name="findchunk"></a>CDocument::FindChunk  
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
 Specifica un PID di un blocco per trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Posizione nell'elenco di blocco interno, se ha esito positivo. In caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetadaptera--cdocumentgetadapter"></a><a name="getadapter"></a>CDocument::GetAdapter  
 Restituisce un puntatore a un oggetto che implementa il `IDocument` interfaccia.  
  
```  
virtual ATL::IDocument* GetAdapter();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un oggetto che implementa il `IDocument` interfaccia.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetdoctemplatea--cdocumentgetdoctemplate"></a><a name="getdoctemplate"></a>CDocument::GetDocTemplate  
 Chiamare questa funzione per ottenere un puntatore al modello di documento per questo tipo di documento.  
  
```  
CDocTemplate* GetDocTemplate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al modello di documento per questo tipo di documento o **NULL** se il documento non è gestito da un modello di documento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#58;](../../mfc/codesnippet/cpp/cdocument-class_3.cpp)]  
  
##  <a name="a-namegetfilea--cdocumentgetfile"></a><a name="getfile"></a>CDocument::GetFile  
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
 Modalità di accesso e condivisione. Specifica l'azione da intraprendere quando si apre il file. È possibile combinare le opzioni elencate nel costruttore CFile [CFile::CFile](../../mfc/reference/cfile-class.md#cfile) utilizzando l'operatore OR bit per bit (operatore) (|). Autorizzazione di un accesso e una condivisione di opzione sono necessarie; il **modeCreate** e **modeNoInherit** modalità sono facoltative.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CFile` oggetto.  
  
##  <a name="a-namegetfirstviewpositiona--cdocumentgetfirstviewposition"></a><a name="getfirstviewposition"></a>CDocument::GetFirstViewPosition  
 Chiamare questa funzione per ottenere la posizione della prima vista nell'elenco delle viste associato al documento.  
  
```  
virtual POSITION GetFirstViewPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per l'iterazione con la [GetNextView](#getnextview) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#59;](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]  
  
##  <a name="a-namegetnextviewa--cdocumentgetnextview"></a><a name="getnextview"></a>CDocument::GetNextView  
 Chiamare questa funzione per l'iterazione attraverso tutte le visualizzazioni del documento.  
  
```  
virtual CView* GetNextView(POSITION& rPosition) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `rPosition`  
 Un riferimento a un **posizione** restituito da una chiamata precedente al valore di `GetNextView` o [GetFirstViewPosition](#getfirstviewposition) funzioni membro. Questo valore non deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla visualizzazione identificato da `rPosition`.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce la vista identificata da `rPosition` e quindi imposta `rPosition` per il **posizione** valore di visualizzazione successiva nell'elenco. Se la vista recuperata è l'ultimo nell'elenco, quindi `rPosition` è impostato su **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#59;](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]  
  
##  <a name="a-namegetpathnamea--cdocumentgetpathname"></a><a name="getpathname"></a>CDocument::GetPathName  
 Chiamare questa funzione per ottenere il percorso completo del file del documento.  
  
```  
const CString& GetPathName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Percorso completo del documento. Questa stringa è vuota se il documento non è stato salvato o non dispone di un file su disco è associato.  
  
##  <a name="a-namegetthumbnaila--cdocumentgetthumbnail"></a><a name="getthumbnail"></a>CDocument::GetThumbnail  
 Crea un'immagine bitmap per essere utilizzato dal provider di anteprima per visualizzare l'anteprima.  
  
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
 Contiene un valore DWORD che specifica il valore di canale alfa, quando la funzione ha esito positivo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se una bitmap per l'anteprima è stata creata correttamente; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettitlea--cdocumentgettitle"></a><a name="gettitle"></a>CDocument::GetTitle  
 Chiamare questa funzione per ottenere il titolo del documento, che è in genere derivato dal nome file del documento.  
  
```  
const CString& GetTitle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il titolo del documento.  
  
##  <a name="a-nameinitializesearchcontenta--cdocumentinitializesearchcontent"></a><a name="initializesearchcontent"></a>CDocument::InitializeSearchContent  
 Chiamato per inizializzare la ricerca del contenuto per il gestore di ricerca.  
  
```  
virtual void InitializeSearchContent ();
```  
  
### <a name="remarks"></a>Note  
 L'override del metodo in una classe derivata per inizializzare il contenuto di ricerca. Il contenuto deve essere una stringa con parti delimitate da ";". Ad esempio, "punto; rettangolo; elemento OLE".  
  
##  <a name="a-nameismodifieda--cdocumentismodified"></a><a name="ismodified"></a>CDocument::IsModified  
 Chiamare questa funzione per determinare se il documento è stato modificato dopo l'ultimo salvataggio.  
  
```  
virtual BOOL IsModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato modificato dopo l'ultimo salvataggio; in caso contrario 0.  
  
##  <a name="a-nameissearchandorganizehandlera--cdocumentissearchandorganizehandler"></a><a name="issearchandorganizehandler"></a>CDocument::IsSearchAndOrganizeHandler  
 Indica se questa istanza di `CDocument` è stato creato per il gestore organizza / ricerca.  
  
```  
BOOL IsSearchAndOrganizeHandler() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se questa istanza di `CDocument` è stato creato per il gestore organizza / ricerca.  
  
### <a name="remarks"></a>Note  
 Attualmente questa funzione restituisce `TRUE` solo per i gestori di anteprime Rich implementati in un timeout del server di elaborazione. È possibile impostare i flag appropriati (m_bPreviewHandlerMode, m_bSearchMode, m_bGetThumbnailMode) il livello di applicazione per rendere questa funzione restituito `TRUE`.  
  
##  <a name="a-nameloaddocumentfromstreama--cdocumentloaddocumentfromstream"></a><a name="loaddocumentfromstream"></a>CDocument::LoadDocumentFromStream  
 Chiamato per caricare i dati del documento da un flusso.  
  
```  
virtual HRESULT LoadDocumentFromStream(
    IStream* pStream,  
    DWORD dwGrfMode);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 Un puntatore a un flusso. Questo flusso viene fornito dalla Shell.  
  
 `dwGrfMode`  
 Modalità di accesso nel flusso.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione di caricamento ha esito positivo, in caso contrario HRESULT con un codice di errore.  
  
### <a name="remarks"></a>Note  
 È possibile eseguire l'override di questo metodo in una classe derivata per personalizzare il modo caricare i dati dal flusso.  
  
##  <a name="a-namembgetthumbnailmodea--cdocumentmbgetthumbnailmode"></a><a name="m_bgetthumbnailmode"></a>CDocument::m_bGetThumbnailMode  
 Specifica che il `CDocument` oggetto è stato creato da dllhost per le anteprime. Non deve essere archiviato `CView::OnDraw`.  
  
```  
BOOL m_bGetThumbnailMode;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE`indica che il documento è stato creato da dllhost per le anteprime.  
  
##  <a name="a-namembpreviewhandlermodea--cdocumentmbpreviewhandlermode"></a><a name="m_bpreviewhandlermode"></a>CDocument::m_bPreviewHandlerMode  
 Specifica che il `CDocument` oggetto è stato creato da prevhost per l'anteprima avanzata. Non deve essere archiviato `CView::OnDraw`.  
  
```  
BOOL m_bPreviewHandlerMode;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE`indica che il documento è stato creato da prevhost per l'anteprima avanzata.  
  
##  <a name="a-namembsearchmodea--cdocumentmbsearchmode"></a><a name="m_bsearchmode"></a>CDocument::m_bSearchMode  
 Specifica che il `CDocument` è stato creato l'oggetto indicizzatore o da un'altra applicazione di ricerca.  
  
```  
BOOL m_bSearchMode;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE`indica che il documento è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.  
  
##  <a name="a-namemclrrichpreviewbackcolora--cdocumentmclrrichpreviewbackcolor"></a><a name="m_clrrichpreviewbackcolor"></a>CDocument::m_clrRichPreviewBackColor  
 Specifica il colore di sfondo della finestra di anteprima avanzata. Questo colore è impostato dall'host.  
  
```  
COLORREF m_clrRichPreviewBackColor;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemclrrichpreviewtextcolora--cdocumentmclrrichpreviewtextcolor"></a><a name="m_clrrichpreviewtextcolor"></a>CDocument::m_clrRichPreviewTextColor  
 Specifica il colore di primo piano della finestra di anteprima avanzata. Questo colore è impostato dall'host.  
  
```  
COLORREF m_clrRichPreviewTextColor;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemlfrichpreviewfonta--cdocumentmlfrichpreviewfont"></a><a name="m_lfrichpreviewfont"></a>CDocument::m_lfRichPreviewFont  
 Specifica il tipo di carattere per la finestra di anteprima avanzata. Queste informazioni di carattere viene impostate dall'host.  
  
```  
CFont m_lfRichPreviewFont;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonbeforerichpreviewfontchangeda--cdocumentonbeforerichpreviewfontchanged"></a><a name="onbeforerichpreviewfontchanged"></a>CDocument::OnBeforeRichPreviewFontChanged  
 Chiamato prima di modificare il tipo di carattere Anteprima avanzata.  
  
```  
virtual void OnBeforeRichPreviewFontChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonchangedviewlista--cdocumentonchangedviewlist"></a><a name="onchangedviewlist"></a>CDocument::OnChangedViewList  
 Chiamato dal framework dopo una vista viene aggiunto o rimosso dal documento.  
  
```  
virtual void OnChangedViewList();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione controlla se l'ultima visualizzazione viene rimossa e, in caso affermativo, Elimina il documento. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando il framework aggiunge o rimuove una vista. Ad esempio, se si desidera che il documento rimangono aperti anche quando nessuna vista collegati a esso, l'override della funzione.  
  
##  <a name="a-nameonclosedocumenta--cdocumentonclosedocument"></a><a name="onclosedocument"></a>CDocument::OnCloseDocument  
 Chiamato dal framework quando il documento viene chiuso, in genere come parte del comando File Close.  
  
```  
virtual void OnCloseDocument();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione Elimina tutti i frame utilizzati per la visualizzazione del documento, chiude la visualizzazione, la pulizia del contenuto del documento e quindi chiama il [DeleteContents](#deletecontents) funzione membro per eliminare i dati del documento.  
  
 Eseguire l'override di questa funzione se si desidera eseguire una pulizia speciale elaborazione quando il framework chiude un documento. Ad esempio, se il documento rappresenta un record in un database, è consigliabile eseguire l'override di questa funzione per chiudere il database. È necessario chiamare la versione della classe base di questa funzione di sostituzione.  
  
##  <a name="a-nameoncreatepreviewframea--cdocumentoncreatepreviewframe"></a><a name="oncreatepreviewframe"></a>CDocument::OnCreatePreviewFrame  
 Chiamato dal framework quando è necessario creare una cornice di anteprima per l'anteprima avanzata.  
  
```  
virtual BOOL OnCreatePreviewFrame();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se il frame viene creato correttamente; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondocumenteventa--cdocumentondocumentevent"></a><a name="ondocumentevent"></a>CDocument::OnDocumentEvent  
 Chiamato dal framework in risposta a un evento di documento.  
  
```  
virtual void OnDocumentEvent(DocumentEvent deEvent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `deEvent`  
 Un tipo di dati enumerato che descrive il tipo di evento.  
  
### <a name="remarks"></a>Note  
 Gli eventi di documento possono influire su più classi. Questo metodo è responsabile della gestione degli eventi di documento che interessano diverso da classi di [CDocument (classe)](../../mfc/reference/cdocument-class.md). Attualmente, l'unica classe che deve rispondere a eventi di documento è il [CDataRecoveryHandler classe](../../mfc/reference/cdatarecoveryhandler-class.md). Il `CDocument` classe dispone di altri metodi sostituibile responsabile della gestione l'effetto sul `CDocument`.  
  
 Nella tabella seguente sono elencati i valori possibili per `deEvent` e gli eventi che corrispondono a.  
  
|Valore|Evento corrispondente|  
|-----------|-------------------------|  
|`onAfterNewDocument`|È stato creato un nuovo documento.|  
|`onAfterOpenDocument`|È stato aperto un nuovo documento.|  
|`onAfterSaveDocument`|È stato salvato il documento.|  
|`onAfterCloseDocument`|Il documento è stato chiuso.|  
  
##  <a name="a-nameondrawthumbnaila--cdocumentondrawthumbnail"></a><a name="ondrawthumbnail"></a>CDocument::OnDrawThumbnail  
 L'override del metodo in una classe derivata per disegnare l'anteprima.  
  
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
  
##  <a name="a-nameonfilesendmaila--cdocumentonfilesendmail"></a><a name="onfilesendmail"></a>CDocument:: OnFileSendMail  
 Invia un messaggio tramite l'host della posta elettronica residenti (se presente) con il documento come allegato.  
  
```  
void OnFileSendMail();
```  
  
### <a name="remarks"></a>Note  
 `OnFileSendMail`chiamate [OnSaveDocument](#onsavedocument) per serializzare (documenti senza nome e modificati in un file temporaneo, che viene quindi inviato tramite posta elettronica salvataggio). Se il documento non è stato modificato, non è necessario un file temporaneo; viene inviato originale. `OnFileSendMail`Carica file MAPI32. DLL se non è già stato caricato.  
  
 Un'implementazione speciale di `OnFileSendMail` per [COleDocument](../../mfc/reference/coledocument-class.md) gestisce correttamente i file compositi.  
  
 **CDocument** supporta l'invio del documento tramite posta elettronica se è presente il supporto di posta elettronica (MAPI). Vedere gli articoli [MAPI argomenti](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).  
  
##  <a name="a-nameonloaddocumentfromstreama--cdocumentonloaddocumentfromstream"></a><a name="onloaddocumentfromstream"></a>CDocument::OnLoadDocumentFromStream  
 Chiamato dal framework quando è necessario caricare i dati del documento da un flusso.  
  
```  
virtual HRESULT OnLoadDocumentFromStream(
    IStream* pStream,  
    DWORD grfMode);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 Un puntatore a un flusso in ingresso.  
  
 `grfMode`  
 Modalità di accesso nel flusso.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il caricamento ha esito positivo. in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonnewdocumenta--cdocumentonnewdocument"></a><a name="onnewdocument"></a>CDocument::OnNewDocument  
 Chiamato dal framework come parte del comando Nuovo File.  
  
```  
virtual BOOL OnNewDocument();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato inizializzato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama la [DeleteContents](#deletecontents) funzione membro per garantire che il documento è vuoto e quindi contrassegna il nuovo documento come normale. Eseguire l'override di questa funzione per inizializzare la struttura di dati per un nuovo documento. È necessario chiamare la versione della classe base di questa funzione di sostituzione.  
  
 Se l'utente sceglie il comando Nuovo File in un'applicazione SDI, il framework utilizza questa funzione per reinizializzare il documento esistente, anziché crearne uno nuovo. Se l'utente sceglie il nuovo File in un'applicazione di multiple document interface (MDI), il framework crea ogni volta che un nuovo documento e quindi chiama questa funzione per inizializzarla. In questa funzione invece che nel costruttore per il comando Nuovo File per essere efficace per le applicazioni SDI, è necessario inserire il codice di inizializzazione.  
  
 Si noti che esistono casi in `OnNewDocument` viene chiamato due volte. Ciò si verifica quando il documento viene incorporato come un Server di documenti ActiveX. Viene innanzitutto chiamata la funzione il `CreateInstance` (metodo) (esposti dal `COleObjectFactory`-classe derivata) e una seconda volta per il `InitNew` (metodo) (esposti dal `COleServerDoc`-classe derivata).  
  
### <a name="example"></a>Esempio  
 Negli esempi seguenti sono disponibili metodi alternativi di inizializzazione di un oggetto documento.  
  
 [!code-cpp[60 NVC_MFCDocView](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]  
  
 [!code-cpp[NVC_MFCDocView n.&61;](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]  
  
 [!code-cpp[&#62; NVC_MFCDocView](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]  
  
##  <a name="a-nameonopendocumenta--cdocumentonopendocument"></a><a name="onopendocument"></a>CDocument:: OnOpenDocument  
 Chiamato dal framework come parte del comando Apri File.  
  
```  
virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPathName`  
 Punta al percorso del documento da aprire.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato caricato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione consente di aprire il file specificato, le chiamate di [DeleteContents](#deletecontents) chiama la funzione membro per garantire che il documento è vuoto, [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per leggere il file del contenuto e quindi contrassegnato come di pulizia. Eseguire l'override di questa funzione se si desidera utilizzare un nome diverso dal meccanismo di archiviazione o il meccanismo di file. Ad esempio, è possibile scrivere un'applicazione in cui i documenti rappresentano i record in un database anziché in file separati.  
  
 Se l'utente sceglie il comando Apri in un'applicazione SDI, il framework utilizza questa funzione per reinizializzare esistente **CDocument** oggetto, anziché crearne uno nuovo. Se l'utente sceglie Apri in un'applicazione MDI, il framework crea un nuovo **CDocument** oggetto ogni volta e quindi chiama questa funzione per inizializzarla. In questa funzione invece che nel costruttore per il comando Apri File per essere efficace per le applicazioni SDI, è necessario inserire il codice di inizializzazione.  
  
### <a name="example"></a>Esempio  
 Negli esempi seguenti sono disponibili metodi alternativi di inizializzazione di un oggetto documento.  
  
 [!code-cpp[60 NVC_MFCDocView](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]  
  
 [!code-cpp[NVC_MFCDocView n.&61;](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]  
  
 [!code-cpp[&#62; NVC_MFCDocView](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]  
  
 [!code-cpp[NVC_MFCDocView&#63;](../../mfc/codesnippet/cpp/cdocument-class_8.cpp)]  
  
##  <a name="a-nameonpreviewhandlerqueryfocusa--cdocumentonpreviewhandlerqueryfocus"></a><a name="onpreviewhandlerqueryfocus"></a>CDocument::OnPreviewHandlerQueryFocus  
 Indirizza il gestore di anteprime per restituire HWND recuperato dalla chiamata di `GetFocus` (funzione).  
  
```  
virtual HRESULT OnPreviewHandlerQueryFocus(HWND* phwnd);
```  
  
### <a name="parameters"></a>Parametri  
 `phwnd`  
 [out] Quando termina, questo metodo contiene un puntatore a HWND restituito dalla chiamata di `GetFocus` funzione dal thread in primo piano del gestore di anteprime.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se ha esito positivo. o un valore di errore in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonpreviewhandlertranslateacceleratora--cdocumentonpreviewhandlertranslateaccelerator"></a><a name="onpreviewhandlertranslateaccelerator"></a>CDocument::OnPreviewHandlerTranslateAccelerator  
 Indirizza il gestore di anteprime per gestire una sequenza di tasti passato dal message pump di processo in cui viene eseguito il gestore di anteprime.  
  
```  
virtual HRESULT OnPreviewHandlerTranslateAccelerator(MSG* pmsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pmsg`  
 [in] Un puntatore a una finestra di messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Se il messaggio di sequenza di tasti può essere elaborato dal gestore di anteprime, il gestore elabora e restituisce S_OK. Se il gestore di anteprime non è in grado di elaborare il messaggio di sequenza di tasti, offre all'host tramite `IPreviewHandlerFrame::TranslateAccelerator`. Se l'host elabora il messaggio, questo metodo restituisce S_OK. Se l'host non elabora il messaggio, questo metodo restituisce S_FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonrichpreviewbackcolorchangeda--cdocumentonrichpreviewbackcolorchanged"></a><a name="onrichpreviewbackcolorchanged"></a>CDocument::OnRichPreviewBackColorChanged  
 Chiamato quando viene modificato il colore di sfondo anteprima avanzata.  
  
```  
virtual void OnRichPreviewBackColorChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonrichpreviewfontchangeda--cdocumentonrichpreviewfontchanged"></a><a name="onrichpreviewfontchanged"></a>CDocument::OnRichPreviewFontChanged  
 Chiamato quando viene modificato il tipo di carattere Anteprima avanzata.  
  
```  
virtual void OnRichPreviewFontChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonrichpreviewsitechangeda--cdocumentonrichpreviewsitechanged"></a><a name="onrichpreviewsitechanged"></a>CDocument::OnRichPreviewSiteChanged  
 Chiamato quando viene modificato il sito di anteprima avanzata.  
  
```  
virtual void OnRichPreviewSiteChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonrichpreviewtextcolorchangeda--cdocumentonrichpreviewtextcolorchanged"></a><a name="onrichpreviewtextcolorchanged"></a>CDocument::OnRichPreviewTextColorChanged  
 Chiamato quando viene modificato il colore del testo Anteprima avanzata.  
  
```  
virtual void OnRichPreviewTextColorChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsavedocumenta--cdocumentonsavedocument"></a><a name="onsavedocument"></a>CDocument::OnSaveDocument  
 Chiamato dal framework come parte del comando Salva o Salva con nome.  
  
```  
virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPathName`  
 Punta al percorso completo in cui si desidera salvare il file.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è stato salvato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione consente di aprire il file specificato, le chiamate [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per scrivere i dati del documento per il file e i segni di documento come pulire. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando il framework Salva un documento. Ad esempio, è possibile scrivere un'applicazione in cui i documenti rappresentano i record in un database anziché in file separati.  
  
##  <a name="a-nameonunloadhandlera--cdocumentonunloadhandler"></a><a name="onunloadhandler"></a>CDocument::OnUnloadHandler  
 Chiamato dal framework quando il gestore di anteprime viene scaricato.  
  
```  
virtual void OnUnloadHandler();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonupdatefilesendmaila--cdocumentonupdatefilesendmail"></a><a name="onupdatefilesendmail"></a>CDocument:: OnUpdateFileSendMail  
 Consente di **ID_FILE_SEND_MAIL** comando se è presente il supporto di posta elettronica (MAPI).  
  
```  
void OnUpdateFileSendMail(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore al [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto associato di **ID_FILE_SEND_MAIL** comando.  
  
### <a name="remarks"></a>Note  
 In caso contrario la funzione rimuove il **ID_FILE_SEND_MAIL** comando dal menu, inclusi i separatori sopra o sotto il menu elementi come appropriato. MAPI è abilitata se MAPI32. DLL è presente nel percorso e, nella sezione [posta elettronica] del file WIN. File INI, MAPI =&1;. La maggior parte delle applicazioni inserire questo comando dal menu File.  
  
 **CDocument** supporta l'invio del documento tramite posta elettronica se è presente il supporto di posta elettronica (MAPI). Vedere gli articoli [MAPI argomenti](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).  
  
##  <a name="a-nameprecloseframea--cdocumentprecloseframe"></a><a name="precloseframe"></a>CDocument::PreCloseFrame  
 Questa funzione membro viene chiamata dal framework prima la finestra cornice viene eliminata.  
  
```  
virtual void PreCloseFrame(CFrameWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 `pFrame`  
 Puntatore al [CFrameWnd](../../mfc/reference/cframewnd-class.md) che contiene l'oggetto associato **CDocument** oggetto.  
  
### <a name="remarks"></a>Note  
 È possibile eseguirne l'override per fornire pulizia personalizzata, ma assicurarsi di chiamare anche la classe di base.  
  
 Il valore predefinito di `PreCloseFrame` non ha alcun effetto **CDocument**. Il **CDocument**-classi derivate [COleDocument](../../mfc/reference/coledocument-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) utilizzare questa funzione membro.  
  
##  <a name="a-namereadnextchunkvaluea--cdocumentreadnextchunkvalue"></a><a name="readnextchunkvalue"></a>CDocument::ReadNextChunkValue  
 Legge il valore di blocco successivo.  
  
```  
virtual BOOL ReadNextChunkValue(IFilterChunkValue** ppValue);
```  
  
### <a name="parameters"></a>Parametri  
 `ppValue`  
 [out] Quando la funzione restituisce, `ppValue` contiene il valore letto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namereleasefilea--cdocumentreleasefile"></a><a name="releasefile"></a>CDocument::ReleaseFile  
 Questa funzione membro viene chiamata dal framework per rilasciare un file, rendendo disponibili per l'uso da altre applicazioni.  
  
```  
virtual void ReleaseFile(
    CFile* pFile,  
    BOOL bAbort);
```  
  
### <a name="parameters"></a>Parametri  
 `pFile`  
 Puntatore all'oggetto CFile da rilasciare.  
  
 `bAbort`  
 Specifica se il file deve essere rilasciata utilizzando `CFile::Close` o `CFile::Abort`. **FALSE** se il file deve essere liberata usando [CFile::Close](../../mfc/reference/cfile-class.md#close); **TRUE** se il file deve essere liberata usando [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).  
  
### <a name="remarks"></a>Note  
 Se `bAbort` è **TRUE**, `ReleaseFile` chiamate `CFile::Abort`, e il file viene rilasciato. `CFile::Abort`non verrà generata un'eccezione.  
  
 Se `bAbort` è **FALSE**, `ReleaseFile` chiamate `CFile::Close` e il file viene rilasciato.  
  
 Eseguire l'override di questa funzione membro per richiedere un intervento dell'utente prima che il file viene rilasciato.  
  
##  <a name="a-nameremovechunka--cdocumentremovechunk"></a><a name="removechunk"></a>CDocument::RemoveChunk  
 Rimuove un blocco con il GUID specificato.  
  
```  
virtual void RemoveChunk(
    REFCLSID guid,  
    DWORD pid);
```  
  
### <a name="parameters"></a>Parametri  
 `Guid`  
 Specifica il GUID di un blocco deve essere rimosso.  
  
 `Pid`  
 Specifica il PID di un blocco deve essere rimosso.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameremoveviewa--cdocumentremoveview"></a><a name="removeview"></a>CDocument::RemoveView  
 Chiamare questa funzione per scollegare una vista da un documento.  
  
```  
void RemoveView(CView* pView);
```  
  
### <a name="parameters"></a>Parametri  
 `pView`  
 Punta alla visualizzazione da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questa funzione rimuove la visualizzazione specificata dall'elenco di viste associate del documento. Puntatore al documento della vista vengono inoltre impostate su **NULL**. Questa funzione viene chiamata dal framework quando una finestra cornice è chiuso o viene chiuso un riquadro di una finestra con separatore.  
  
 Chiamare questa funzione solo se si è manualmente lo scollegamento di una vista. In genere si consentirà il framework scollegare documenti e visualizzazioni definendo un [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per associare una classe documento, classe di visualizzazione e classe finestra cornice.  
  
 Vedere l'esempio relativo al [AddView](#addview) per un esempio di implementazione.  
  
##  <a name="a-namereportsaveloadexceptiona--cdocumentreportsaveloadexception"></a><a name="reportsaveloadexception"></a>CDocument::ReportSaveLoadException  
 Chiamato se viene generata un'eccezione (in genere un [CFileException](../../mfc/reference/cfileexception-class.md) o [eccezione CArchiveException](../../mfc/reference/carchiveexception-class.md)) durante il salvataggio o caricamento del documento.  
  
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
 Identificatore del messaggio di errore da visualizzare se la funzione non è specificato uno più specifico.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita esamina l'oggetto eccezione e cerca un messaggio di errore che descrive in modo specifico la causa. Se non viene trovato un messaggio specifico o *e* è **NULL**, il messaggio generale specificato il `nIDPDefault` parametro viene utilizzato. La funzione viene quindi visualizzato un messaggio contenente il messaggio di errore. Eseguire l'override di questa funzione se si desidera fornire messaggi di errore personalizzate aggiuntive. Questa è un' sottoponibile a override.  
  
##  <a name="a-namesavemodifieda--cdocumentsavemodified"></a><a name="savemodified"></a>CDocument:: SaveModified  
 Chiamato dal framework prima che un documento modificato per essere chiuso.  
  
```  
virtual BOOL SaveModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è possibile continuare e chiudere il documento. 0 se il documento non deve essere chiuso.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione consente di visualizzare una finestra di messaggio per richiedere all'utente se si desidera salvare le modifiche apportate al documento, se sono stato apportato qualsiasi. Eseguire l'override di questa funzione se il programma richiede una diversa procedura richiesta. Questa è un' sottoponibile a override.  
  
##  <a name="a-namesetchunkvaluea--cdocumentsetchunkvalue"></a><a name="setchunkvalue"></a>CDocument::SetChunkValue  
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
  
##  <a name="a-namesetmodifiedflaga--cdocumentsetmodifiedflag"></a><a name="setmodifiedflag"></a>CDocument::SetModifiedFlag  
 Chiamare questa funzione dopo aver apportato le modifiche al documento.  
  
```  
virtual void SetModifiedFlag(BOOL bModified = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bModified`  
 Flag che indica se il documento è stato modificato.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione in modo coerente, assicura che il framework richiede all'utente di salvare le modifiche prima di chiudere un documento. In genere è consigliabile utilizzare il valore predefinito di **TRUE** per il `bModified` parametro. Per contrassegnare un documento come pulire (non modificato), chiamare questa funzione con un valore di **FALSE**.  
  
##  <a name="a-namesetpathnamea--cdocumentsetpathname"></a><a name="setpathname"></a>CDocument::SetPathName  
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
 Determina se il nome del file viene aggiunto a più utilizzati di recente elenco di file (MRU). Se **TRUE,** viene aggiunto il nome del file; se **FALSE**, non viene aggiunto.  
  
### <a name="remarks"></a>Note  
 A seconda del valore di `bAddToMRU` il percorso viene aggiunto o non aggiunti all'elenco MRU gestito dall'applicazione. Si noti che alcuni documenti non sono associati a un file su disco. Chiamare questa funzione solo se si esegue l'override l'implementazione predefinita per l'apertura e salvataggio di file utilizzati dal framework.  
  
##  <a name="a-namesettitlea--cdocumentsettitle"></a><a name="settitle"></a>CDocument::SetTitle  
 Chiamare questa funzione per specificare il titolo del documento (la stringa visualizzata nella barra del titolo di una finestra cornice).  
  
```  
virtual void SetTitle(LPCTSTR lpszTitle);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTitle`  
 Punta alla stringa da utilizzare come titolo del documento.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione Aggiorna i titoli di tutte le finestre cornice che consentono di visualizzare il documento.  
  
##  <a name="a-nameupdateallviewsa--cdocumentupdateallviews"></a><a name="updateallviews"></a>UpdateAllViews  
 Chiamare questa funzione dopo che il documento è stato modificato.  
  
```  
void UpdateAllViews(
    CView* pSender,  
    LPARAM lHint = 0L,  
    CObject* pHint = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pSender`  
 Fa riferimento alla vista che il documento modificato o **NULL** se tutte le visualizzazioni devono essere aggiornati.  
  
 `lHint`  
 Contiene informazioni sulla modifica.  
  
 `pHint`  
 Punta a un oggetto di archiviazione delle informazioni sulla modifica.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare questa funzione dopo la chiamata di [SetModifiedFlag](#setmodifiedflag) funzione membro. Questa funzione informa ogni vista associato al documento, ad eccezione della visualizzazione da `pSender`, che il documento è stato modificato. In genere si chiama questa funzione dalla classe di visualizzazione dopo che l'utente ha modificato il documento tramite una vista.  
  
 Questa funzione chiama la [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate) visualizzare una funzione membro per ognuna delle visualizzazioni del documento, ad eccezione dell'invio, passando `pHint` e `lHint`. Utilizzare questi parametri per passare le informazioni per le viste sulle modifiche apportate al documento. È possibile codificare usando `lHint` e/o è possibile definire un [CObject](../../mfc/reference/cobject-class.md)-derivata per memorizzare informazioni sulle modifiche e passare un oggetto di tale classe utilizzando `pHint`. Eseguire l'override di `CView::OnUpdate` funzione membro nel [CView](../../mfc/reference/cview-class.md)-derivata per ottimizzare l'aggiornamento della visualizzazione della vista in base alle informazioni passate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#64; NVC_MFCDocView](../../mfc/codesnippet/cpp/cdocument-class_9.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDIDOCVW](../../visual-cpp-samples.md)   
 [Esempio MFC SNAPVW](../../visual-cpp-samples.md)   
 [Esempio MFC NPP](../../visual-cpp-samples.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)

