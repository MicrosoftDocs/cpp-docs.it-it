---
title: Classe CDocTemplate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDocTemplate
- AFXWIN/CDocTemplate
- AFXWIN/CDocTemplate::CDocTemplate
- AFXWIN/CDocTemplate::AddDocument
- AFXWIN/CDocTemplate::CloseAllDocuments
- AFXWIN/CDocTemplate::CreateNewDocument
- AFXWIN/CDocTemplate::CreateNewFrame
- AFXWIN/CDocTemplate::CreateOleFrame
- AFXWIN/CDocTemplate::CreatePreviewFrame
- AFXWIN/CDocTemplate::GetDocString
- AFXWIN/CDocTemplate::GetFirstDocPosition
- AFXWIN/CDocTemplate::GetNextDoc
- AFXWIN/CDocTemplate::InitialUpdateFrame
- AFXWIN/CDocTemplate::LoadTemplate
- AFXWIN/CDocTemplate::MatchDocType
- AFXWIN/CDocTemplate::OpenDocumentFile
- AFXWIN/CDocTemplate::RemoveDocument
- AFXWIN/CDocTemplate::SaveAllModified
- AFXWIN/CDocTemplate::SetContainerInfo
- AFXWIN/CDocTemplate::SetDefaultTitle
- AFXWIN/CDocTemplate::SetPreviewInfo
- AFXWIN/CDocTemplate::SetServerInfo
dev_langs:
- C++
helpviewer_keywords:
- CDocTemplate [MFC], CDocTemplate
- CDocTemplate [MFC], AddDocument
- CDocTemplate [MFC], CloseAllDocuments
- CDocTemplate [MFC], CreateNewDocument
- CDocTemplate [MFC], CreateNewFrame
- CDocTemplate [MFC], CreateOleFrame
- CDocTemplate [MFC], CreatePreviewFrame
- CDocTemplate [MFC], GetDocString
- CDocTemplate [MFC], GetFirstDocPosition
- CDocTemplate [MFC], GetNextDoc
- CDocTemplate [MFC], InitialUpdateFrame
- CDocTemplate [MFC], LoadTemplate
- CDocTemplate [MFC], MatchDocType
- CDocTemplate [MFC], OpenDocumentFile
- CDocTemplate [MFC], RemoveDocument
- CDocTemplate [MFC], SaveAllModified
- CDocTemplate [MFC], SetContainerInfo
- CDocTemplate [MFC], SetDefaultTitle
- CDocTemplate [MFC], SetPreviewInfo
- CDocTemplate [MFC], SetServerInfo
ms.assetid: 14b41a1f-bf9d-4eac-b6a8-4c54ffcc77f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5e3b2fcdda2c4002bd83894b93488bf848c159dd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46396597"
---
# <a name="cdoctemplate-class"></a>Classe CDocTemplate

Classe di base astratta che definisce le funzionalità di base per i modelli di documenti.

## <a name="syntax"></a>Sintassi

