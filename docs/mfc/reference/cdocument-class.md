---
title: Classe CDocument
ms.date: 11/04/2016
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
ms.openlocfilehash: d356ba6b6134221c2fc9595fc6d78f91961c5b7f
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753252"
---
# <a name="cdocument-class"></a>Classe CDocument

Fornisce la funzionalità di base per le classi documento definite dall'utente.

## <a name="syntax"></a>Sintassi

```
class CDocument : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Documento::CDocumento](#cdocument)|Costruisce un oggetto `CDocument`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDocument::AddView](#addview)|Allega una vista al documento.|
|[Documento::BeginReadChunks](#beginreadchunks)|Inizializza la lettura dei blocchi.|
|[CDocument::CanCloseFrame](#cancloseframe)|Avanzato sottoponibile a override; prima di chiudere una finestra cornice per visualizzare questo documento.|
|[CDocumento::ClearChunkList](#clearchunklist)|Cancella l'elenco dei blocchi.|
|[CDocument::ClearPathName](#clearpathname)|Cancella il percorso dell'oggetto documento.|
|[Contenuto CDocument::DeleteContents](#deletecontents)|Chiamato per eseguire la pulizia del documento.|
|[Documento::FindChunkCDocument::FindChunk](#findchunk)|Cerca un blocco con IL GUID specificato.|
|[CDocument::GetAdapter](#getadapter)|Restituisce un puntatore all'interfaccia di implementazione dell'oggetto. `IDocument`|
|[Documento::GetDocTemplate](#getdoctemplate)|Restituisce un puntatore al modello di documento che descrive il tipo di documento.|
|[Documento C::GetFile](#getfile)|Restituisce un puntatore all'oggetto desiderato. `CFile`|
|[CDocumento::GetFirstViewPosition](#getfirstviewposition)|Restituisce la posizione del primo nell'elenco di visualizzazioni; utilizzato per iniziare l'iterazione.|
|[CDocument::GetNextView](#getnextview)|Scorre l'elenco delle visualizzazioni associate al documento.|
|[CDocument::GetPathName](#getpathname)|Restituisce il percorso del file di dati del documento.|
|[CDocument::GetThumbnail](#getthumbnail)|Chiamato per creare una bitmap che deve essere utilizzata dal provider di anteprime per visualizzare l'anteprima.|
|[Documento C::GetTitle](#gettitle)|Restituisce il titolo del documento.|
|[CDocument::InitializeSearchContent](#initializesearchcontent)|Chiamato per inizializzare il contenuto di ricerca per il gestore di ricerca.|
|[Documento::IsModified](#ismodified)|Indica se il documento è stato modificato dopo l'ultimo salvataggio.|
|[CDocumento::IsSearchAndOrganizeHandler](#issearchandorganizehandler)|Indica se questa `CDocument` istanza dell'oggetto è stata creata per search & Organize (gestore.|
|[CDocument::LoadDocumentFromStream](#loaddocumentfromstream)|Chiamato per caricare i dati del documento dal flusso.|
|[CDocumento::OnBeforeRichPreviewFontChanged](#onbeforerichpreviewfontchanged)|Chiamato prima della modifica del tipo di carattere Rich Preview.|
|[CDocumento::OnChangedViewList](#onchangedviewlist)|Chiamato dopo l'aggiunta o la rimozione di una visualizzazione dal documento.|
|[CDocument::OnCloseDocument](#onclosedocument)|Chiamato per chiudere il documento.|
|[CDocumento::OnCreatePreviewFrame](#oncreatepreviewframe)|Chiamato dal framework quando è necessario creare un frame di anteprima per Rich Preview.|
|[CDocument::OnDocumentEvent](#ondocumentevent)|Chiamato dal framework in risposta a un evento document.|
|[CDocument::OnDrawThumbnail](#ondrawthumbnail)|Eseguire l'override di questo metodo in una classe derivata per disegnare il contenuto di thumbnail.|
|[CDocument::OnLoadDocumentFromStream](#onloaddocumentfromstream)|Chiamato dal framework quando è necessario caricare i dati del documento dal flusso.|
|[CDocument::OnNewDocument](#onnewdocument)|Chiamato per creare un nuovo documento.|
|[CDocument::OnOpenDocument](#onopendocument)|Chiamato per aprire un documento esistente.|
|[CDocument::OnPreviewHandlerQueryFocus](#onpreviewhandlerqueryfocus)|Indica al gestore di anteprima di restituire HWND dalla chiamata di GetFocus Funzione.|
|[CDocument::OnPreviewHandlerTranslateAccelerator](#onpreviewhandlertranslateaccelerator)|Indica al gestore di anteprima di gestire una sequenza di tasti passata dal message pump del processo in cui è in esecuzione il gestore di anteprima.|
|[CDocumento::OnRichPreviewBackColorChanged](#onrichpreviewbackcolorchanged)|Chiamato quando il colore di sfondo di Rich Preview è stato modificato.|
|[CDocumento::OnRichPreviewFontChanged](#onrichpreviewfontchanged)|Chiamato quando il tipo di carattere Rich Preview è stato modificato.|
|[CDocumento::OnRichPreviewSiteChanged](#onrichpreviewsitechanged)|Chiamato quando il sito Rich Preview è stato modificato.|
|[CDocumento::OnRichPreviewTextColorChanged](#onrichpreviewtextcolorchanged)|Chiamato quando il colore del testo di Rich Preview è stato modificato.|
|[CDocument::OnSaveDocument](#onsavedocument)|Chiamato per salvare il documento su disco.|
|[CDocument::OnUnloadHandler](#onunloadhandler)|Chiamato dal framework quando il gestore di anteprima viene scaricato.|
|[CDocument::PreCloseFrame](#precloseframe)|Chiamato prima della chiusura della finestra cornice.|
|[CDocument::ReadNextChunkValue](#readnextchunkvalue)|Legge il valore del blocco successivo.|
|[Documento::ReleaseFile](#releasefile)|Rilascia un file per renderlo disponibile per l'utilizzo da parte di altre applicazioni.|
|[CDocument::RemoveChunk](#removechunk)|Rimuove un blocco con il GUID specificato.|
|[CDocument::RemoveView](#removeview)|Scollega una vista dal documento.|
|[CDocument::ReportSaveLoadException](#reportsaveloadexception)|Avanzato sottoponibile a override; quando non è possibile completare un'operazione di apertura o salvataggio a causa di un'eccezione.|
|[CDocument::SaveModified](#savemodified)|Avanzato sottoponibile a override; per chiedere all'utente se il documento deve essere salvato.|
|[CDocument::SetChunkValue](#setchunkvalue)|Imposta un valore di blocco.|
|[CDocument::SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica che il documento è stato modificato dall'ultimo salvataggio.|
|[CDocument::SetPathName](#setpathname)|Imposta il percorso del file di dati utilizzato dal documento.|
|[CDocument::SetTitle](#settitle)|Imposta il titolo del documento.|
|[Documento::UpdateAllViews](#updateallviews)|Notifica a tutte le visualizzazioni che il documento è stato modificato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDocumento::OnFileSendMail](#onfilesendmail)|Invia un messaggio di posta elettronica con il documento allegato.|
|[CDocumento::OnUpdateFileSendMail](#onupdatefilesendmail)|Abilita il comando Invia posta se è presente il supporto della posta.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Documento C::m_bGetThumbnailMode](#m_bgetthumbnailmode)|Specifica che `CDocument` l'oggetto è stato creato da dllhost per le anteprime. Dovrebbe essere `CView::OnDraw`archiviato .|
|[Documento C::m_bPreviewHandlerMode](#m_bpreviewhandlermode)|Specifica che `CDocument` l'oggetto è stato `Rich Preview`creato da prevhost per . Dovrebbe essere `CView::OnDraw`archiviato .|
|[Documento C::m_bSearchMode](#m_bsearchmode)|Specifica che `CDocument` l'oggetto è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.|
|[Documento C::m_clrRichPreviewBackColor](#m_clrrichpreviewbackcolor)|Specifica il colore di sfondo della finestra Rich Preview. Questo colore è impostato dall'host.|
|[CDocument::m_clrRichPreviewTextColor](#m_clrrichpreviewtextcolor)|Specifica il colore di primo piano della finestra Anteprima avanzata. Questo colore è impostato dall'host.|
|[Documento C::m_lfRichPreviewFont](#m_lfrichpreviewfont)|Specifica il tipo di carattere del testo per la finestra Rich Preview. Queste informazioni sul tipo di carattere vengono impostate dall'host.|

## <a name="remarks"></a>Osservazioni

Un documento rappresenta l'unità di dati che l'utente apre in genere con il comando Apri file e salva con il comando Salva file.

`CDocument`supporta operazioni standard come la creazione di un documento, il caricamento e il salvataggio. Il framework manipola i `CDocument`documenti utilizzando l'interfaccia definita da .

Un'applicazione può supportare più di un tipo di documento; ad esempio, un'applicazione potrebbe supportare sia fogli di calcolo che documenti di testo. A ogni tipo di documento è associato un modello di documento; il modello di documento specifica quali risorse (ad esempio, menu, icona o tabella dei tasti di scelta rapida) vengono utilizzate per quel tipo di documento. Ogni documento contiene un `CDocTemplate` puntatore all'oggetto associato.

Gli utenti interagiscono con un documento tramite il [CView](../../mfc/reference/cview-class.md) oggetti associati ad esso. Una visualizzazione esegue il rendering di un'immagine del documento in una finestra cornice e interpreta l'input dell'utente come operazioni sul documento. A un documento possono essere associate più visualizzazioni. Quando l'utente apre una finestra in un documento, il framework crea una visualizzazione e la associa al documento. Il modello di documento specifica il tipo di visualizzazione e la finestra cornice da utilizzare per visualizzare ogni tipo di documento.

I documenti fanno parte del routing dei comandi standard del framework e di conseguenza ricevono comandi dai componenti dell'interfaccia utente standard (ad esempio la voce di menu Salvataggio file). Un documento riceve i comandi inoltrati dalla vista attiva. Se il documento non gestisce un determinato comando, inoltra il comando al modello di documento che lo gestisce.

Quando i dati di un documento vengono modificati, ognuna delle relative visualizzazioni deve riflettere tali modifiche. `CDocument`fornisce il [UpdateAllViews](#updateallviews) funzione membro per notificare le visualizzazioni di tali modifiche, in modo che le visualizzazioni possono ridisegnarsi in base alle esigenze. Il framework richiede inoltre all'utente di salvare un file modificato prima di chiuderlo.

Per implementare i documenti in un'applicazione tipica, è necessario eseguire le operazioni seguenti:To implement documents in a typical application, you must do the following:

- Derivare una `CDocument` classe da per ogni tipo di documento.

- Aggiungere variabili membro per archiviare i dati di ogni documento.

- Implementare le funzioni membro per la lettura e la modifica dei dati del documento. Le visualizzazioni del documento sono gli utenti più importanti di queste funzioni membro.

- Eseguire l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) funzione membro nella classe documento per scrivere e leggere i dati del documento da e verso il disco.

`CDocument`l'invio del documento tramite posta se è presente il supporto per la posta (MAPI). Vedere gli articoli [MapI](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).

Per ulteriori `CDocument`informazioni su , vedere [Serializzazione](../../mfc/serialization-in-mfc.md), Argomenti relativi [all'architettura di documenti/visualizzazioni](../../mfc/document-view-architecture.md)e [Creazione documento/visualizzazione](../../mfc/document-view-creation.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocument`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cdocumentaddview"></a><a name="addview"></a>CDocument::AddView

