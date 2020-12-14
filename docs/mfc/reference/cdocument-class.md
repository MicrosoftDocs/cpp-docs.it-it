---
description: 'Altre informazioni su: classe CDocument'
title: CDocument (classe)
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
ms.openlocfilehash: e821b82e849420fe82a7e40b7515bbb78e3284d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184803"
---
# <a name="cdocument-class"></a>CDocument (classe)

Fornisce la funzionalità di base per le classi documento definite dall'utente.

## <a name="syntax"></a>Sintassi

```
class CDocument : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDocument:: CDocument](#cdocument)|Costruisce un oggetto `CDocument`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDocument:: AddView](#addview)|Connette una visualizzazione al documento.|
|[CDocument:: BeginReadChunks](#beginreadchunks)|Inizializza la lettura del blocco.|
|[CDocument:: CanCloseFrame](#cancloseframe)|Sottoponibile a override avanzato; chiamato prima di chiudere una finestra cornice che visualizza questo documento.|
|[CDocument:: ClearChunkList](#clearchunklist)|Cancella l'elenco dei blocchi.|
|[CDocument:: ClearPathName](#clearpathname)|Cancella il percorso dell'oggetto documento.|
|[CDocument::D eleteContents](#deletecontents)|Chiamato per eseguire la pulizia del documento.|
|[CDocument:: FindChunk](#findchunk)|Cerca un blocco con il GUID specificato.|
|[CDocument:: GetAdapter](#getadapter)|Restituisce un puntatore all'interfaccia di implementazione dell'oggetto `IDocument` .|
|[CDocument:: GetDocTemplate](#getdoctemplate)|Restituisce un puntatore al modello di documento che descrive il tipo del documento.|
|[CDocument:: GetFile](#getfile)|Restituisce un puntatore all'oggetto desiderato `CFile` .|
|[CDocument:: GetFirstViewPosition](#getfirstviewposition)|Restituisce la posizione del primo oggetto nell'elenco di visualizzazioni; utilizzato per iniziare l'iterazione.|
|[CDocument:: GetNextView](#getnextview)|Scorre l'elenco di visualizzazioni associate al documento.|
|[CDocument:: GetPathName](#getpathname)|Restituisce il percorso del file di dati del documento.|
|[CDocument:: GetThumbnail](#getthumbnail)|Chiamato per creare una bitmap che verrà usata dal provider di anteprime per visualizzare l'anteprima.|
|[CDocument:: getTitle](#gettitle)|Restituisce il titolo del documento.|
|[CDocument:: InitializeSearchContent](#initializesearchcontent)|Chiamata eseguita per inizializzare il contenuto della ricerca per il gestore di ricerca.|
|[CDocument:: modified](#ismodified)|Indica se il documento è stato modificato dopo l'ultimo salvataggio.|
|[CDocument:: IsSearchAndOrganizeHandler](#issearchandorganizehandler)|Indica se questa istanza dell' `CDocument` oggetto è stata creata per la ricerca & gestore di organizzazione.|
|[CDocument:: LoadDocumentFromStream](#loaddocumentfromstream)|Chiamato per caricare i dati del documento dal flusso.|
|[CDocument:: OnBeforeRichPreviewFontChanged](#onbeforerichpreviewfontchanged)|Chiamato prima che venga modificato il tipo di carattere anteprima avanzata.|
|[CDocument:: OnChangedViewList](#onchangedviewlist)|Chiamata eseguita dopo l'aggiunta o la rimozione di una vista dal documento.|
|[CDocument:: OnCloseDocument](#onclosedocument)|Chiamato per chiudere il documento.|
|[CDocument:: OnCreatePreviewFrame](#oncreatepreviewframe)|Chiamata eseguita dal framework quando è necessario creare un frame di anteprima per l'anteprima avanzata.|
|[CDocument:: OnDocumentEvent](#ondocumentevent)|Chiamata eseguita dal Framework in risposta a un evento del documento.|
|[CDocument:: OnDrawThumbnail](#ondrawthumbnail)|Eseguire l'override di questo metodo in una classe derivata per creare il contenuto dell'anteprima.|
|[CDocument:: OnLoadDocumentFromStream](#onloaddocumentfromstream)|Chiamata eseguita dal framework quando è necessario caricare i dati del documento dal flusso.|
|[CDocument:: OnNewDocument](#onnewdocument)|Chiamato per creare un nuovo documento.|
|[CDocument:: OnOpenDocument](#onopendocument)|Chiamato per aprire un documento esistente.|
|[CDocument:: OnPreviewHandlerQueryFocus](#onpreviewhandlerqueryfocus)|Indica al gestore di anteprime di restituire a HWND la chiamata della funzione GetFocus.|
|[CDocument:: OnPreviewHandlerTranslateAccelerator](#onpreviewhandlertranslateaccelerator)|Indica al gestore di anteprime di gestire una sequenza di tasti passata dal message pump del processo in cui è in esecuzione il gestore di anteprime.|
|[CDocument:: OnRichPreviewBackColorChanged](#onrichpreviewbackcolorchanged)|Chiamato quando viene modificato il colore di sfondo dell'anteprima avanzata.|
|[CDocument:: OnRichPreviewFontChanged](#onrichpreviewfontchanged)|Chiamato quando viene modificato il carattere di anteprima RTF.|
|[CDocument:: OnRichPreviewSiteChanged](#onrichpreviewsitechanged)|Chiamato quando il sito di anteprima avanzata è stato modificato.|
|[CDocument:: OnRichPreviewTextColorChanged](#onrichpreviewtextcolorchanged)|Chiamato quando viene modificato il colore del testo di anteprima RTF.|
|[CDocument:: OnSaveDocument](#onsavedocument)|Chiamato per salvare il documento su disco.|
|[CDocument:: OnUnloadHandler](#onunloadhandler)|Chiamata eseguita dal Framework durante lo scaricamento del gestore di anteprime.|
|[CDocument::P reCloseFrame](#precloseframe)|Chiamato prima della chiusura della finestra cornice.|
|[CDocument:: ReadNextChunkValue](#readnextchunkvalue)|Legge il valore del blocco successivo.|
|[CDocument:: ReleaseFile](#releasefile)|Rilascia un file per renderlo disponibile per l'utilizzo da altre applicazioni.|
|[CDocument:: RemoveChunk](#removechunk)|Rimuove un blocco con il GUID specificato.|
|[CDocument:: RemoveView](#removeview)|Scollega una visualizzazione dal documento.|
|[CDocument:: ReportSaveLoadException](#reportsaveloadexception)|Sottoponibile a override avanzato; chiamato quando non è possibile completare un'operazione di apertura o salvataggio a causa di un'eccezione.|
|[CDocument:: SaveModified](#savemodified)|Sottoponibile a override avanzato; chiamato per richiedere all'utente se il documento deve essere salvato.|
|[CDocument:: SetChunkValue](#setchunkvalue)|Imposta un valore del blocco.|
|[CDocument:: SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica che il documento è stato modificato dopo l'ultimo salvataggio.|
|[CDocument:: sepathname](#setpathname)|Imposta il percorso del file di dati utilizzato dal documento.|
|[CDocument:: toTitle](#settitle)|Imposta il titolo del documento.|
|[CDocument:: UpdateAllViews](#updateallviews)|Notifica a tutte le visualizzazioni che il documento è stato modificato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CDocument:: OnFileSendMail](#onfilesendmail)|Invia un messaggio di posta elettronica con il documento allegato.|
|[CDocument:: OnUpdateFileSendMail](#onupdatefilesendmail)|Abilita il comando Invia messaggi se è presente il supporto per la posta elettronica.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDocument:: m_bGetThumbnailMode](#m_bgetthumbnailmode)|Specifica che l' `CDocument` oggetto è stato creato da dllhost per le anteprime. Deve essere archiviato `CView::OnDraw` .|
|[CDocument:: m_bPreviewHandlerMode](#m_bpreviewhandlermode)|Specifica che l' `CDocument` oggetto è stato creato da prevhost per `Rich Preview` . Deve essere archiviato `CView::OnDraw` .|
|[CDocument:: m_bSearchMode](#m_bsearchmode)|Specifica che l' `CDocument` oggetto è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.|
|[CDocument:: m_clrRichPreviewBackColor](#m_clrrichpreviewbackcolor)|Specifica il colore di sfondo della finestra di anteprima avanzata. Questo colore è impostato dall'host.|
|[CDocument:: m_clrRichPreviewTextColor](#m_clrrichpreviewtextcolor)|Specifica il colore di primo piano della finestra di anteprima avanzata. Questo colore è impostato dall'host.|
|[CDocument:: m_lfRichPreviewFont](#m_lfrichpreviewfont)|Specifica il tipo di carattere del testo per la finestra di anteprima avanzata. Queste informazioni sul tipo di carattere sono impostate dall'host.|

## <a name="remarks"></a>Commenti

Un documento rappresenta l'unità di dati che l'utente apre in genere con il comando Apri file e Salva con il comando file Salva.

`CDocument` supporta operazioni standard come la creazione di un documento, il caricamento e il salvataggio. Il Framework modifica i documenti usando l'interfaccia definita da `CDocument` .

Un'applicazione può supportare più di un tipo di documento; ad esempio, un'applicazione potrebbe supportare sia fogli di calcolo che documenti di testo. A ogni tipo di documento è associato un modello di documento; il modello di documento specifica quali risorse (ad esempio, menu, icona o tabella di tasti di scelta rapida) vengono utilizzate per quel tipo di documento. Ogni documento contiene un puntatore all'oggetto associato `CDocTemplate` .

Gli utenti interagiscono con un documento tramite gli oggetti [CView](../../mfc/reference/cview-class.md) associati. Una visualizzazione esegue il rendering di un'immagine del documento in una finestra cornice e interpreta l'input dell'utente come operazioni nel documento. A un documento possono essere associate più visualizzazioni. Quando l'utente apre una finestra in un documento, il Framework crea una visualizzazione e la collega al documento. Il modello di documento specifica il tipo di visualizzazione e la finestra cornice utilizzati per visualizzare ogni tipo di documento.

I documenti fanno parte del routing dei comandi standard del Framework e, di conseguenza, ricevono comandi dai componenti standard dell'interfaccia utente, ad esempio la voce di menu Salva file. Un documento riceve i comandi inoltrati dalla visualizzazione attiva. Se il documento non gestisce un determinato comando, il comando viene inviato al modello di documento che lo gestisce.

Quando i dati di un documento vengono modificati, ogni visualizzazione deve riflettere tali modifiche. `CDocument` fornisce la funzione membro [UpdateAllViews](#updateallviews) per notificare le visualizzazioni di tali modifiche, in modo che le visualizzazioni possano essere ridisegnate se necessario. Il Framework richiede inoltre all'utente di salvare un file modificato prima di chiuderlo.

Per implementare i documenti in un'applicazione tipica, è necessario eseguire le operazioni seguenti:

- Derivare una classe da `CDocument` per ogni tipo di documento.

- Aggiungere variabili membro per archiviare i dati di ogni documento.

- Implementare le funzioni membro per la lettura e la modifica dei dati del documento. Le visualizzazioni del documento sono gli utenti più importanti di queste funzioni membro.

- Eseguire l'override della funzione membro [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) nella classe del documento per scrivere e leggere i dati del documento da e verso il disco.

`CDocument` supporta l'invio del documento tramite posta elettronica se è presente il supporto per la posta elettronica (MAPI). Vedere [gli articoli supporto MAPI e](../../mfc/mapi.md) [MAPI in MFC](../../mfc/mapi-support-in-mfc.md).

Per ulteriori informazioni su `CDocument` , vedere l'argomento relativo alla [serializzazione](../../mfc/serialization-in-mfc.md), all' [architettura documento/visualizzazione](../../mfc/document-view-architecture.md)e alla [creazione di documenti/visualizzazioni](../../mfc/document-view-creation.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocument`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cdocumentaddview"></a><a name="addview"></a> CDocument:: AddView