```
class CDocTemplate : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDocTemplate::CDocTemplate](#cdoctemplate)|Costruisce un oggetto `CDocTemplate`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDocTemplate::AddDocument](#adddocument)|Aggiunge un documento a un modello.|
|[CDocTemplate::CloseAllDocuments](#closealldocuments)|Chiude tutti i documenti associati a questo modello.|
|[CDocTemplate::CreateNewDocument](#createnewdocument)|Crea un nuovo documento.|
|[CDocTemplate::CreateNewFrame](#createnewframe)|Crea una nuova finestra cornice contenente un documento e visualizzazione.|
|[CDocTemplate::CreateOleFrame](#createoleframe)|Crea una finestra cornice OLE abilitate.|
|[CDocTemplate::CreatePreviewFrame](#createpreviewframe)|Crea una cornice figlio usata per l'anteprima avanzata.|
|[CDocTemplate::GetDocString](#getdocstring)|Recupera una stringa associata al tipo di documento.|
|[CDocTemplate::GetFirstDocPosition](#getfirstdocposition)|Recupera la posizione del primo documento associato al modello.|
|[CDocTemplate::GetNextDoc](#getnextdoc)|Recupera un documento e la posizione di quello successivo.|
|[CDocTemplate::InitialUpdateFrame](#initialupdateframe)|Inizializza la finestra cornice e facoltativamente lo rende visibile.|
|[CDocTemplate::LoadTemplate](#loadtemplate)|Carica le risorse per un determinato `CDocTemplate` o una classe derivata.|
|[CDocTemplate::MatchDocType](#matchdoctype)|Determina il livello di confidenza della corrispondenza tra un tipo di documento e questo modello.|
|[CDocTemplate:: OpenDocumentFile](#opendocumentfile)|Apre un file specificato da un nome di percorso.|
|[CDocTemplate::RemoveDocument](#removedocument)|Rimuove un documento da un modello.|
|[CDocTemplate::SaveAllModified](#saveallmodified)|Salva tutti i documenti associati a questo modello che sono stati modificati.|
|[CDocTemplate:: SetContainerInfo](#setcontainerinfo)|Determina le risorse per contenitori OLE durante la modifica di un elemento OLE sul posto.|
|[CDocTemplate::SetDefaultTitle](#setdefaulttitle)|Il titolo predefinito viene visualizzato nella barra del titolo della finestra del documento.|
|[CDocTemplate::SetPreviewInfo](#setpreviewinfo)|Gestore di anteprime di configurazioni di fuori del processo.|
|[CDocTemplate:: SetServerInfo](#setserverinfo)|Determina le risorse e le classi quando il documento server incorporato o modifica sul posto.|

## <a name="remarks"></a>Note

Si crea in genere uno o più modelli di documento nell'implementazione dell'applicazione `InitInstance` (funzione). Un modello di documento definisce le relazioni tra i tre tipi di classi:

- Una classe documento, che si deriva da `CDocument`.

- Una classe di visualizzazione, che visualizza i dati dalla classe documento elencato in precedenza. È possibile derivare questa classe da `CView`, `CScrollView`, `CFormView`, o `CEditView`. (È anche possibile usare `CEditView` direttamente.)

- Una classe di finestra cornice, che contiene la vista. Per un'applicazione single document interface (SDI), si deriva questa classe da `CFrameWnd`. Per un'applicazione (MDI) interfaccia a documenti multipli, è derivare questa classe da `CMDIChildWnd`. Se non è necessario personalizzare il comportamento della finestra cornice, è possibile usare `CFrameWnd` o `CMDIChildWnd` direttamente senza derivare una classe personalizzata.

L'applicazione dispone di un modello di documento per ogni tipo di documento supportati. Ad esempio, se l'applicazione supporta i fogli di calcolo e documenti di testo, l'applicazione ha due oggetti modello di documento. Ogni modello di documento è responsabile della creazione e gestione di tutti i documenti del relativo tipo.

Il modello di documento archivia i puntatori al `CRuntimeClass` gli oggetti per il documento, visualizzazione e classi finestra cornice. Questi `CRuntimeClass` gli oggetti vengono specificati durante la creazione di un modello di documento.

Il modello di documento contiene l'ID delle risorse utilizzate con il tipo di documento (ad esempio menu, icona o tasto di scelta rapida tabella risorse). Il modello di documento include anche le stringhe che contiene informazioni aggiuntive sul relativo tipo di documento. Sono inclusi il nome del tipo di documento (ad esempio, "foglio di lavoro") e l'estensione di file (ad esempio, "xls"). Facoltativamente, può contenere altre stringhe utilizzate dall'interfaccia utente dell'applicazione, la gestione di File di Windows e Object Linking and supporto Embedding (OLE).

Se l'applicazione è un contenitore OLE e/o server, il modello di documento definisce anche l'ID del menu usato durante l'attivazione sul posto. Se l'applicazione è un server OLE, il modello di documento definisce l'ID della barra degli strumenti e menu usata durante l'attivazione sul posto. Specificare queste risorse OLE aggiuntive chiamando `SetContainerInfo` e `SetServerInfo`.

Poiché `CDocTemplate` è una classe astratta, è possibile usare direttamente la classe. Un'applicazione tipica utilizza uno dei due `CDocTemplate`-le classi fornite dalla libreria di classi Microsoft Foundation derivate: `CSingleDocTemplate`, che implementa SDI, e `CMultiDocTemplate`, che implementa MDI. Vedere le classi per altre informazioni sull'uso dei modelli di documento.

Se l'applicazione richiede un paradigma dell'interfaccia utente che è fondamentalmente diverso da SDI o MDI, è possibile derivare la propria classe da `CDocTemplate`.

Per ulteriori informazioni sul `CDocTemplate`, vedere [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocTemplate`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="adddocument"></a>  CDocTemplate::AddDocument