Chiamare questa funzione per allegare una visualizzazione al documento.

```cpp
void AddView(CView* pView);
```

### <a name="parameters"></a>Parametri

*Pview*<br/>
Punta alla vista aggiunta.

### <a name="remarks"></a>Osservazioni

Questa funzione aggiunge la visualizzazione specificata all'elenco delle visualizzazioni associate al documento; la funzione imposta anche il puntatore del documento della visualizzazione a questo documento. Il framework chiama questa funzione quando si associa un oggetto visualizzazione appena creato a un documento; ciò si verifica in risposta a un comando Nuovo file, Apri file o Nuova finestra o quando viene divisa una finestra con separatore.

Chiamare questa funzione solo se si sta creando e associando manualmente una vista. In genere si consentirà al framework di connettere documenti e visualizzazioni definendo un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per associare una classe documento, una classe di visualizzazione e una classe finestra cornice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocViewSDI#12](../../mfc/codesnippet/cpp/cdocument-class_1.cpp)]

## <a name="cdocumentbeginreadchunks"></a><a name="beginreadchunks"></a>Documento::BeginReadChunks

Inizializza la lettura dei blocchi.

```
virtual void BeginReadChunks ();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentcancloseframe"></a><a name="cancloseframe"></a>CDocument::CanCloseFrame

Chiamato dal framework prima che una finestra cornice che visualizza il documento viene chiusa.

```
virtual BOOL CanCloseFrame(CFrameWnd* pFrame);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
Punta alla finestra cornice di una vista allegata al documento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è sicuro chiudere la finestra cornice; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita controlla se sono presenti altre finestre cornice che visualizzano il documento. Se la finestra cornice specificata è l'ultima che visualizza il documento, la funzione richiede all'utente di salvare il documento se è stato modificato. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando viene chiusa una finestra cornice. Si tratta di un oggetto sottoponibile a override avanzato.