Chiamare questa funzione per alleghi una visualizzazione al documento.

```cpp
void AddView(CView* pView);
```

### <a name="parameters"></a>Parametri

*pView*<br/>
Punta alla visualizzazione da aggiungere.

### <a name="remarks"></a>Commenti

Questa funzione aggiunge la visualizzazione specificata all'elenco di visualizzazioni associate al documento. la funzione imposta inoltre il puntatore del documento della visualizzazione su questo documento. Il Framework chiama questa funzione quando si connette un oggetto visualizzazione appena creato a un documento; Questo problema si verifica in risposta a un nuovo comando di file, Apri o nuova finestra o quando una finestra con separatore è divisa.

Chiamare questa funzione solo se si crea e si aggiunge manualmente una visualizzazione. In genere si consente al Framework di connettere documenti e visualizzazioni definendo un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per associare una classe di documento, una classe di visualizzazione e una classe della finestra cornice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocViewSDI#12](../../mfc/codesnippet/cpp/cdocument-class_1.cpp)]

## <a name="cdocumentbeginreadchunks"></a><a name="beginreadchunks"></a> CDocument:: BeginReadChunks

Inizializza la lettura del blocco.

```
virtual void BeginReadChunks ();
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentcancloseframe"></a><a name="cancloseframe"></a> CDocument:: CanCloseFrame

Chiamato dal Framework prima della chiusura di una finestra cornice che Visualizza il documento.

```
virtual BOOL CanCloseFrame(CFrameWnd* pFrame);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
Punta alla finestra cornice di una visualizzazione collegata al documento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è sicuro chiudere la finestra cornice; in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'implementazione predefinita controlla se sono presenti altre finestre cornice che visualizzano il documento. Se la finestra cornice specificata è l'ultima in cui viene visualizzato il documento, la funzione chiede all'utente di salvare il documento se è stato modificato. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando viene chiusa una finestra cornice. Si tratta di un oggetto avanzato sottoponibile a override.