Utilizzare questa funzione per aggiungere un documento a un modello.

```
virtual void AddDocument(CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Puntatore al documento da aggiungere.

### <a name="remarks"></a>Note

Le classi derivate [CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md) e [CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md) l'override della funzione. Se è derivare la propria classe di modello di documento da `CDocTemplate`, la classe derivata deve eseguire l'override di questa funzione.

##  <a name="cdoctemplate"></a>  CDocTemplate::CDocTemplate

Costruisce un oggetto `CDocTemplate`.

```
CDocTemplate (
    UINT nIDResource,
    CRuntimeClass* pDocClass,
    CRuntimeClass* pFrameClass,
    CRuntimeClass* pViewClass);
```

### <a name="parameters"></a>Parametri

*nIDResource*<br/>
Specifica l'ID delle risorse utilizzate con il tipo di documento. Può trattarsi di menu, icona, tabella di tasti di scelta rapida e risorse di tipo stringa.

La risorsa di tipo stringa è costituito da sottostringhe fino a sette separate dal carattere '\n' (il carattere '\n' come richiesto per un segnaposto se non è inclusa una sottostringa; tuttavia, non sono necessari i caratteri finali '\n'); le sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [GetDocString](#getdocstring). Questa risorsa stringa è stata trovata nel file di risorse dell'applicazione. Ad esempio:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"
END
```

Si noti che la stringa inizia con un carattere '\n'. infatti, la prima sottostringa non viene utilizzata per le applicazioni MDI e pertanto non è inclusa. È possibile modificare questa stringa usando l'editor di stringa; l'intera stringa viene visualizzato come una singola voce nell'Editor di stringa, non come sette voci separate.

*pDocClass*<br/>
Punta al `CRuntimeClass` oggetto della classe documento. Questa classe è un `CDocument`-definiti dall'utente per rappresentare documenti di classe derivata.

*pFrameClass*<br/>
Punta al `CRuntimeClass` oggetto della classe della finestra cornice. Questa classe può essere un' `CFrameWnd`-classe derivata, o può essere `CFrameWnd` stesso se si desidera il comportamento predefinito per la finestra cornice principale.

*pViewClass*<br/>
Punta al `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è un `CView`-definiti dall'utente per visualizzare i documenti di classe derivata.

### <a name="remarks"></a>Note

Utilizzare questa funzione membro per costruire un `CDocTemplate` oggetto. Allocare dinamicamente un `CDocTemplate` dell'oggetto e passarlo a [CWinApp:: AddDocTemplate](../../mfc/reference/cwinapp-class.md#adddoctemplate) dal `InitInstance` funzione membro della classe dell'applicazione.

##  <a name="closealldocuments"></a>  CDocTemplate::CloseAllDocuments

Chiamare questa funzione membro per chiudere tutti i documenti aperti.

```
virtual void CloseAllDocuments(BOOL bEndSession);
```

### <a name="parameters"></a>Parametri

*bEndSession*<br/>
Non usato.

### <a name="remarks"></a>Note

Questa funzione membro viene in genere utilizzata come parte del comando Exit File. L'implementazione predefinita di questa funzione chiama il [CDocument::DeleteContents](../../mfc/reference/cdocument-class.md#deletecontents) funzione membro per eliminare il documento dei dati e quindi si chiude la finestre cornice per tutte le visualizzazioni collegati al documento.

Eseguire l'override di questa funzione se si desidera richiedere all'utente di eseguire l'elaborazione di una pulizia speciale prima della chiusura del documento. Ad esempio, se il documento rappresenta un record in un database, è possibile eseguire l'override di questa funzione per chiudere il database.

##  <a name="createnewdocument"></a>  CDocTemplate::CreateNewDocument

Chiamare questa funzione membro per creare un nuovo documento del tipo associato con questo modello di documento.

```
virtual CDocument* CreateNewDocument();
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento appena creato, o NULL se si verifica un errore.

##  <a name="createnewframe"></a>  CDocTemplate::CreateNewFrame

Crea una nuova finestra cornice contenente un documento e visualizzazione.