## <a name="cdocumentcdocument"></a><a name="cdocument"></a>Documento::CDocumento

Costruisce un oggetto `CDocument`.

```
CDocument();
```

### <a name="remarks"></a>Osservazioni

Il framework gestisce automaticamente la creazione di documenti. Eseguire l'override di [OnNewDocument](#onnewdocument) funzione membro per eseguire l'inizializzazione in base al documento; ciò è particolarmente importante nelle applicazioni SDI (Single Document Interface).

## <a name="cdocumentclearchunklist"></a><a name="clearchunklist"></a>CDocumento::ClearChunkList

Cancella l'elenco dei blocchi.

```
virtual void ClearChunkList ();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentclearpathname"></a><a name="clearpathname"></a>CDocument::ClearPathName

Cancella il percorso dell'oggetto documento.

```
virtual void ClearPathName();
```

### <a name="remarks"></a>Osservazioni

La cancellazione del `CDocument` percorso da un oggetto fa sì che l'applicazione richieda all'utente quando il documento viene salvato successivamente. In questo modo un comando **Salva** si comporta come un comando **Salva con nome.**

## <a name="cdocumentdeletecontents"></a><a name="deletecontents"></a>Contenuto CDocument::DeleteContents

Chiamato dal framework per eliminare i dati `CDocument` del documento senza distruggere l'oggetto stesso.

```
virtual void DeleteContents();
```

### <a name="remarks"></a>Osservazioni

Viene chiamato appena prima che il documento venga distrutto. Viene inoltre chiamato per garantire che un documento sia vuoto prima di essere riutilizzato. Ciò è particolarmente importante per un'applicazione SDI, che utilizza un solo documento; il documento viene riutilizzato ogni volta che l'utente crea o apre un altro documento. Chiamare questa funzione per implementare un comando "Modifica Cancella tutto" o simile che elimina tutti i dati del documento. L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per eliminare i dati nel documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#57](../../mfc/codesnippet/cpp/cdocument-class_2.cpp)]

## <a name="cdocumentfindchunk"></a><a name="findchunk"></a>Documento::FindChunkCDocument::FindChunk

Cerca un blocco con un GUID specificato.

```
virtual POSITION FindChunk(
    REFCLSID guid,
    DWORD pid);
```

### <a name="parameters"></a>Parametri

*guid*<br/>
Specifica il GUID di un blocco da trovare.

*Pid*<br/>
Specifica un PID di un blocco da trovare.

### <a name="return-value"></a>Valore restituito

Posizione nell'elenco di blocchi interno in caso di esito positivo. In caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentgetadapter"></a><a name="getadapter"></a>CDocument::GetAdapter

Restituisce un puntatore `IDocument` a un oggetto che implementa l'interfaccia.

```
virtual ATL::IDocument* GetAdapter();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un `IDocument` oggetto che implementa l'interfaccia.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentgetdoctemplate"></a><a name="getdoctemplate"></a>Documento::GetDocTemplate

Chiamare questa funzione per ottenere un puntatore al modello di documento per questo tipo di documento.

```
CDocTemplate* GetDocTemplate() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al modello di documento per questo tipo di documento oppure NULL se il documento non è gestito da un modello di documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#58](../../mfc/codesnippet/cpp/cdocument-class_3.cpp)]

## <a name="cdocumentgetfile"></a><a name="getfile"></a>Documento C::GetFile

Chiamare questa funzione membro per `CFile` ottenere un puntatore a un oggetto.

```
virtual CFile* GetFile(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CFileException* pError);
```

### <a name="parameters"></a>Parametri

*lpszNomefileName (nome file)*<br/>
Stringa che è il percorso del file desiderato. Il percorso può essere relativo o assoluto.

*pError*<br/>
Puntatore a un oggetto eccezione file esistente che indica lo stato di completamento dell'operazione.

*nOpenFlags (in elenco)*<br/>
Modalità di condivisione e accesso. Specifica l'azione da eseguire all'apertura del file. È possibile combinare le opzioni elencate nel CFile costruttore [CFile::CFile](../../mfc/reference/cfile-class.md#cfile) utilizzando l'operatore OR bit per bit (&#124;). Sono necessarie un'autorizzazione di accesso e un'opzione di condivisione; le `modeCreate` `modeNoInherit` modalità e sono facoltative.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CFile`.

## <a name="cdocumentgetfirstviewposition"></a><a name="getfirstviewposition"></a>CDocumento::GetFirstViewPosition

Chiamare questa funzione per ottenere la posizione della prima visualizzazione nell'elenco delle visualizzazioni associate al documento.