## <a name="cdocumentcdocument"></a><a name="cdocument"></a> CDocument:: CDocument

Costruisce un oggetto `CDocument`.

```
CDocument();
```

### <a name="remarks"></a>Commenti

Il Framework gestisce automaticamente la creazione dei documenti. Eseguire l'override della funzione membro [OnNewDocument](#onnewdocument) per eseguire l'inizializzazione in base al documento; Questa operazione è particolarmente importante nelle applicazioni SDI (Single Document Interface).

## <a name="cdocumentclearchunklist"></a><a name="clearchunklist"></a> CDocument:: ClearChunkList

Cancella l'elenco dei blocchi.

```
virtual void ClearChunkList ();
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentclearpathname"></a><a name="clearpathname"></a> CDocument:: ClearPathName

Cancella il percorso dell'oggetto documento.

```
virtual void ClearPathName();
```

### <a name="remarks"></a>Commenti

Quando si cancella il percorso da un `CDocument` oggetto, l'applicazione richiede all'utente quando il documento viene salvato successivamente. In questo modo un comando **Salva** si comporta come un comando **Salva con nome** .

## <a name="cdocumentdeletecontents"></a><a name="deletecontents"></a> CDocument::D eleteContents

Chiamata eseguita dal Framework per eliminare i dati del documento senza eliminare definitivamente l' `CDocument` oggetto stesso.

```
virtual void DeleteContents();
```

### <a name="remarks"></a>Commenti

Viene chiamato immediatamente prima che il documento venga eliminato definitivamente. Viene anche chiamato per assicurarsi che un documento sia vuoto prima di essere riutilizzato. Questa operazione è particolarmente importante per un'applicazione SDI, che usa un solo documento; il documento viene riutilizzato ogni volta che l'utente crea o apre un altro documento. Chiamare questa funzione per implementare un comando "Edit Clear All" o un comando simile che elimina tutti i dati del documento. L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per eliminare i dati nel documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#57](../../mfc/codesnippet/cpp/cdocument-class_2.cpp)]

## <a name="cdocumentfindchunk"></a><a name="findchunk"></a> CDocument:: FindChunk

Cerca un blocco con un GUID specificato.

```
virtual POSITION FindChunk(
    REFCLSID guid,
    DWORD pid);
```

### <a name="parameters"></a>Parametri

*guid*<br/>
Specifica il GUID di un blocco da trovare.

*PID*<br/>
Specifica un PID di un blocco da trovare.

### <a name="return-value"></a>Valore restituito

Posizione nell'elenco di blocchi interno se ha esito positivo. In caso contrario, NULL.

### <a name="remarks"></a>Commenti

## <a name="cdocumentgetadapter"></a><a name="getadapter"></a> CDocument:: GetAdapter

Restituisce un puntatore a un oggetto che implementa l' `IDocument` interfaccia.

```
virtual ATL::IDocument* GetAdapter();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto che implementa l' `IDocument` interfaccia.

### <a name="remarks"></a>Commenti

## <a name="cdocumentgetdoctemplate"></a><a name="getdoctemplate"></a> CDocument:: GetDocTemplate

Chiamare questa funzione per ottenere un puntatore al modello di documento per questo tipo di documento.

```
CDocTemplate* GetDocTemplate() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al modello di documento per questo tipo di documento oppure NULL se il documento non è gestito da un modello di documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#58](../../mfc/codesnippet/cpp/cdocument-class_3.cpp)]

## <a name="cdocumentgetfile"></a><a name="getfile"></a> CDocument:: GetFile

Chiamare questa funzione membro per ottenere un puntatore a un `CFile` oggetto.

```
virtual CFile* GetFile(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CFileException* pError);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto.

*pError*<br/>
Puntatore a un oggetto di eccezione del file esistente che indica lo stato di completamento dell'operazione.