```
virtual CFrameWnd* CreateNewFrame(
    CDocument* pDoc,
    CFrameWnd* pOther);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Il documento a cui è consigliabile consultare la nuova finestra cornice. Può essere NULL.

*pOther*<br/>
La finestra cornice in cui si baserà la nuova finestra cornice. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice appena creato, oppure NULL se si verifica un errore.

### <a name="remarks"></a>Note

`CreateNewFrame` Usa il `CRuntimeClass` gli oggetti passati al costruttore per creare una nuova finestra del frame con una visualizzazione e il documento associato. Se il *pDoc* parametro è NULL, il framework genera un messaggio di traccia.

Il *pOther* parametro viene usato per implementare il comando nuova finestra. Fornisce una finestra cornice in cui la nuova finestra cornice del modello. La nuova finestra cornice viene in genere creata invisibile. Chiamare questa funzione per creare finestre cornice all'esterno di implementazione del nuovo File e apertura File del framework standard.

##  <a name="createoleframe"></a>  CDocTemplate::CreateOleFrame

Crea una finestra cornice OLE.

```
CFrameWnd* CreateOleFrame(
    CWnd* pParentWnd,
    CDocument* pDoc,
    BOOL bCreateView);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra padre del frame.

*pDoc*<br/>
Puntatore al documento a cui è consigliabile consultare la nuova finestra cornice OLE.

*bCreateView*<br/>
Determina se una vista viene creata con il frame.

### <a name="return-value"></a>Valore restituito

Un puntatore a una finestra cornice se ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

Se *bCreateView* è uguale a zero, viene creato un frame vuoto.

##  <a name="getdocstring"></a>  CDocTemplate::GetDocString

Recupera una stringa associata al tipo di documento.

```
virtual BOOL GetDocString(
    CString& rString,
    enum DocStringIndex index) const;
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Un riferimento a un `CString` che conterrà la stringa quando la funzione restituisce.

*index*<br/>
Indice della sottostringa viene recuperato dalla stringa che descrive il tipo di documento. Per il parametro è possibile specificare uno dei valori riportati di seguito:

- `CDocTemplate::windowTitle` Nome visualizzato nella barra (ad esempio Microsoft Excel di"") del titolo della finestra dell'applicazione. Presente solo nel modello di documento per le applicazioni SDI.

- `CDocTemplate::docName` Radice per il nome del documento predefinito (ad esempio, "Foglio"). Questa radice, più un numero, viene usato per il nome predefinito di un nuovo documento di questo tipo ogni volta che l'utente sceglie il comando Nuovo dal menu File (ad esempio "Foglio1" o "Foglio2"). Se non specificato, "Titolo" viene usato come impostazione predefinita.

- `CDocTemplate::fileNewName` Nome di questo tipo di documento. Se l'applicazione supporta più di un tipo di documento, questa stringa viene visualizzata nella finestra di dialogo Nuovo File (ad esempio, "foglio di lavoro"). Se non specificato, il tipo di documento è accessibile usando il comando File nuovo.

- `CDocTemplate::filterName` Descrizione del tipo di documento e un carattere jolly filtrare i documenti corrispondenti di questo tipo. Questa stringa viene visualizzata nell'elenco a discesa scegliere i file di tipo elenco nella finestra di dialogo Apri File (ad esempio, "fogli di lavoro (xls)"). Se non specificato, il tipo di documento è accessibile usando il comando Apri File.

- `CDocTemplate::filterExt` Estensione per i documenti di questo tipo (ad esempio, "xls"). Se non specificato, il tipo di documento è accessibile usando il comando Apri File.

- `CDocTemplate::regFileTypeId` Identificatore per il tipo di documento da archiviare nel database di registrazione gestito da Windows. Questa stringa è solo per uso interno (ad esempio, "ExcelWorksheet"). Se non specificato, il tipo di documento non può essere registrato con la gestione di File di Windows.

- `CDocTemplate::regFileTypeName` Nome del tipo di documento da archiviare nel database di registrazione. Questa stringa può essere visualizzata nelle finestre di dialogo delle applicazioni che accedono al database di registrazione (ad esempio, "Microsoft Excel del foglio di lavoro").

### <a name="return-value"></a>Valore restituito

Diverso da zero se la sottostringa specificata è stata trovata. in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare una sottostringa specifica che descrive il tipo di documento. Stringa che contiene le sottostringhe viene archiviata nel modello di documento e deriva da una stringa nel file di risorse per l'applicazione. Il framework chiama questa funzione per ottenere le stringhe che necessarie per l'interfaccia utente dell'applicazione. Se è stata specificata un'estensione di file per i documenti dell'applicazione, il framework chiama questa funzione anche quando si aggiunge una voce nel database di registrazione di Windows. In questo modo i documenti da aprire la gestione di File da Windows.

Chiamare questa funzione solo se si deriva una classe personalizzata dalla `CDocTemplate`.

##  <a name="getfirstdocposition"></a>  CDocTemplate::GetFirstDocPosition

Recupera la posizione del primo documento associato al modello.

```
virtual POSITION GetFirstDocPosition() const = 0;
```

### <a name="return-value"></a>Valore restituito

Un valore di posizione che può essere utilizzato per scorrere l'elenco di documenti associati a questo modello di documento; o NULL se l'elenco è vuoto.

### <a name="remarks"></a>Note

Utilizzare questa funzione per ottenere la posizione del primo documento nell'elenco di documenti associati a questo modello. Usare il valore di posizione come argomento al [CDocTemplate::GetNextDoc](#getnextdoc) per scorrere l'elenco di documenti associati al modello.

[CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md) e [CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md) entrambe l'override della funzione virtuale pura. Qualsiasi classe di derivazione `CDocTemplate` deve anche eseguire l'override di questa funzione.

##  <a name="getnextdoc"></a>  CDocTemplate::GetNextDoc

Recupera l'elemento di elenco identificato da *RPO*, quindi imposta *RPO* sul valore di posizione della voce successiva nell'elenco.

```
virtual CDocument* GetNextDoc(POSITION& rPos) const = 0;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento successivo nell'elenco di documenti associati a questo modello.