```
virtual POSITION GetFirstViewPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione con la funzione membro [GetNextView.](#getnextview)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#59](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]

## <a name="cdocumentgetnextview"></a><a name="getnextview"></a>CDocument::GetNextView

Chiamare questa funzione per scorrere tutte le visualizzazioni del documento.

```
virtual CView* GetNextView(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*rPosizione*<br/>
Riferimento a un valore POSITION restituito da `GetNextView` una chiamata precedente alle funzioni membro o [GetFirstViewPosition.](#getfirstviewposition) Questo valore non deve essere NULL.

### <a name="return-value"></a>Valore restituito

Puntatore alla visualizzazione identificata da *rPosition*.

### <a name="remarks"></a>Osservazioni

La funzione restituisce la visualizzazione identificata da *rPosition* e quindi imposta *rPosition* sul valore POSITION della visualizzazione successiva nell'elenco. Se la visualizzazione recuperata è l'ultima nell'elenco, *rPosition* è impostato su NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#59](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]

## <a name="cdocumentgetpathname"></a><a name="getpathname"></a>CDocument::GetPathName

Chiamare questa funzione per ottenere il percorso completo del file su disco del documento.

```
const CString& GetPathName() const;
```

### <a name="return-value"></a>Valore restituito

Percorso completo del documento. Questa stringa è vuota se il documento non è stato salvato o non dispone di un file su disco associato.

## <a name="cdocumentgetthumbnail"></a><a name="getthumbnail"></a>CDocument::GetThumbnail

Crea una bitmap che deve essere utilizzata dal provider di anteprime per visualizzare l'anteprima.

```
virtual BOOL GetThumbnail(
    UINT cx,
    HBITMAP* phbmp,
    DWORD* pdwAlpha);
```

### <a name="parameters"></a>Parametri

*Cx*<br/>
Specifica la larghezza e l'altezza della bitmap.

*phbmp*<br/>
Contiene un handle a una bitmap, quando la funzione restituisce correttamente.

*pdwAlfa*<br/>
Contiene un Valore DWORD che specifica il valore del canale alfa, quando la funzione restituisce correttamente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se una bitmap per l'anteprima è stata creata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentgettitle"></a><a name="gettitle"></a>Documento C::GetTitle

Chiamare questa funzione per ottenere il titolo del documento, che in genere deriva dal nome del file del documento.

```
const CString& GetTitle() const;
```

### <a name="return-value"></a>Valore restituito

Titolo del documento.

## <a name="cdocumentinitializesearchcontent"></a><a name="initializesearchcontent"></a>CDocument::InitializeSearchContent

Chiamato per inizializzare il contenuto di ricerca per il gestore di ricerca.

```
virtual void InitializeSearchContent ();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per inizializzare il contenuto della ricerca. Il contenuto deve essere una stringa con parti delimitate da ";". Ad esempio, "punto; rettangolo; ole ".

## <a name="cdocumentismodified"></a><a name="ismodified"></a>Documento::IsModified

Chiamare questa funzione per determinare se il documento è stato modificato dall'ultimo salvataggio.

```
virtual BOOL IsModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato modificato dall'ultimo salvataggio; in caso contrario 0.

## <a name="cdocumentissearchandorganizehandler"></a><a name="issearchandorganizehandler"></a>CDocumento::IsSearchAndOrganizeHandler

Indica se questa `CDocument` istanza di è stata creata per il gestore Search & Organize.

```
BOOL IsSearchAndOrganizeHandler() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se `CDocument` questa istanza di è stata creata per il gestore Search & Organize.

### <a name="remarks"></a>Osservazioni

Attualmente questa funzione restituisce TRUE solo per i gestori Rich Preview implementati in un server out-of-process. È possibile impostare i flag appropriati (m_bPreviewHandlerMode, m_bSearchMode, m_bGetThumbnailMode) a livello di applicazione per fare in modo che questa funzione restituisca TRUE.

## <a name="cdocumentloaddocumentfromstream"></a><a name="loaddocumentfromstream"></a>CDocument::LoadDocumentFromStream

Chiamato per caricare i dati del documento da un flusso.

```
virtual HRESULT LoadDocumentFromStream(
    IStream* pStream,
    DWORD dwGrfMode);
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
Puntatore a un flusso. Questo flusso viene fornito dalla Shell.

*dwGrfMode (Modalità dwGrf)*<br/>
Modalità di accesso al flusso.

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione di caricamento ha esito positivo, in caso contrario HRESULT con un codice di errore.

### <a name="remarks"></a>Osservazioni

È possibile eseguire l'override di questo metodo in una classe derivata per personalizzare la modalità di caricamento dei dati dal flusso.

## <a name="cdocumentm_bgetthumbnailmode"></a><a name="m_bgetthumbnailmode"></a>Documento C::m_bGetThumbnailMode

Specifica che `CDocument` l'oggetto è stato creato da dllhost per le anteprime. Dovrebbe essere `CView::OnDraw`archiviato .

```
BOOL m_bGetThumbnailMode;
```

### <a name="remarks"></a>Osservazioni

`TRUE`indica che il documento è stato creato da dllhost per le anteprime.

## <a name="cdocumentm_bpreviewhandlermode"></a><a name="m_bpreviewhandlermode"></a>Documento C::m_bPreviewHandlerMode

Specifica che `CDocument` l'oggetto è stato creato da prevhost per Rich Preview. Dovrebbe essere `CView::OnDraw`archiviato .

```
BOOL m_bPreviewHandlerMode;
```

### <a name="remarks"></a>Osservazioni

TRUE indica che il documento è stato creato da prevhost per Rich Preview.

## <a name="cdocumentm_bsearchmode"></a><a name="m_bsearchmode"></a>Documento C::m_bSearchMode

Specifica che `CDocument` l'oggetto è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.

```
BOOL m_bSearchMode;
```

### <a name="remarks"></a>Osservazioni

`TRUE`indica che il documento è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.

## <a name="cdocumentm_clrrichpreviewbackcolor"></a><a name="m_clrrichpreviewbackcolor"></a>Documento C::m_clrRichPreviewBackColor

Specifica il colore di sfondo della finestra Rich Preview. Questo colore è impostato dall'host.

```
COLORREF m_clrRichPreviewBackColor;
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentm_clrrichpreviewtextcolor"></a><a name="m_clrrichpreviewtextcolor"></a>CDocument::m_clrRichPreviewTextColor

Specifica il colore di primo piano della finestra Anteprima avanzata. Questo colore è impostato dall'host.

```
COLORREF m_clrRichPreviewTextColor;
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentm_lfrichpreviewfont"></a><a name="m_lfrichpreviewfont"></a>Documento C::m_lfRichPreviewFont

Specifica il tipo di carattere del testo per la finestra Rich Preview. Queste informazioni sul tipo di carattere vengono impostate dall'host.

```
CFont m_lfRichPreviewFont;
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonbeforerichpreviewfontchanged"></a><a name="onbeforerichpreviewfontchanged"></a>CDocumento::OnBeforeRichPreviewFontChanged

Chiamato prima della modifica del tipo di carattere Rich Preview.

```
virtual void OnBeforeRichPreviewFontChanged();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonchangedviewlist"></a><a name="onchangedviewlist"></a>CDocumento::OnChangedViewList

Chiamato dal framework dopo l'aggiunta o la rimozione di una visualizzazione dal documento.

```
virtual void OnChangedViewList();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione controlla se l'ultima visualizzazione viene rimossa e, in caso affermativo, elimina il documento. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando il framework aggiunge o rimuove una visualizzazione. Ad esempio, se si desidera che un documento rimanga aperto anche quando non vi sono viste associate, eseguire l'override di questa funzione.

## <a name="cdocumentonclosedocument"></a><a name="onclosedocument"></a>CDocument::OnCloseDocument

Chiamato dal framework quando il documento viene chiuso, in genere come parte del file Chiudi comando.

```
virtual void OnCloseDocument();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione distrugge tutti i frame utilizzati per la visualizzazione del documento, chiude la visualizzazione, pulisce il contenuto del documento e quindi chiama il [DeleteContents](#deletecontents) funzione membro per eliminare i dati del documento.

Eseguire l'override di questa funzione se si desidera eseguire l'elaborazione di pulizia speciale quando il framework chiude un documento. Ad esempio, se il documento rappresenta un record in un database, è possibile eseguire l'override di questa funzione per chiudere il database. È necessario chiamare la versione della classe base di questa funzione dall'override.

## <a name="cdocumentoncreatepreviewframe"></a><a name="oncreatepreviewframe"></a>CDocumento::OnCreatePreviewFrame

Chiamato dal framework quando è necessario creare un frame di anteprima per Rich Preview.

```
virtual BOOL OnCreatePreviewFrame();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il frame viene creato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentondocumentevent"></a><a name="ondocumentevent"></a>CDocument::OnDocumentEvent

Chiamato dal framework in risposta a un evento document.

```
virtual void OnDocumentEvent(DocumentEvent deEvent);
```

### <a name="parameters"></a>Parametri

*evento deEvent*<br/>
[in] Tipo di dati enumerato che descrive il tipo di evento.

### <a name="remarks"></a>Osservazioni

Gli eventi del documento possono interessare più classi. Questo metodo è responsabile della gestione degli eventi del documento che influiscono su classi diverse dalla [classe CDocument](../../mfc/reference/cdocument-class.md). Attualmente, l'unica classe che deve rispondere agli eventi del documento è la [classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md). La `CDocument` classe dispone di altri metodi di `CDocument`override responsabili della gestione dell'effetto sull'oggetto .

Nella tabella seguente sono elencati i valori possibili per *deEvent* e gli eventi a cui corrispondono.

|valore|Evento corrispondente|
|-----------|-------------------------|
|`onAfterNewDocument`|È stato creato un nuovo documento.|
|`onAfterOpenDocument`|È stato aperto un nuovo documento.|
|`onAfterSaveDocument`|Il documento è stato salvato.|
|`onAfterCloseDocument`|Il documento è stato chiuso.|

## <a name="cdocumentondrawthumbnail"></a><a name="ondrawthumbnail"></a>CDocument::OnDrawThumbnail

Eseguire l'override di questo metodo in una classe derivata per disegnare l'anteprima.

```
virtual void OnDrawThumbnail(
    CDC& dc,
    LPRECT lprcBounds);
```

### <a name="parameters"></a>Parametri

*Dc*<br/>
Riferimento a un contesto di dispositivo.

*lprcBounds (Limiti di lprc)*<br/>
Specifica un rettangolo di delimitazione dell'area in cui deve essere disegnata la miniatura.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonfilesendmail"></a><a name="onfilesendmail"></a>CDocumento::OnFileSendMail

Invia un messaggio tramite l'host di posta residente (se presente) con il documento come allegato.

```cpp
void OnFileSendMail();
```

### <a name="remarks"></a>Osservazioni

`OnFileSendMail`chiama [OnSaveDocument](#onsavedocument) per serializzare (salvare) i documenti senza titolo e modificati in un file temporaneo, che viene quindi inviato tramite posta elettronica. Se il documento non è stato modificato, non è necessario un file temporaneo; l'originale viene inviato. `OnFileSendMail`carica MAPI32. DLL se non è già stato caricato.

Un'implementazione `OnFileSendMail` speciale di per [COleDocument](../../mfc/reference/coledocument-class.md) gestisce correttamente i file composti.

`CDocument`l'invio del documento tramite posta se è presente il supporto per la posta (MAPI). Vedere gli articoli [Argomenti MAPI](../../mfc/mapi.md) e [Supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).

## <a name="cdocumentonloaddocumentfromstream"></a><a name="onloaddocumentfromstream"></a>CDocument::OnLoadDocumentFromStream

Chiamato dal framework quando è necessario caricare i dati del documento da un flusso.

```
virtual HRESULT OnLoadDocumentFromStream(
    IStream* pStream,
    DWORD grfMode);
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
Puntatore a un flusso in ingresso.

*grfMode (modalità grf)*<br/>
Modalità di accesso al flusso.

### <a name="return-value"></a>Valore restituito

S_OK se il caricamento ha esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonnewdocument"></a><a name="onnewdocument"></a>CDocument::OnNewDocument

Chiamato dal framework come parte del comando File Nuovo.

```
virtual BOOL OnNewDocument();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato inizializzato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione chiama il [DeleteContents](#deletecontents) funzione membro per garantire che il documento è vuoto e quindi contrassegna il nuovo documento come pulito. Eseguire l'override di questa funzione per inizializzare la struttura dei dati per un nuovo documento. È necessario chiamare la versione della classe base di questa funzione dall'override.

Se l'utente sceglie il comando Nuovo File in un'applicazione SDI, il framework utilizza questa funzione per reinizializzare il documento esistente, anziché crearne uno nuovo. Se l'utente sceglie File nuovo in un'applicazione di interfaccia a documenti multipli (MDI), il framework crea un nuovo documento ogni volta e quindi chiama questa funzione per inizializzarlo. È necessario inserire il codice di inizializzazione in questa funzione anziché nel costruttore per il File nuovo comando per essere efficace nelle applicazioni SDI.

Si noti che `OnNewDocument` ci sono casi in cui viene chiamato due volte. Ciò si verifica quando il documento è incorporato come server di documenti ActiveX. La funzione viene prima `CreateInstance` chiamata dal `COleObjectFactory`metodo (esposto dalla classe `InitNew` derivata dalla `COleServerDoc`classe derivata) e una seconda volta dal metodo (esposto dalla classe derivata).

### <a name="example"></a>Esempio

Negli esempi seguenti vengono illustrati metodi alternativi per l'inizializzazione di un oggetto documento.

[!code-cpp[NVC_MFCDocView#60](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#61](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]

[!code-cpp[NVC_MFCDocView#62](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]

## <a name="cdocumentonopendocument"></a><a name="onopendocument"></a>CDocument::OnOpenDocument

Chiamato dal framework come parte del comando Apri file.

```
virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
```

### <a name="parameters"></a>Parametri

*LpszPathName (nome di metodo)*<br/>
Punta al percorso del documento da aprire.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato caricato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione apre il file specificato, chiama il [DeleteContents](#deletecontents) funzione membro per garantire che il documento è vuoto, chiama [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) per leggere il contenuto del file e quindi contrassegna il documento come pulito. Eseguire l'override di questa funzione se si desidera utilizzare un elemento diverso dal meccanismo di archiviazione o il meccanismo di file. Ad esempio, è possibile scrivere un'applicazione in cui i documenti rappresentano record in un database anziché file separati.

Se l'utente sceglie il comando Apri File in un'applicazione SDI, `CDocument` il framework utilizza questa funzione per reinizializzare l'oggetto esistente, anziché crearne uno nuovo. Se l'utente sceglie Apri File in un'applicazione MDI, il framework crea un nuovo `CDocument` oggetto ogni volta e quindi chiama questa funzione per inizializzarlo. È necessario inserire il codice di inizializzazione in questa funzione anziché nel costruttore affinché il comando Apri file sia efficace nelle applicazioni SDI.

### <a name="example"></a>Esempio

Negli esempi seguenti vengono illustrati metodi alternativi per l'inizializzazione di un oggetto documento.

[!code-cpp[NVC_MFCDocView#60](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#61](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]

[!code-cpp[NVC_MFCDocView#62](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]

[!code-cpp[NVC_MFCDocView#63](../../mfc/codesnippet/cpp/cdocument-class_8.cpp)]

## <a name="cdocumentonpreviewhandlerqueryfocus"></a><a name="onpreviewhandlerqueryfocus"></a>CDocument::OnPreviewHandlerQueryFocus

Indica al gestore di anteprima di restituire `GetFocus` HWND recuperato dalla chiamata della funzione.

```
virtual HRESULT OnPreviewHandlerQueryFocus(HWND* phwnd);
```

### <a name="parameters"></a>Parametri

*phwnd*<br/>
[fuori] Quando termina, questo metodo contiene un puntatore all'HWND restituito dalla chiamata della `GetFocus` funzione dal thread in primo piano del gestore di anteprima.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo; o un valore di errore in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonpreviewhandlertranslateaccelerator"></a><a name="onpreviewhandlertranslateaccelerator"></a>CDocument::OnPreviewHandlerTranslateAccelerator

Indica al gestore di anteprima di gestire una sequenza di tasti passata dal message pump del processo in cui è in esecuzione il gestore di anteprima.

```
virtual HRESULT OnPreviewHandlerTranslateAccelerator(MSG* pmsg);
```

### <a name="parameters"></a>Parametri

*pmsg*<br/>
[in] Puntatore a un messaggio della finestra.

### <a name="return-value"></a>Valore restituito

Se il messaggio della sequenza di tasti può essere elaborato dal gestore di anteprima, il gestore lo elabora e restituisce S_OK. Se il gestore di anteprima non è in grado `IPreviewHandlerFrame::TranslateAccelerator`di elaborare il messaggio di pressione, lo offre all'host tramite . Se l'host elabora il messaggio, questo metodo restituisce S_OK. Se l'host non elabora il messaggio, questo metodo restituisce S_FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonrichpreviewbackcolorchanged"></a><a name="onrichpreviewbackcolorchanged"></a>CDocumento::OnRichPreviewBackColorChanged

Chiamato quando il colore di sfondo Rich Preview è stato modificato.

```
virtual void OnRichPreviewBackColorChanged();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonrichpreviewfontchanged"></a><a name="onrichpreviewfontchanged"></a>CDocumento::OnRichPreviewFontChanged

Chiamato quando il tipo di carattere Rich Preview è stato modificato.

```
virtual void OnRichPreviewFontChanged();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonrichpreviewsitechanged"></a><a name="onrichpreviewsitechanged"></a>CDocumento::OnRichPreviewSiteChanged

Chiamato quando il sito Rich Preview è stato modificato.

```
virtual void OnRichPreviewSiteChanged();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonrichpreviewtextcolorchanged"></a><a name="onrichpreviewtextcolorchanged"></a>CDocumento::OnRichPreviewTextColorChanged

Chiamato quando il colore del testo Rich Preview è stato modificato.

```
virtual void OnRichPreviewTextColorChanged();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonsavedocument"></a><a name="onsavedocument"></a>CDocument::OnSaveDocument

Chiamato dal framework come parte del comando Salva file o Salva con nome.

```
virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
```

### <a name="parameters"></a>Parametri

*LpszPathName (nome di metodo)*<br/>
Punta al percorso completo in cui salvare il file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato salvato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione apre il file specificato, chiama [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) per scrivere i dati del documento nel file e quindi contrassegna il documento come pulito. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando il framework salva un documento. Ad esempio, è possibile scrivere un'applicazione in cui i documenti rappresentano record in un database anziché file separati.

## <a name="cdocumentonunloadhandler"></a><a name="onunloadhandler"></a>CDocument::OnUnloadHandler

Chiamato dal framework quando il gestore di anteprima viene scaricato.

```
virtual void OnUnloadHandler();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentonupdatefilesendmail"></a><a name="onupdatefilesendmail"></a>CDocumento::OnUpdateFileSendMail

Abilita il comando ID_FILE_SEND_MAIL se è presente il supporto della posta (MAPI).

```cpp
void OnUpdateFileSendMail(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore all'oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) associato al comando ID_FILE_SEND_MAIL.

### <a name="remarks"></a>Osservazioni

In caso contrario, la funzione rimuove il comando ID_FILE_SEND_MAIL dal menu, inclusi i separatori sopra o sotto la voce di menu in base alle esigenze. MAPI è abilitato se MAPI32. DLL è presente nel percorso e, nella sezione [Mail] del file WIN. INI, FILE MAPI 1. La maggior parte delle applicazioni inserisce questo comando nel menu File.

`CDocument`l'invio del documento tramite posta se è presente il supporto per la posta (MAPI). Vedere gli articoli [Argomenti MAPI](../../mfc/mapi.md) e [Supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).

## <a name="cdocumentprecloseframe"></a><a name="precloseframe"></a>CDocument::PreCloseFrame

Questa funzione membro viene chiamata dal framework prima che la finestra cornice viene eliminata.

```
virtual void PreCloseFrame(CFrameWnd* pFrame);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
Puntatore all'oggetto [CFrameWnd](../../mfc/reference/cframewnd-class.md) che contiene l'oggetto associato. `CDocument`

### <a name="remarks"></a>Osservazioni

Può essere sottoposto a override per fornire la pulizia personalizzata, ma assicurarsi di chiamare anche la classe base.

Il valore `PreCloseFrame` predefinito `CDocument`di non esegue alcuna operazione in . Le `CDocument`classi derivate [COleDocument](../../mfc/reference/coledocument-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) utilizzano questa funzione membro.

## <a name="cdocumentreadnextchunkvalue"></a><a name="readnextchunkvalue"></a>CDocument::ReadNextChunkValue

Legge il valore del blocco successivo.

```
virtual BOOL ReadNextChunkValue(IFilterChunkValue** ppValue);
```

### <a name="parameters"></a>Parametri

*ppValue (valore ppValue)*<br/>
[fuori] Quando la funzione restituisce, *ppValue* contiene il valore che è stato letto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentreleasefile"></a><a name="releasefile"></a>Documento::ReleaseFile

Questa funzione membro viene chiamata dal framework per rilasciare un file, rendendolo disponibile per l'utilizzo da parte di altre applicazioni.

```
virtual void ReleaseFile(
    CFile* pFile,
    BOOL bAbort);
```

### <a name="parameters"></a>Parametri

*pFile (File)*<br/>
Puntatore all'oggetto CFile da rilasciare.

*bAbort*<br/>
Specifica se il file deve essere `CFile::Close` rilasciato `CFile::Abort`utilizzando o . FALSE se il file deve essere rilasciato utilizzando [CFile::Close](../../mfc/reference/cfile-class.md#close); TRUESe il file deve essere rilasciato utilizzando [CFile::Abort](../../mfc/reference/cfile-class.md#abort).

### <a name="remarks"></a>Osservazioni

Se *bAbort* è `ReleaseFile` `CFile::Abort`TRUE, chiama e il file viene rilasciato. `CFile::Abort`non genererà un'eccezione.

Se *bAbort* è `ReleaseFile` `CFile::Close` FALSE, le chiamate e il file viene rilasciato.

Eseguire l'override di questa funzione membro per richiedere un'azione da parte dell'utente prima del rilascio del file.

## <a name="cdocumentremovechunk"></a><a name="removechunk"></a>CDocument::RemoveChunk

Rimuove un blocco con il GUID specificato.

```
virtual void RemoveChunk(
    REFCLSID guid,
    DWORD pid);
```

### <a name="parameters"></a>Parametri

*Guid*<br/>
Specifica il GUID di un blocco da rimuovere.

*Pid*<br/>
Specifica il PID di un blocco da rimuovere.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentremoveview"></a><a name="removeview"></a>CDocument::RemoveView

Chiamare questa funzione per scollegare una visualizzazione da un documento.

```cpp
void RemoveView(CView* pView);
```

### <a name="parameters"></a>Parametri

*Pview*<br/>
Punta alla vista da rimuovere.

### <a name="remarks"></a>Osservazioni

Questa funzione rimuove la visualizzazione specificata dall'elenco delle visualizzazioni associate al documento; imposta inoltre il puntatore del documento della visualizzazione su NULL. Questa funzione viene chiamata dal framework quando una finestra cornice viene chiusa o un riquadro di una finestra con separatore viene chiuso.

Chiamare questa funzione solo se si sta scollegando manualmente una vista. In genere si consente al framework di scollegare documenti e visualizzazioni definendo un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per associare una classe documento, una classe di visualizzazione e una classe finestra cornice.

Vedere l'esempio in [AddView](#addview) per un'implementazione di esempio.

## <a name="cdocumentreportsaveloadexception"></a><a name="reportsaveloadexception"></a>CDocument::ReportSaveLoadException

Chiamato se viene generata un'eccezione (in genere un [CFileException](../../mfc/reference/cfileexception-class.md) o [CArchiveException](../../mfc/reference/carchiveexception-class.md)) durante il salvataggio o il caricamento del documento.

```
virtual void ReportSaveLoadException(
    LPCTSTR lpszPathName,
    CException* e,
    BOOL bSaving,
    UINT nIDPDefault);
```

### <a name="parameters"></a>Parametri

*LpszPathName (nome di metodo)*<br/>
Punta al nome del documento che è stato salvato o caricato.

*e*<br/>
Punta all'eccezione generata. Può essere Null.

*bSalvataggio*<br/>
Flag che indica l'operazione in corso; diverso da zero se il documento è stato salvato, 0 se il documento è stato caricato.

*nIDPDefault (impostazione predefinita)*<br/>
Identificatore del messaggio di errore da visualizzare se la funzione non ne specifica uno più specifico.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita esamina l'oggetto eccezione e cerca un messaggio di errore che descrive in modo specifico la causa. Se non viene trovato un messaggio specifico o se *e* è NULL, viene utilizzato il messaggio generale specificato dal parametro *nIDPDefault.* La funzione visualizza quindi una finestra di messaggio contenente il messaggio di errore. Eseguire l'override di questa funzione se si desidera fornire ulteriori messaggi di errore personalizzati. Si tratta di un oggetto sottoponibile a override avanzato.

## <a name="cdocumentsavemodified"></a><a name="savemodified"></a>CDocument::SaveModified

Chiamato dal framework prima che un documento modificato deve essere chiuso.

```
virtual BOOL SaveModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è sicuro continuare e chiudere il documento; 0 se il documento non deve essere chiuso.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione visualizza una finestra di messaggio che chiede all'utente se salvare le modifiche al documento, se sono state apportate. Eseguire l'override di questa funzione se il programma richiede una procedura di richiesta diversa. Si tratta di un oggetto sottoponibile a override avanzato.

## <a name="cdocumentsetchunkvalue"></a><a name="setchunkvalue"></a>CDocument::SetChunkValue

Imposta un valore di blocco.

```
virtual BOOL SetChunkValue (IFilterChunkValue* pValue);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Specifica un valore di blocco da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

## <a name="cdocumentsetmodifiedflag"></a><a name="setmodifiedflag"></a>CDocument::SetModifiedFlag

Chiamare questa funzione dopo aver apportato le modifiche al documento.

```
virtual void SetModifiedFlag(BOOL bModified = TRUE);
```

### <a name="parameters"></a>Parametri

*bModificato*<br/>
Flag che indica se il documento è stato modificato.

### <a name="remarks"></a>Osservazioni

Chiamando questa funzione in modo coerente, si garantisce che il framework richiede all'utente di salvare le modifiche prima di chiudere un documento. In genere è necessario utilizzare il valore predefinito TRUE per il *bModified* parametro. Per contrassegnare un documento come pulito (non modificato), chiamare questa funzione con il valore FALSE.

## <a name="cdocumentsetpathname"></a><a name="setpathname"></a>CDocument::SetPathName

Chiamare questa funzione per specificare il percorso completo del file su disco del documento.

```
virtual void SetPathName(
    LPCTSTR lpszPathName,
    BOOL bAddToMRU = TRUE);
```

### <a name="parameters"></a>Parametri

*LpszPathName (nome di metodo)*<br/>
Punta alla stringa da utilizzare come percorso per il documento.

*bAddToMRU (informazioni in due)*<br/>
Determina se il nome file viene aggiunto all'elenco di file utilizzati più di recente. Se TRUE, il nome del file viene aggiunto; se FALSE, non viene aggiunto.

### <a name="remarks"></a>Osservazioni

A seconda del valore di *bAddToMRU,* il percorso viene aggiunto o non aggiunto all'elenco MRU gestito dall'applicazione. Si noti che alcuni documenti non sono associati a un file su disco. Chiamare questa funzione solo se si esegue l'override dell'implementazione predefinita per l'apertura e il salvataggio dei file utilizzati dal framework.

## <a name="cdocumentsettitle"></a><a name="settitle"></a>CDocument::SetTitle

Chiamare questa funzione per specificare il titolo del documento (la stringa visualizzata nella barra del titolo di una finestra cornice).

```
virtual void SetTitle(LPCTSTR lpszTitle);
```

### <a name="parameters"></a>Parametri

*LpszTitle (Titolo)*<br/>
Punta alla stringa da utilizzare come titolo del documento.

### <a name="remarks"></a>Osservazioni

La chiamata a questa funzione aggiorna i titoli di tutte le finestre cornice che visualizzano il documento.

## <a name="cdocumentupdateallviews"></a><a name="updateallviews"></a>Documento::UpdateAllViews

Chiamare questa funzione dopo la modifica del documento.

```cpp
void UpdateAllViews(
    CView* pSender,
    LPARAM lHint = 0L,
    CObject* pHint = NULL);
```

### <a name="parameters"></a>Parametri

*pSender*<br/>
Punta alla visualizzazione che ha modificato il documento o NULL se tutte le viste devono essere aggiornate.

*LSuggerimento*<br/>
Contiene informazioni sulla modifica.

*pHint*<br/>
Punta a un oggetto che archivia le informazioni sulla modifica.

### <a name="remarks"></a>Osservazioni

È necessario chiamare questa funzione dopo aver chiamato la funzione membro [SetModifiedFlag.You](#setmodifiedflag) should call this function after you call the SetModifiedFlag member function. Questa funzione informa ogni visualizzazione associata al documento, ad eccezione della visualizzazione specificata da *pSender*, che il documento è stato modificato. Questa funzione viene in genere chiamata dalla classe di visualizzazione dopo che l'utente ha modificato il documento tramite una visualizzazione.

Questa funzione chiama la funzione membro [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate) per ognuna delle visualizzazioni del documento, ad eccezione della visualizzazione di invio, passando *pHint* e *lHint*. Utilizzare questi parametri per passare informazioni alle viste sulle modifiche apportate al documento. È possibile codificare le informazioni utilizzando *lHint* e/o è possibile definire una classe derivata da [CObject](../../mfc/reference/cobject-class.md)per archiviare informazioni sulle modifiche e passare un oggetto di tale classe utilizzando *pHint*. Eseguire `CView::OnUpdate` l'override della funzione membro nella classe derivata da [CView](../../mfc/reference/cview-class.md)per ottimizzare l'aggiornamento della visualizzazione in base alle informazioni passate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#64](../../mfc/codesnippet/cpp/cdocument-class_9.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC MDIDOCVW](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[NPP di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)