*nOpenFlags*<br/>
Modalità di condivisione e accesso. Specifica l'azione da intraprendere quando si apre il file. È possibile combinare le opzioni elencate nel costruttore CFile [CFile:: CFile](../../mfc/reference/cfile-class.md#cfile) usando l'operatore OR bit per bit (&#124;). Sono necessarie un'autorizzazione di accesso e un'opzione di condivisione; le `modeCreate` `modeNoInherit` modalità e sono facoltative.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CFile`.

## <a name="cdocumentgetfirstviewposition"></a><a name="getfirstviewposition"></a> CDocument:: GetFirstViewPosition

Chiamare questa funzione per ottenere la posizione della prima visualizzazione nell'elenco di visualizzazioni associate al documento.

```
virtual POSITION GetFirstViewPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione con la funzione membro [GetNextView](#getnextview) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#59](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]

## <a name="cdocumentgetnextview"></a><a name="getnextview"></a> CDocument:: GetNextView

Chiamare questa funzione per scorrere tutte le visualizzazioni del documento.

```
virtual CView* GetNextView(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*rPosition*<br/>
Riferimento a un valore di posizione restituito da una chiamata precedente alle `GetNextView` funzioni membro o [GetFirstViewPosition](#getfirstviewposition) . Questo valore non può essere NULL.

### <a name="return-value"></a>Valore restituito

Puntatore alla visualizzazione identificata da *rPosition*.

### <a name="remarks"></a>Commenti

La funzione restituisce la visualizzazione identificata da *rPosition* , quindi imposta *rPosition* sul valore di posizione della visualizzazione successiva nell'elenco. Se la vista recuperata è l'ultima nell'elenco, *rPosition* è impostato su null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#59](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]

## <a name="cdocumentgetpathname"></a><a name="getpathname"></a> CDocument:: GetPathName

Chiamare questa funzione per ottenere il percorso completo del file su disco del documento.

```
const CString& GetPathName() const;
```

### <a name="return-value"></a>Valore restituito

Percorso completo del documento. Questa stringa è vuota se il documento non è stato salvato o non è associato a un file su disco.

## <a name="cdocumentgetthumbnail"></a><a name="getthumbnail"></a> CDocument:: GetThumbnail

Crea una bitmap che verrà usata dal provider di anteprime per visualizzare l'anteprima.

```
virtual BOOL GetThumbnail(
    UINT cx,
    HBITMAP* phbmp,
    DWORD* pdwAlpha);
```

### <a name="parameters"></a>Parametri

*CX*<br/>
Specifica la larghezza e l'altezza della bitmap.

*phbmp*<br/>
Contiene un handle per una bitmap, quando la funzione restituisce correttamente.

*pdwAlpha*<br/>
Contiene un valore DWORD che specifica il valore del canale alfa, quando la funzione restituisce correttamente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se una bitmap per l'anteprima è stata creata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cdocumentgettitle"></a><a name="gettitle"></a> CDocument:: getTitle

Chiamare questa funzione per ottenere il titolo del documento, che in genere deriva dal nome file del documento.

```
const CString& GetTitle() const;
```

### <a name="return-value"></a>Valore restituito

Titolo del documento.

## <a name="cdocumentinitializesearchcontent"></a><a name="initializesearchcontent"></a> CDocument:: InitializeSearchContent

Chiamato per inizializzare il contenuto della ricerca per il gestore di ricerca.

```
virtual void InitializeSearchContent ();
```

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo in una classe derivata per inizializzare il contenuto della ricerca. Il contenuto deve essere una stringa con parti delimitate da ";". Ad esempio, "Point; rettangolo elemento OLE ".

## <a name="cdocumentismodified"></a><a name="ismodified"></a> CDocument:: modified

Chiamare questa funzione per determinare se il documento è stato modificato dopo l'ultimo salvataggio.

```
virtual BOOL IsModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato modificato dopo l'ultimo salvataggio. in caso contrario, 0.

## <a name="cdocumentissearchandorganizehandler"></a><a name="issearchandorganizehandler"></a> CDocument:: IsSearchAndOrganizeHandler

Indica se questa istanza di `CDocument` è stata creata per il gestore di ricerca & organizzare.

```
BOOL IsSearchAndOrganizeHandler() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se questa istanza di `CDocument` è stata creata per la ricerca & gestore di organizzazione.

### <a name="remarks"></a>Commenti

Attualmente questa funzione restituisce TRUE solo per i gestori di anteprime avanzati implementati in un server out-of-process. È possibile impostare i flag appropriati (m_bPreviewHandlerMode, m_bSearchMode, m_bGetThumbnailMode) a livello di applicazione per fare in modo che la funzione restituisca TRUE.

## <a name="cdocumentloaddocumentfromstream"></a><a name="loaddocumentfromstream"></a> CDocument:: LoadDocumentFromStream

Chiamato per caricare i dati del documento da un flusso.

```
virtual HRESULT LoadDocumentFromStream(
    IStream* pStream,
    DWORD dwGrfMode);
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
Puntatore a un flusso. Questo flusso viene fornito dalla Shell.

*dwGrfMode*<br/>
Modalità di accesso al flusso.

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione di caricamento ha esito positivo, in caso contrario HRESULT con un codice di errore.

### <a name="remarks"></a>Commenti

È possibile eseguire l'override di questo metodo in una classe derivata per personalizzare la modalità di caricamento dei dati dal flusso.

## <a name="cdocumentm_bgetthumbnailmode"></a><a name="m_bgetthumbnailmode"></a> CDocument:: m_bGetThumbnailMode

Specifica che l' `CDocument` oggetto è stato creato da dllhost per le anteprime. Deve essere archiviato `CView::OnDraw` .

```
BOOL m_bGetThumbnailMode;
```

### <a name="remarks"></a>Commenti

`TRUE` indica che il documento è stato creato da dllhost per le anteprime.

## <a name="cdocumentm_bpreviewhandlermode"></a><a name="m_bpreviewhandlermode"></a> CDocument:: m_bPreviewHandlerMode

Specifica che l' `CDocument` oggetto è stato creato da prevhost per l'anteprima avanzata. Deve essere archiviato `CView::OnDraw` .

```
BOOL m_bPreviewHandlerMode;
```

### <a name="remarks"></a>Commenti

TRUE indica che il documento è stato creato da prevhost per l'anteprima avanzata.

## <a name="cdocumentm_bsearchmode"></a><a name="m_bsearchmode"></a> CDocument:: m_bSearchMode

Specifica che l' `CDocument` oggetto è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.

```
BOOL m_bSearchMode;
```

### <a name="remarks"></a>Commenti

`TRUE` indica che il documento è stato creato dall'indicizzatore o da un'altra applicazione di ricerca.

## <a name="cdocumentm_clrrichpreviewbackcolor"></a><a name="m_clrrichpreviewbackcolor"></a> CDocument:: m_clrRichPreviewBackColor

Specifica il colore di sfondo della finestra di anteprima avanzata. Questo colore è impostato dall'host.

```
COLORREF m_clrRichPreviewBackColor;
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentm_clrrichpreviewtextcolor"></a><a name="m_clrrichpreviewtextcolor"></a> CDocument:: m_clrRichPreviewTextColor

Specifica il colore di primo piano della finestra di anteprima avanzata. Questo colore è impostato dall'host.

```
COLORREF m_clrRichPreviewTextColor;
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentm_lfrichpreviewfont"></a><a name="m_lfrichpreviewfont"></a> CDocument:: m_lfRichPreviewFont

Specifica il tipo di carattere del testo per la finestra di anteprima avanzata. Queste informazioni sul tipo di carattere sono impostate dall'host.

```
CFont m_lfRichPreviewFont;
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentonbeforerichpreviewfontchanged"></a><a name="onbeforerichpreviewfontchanged"></a> CDocument:: OnBeforeRichPreviewFontChanged

Chiamato prima che venga modificato il tipo di carattere di anteprima RTF.

```
virtual void OnBeforeRichPreviewFontChanged();
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentonchangedviewlist"></a><a name="onchangedviewlist"></a> CDocument:: OnChangedViewList

Chiamata eseguita dal Framework dopo l'aggiunta o la rimozione di una vista dal documento.

```
virtual void OnChangedViewList();
```

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione controlla se l'ultima visualizzazione viene rimossa e, in caso affermativo, Elimina il documento. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando il Framework aggiunge o rimuove una visualizzazione. Se, ad esempio, si desidera che un documento rimanga aperto anche quando non vi sono visualizzazioni associate, eseguire l'override di questa funzione.

## <a name="cdocumentonclosedocument"></a><a name="onclosedocument"></a> CDocument:: OnCloseDocument

Chiamata eseguita dal framework quando il documento viene chiuso, in genere come parte del comando file Close.

```
virtual void OnCloseDocument();
```

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione Elimina tutti i frame utilizzati per la visualizzazione del documento, chiude la visualizzazione, pulisce il contenuto del documento, quindi chiama la funzione membro [DeleteContents](#deletecontents) per eliminare i dati del documento.

Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale di pulizia quando il Framework chiude un documento. Se, ad esempio, il documento rappresenta un record in un database, potrebbe essere necessario eseguire l'override di questa funzione per chiudere il database. È necessario chiamare la versione della classe base di questa funzione dall'override.

## <a name="cdocumentoncreatepreviewframe"></a><a name="oncreatepreviewframe"></a> CDocument:: OnCreatePreviewFrame

Chiamata eseguita dal framework quando è necessario creare un frame di anteprima per l'anteprima avanzata.

```
virtual BOOL OnCreatePreviewFrame();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il frame viene creato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cdocumentondocumentevent"></a><a name="ondocumentevent"></a> CDocument:: OnDocumentEvent

Chiamata eseguita dal Framework in risposta a un evento del documento.

```
virtual void OnDocumentEvent(DocumentEvent deEvent);
```

### <a name="parameters"></a>Parametri

*deEvent*<br/>
in Tipo di dati enumerato che descrive il tipo di evento.

### <a name="remarks"></a>Commenti

Gli eventi di documento possono influenzare più classi. Questo metodo è responsabile della gestione degli eventi di documento che interessano classi diverse dalla [classe CDocument](../../mfc/reference/cdocument-class.md). Attualmente, l'unica classe che deve rispondere agli eventi di documento è la [classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md). La `CDocument` classe dispone di altri metodi sottoponibili a override responsabili della gestione dell'effetto su `CDocument` .

Nella tabella seguente sono elencati i valori possibili per *deEvent* e gli eventi a cui corrispondono.

|Valore|Evento corrispondente|
|-----------|-------------------------|
|`onAfterNewDocument`|È stato creato un nuovo documento.|
|`onAfterOpenDocument`|È stato aperto un nuovo documento.|
|`onAfterSaveDocument`|Il documento è stato salvato.|
|`onAfterCloseDocument`|Il documento è stato chiuso.|

## <a name="cdocumentondrawthumbnail"></a><a name="ondrawthumbnail"></a> CDocument:: OnDrawThumbnail

Eseguire l'override di questo metodo in una classe derivata per creare l'anteprima.

```
virtual void OnDrawThumbnail(
    CDC& dc,
    LPRECT lprcBounds);
```

### <a name="parameters"></a>Parametri

*DC*<br/>
Riferimento a un contesto di dispositivo.

*lprcBounds*<br/>
Specifica un rettangolo di delimitazione dell'area in cui deve essere disegnata l'anteprima.

### <a name="remarks"></a>Commenti

## <a name="cdocumentonfilesendmail"></a><a name="onfilesendmail"></a> CDocument:: OnFileSendMail

Invia un messaggio tramite l'host di posta elettronica residente, se presente, con il documento come allegato.

```cpp
void OnFileSendMail();
```

### <a name="remarks"></a>Commenti

`OnFileSendMail` chiama [OnSaveDocument](#onsavedocument) per serializzare (salvare) i documenti senza titolo e modificati in un file temporaneo, che viene quindi inviato tramite posta elettronica. Se il documento non è stato modificato, non è necessario un file temporaneo. viene inviato l'oggetto originale. `OnFileSendMail` carica MAPI32.DLL se non è già stato caricato.

Una speciale implementazione di `OnFileSendMail` per [COleDocument](../../mfc/reference/coledocument-class.md) gestisce correttamente i file composti.

`CDocument` supporta l'invio del documento tramite posta elettronica se è presente il supporto per la posta elettronica (MAPI). Vedere gli articoli [relativi a MAPI](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).

## <a name="cdocumentonloaddocumentfromstream"></a><a name="onloaddocumentfromstream"></a> CDocument:: OnLoadDocumentFromStream

Chiamata eseguita dal framework quando è necessario caricare i dati del documento da un flusso.

```
virtual HRESULT OnLoadDocumentFromStream(
    IStream* pStream,
    DWORD grfMode);
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
Puntatore a un flusso in ingresso.

*grfMode*<br/>
Modalità di accesso al flusso.

### <a name="return-value"></a>Valore restituito

S_OK se il caricamento ha esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Commenti

## <a name="cdocumentonnewdocument"></a><a name="onnewdocument"></a> CDocument:: OnNewDocument

Chiamato dal Framework come parte del comando file nuovo.

```
virtual BOOL OnNewDocument();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato inizializzato correttamente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione chiama la funzione membro [DeleteContents](#deletecontents) per verificare che il documento sia vuoto e quindi contrassegna il nuovo documento come pulito. Eseguire l'override di questa funzione per inizializzare la struttura dei dati per un nuovo documento. È necessario chiamare la versione della classe base di questa funzione dall'override.

Se l'utente sceglie il comando file nuovo in un'applicazione SDI, il Framework usa questa funzione per reinizializzare il documento esistente, anziché crearne uno nuovo. Se l'utente sceglie file nuovo in un'applicazione con interfaccia a documenti multipli (MDI), il Framework crea un nuovo documento ogni volta e quindi chiama questa funzione per inizializzarla. È necessario inserire il codice di inizializzazione in questa funzione anziché nel costruttore affinché il comando file nuovo sia efficace nelle applicazioni SDI.

Si noti che in alcuni casi `OnNewDocument` viene chiamato due volte. Questo errore si verifica quando il documento viene incorporato come server di documenti ActiveX. La funzione viene chiamata prima dal `CreateInstance` Metodo (esposto dalla `COleObjectFactory` classe derivata da) e una seconda volta dal `InitNew` Metodo (esposto dalla `COleServerDoc` classe derivata da).

### <a name="example"></a>Esempio

Gli esempi seguenti illustrano metodi alternativi per inizializzare un oggetto documento.

[!code-cpp[NVC_MFCDocView#60](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#61](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]

[!code-cpp[NVC_MFCDocView#62](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]

## <a name="cdocumentonopendocument"></a><a name="onopendocument"></a> CDocument:: OnOpenDocument

Chiamata eseguita dal Framework come parte del comando file aperto.

```
virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
Punta al percorso del documento da aprire.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato caricato correttamente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione apre il file specificato, chiama la funzione membro [DeleteContents](#deletecontents) per verificare che il documento sia vuoto, chiama [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per leggere il contenuto del file e quindi contrassegna il documento come pulito. Eseguire l'override di questa funzione se si desidera utilizzare un elemento diverso dal meccanismo di archiviazione o dal meccanismo del file. Ad esempio, è possibile scrivere un'applicazione in cui i documenti rappresentano record in un database piuttosto che file separati.

Se l'utente sceglie il comando Apri file in un'applicazione SDI, il Framework usa questa funzione per reinizializzare l' `CDocument` oggetto esistente, anziché crearne uno nuovo. Se l'utente sceglie file aperto in un'applicazione MDI, il Framework costruisce `CDocument` ogni volta un nuovo oggetto, quindi chiama questa funzione per inizializzarla. È necessario inserire il codice di inizializzazione in questa funzione anziché nel costruttore affinché il comando Apri file sia efficace nelle applicazioni SDI.

### <a name="example"></a>Esempio

Gli esempi seguenti illustrano metodi alternativi per inizializzare un oggetto documento.

[!code-cpp[NVC_MFCDocView#60](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#61](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]

[!code-cpp[NVC_MFCDocView#62](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]

[!code-cpp[NVC_MFCDocView#63](../../mfc/codesnippet/cpp/cdocument-class_8.cpp)]

## <a name="cdocumentonpreviewhandlerqueryfocus"></a><a name="onpreviewhandlerqueryfocus"></a> CDocument:: OnPreviewHandlerQueryFocus

Indica al gestore di anteprime di restituire l'HWND recuperato dalla chiamata alla `GetFocus` funzione.

```
virtual HRESULT OnPreviewHandlerQueryFocus(HWND* phwnd);
```

### <a name="parameters"></a>Parametri

*phwnd*<br/>
out Quando termina, questo metodo contiene un puntatore a HWND restituito dalla chiamata della `GetFocus` funzione dal thread in primo piano del gestore di anteprime.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se ha esito positivo; in caso contrario, un valore di errore.

### <a name="remarks"></a>Commenti

## <a name="cdocumentonpreviewhandlertranslateaccelerator"></a><a name="onpreviewhandlertranslateaccelerator"></a> CDocument:: OnPreviewHandlerTranslateAccelerator

Indica al gestore di anteprime di gestire una sequenza di tasti passata dal message pump del processo in cui è in esecuzione il gestore di anteprime.

```
virtual HRESULT OnPreviewHandlerTranslateAccelerator(MSG* pmsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
in Puntatore a un messaggio di finestra.

### <a name="return-value"></a>Valore restituito

Se il messaggio di sequenza di tasti può essere elaborato dal gestore di anteprime, il gestore lo elabora e restituisce S_OK. Se il gestore di anteprime non è in grado di elaborare il messaggio di sequenza, lo offre all'host tramite `IPreviewHandlerFrame::TranslateAccelerator` . Se l'host elabora il messaggio, questo metodo restituisce S_OK. Se l'host non elabora il messaggio, questo metodo restituisce S_FALSE.

### <a name="remarks"></a>Commenti

## <a name="cdocumentonrichpreviewbackcolorchanged"></a><a name="onrichpreviewbackcolorchanged"></a> CDocument:: OnRichPreviewBackColorChanged

Chiamato quando viene modificato il colore di sfondo dell'anteprima avanzata.

```
virtual void OnRichPreviewBackColorChanged();
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentonrichpreviewfontchanged"></a><a name="onrichpreviewfontchanged"></a> CDocument:: OnRichPreviewFontChanged

Chiamato quando il carattere di anteprima RTF è stato modificato.

```
virtual void OnRichPreviewFontChanged();
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentonrichpreviewsitechanged"></a><a name="onrichpreviewsitechanged"></a> CDocument:: OnRichPreviewSiteChanged

Chiamato quando il sito di anteprima avanzata è stato modificato.

```
virtual void OnRichPreviewSiteChanged();
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentonrichpreviewtextcolorchanged"></a><a name="onrichpreviewtextcolorchanged"></a> CDocument:: OnRichPreviewTextColorChanged

Chiamato quando viene modificato il colore del testo di anteprima RTF.

```
virtual void OnRichPreviewTextColorChanged();
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentonsavedocument"></a><a name="onsavedocument"></a> CDocument:: OnSaveDocument

Chiamata eseguita dal Framework come parte del comando Salva file o Salva con nome file.

```
virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
Punta al percorso completo in cui salvare il file.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento è stato salvato correttamente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione apre il file specificato, chiama [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per scrivere i dati del documento nel file e quindi contrassegna il documento come pulito. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando il framework salva un documento. Ad esempio, è possibile scrivere un'applicazione in cui i documenti rappresentano record in un database piuttosto che file separati.

## <a name="cdocumentonunloadhandler"></a><a name="onunloadhandler"></a> CDocument:: OnUnloadHandler

Chiamata eseguita dal framework quando il gestore di anteprime viene scaricato.

```
virtual void OnUnloadHandler();
```

### <a name="remarks"></a>Commenti

## <a name="cdocumentonupdatefilesendmail"></a><a name="onupdatefilesendmail"></a> CDocument:: OnUpdateFileSendMail

Abilita il comando ID_FILE_SEND_MAIL se è presente il supporto per la posta elettronica (MAPI).

```cpp
void OnUpdateFileSendMail(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore all'oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) associato al comando ID_FILE_SEND_MAIL.

### <a name="remarks"></a>Commenti

In caso contrario, la funzione rimuove il comando ID_FILE_SEND_MAIL dal menu, inclusi i separatori sopra o sotto la voce di menu nel modo appropriato. MAPI è abilitato se MAPI32.DLL è presente nel percorso e, nella sezione [mail] del file WIN.INI, MAPI = 1. La maggior parte delle applicazioni inserisce questo comando nel menu file.

`CDocument` supporta l'invio del documento tramite posta elettronica se è presente il supporto per la posta elettronica (MAPI). Vedere gli articoli [relativi a MAPI](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md).

## <a name="cdocumentprecloseframe"></a><a name="precloseframe"></a> CDocument::P reCloseFrame

Questa funzione membro viene chiamata dal Framework prima che la finestra cornice venga distrutta.

```
virtual void PreCloseFrame(CFrameWnd* pFrame);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
Puntatore a [CFrameWnd](../../mfc/reference/cframewnd-class.md) che include l'oggetto associato `CDocument` .

### <a name="remarks"></a>Commenti

È possibile eseguirne l'override per fornire la pulizia personalizzata, ma assicurarsi di chiamare anche la classe di base.

Il valore predefinito di `PreCloseFrame` non esegue alcuna operazione in `CDocument` . Le `CDocument` classi derivate da [COleDocument](../../mfc/reference/coledocument-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) utilizzano questa funzione membro.

## <a name="cdocumentreadnextchunkvalue"></a><a name="readnextchunkvalue"></a> CDocument:: ReadNextChunkValue

Legge il valore del blocco successivo.

```
virtual BOOL ReadNextChunkValue(IFilterChunkValue** ppValue);
```

### <a name="parameters"></a>Parametri

*ppValue*<br/>
out Quando la funzione restituisce, *ppValue* contiene il valore letto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

## <a name="cdocumentreleasefile"></a><a name="releasefile"></a> CDocument:: ReleaseFile

Questa funzione membro viene chiamata dal Framework per rilasciare un file, rendendolo disponibile per l'utilizzo da parte di altre applicazioni.

```
virtual void ReleaseFile(
    CFile* pFile,
    BOOL bAbort);
```

### <a name="parameters"></a>Parametri

*pFile*<br/>
Puntatore all'oggetto CFile da rilasciare.

*bAbort*<br/>
Specifica se il file deve essere rilasciato utilizzando `CFile::Close` o `CFile::Abort` . FALSE se il file deve essere rilasciato utilizzando [CFile:: Close](../../mfc/reference/cfile-class.md#close); TRUE se il file deve essere rilasciato utilizzando [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).

### <a name="remarks"></a>Commenti

Se *bAbort* è true, `ReleaseFile` chiama `CFile::Abort` e il file viene rilasciato. `CFile::Abort` non genererà un'eccezione.

Se *bAbort* è false, `ReleaseFile` `CFile::Close` le chiamate e il file vengono rilasciati.

Eseguire l'override di questa funzione membro per richiedere un'azione da parte dell'utente prima che il file venga rilasciato.

## <a name="cdocumentremovechunk"></a><a name="removechunk"></a> CDocument:: RemoveChunk

Rimuove un blocco con il GUID specificato.

```
virtual void RemoveChunk(
    REFCLSID guid,
    DWORD pid);
```

### <a name="parameters"></a>Parametri

*GUID*<br/>
Specifica il GUID di un blocco da rimuovere.

*PID*<br/>
Specifica il PID di un blocco da rimuovere.

### <a name="remarks"></a>Commenti

## <a name="cdocumentremoveview"></a><a name="removeview"></a> CDocument:: RemoveView

Chiamare questa funzione per scollegare una visualizzazione da un documento.

```cpp
void RemoveView(CView* pView);
```

### <a name="parameters"></a>Parametri

*pView*<br/>
Punta alla visualizzazione da rimuovere.

### <a name="remarks"></a>Commenti

Questa funzione rimuove la visualizzazione specificata dall'elenco di visualizzazioni associate al documento. imposta anche il puntatore del documento della visualizzazione su NULL. Questa funzione viene chiamata dal framework quando viene chiusa una finestra cornice o viene chiuso un riquadro di una finestra con separatore.

Chiamare questa funzione solo se si scollega manualmente una visualizzazione. In genere si consente al Framework di scollegare i documenti e le visualizzazioni definendo un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per associare una classe di documento, una classe di visualizzazione e una classe della finestra cornice.

Per un'implementazione di esempio, vedere l'esempio in [AddView](#addview) .

## <a name="cdocumentreportsaveloadexception"></a><a name="reportsaveloadexception"></a> CDocument:: ReportSaveLoadException

Chiamata eseguita se viene generata un'eccezione, in genere un oggetto [CFileException](../../mfc/reference/cfileexception-class.md) o [CArchiveException](../../mfc/reference/carchiveexception-class.md), durante il salvataggio o il caricamento del documento.

```
virtual void ReportSaveLoadException(
    LPCTSTR lpszPathName,
    CException* e,
    BOOL bSaving,
    UINT nIDPDefault);
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
Punta al nome del documento che è stato salvato o caricato.

*e*<br/>
Punta all'eccezione generata. Può essere Null.

*bSaving*<br/>
Flag che indica l'operazione in corso. diverso da zero se il documento è stato salvato, 0 se il documento è stato caricato.

*nIDPDefault*<br/>
Identificatore del messaggio di errore da visualizzare se la funzione non specifica uno più specifico.

### <a name="remarks"></a>Commenti

L'implementazione predefinita esamina l'oggetto eccezione e cerca un messaggio di errore che descrive in modo specifico la cause. Se un messaggio specifico non viene trovato o se *e* è null, viene utilizzato il messaggio generale specificato dal parametro *nIDPDefault* . La funzione Visualizza quindi una finestra di messaggio contenente il messaggio di errore. Eseguire l'override di questa funzione se si desidera fornire messaggi di errore aggiuntivi personalizzati. Si tratta di un oggetto avanzato sottoponibile a override.

## <a name="cdocumentsavemodified"></a><a name="savemodified"></a> CDocument:: SaveModified

Chiamato dal Framework prima che un documento modificato venga chiuso.

```
virtual BOOL SaveModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è sicuro continuare e chiudere il documento; 0 se il documento non deve essere chiuso.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di questa funzione Visualizza una finestra di messaggio in cui viene chiesto all'utente se salvare le modifiche apportate al documento, se presenti. Eseguire l'override di questa funzione se il programma richiede una procedura di richiesta diversa. Si tratta di un oggetto avanzato sottoponibile a override.

## <a name="cdocumentsetchunkvalue"></a><a name="setchunkvalue"></a> CDocument:: SetChunkValue

Imposta un valore del blocco.

```
virtual BOOL SetChunkValue (IFilterChunkValue* pValue);
```

### <a name="parameters"></a>Parametri

*pValue*<br/>
Specifica un valore di blocco da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

## <a name="cdocumentsetmodifiedflag"></a><a name="setmodifiedflag"></a> CDocument:: SetModifiedFlag

Chiamare questa funzione dopo avere apportato modifiche al documento.

```
virtual void SetModifiedFlag(BOOL bModified = TRUE);
```

### <a name="parameters"></a>Parametri

*bModified*<br/>
Flag che indica se il documento è stato modificato.

### <a name="remarks"></a>Commenti

Chiamando in modo coerente questa funzione, si garantisce che il Framework chieda all'utente di salvare le modifiche prima di chiudere un documento. In genere è consigliabile usare il valore predefinito TRUE per il parametro *bModified* . Per contrassegnare un documento come pulito (non modificato), chiamare questa funzione con un valore FALSE.

## <a name="cdocumentsetpathname"></a><a name="setpathname"></a> CDocument:: sepathname

Chiamare questa funzione per specificare il percorso completo del file su disco del documento.

```
virtual void SetPathName(
    LPCTSTR lpszPathName,
    BOOL bAddToMRU = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
Punta alla stringa da utilizzare come percorso del documento.

*bAddToMRU*<br/>
Determina se il nome del file viene aggiunto all'elenco dei file utilizzati più di recente (MRU). Se TRUE, il nome file viene aggiunto; Se FALSE, non viene aggiunto.

### <a name="remarks"></a>Commenti

A seconda del valore di *bAddToMRU* , il percorso viene aggiunto o non aggiunto all'elenco MRU gestito dall'applicazione. Si noti che alcuni documenti non sono associati a un file su disco. Chiamare questa funzione solo se si esegue l'override dell'implementazione predefinita per l'apertura e il salvataggio dei file usati dal Framework.

## <a name="cdocumentsettitle"></a><a name="settitle"></a> CDocument:: toTitle

Chiamare questa funzione per specificare il titolo del documento, ovvero la stringa visualizzata nella barra del titolo di una finestra cornice.

```
virtual void SetTitle(LPCTSTR lpszTitle);
```

### <a name="parameters"></a>Parametri

*lpszTitle*<br/>
Punta alla stringa da utilizzare come titolo del documento.

### <a name="remarks"></a>Commenti

La chiamata a questa funzione aggiorna i titoli di tutte le finestre cornice che visualizzano il documento.

## <a name="cdocumentupdateallviews"></a><a name="updateallviews"></a> CDocument:: UpdateAllViews

Chiamare questa funzione dopo che il documento è stato modificato.

```cpp
void UpdateAllViews(
    CView* pSender,
    LPARAM lHint = 0L,
    CObject* pHint = NULL);
```

### <a name="parameters"></a>Parametri

*pSender*<br/>
Punta alla visualizzazione che ha modificato il documento oppure NULL se tutte le viste devono essere aggiornate.

*lHint*<br/>
Contiene informazioni sulla modifica.

*pHint*<br/>
Punta a un oggetto che archivia le informazioni sulla modifica.

### <a name="remarks"></a>Commenti

È necessario chiamare questa funzione dopo la chiamata della funzione membro [SetModifiedFlag](#setmodifiedflag) . Questa funzione informa ogni visualizzazione collegata al documento, ad eccezione della visualizzazione specificata da *pSender*, che il documento è stato modificato. Questa funzione viene in genere chiamata dalla classe di visualizzazione dopo che l'utente ha modificato il documento tramite una visualizzazione.

Questa funzione chiama la funzione membro [CView:: OnUpdate](../../mfc/reference/cview-class.md#onupdate) per ogni vista del documento, ad eccezione della vista di invio, passando *pHint* e *lHint*. Utilizzare questi parametri per passare informazioni alle viste relative alle modifiche apportate al documento. È possibile codificare le informazioni usando *lHint* e/o è possibile definire una classe derivata da [CObject](../../mfc/reference/cobject-class.md)per archiviare le informazioni sulle modifiche e passare un oggetto di tale classe usando *pHint*. Eseguire l'override della `CView::OnUpdate` funzione membro nella classe derivata da [CView](../../mfc/reference/cview-class.md)per ottimizzare l'aggiornamento della visualizzazione della visualizzazione in base alle informazioni passate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#64](../../mfc/codesnippet/cpp/cdocument-class_9.cpp)]

## <a name="see-also"></a>Vedere anche

[MDIDOCVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[SNAPVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[NPP di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)