### <a name="parameters"></a>Parametri

*RPO*<br/>
Un riferimento a un valore di posizione restituito da una chiamata precedente a [GetFirstDocPosition](#getfirstdocposition) o `GetNextDoc`.

### <a name="remarks"></a>Note

Se l'elemento recuperato è l'ultimo nell'elenco, quindi il nuovo valore della *RPO* è impostato su NULL.

È possibile usare `GetNextDoc` in un ciclo di iterazione in avanti se si stabilisce la posizione iniziale con una chiamata a [GetFirstDocPosition](#getfirstdocposition).

È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.

##  <a name="initialupdateframe"></a>  CDocTemplate::InitialUpdateFrame

Inizializza la finestra cornice e facoltativamente lo rende visibile.

```
virtual void InitialUpdateFrame(
    CFrameWnd* pFrame,
    CDocument* pDoc,
    BOOL bMakeVisible = TRUE);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
La finestra cornice che richiede l'aggiornamento iniziale.

*pDoc*<br/>
Il documento a cui è associato il frame. Può essere NULL.

*bMakeVisible*<br/>
Indica se il frame deve diventare visibile e attivo.

### <a name="remarks"></a>Note

Chiamare `IntitialUpdateFrame` dopo aver creato un nuovo frame con `CreateNewFrame`. Chiamare questa funzione determina le viste in tale finestra cornice per la ricezione loro `OnInitialUpdate` chiamate. Inoltre, se non era in precedenza una visualizzazione attiva, la visualizzazione della finestra cornice principale viene reso attiva; la visualizzazione primaria è una vista con un ID di AFX_IDW_PANE_FIRST figlio. Infine, la finestra cornice viene reso visibile se *bMakeVisible* è diverso da zero. Se *bMakeVisible* è uguale a zero, lo stato attivo corrente e stato visibile della finestra cornice rimarrà invariato.

Non è necessario chiamare questa funzione quando si usa l'implementazione del framework di nuovi File e Apri File.

##  <a name="loadtemplate"></a>  CDocTemplate::LoadTemplate

Carica le risorse per un determinato `CDocTemplate` o una classe derivata.

```
virtual void LoadTemplate();
```

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework per caricare le risorse per un determinato `CDocTemplate` o una classe derivata. In genere viene chiamato durante la costruzione, tranne quando viene creato il modello a livello globale. In tal caso, la chiamata a `LoadTemplate` viene posticipata fino al [CWinApp:: AddDocTemplate](../../mfc/reference/cwinapp-class.md#adddoctemplate) viene chiamato.

##  <a name="matchdoctype"></a>  CDocTemplate::MatchDocType

Determina il livello di confidenza della corrispondenza tra un tipo di documento e questo modello.

```
virtual Confidence MatchDocType(
    LPCTSTR lpszPathName,
    CDocument*& rpDocMatch);
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
Percorso del file il cui tipo viene determinato.

*rpDocMatch*<br/>
Puntatore a un documento che viene assegnato il documento corrisponda, se il file specificato da *lpszPathName* è già aperto.

### <a name="return-value"></a>Valore restituito

Un valore compreso il **confidenza** enumerazione, che viene definito come segue:

```
enum Confidence
    {
    noAttempt,
    maybeAttemptForeign,
    maybeAttemptNative,
    yesAttemptForeign,
    yesAttemptNative,
    yesAlreadyOpen
    };
```

### <a name="remarks"></a>Note

Utilizzare questa funzione per determinare il tipo di modello di documento da utilizzare per l'apertura di un file. Se l'applicazione supporta più tipi di file, ad esempio, è possibile usare questa funzione per determinare quale dei modelli di documento disponibili è appropriato per un determinato file chiamando `MatchDocType` per ogni modello nel turno e scelta di un modello in base a il valore di probabilità restituito.

Se il file specificato da *lpszPathName* già è aperto, questa funzione restituisce `CDocTemplate::yesAlreadyOpen` e il file viene copiato `CDocument` all'oggetto al *rpDocMatch*.

Se il file non è aperto, ma l'estensione nella *lpszPathName* corrisponde all'estensione specificata da `CDocTemplate::filterExt`, questa funzione restituisce `CDocTemplate::yesAttemptNative` e imposta *rpDocMatch* su NULL. Per ulteriori informazioni sul `CDocTemplate::filterExt`, vedere [CDocTemplate::GetDocString](#getdocstring).

Se nessuno dei due case è true, la funzione restituisce `CDocTemplate::yesAttemptForeign`.

L'implementazione predefinita non restituisce `CDocTemplate::maybeAttemptForeign` o `CDocTemplate::maybeAttemptNative`. Eseguire l'override di questa funzione per implementare la logica corrispondente al tipo appropriata per l'applicazione, ad esempio usando questi due valori dal **confidenza** enumerazione.

##  <a name="opendocumentfile"></a>  CDocTemplate:: OpenDocumentFile

Apre un file specificato da un percorso.

```
virtual CDocument* OpenDocumentFile(LPCTSTR lpszPathName) = 0;

virtual CDocument* OpenDocumentFile(
    LPCTSTR lpszPathName,
    BOOL bAddToMRU) = 0;
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
[in] Puntatore al percorso del file che contiene il documento da aprire.

*bAddToMRU*<br/>
[in] TRUE indica che il documento è uno dei file più recente; FALSE indica che il documento non è uno dei file più recente.

### <a name="return-value"></a>Valore restituito

Un puntatore al documento il cui file è denominato da *lpszPathName*; NULL se ha esito negativo.

### <a name="remarks"></a>Note

Apre il file il cui percorso viene specificato dalla *lpszPathName*. Se *lpszPathName* è NULL, viene creato un nuovo file che contiene un documento del tipo associato al modello.

##  <a name="removedocument"></a>  CDocTemplate::RemoveDocument

Rimuove il documento a cui punta *pDoc* dall'elenco di documenti associati a questo modello.

```
virtual void RemoveDocument(CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Puntatore al documento da rimuovere.

### <a name="remarks"></a>Note

Le classi derivate `CMultiDocTemplate` e `CSingleDocTemplate` l'override della funzione. Se è derivare la propria classe di modello di documento da `CDocTemplate`, la classe derivata deve eseguire l'override di questa funzione.

##  <a name="saveallmodified"></a>  CDocTemplate::SaveAllModified

Salva tutti i documenti che sono stati modificati.

```
virtual BOOL SaveAllModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. in caso contrario 0.

##  <a name="setcontainerinfo"></a>  CDocTemplate:: SetContainerInfo

Determina le risorse per contenitori OLE durante la modifica di un elemento OLE sul posto.

```
void SetContainerInfo(UINT nIDOleInPlaceContainer);
```

### <a name="parameters"></a>Parametri

*nIDOleInPlaceContainer*<br/>
L'ID delle risorse usate quando viene attivato un oggetto incorporato.

### <a name="remarks"></a>Note

Chiamare questa funzione per impostare le risorse da utilizzare quando un oggetto OLE è attivato sul posto. Queste risorse possono includere i menu e tasti di scelta rapida. Questa funzione viene in genere chiamata [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) funzione dell'applicazione.

Il menu associato *nIDOleInPlaceContainer* contiene separatori che consentono il menu dell'elemento attivato sul posto di tipo merge con il menu dell'applicazione contenitore. Per altre informazioni sull'unione di menu di server e un contenitore, vedere l'articolo [menu e risorse (OLE)](../../mfc/menus-and-resources-ole.md).

##  <a name="setdefaulttitle"></a>  CDocTemplate::SetDefaultTitle

Chiamare questa funzione per caricare il titolo del documento predefinito e visualizzarlo sulla barra del titolo del documento.

```
virtual void SetDefaultTitle(CDocument* pDocument) = 0;
```

### <a name="parameters"></a>Parametri

*pDocument*<br/>
Puntatore al documento il cui titolo è da impostare.

### <a name="remarks"></a>Note

Per informazioni sul titolo predefinito, vedere la descrizione della `CDocTemplate::docName` nelle [CDocTemplate::GetDocString](#getdocstring).

##  <a name="setserverinfo"></a>  CDocTemplate:: SetServerInfo

Determina le risorse e le classi quando il documento server incorporato o modifica sul posto.

```
void SetServerInfo(
    UINT nIDOleEmbedding,
    UINT nIDOleInPlaceServer = 0,
    CRuntimeClass* pOleFrameClass = NULL,
    CRuntimeClass* pOleViewClass = NULL);
```

### <a name="parameters"></a>Parametri

*nIDOleEmbedding*<br/>
L'ID delle risorse usate quando viene aperto un oggetto incorporato in una finestra separata.

*nIDOleInPlaceServer*<br/>
L'ID delle risorse utilizzate quando un oggetto incorporato è attivato sul posto.

*pOleFrameClass*<br/>
Puntatore a un [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura che contiene informazioni sulla classe per l'oggetto finestra cornice creata quando si verifica l'attivazione sul posto.

*pOleViewClass*<br/>
Puntatore a un `CRuntimeClass` struttura che contiene informazioni sulla classe per l'oggetto di visualizzazione creato quando si verifica l'attivazione sul posto.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per identificare le risorse che verranno utilizzate dall'applicazione server quando l'utente richiede l'attivazione di un oggetto incorporato. Queste risorse sono costituiti da menu e tasti di scelta rapida. Questa funzione viene in genere chiamata `InitInstance` dell'applicazione.

Il menu associato *nIDOleInPlaceServer* contiene separatori che consentono il menu di server di tipo merge con il menu del contenitore. Per altre informazioni sull'unione di menu di server e un contenitore, vedere l'articolo [menu e risorse (OLE)](../../mfc/menus-and-resources-ole.md).

##  <a name="createpreviewframe"></a>  CDocTemplate::CreatePreviewFrame

Crea una cornice figlio usata per l'anteprima avanzata.

```
CFrameWnd* CreatePreviewFrame(
    CWnd* pParentWnd,
    CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore a una finestra padre (in genere fornita dalla Shell).

*pDoc*<br/>
Un puntatore a un oggetto documento, il cui contenuto verrà visualizzato in anteprima.

### <a name="return-value"></a>Valore restituito

Un puntatore valido a un `CFrameWnd` dell'oggetto, o NULL se la creazione ha esito negativo.

### <a name="remarks"></a>Note

##  <a name="setpreviewinfo"></a>  CDocTemplate::SetPreviewInfo

Imposta il timeout del gestore di anteprime di processo.

```
void SetPreviewInfo(
    UINT nIDPreviewFrame,
    CRuntimeClass* pPreviewFrameClass = NULL,
    CRuntimeClass* pPreviewViewClass = NULL);
```

### <a name="parameters"></a>Parametri

*nIDPreviewFrame*<br/>
Specifica un ID di risorsa del riquadro di anteprima.

*pPreviewFrameClass*<br/>
Specifica un puntatore a una struttura di informazioni di classe di runtime del riquadro di anteprima.

*pPreviewViewClass*<br/>
Specifica un puntatore a una struttura di informazioni di classe di runtime della visualizzazione Anteprima.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md)<br/>
[Classe CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)<br/>
[Classe CEditView](../../mfc/reference/ceditview-class.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)
