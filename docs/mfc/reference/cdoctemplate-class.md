---
description: 'Altre informazioni su: classe CDocTemplate'
title: Classe CDocTemplate
ms.date: 11/04/2016
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
ms.openlocfilehash: e97e2d00f5ad847555ae951433c327cc861917b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184894"
---
# <a name="cdoctemplate-class"></a>Classe CDocTemplate

Classe di base astratta che definisce le funzionalità di base per i modelli di documenti.

## <a name="syntax"></a>Sintassi

```
class CDocTemplate : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[CDocTemplate:: CDocTemplate](#cdoctemplate)|Costruisce un oggetto `CDocTemplate`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDocTemplate:: AddDocument](#adddocument)|Aggiunge un documento a un modello.|
|[CDocTemplate:: CloseAllDocuments](#closealldocuments)|Chiude tutti i documenti associati a questo modello.|
|[CDocTemplate:: CreateNewDocument](#createnewdocument)|Crea un nuovo documento.|
|[CDocTemplate:: CreateNewFrame](#createnewframe)|Crea una nuova finestra cornice contenente un documento e una visualizzazione.|
|[CDocTemplate:: CreateOleFrame](#createoleframe)|Crea una finestra cornice abilitata per OLE.|
|[CDocTemplate:: CreatePreviewFrame](#createpreviewframe)|Crea un frame figlio usato per l'anteprima dettagliata.|
|[CDocTemplate:: GetDocString](#getdocstring)|Recupera una stringa associata al tipo di documento.|
|[CDocTemplate:: GetFirstDocPosition](#getfirstdocposition)|Recupera la posizione del primo documento associato a questo modello.|
|[CDocTemplate:: GetNextDoc](#getnextdoc)|Recupera un documento e la posizione di quella successiva.|
|[CDocTemplate:: InitialUpdateFrame](#initialupdateframe)|Inizializza la finestra cornice e, facoltativamente, la rende visibile.|
|[CDocTemplate:: LoadTemplate](#loadtemplate)|Carica le risorse per una `CDocTemplate` classe specificata o derivata.|
|[CDocTemplate:: MatchDocType](#matchdoctype)|Determina il livello di confidenza nella corrispondenza tra un tipo di documento e questo modello.|
|[CDocTemplate:: OpenDocumentFile](#opendocumentfile)|Apre un file specificato da un percorso.|
|[CDocTemplate:: RemoveDocument](#removedocument)|Rimuove un documento da un modello.|
|[CDocTemplate:: SaveAllModified](#saveallmodified)|Salva tutti i documenti associati a questo modello che sono stati modificati.|
|[CDocTemplate:: SetContainerInfo](#setcontainerinfo)|Determina le risorse per i contenitori OLE quando si modifica un elemento OLE sul posto.|
|[CDocTemplate:: SetDefaultTitle](#setdefaulttitle)|Visualizza il titolo predefinito nella barra del titolo della finestra del documento.|
|[CDocTemplate:: SetPreviewInfo](#setpreviewinfo)|Imposta il gestore di anteprime out-of-process.|
|[CDocTemplate:: SetServerInfo](#setserverinfo)|Determina le risorse e le classi quando il documento server è incorporato o modificato sul posto.|

## <a name="remarks"></a>Commenti

In genere si creano uno o più modelli di documento nell'implementazione della funzione dell'applicazione `InitInstance` . Un modello di documento definisce le relazioni tra tre tipi di classi:

- Classe del documento da cui deriva `CDocument` .

- Una classe di visualizzazione, che Visualizza i dati della classe del documento sopra indicata. È possibile derivare questa classe da `CView` , `CScrollView` , `CFormView` o `CEditView` . (È anche possibile usare `CEditView` direttamente).

- Classe della finestra cornice che contiene la visualizzazione. Per un'applicazione SDI (Single Document Interface), è necessario derivare questa classe da `CFrameWnd` . Per un'applicazione con interfaccia a documenti multipli (MDI), è necessario derivare questa classe da `CMDIChildWnd` . Se non è necessario personalizzare il comportamento della finestra cornice, è possibile usare `CFrameWnd` o `CMDIChildWnd` direttamente senza derivare la propria classe.

L'applicazione include un modello di documento per ogni tipo di documento supportato. Se, ad esempio, l'applicazione supporta fogli di calcolo e documenti di testo, l'applicazione ha due oggetti modello di documento. Ogni modello di documento è responsabile della creazione e della gestione di tutti i documenti di tipo.

Il modello di documento archivia i puntatori agli `CRuntimeClass` oggetti per le classi del documento, della visualizzazione e della finestra cornice. Questi `CRuntimeClass` oggetti vengono specificati quando si costruisce un modello di documento.

Il modello di documento contiene l'ID delle risorse usate con il tipo di documento, ad esempio le risorse del menu, dell'icona o della tabella dei tasti di scelta rapida. Il modello di documento contiene anche stringhe contenenti informazioni aggiuntive sul tipo di documento. Sono inclusi il nome del tipo di documento (ad esempio, "Worksheet") e l'estensione del file, ad esempio ". xls". Facoltativamente, può contenere altre stringhe utilizzate dall'interfaccia utente dell'applicazione, da Gestione file di Windows e dal supporto di collegamento di oggetti e incorporamento (OLE).

Se l'applicazione è un contenitore e/o un server OLE, il modello di documento definisce anche l'ID del menu utilizzato durante l'attivazione sul posto. Se l'applicazione è un server OLE, il modello di documento definisce l'ID della barra degli strumenti e del menu utilizzato durante l'attivazione sul posto. Per specificare queste risorse OLE aggiuntive, chiamare `SetContainerInfo` e `SetServerInfo` .

Poiché `CDocTemplate` è una classe astratta, non è possibile usare direttamente la classe. In una tipica applicazione viene utilizzata una delle due `CDocTemplate` classi derivate da fornite dal libreria Microsoft Foundation Class: `CSingleDocTemplate` , che implementa SDI e `CMultiDocTemplate` , che implementa MDI. Per ulteriori informazioni sull'utilizzo dei modelli di documento, vedere tali classi.

Se l'applicazione richiede un paradigma dell'interfaccia utente che è fondamentalmente diverso da SDI o MDI, è possibile derivare la propria classe da `CDocTemplate` .

Per altre informazioni su `CDocTemplate` , vedere [modelli di documento e processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocTemplate`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cdoctemplateadddocument"></a><a name="adddocument"></a> CDocTemplate:: AddDocument

Usare questa funzione per aggiungere un documento a un modello.

```
virtual void AddDocument(CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Puntatore al documento da aggiungere.

### <a name="remarks"></a>Commenti

Le classi derivate [CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md) e [CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md) eseguono l'override di questa funzione. Se si deriva la classe del modello di documento da `CDocTemplate` , la classe derivata deve eseguire l'override di questa funzione.

## <a name="cdoctemplatecdoctemplate"></a><a name="cdoctemplate"></a> CDocTemplate:: CDocTemplate

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
Specifica l'ID delle risorse utilizzate con il tipo di documento. Questo può includere le risorse di menu, icone, tasti di scelta rapida e stringhe.

La risorsa di tipo stringa è costituita da un massimo di sette sottostringhe separate dal carattere ' \n ' (il carattere ' \n ' è necessario come segnaposto se una sottostringa non è inclusa; i caratteri ' \n ' finali non sono tuttavia necessari); Queste sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [GetDocString](#getdocstring). Questa risorsa di stringa si trova nel file di risorse dell'applicazione. Ad esempio:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"
END
```

Si noti che la stringa inizia con un carattere "\n"; Ciò è dovuto al fatto che la prima sottostringa non viene utilizzata per le applicazioni MDI e pertanto non è inclusa. È possibile modificare questa stringa usando l'editor di stringhe; l'intera stringa viene visualizzata come una singola voce nell'editor di stringhe, non come sette voci separate.

*pDocClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe del documento. Questa classe è una `CDocument` classe derivata da definita per rappresentare i documenti.

*pFrameClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe della finestra cornice. Questa classe può essere una `CFrameWnd` classe derivata da oppure può essere `CFrameWnd` se stessa se si vuole il comportamento predefinito per la finestra cornice principale.

*pViewClass*<br/>
Punta all' `CRuntimeClass` oggetto della classe di visualizzazione. Questa classe è una `CView` classe derivata da definita per visualizzare i documenti.

### <a name="remarks"></a>Commenti

Usare questa funzione membro per costruire un `CDocTemplate` oggetto. Allocare dinamicamente un `CDocTemplate` oggetto e passarlo a [CWinApp:: AddDocTemplate](../../mfc/reference/cwinapp-class.md#adddoctemplate) dalla `InitInstance` funzione membro della classe dell'applicazione.

## <a name="cdoctemplateclosealldocuments"></a><a name="closealldocuments"></a> CDocTemplate:: CloseAllDocuments

Chiamare questa funzione membro per chiudere tutti i documenti aperti.

```
virtual void CloseAllDocuments(BOOL bEndSession);
```

### <a name="parameters"></a>Parametri

*bEndSession*<br/>
Non usato.

### <a name="remarks"></a>Commenti

Questa funzione membro viene in genere utilizzata come parte del comando di uscita del file. L'implementazione predefinita di questa funzione chiama la funzione membro [CDocument::D eletecontents](../../mfc/reference/cdocument-class.md#deletecontents) per eliminare i dati del documento e quindi chiude le finestre cornice per tutte le visualizzazioni associate al documento.

Eseguire l'override di questa funzione se si desidera richiedere all'utente di eseguire un'elaborazione speciale per la pulizia prima che il documento venga chiuso. Se, ad esempio, il documento rappresenta un record in un database, potrebbe essere necessario eseguire l'override di questa funzione per chiudere il database.

## <a name="cdoctemplatecreatenewdocument"></a><a name="createnewdocument"></a> CDocTemplate:: CreateNewDocument

Chiamare questa funzione membro per creare un nuovo documento del tipo associato a questo modello di documento.

```
virtual CDocument* CreateNewDocument();
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento appena creato oppure NULL se si verifica un errore.

## <a name="cdoctemplatecreatenewframe"></a><a name="createnewframe"></a> CDocTemplate:: CreateNewFrame

Crea una nuova finestra cornice contenente un documento e una visualizzazione.

```
virtual CFrameWnd* CreateNewFrame(
    CDocument* pDoc,
    CFrameWnd* pOther);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Documento a cui deve fare riferimento la nuova finestra cornice. Può essere NULL.

*pOther*<br/>
Finestra cornice sulla quale deve essere basata la nuova finestra cornice. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice appena creata o NULL se si verifica un errore.

### <a name="remarks"></a>Commenti

`CreateNewFrame` USA gli `CRuntimeClass` oggetti passati al costruttore per creare una nuova finestra cornice con una visualizzazione e un documento collegati. Se il parametro *pDoc* è null, il Framework restituisce un messaggio di traccia.

Il parametro *pother* viene usato per implementare la finestra nuovo comando. Fornisce una finestra cornice sulla quale modellare la nuova finestra cornice. La nuova finestra cornice viene in genere creata invisibile. Chiamare questa funzione per creare finestre cornice al di fuori dell'implementazione standard del Framework di file nuovo e file aperto.

## <a name="cdoctemplatecreateoleframe"></a><a name="createoleframe"></a> CDocTemplate:: CreateOleFrame

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
Puntatore al documento a cui deve fare riferimento la nuova finestra cornice OLE.

*bCreateView*<br/>
Determina se una vista viene creata insieme al frame.

### <a name="return-value"></a>Valore restituito

Puntatore a una finestra cornice in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Se *bCreateView* è zero, viene creato un frame vuoto.

## <a name="cdoctemplategetdocstring"></a><a name="getdocstring"></a> CDocTemplate:: GetDocString

Recupera una stringa associata al tipo di documento.

```
virtual BOOL GetDocString(
    CString& rString,
    enum DocStringIndex index) const;
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Riferimento a un `CString` oggetto che conterrà la stringa quando la funzione restituisce un valore.

*index*<br/>
Indice della sottostringa recuperato dalla stringa che descrive il tipo di documento. Per il parametro è possibile specificare uno dei valori riportati di seguito:

- `CDocTemplate::windowTitle` Nome visualizzato nella barra del titolo della finestra dell'applicazione (ad esempio, "Microsoft Excel"). Presente solo nel modello di documento per le applicazioni SDI.

- `CDocTemplate::docName` Radice per il nome del documento predefinito (ad esempio, "Sheet"). Questa radice, più un numero, viene utilizzata per il nome predefinito di un nuovo documento di questo tipo ogni volta che l'utente sceglie il nuovo comando dal menu file (ad esempio, "Sheet1" o "Sheet2"). Se non è specificato, viene usato il valore predefinito "senza nome".

- `CDocTemplate::fileNewName` Nome del tipo di documento. Se l'applicazione supporta più di un tipo di documento, questa stringa viene visualizzata nella finestra di dialogo nuovo file (ad esempio, "Worksheet"). Se non è specificato, il tipo di documento non è accessibile tramite il comando file nuovo.

- `CDocTemplate::filterName` Descrizione del tipo di documento e di un filtro con caratteri jolly corrispondenti ai documenti di questo tipo. Questa stringa viene visualizzata nell'elenco a discesa file elenco di tipo nella finestra di dialogo Apri file (ad esempio, "fogli di bit (*. xls)"). Se non è specificato, il tipo di documento non è accessibile tramite il comando file Apri.

- `CDocTemplate::filterExt` Estensione per i documenti di questo tipo (ad esempio, ". xls"). Se non è specificato, il tipo di documento non è accessibile tramite il comando file Apri.

- `CDocTemplate::regFileTypeId` Identificatore del tipo di documento da archiviare nel database di registrazione gestito da Windows. Questa stringa è solo per uso interno (ad esempio, "ExcelWorksheet"). Se non è specificato, il tipo di documento non può essere registrato con gestione file di Windows.

- `CDocTemplate::regFileTypeName` Nome del tipo di documento da archiviare nel database di registrazione. Questa stringa può essere visualizzata nelle finestre di dialogo delle applicazioni che accedono al database di registrazione (ad esempio, "foglio di lavoro di Microsoft Excel").

### <a name="return-value"></a>Valore restituito

Diverso da zero se la sottostringa specificata è stata trovata; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare una sottostringa specifica che descrive il tipo di documento. La stringa che contiene le sottostringhe è archiviata nel modello di documento ed è derivata da una stringa nel file di risorse per l'applicazione. Il Framework chiama questa funzione per ottenere le stringhe necessarie per l'interfaccia utente dell'applicazione. Se è stata specificata un'estensione del nome file per i documenti dell'applicazione, il Framework chiama anche questa funzione quando si aggiunge una voce al database di registrazione di Windows. in questo modo è possibile aprire i documenti da Gestione file di Windows.

Chiamare questa funzione solo se si sta derivando la propria classe da `CDocTemplate` .

## <a name="cdoctemplategetfirstdocposition"></a><a name="getfirstdocposition"></a> CDocTemplate:: GetFirstDocPosition

Recupera la posizione del primo documento associato a questo modello.

```
virtual POSITION GetFirstDocPosition() const = 0;
```

### <a name="return-value"></a>Valore restituito

Valore di posizione che può essere utilizzato per scorrere l'elenco dei documenti associati a questo modello di documento; o NULL se l'elenco è vuoto.

### <a name="remarks"></a>Commenti

Usare questa funzione per ottenere la posizione del primo documento nell'elenco dei documenti associati a questo modello. Usare il valore POSITION come argomento di [CDocTemplate:: GetNextDoc](#getnextdoc) per scorrere l'elenco dei documenti associati al modello.

[CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md) e [CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md) eseguono entrambe l'override di questa funzione virtuale pura. Tutte le classi derivate da `CDocTemplate` devono anche eseguire l'override di questa funzione.

## <a name="cdoctemplategetnextdoc"></a><a name="getnextdoc"></a> CDocTemplate:: GetNextDoc

Recupera l'elemento elenco identificato da *rpos*, quindi imposta *rpos* sul valore di posizione della voce successiva nell'elenco.

```
virtual CDocument* GetNextDoc(POSITION& rPos) const = 0;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento successivo nell'elenco di documenti associato a questo modello.

### <a name="parameters"></a>Parametri

*rPos*<br/>
Riferimento a un valore di posizione restituito da una chiamata precedente a [GetFirstDocPosition](#getfirstdocposition) o `GetNextDoc` .

### <a name="remarks"></a>Commenti

Se l'elemento recuperato è l'ultimo nell'elenco, il nuovo valore di *rpos* viene impostato su null.

È possibile usare `GetNextDoc` in un ciclo di iterazione in diretta se si stabilisce la posizione iniziale con una chiamata a [GetFirstDocPosition](#getfirstdocposition).

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

## <a name="cdoctemplateinitialupdateframe"></a><a name="initialupdateframe"></a> CDocTemplate:: InitialUpdateFrame

Inizializza la finestra cornice e, facoltativamente, la rende visibile.

```
virtual void InitialUpdateFrame(
    CFrameWnd* pFrame,
    CDocument* pDoc,
    BOOL bMakeVisible = TRUE);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
Finestra cornice che necessita dell'aggiornamento iniziale.

*pDoc*<br/>
Documento a cui è associato il frame. Può essere NULL.

*bMakeVisible*<br/>
Indica se il frame deve essere visibile e attivo.

### <a name="remarks"></a>Commenti

Chiamare `IntitialUpdateFrame` dopo la creazione di un nuovo frame con `CreateNewFrame` . Chiamando questa funzione, le visualizzazioni nella finestra cornice riceveranno le `OnInitialUpdate` chiamate. Inoltre, se in precedenza non era presente una visualizzazione attiva, la visualizzazione principale della finestra cornice viene resa attiva; la vista primaria è una vista con un ID figlio di AFX_IDW_PANE_FIRST. Infine, la finestra cornice viene resa visibile se *bMakeVisible* è diverso da zero. Se *bMakeVisible* è zero, lo stato attivo e lo stato visibile correnti della finestra cornice rimarranno invariati.

Non è necessario chiamare questa funzione quando si usa l'implementazione del Framework del file nuovo e del file aperto.

## <a name="cdoctemplateloadtemplate"></a><a name="loadtemplate"></a> CDocTemplate:: LoadTemplate

Carica le risorse per una `CDocTemplate` classe specificata o derivata.

```
virtual void LoadTemplate();
```

### <a name="remarks"></a>Commenti

Questa funzione membro viene chiamata dal Framework per caricare le risorse per una classe specificata `CDocTemplate` o derivata. Normalmente viene chiamato durante la costruzione, tranne quando il modello viene costruito a livello globale. In tal caso, la chiamata a `LoadTemplate` viene posticipata fino a quando viene chiamato [CWinApp:: AddDocTemplate](../../mfc/reference/cwinapp-class.md#adddoctemplate) .

## <a name="cdoctemplatematchdoctype"></a><a name="matchdoctype"></a> CDocTemplate:: MatchDocType

Determina il livello di confidenza nella corrispondenza tra un tipo di documento e questo modello.

```
virtual Confidence MatchDocType(
    LPCTSTR lpszPathName,
    CDocument*& rpDocMatch);
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
Percorso del file di cui determinare il tipo.

*rpDocMatch*<br/>
Puntatore a un documento a cui viene assegnato il documento corrispondente, se il file specificato da *lpszPathName* è già aperto.

### <a name="return-value"></a>Valore restituito

Valore dell'enumerazione **confidenza** , definito nel modo seguente:

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

### <a name="remarks"></a>Commenti

Usare questa funzione per determinare il tipo di modello di documento da usare per l'apertura di un file. Se l'applicazione supporta più tipi di file, ad esempio, è possibile usare questa funzione per determinare quali modelli di documento disponibili sono appropriati per un determinato file chiamando `MatchDocType` per ogni modello a turno e scegliendo un modello in base al valore di confidenza restituito.

Se il file specificato da *lpszPathName* è già aperto, questa funzione restituisce `CDocTemplate::yesAlreadyOpen` e copia l'oggetto del file `CDocument` nell'oggetto in corrispondenza di *rpDocMatch*.

Se il file non è aperto, ma l'estensione in *lpszPathName* corrisponde all'estensione specificata da `CDocTemplate::filterExt` , questa funzione restituisce `CDocTemplate::yesAttemptNative` e imposta *rpDocMatch* su null. Per ulteriori informazioni su `CDocTemplate::filterExt` , vedere [CDocTemplate:: GetDocString](#getdocstring).

Se nessuno dei due casi è true, la funzione restituisce `CDocTemplate::yesAttemptForeign` .

L'implementazione predefinita non restituisce `CDocTemplate::maybeAttemptForeign` o `CDocTemplate::maybeAttemptNative` . Eseguire l'override di questa funzione per implementare la logica di corrispondenza dei tipi appropriata per l'applicazione, probabilmente usando questi due valori dall'enumerazione **confidenza** .

## <a name="cdoctemplateopendocumentfile"></a><a name="opendocumentfile"></a> CDocTemplate:: OpenDocumentFile

Apre un file specificato da un percorso.

```
virtual CDocument* OpenDocumentFile(LPCTSTR lpszPathName) = 0;

virtual CDocument* OpenDocumentFile(
    LPCTSTR lpszPathName,
    BOOL bAddToMRU) = 0;
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
in Puntatore al percorso del file contenente il documento da aprire.

*bAddToMRU*<br/>
in TRUE indica che il documento è uno dei file più recenti. FALSE indica che il documento non è uno dei file più recenti.

### <a name="return-value"></a>Valore restituito

Puntatore al documento il cui file è denominato da *lpszPathName*; NULL in caso di esito negativo.

### <a name="remarks"></a>Commenti

Apre il file il cui percorso è specificato da *lpszPathName*. Se *lpszPathName* è null, viene creato un nuovo file contenente un documento del tipo associato a questo modello.

## <a name="cdoctemplateremovedocument"></a><a name="removedocument"></a> CDocTemplate:: RemoveDocument

Rimuove il documento a cui punta *pDoc* dall'elenco dei documenti associati al modello.

```
virtual void RemoveDocument(CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Puntatore al documento da rimuovere.

### <a name="remarks"></a>Commenti

Classi derivate `CMultiDocTemplate` ed `CSingleDocTemplate` eseguire l'override di questa funzione. Se si deriva la classe del modello di documento da `CDocTemplate` , la classe derivata deve eseguire l'override di questa funzione.

## <a name="cdoctemplatesaveallmodified"></a><a name="saveallmodified"></a> CDocTemplate:: SaveAllModified

Salva tutti i documenti modificati.

```
virtual BOOL SaveAllModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario, 0.

## <a name="cdoctemplatesetcontainerinfo"></a><a name="setcontainerinfo"></a> CDocTemplate:: SetContainerInfo

Determina le risorse per i contenitori OLE quando si modifica un elemento OLE sul posto.

```cpp
void SetContainerInfo(UINT nIDOleInPlaceContainer);
```

### <a name="parameters"></a>Parametri

*nIDOleInPlaceContainer*<br/>
ID delle risorse utilizzate quando un oggetto incorporato viene attivato.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per impostare le risorse da utilizzare quando un oggetto OLE viene attivato sul posto. Queste risorse possono includere menu e tabelle di tasti di scelta rapida. Questa funzione viene in genere chiamata nella funzione [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) dell'applicazione.

Il menu associato a *nIDOleInPlaceContainer* contiene separatori che consentono di unire il menu dell'elemento sul posto attivato con il menu dell'applicazione contenitore. Per ulteriori informazioni sull'Unione dei menu del server e del contenitore, vedere l'articolo [menu e risorse (OLE)](../../mfc/menus-and-resources-ole.md).

## <a name="cdoctemplatesetdefaulttitle"></a><a name="setdefaulttitle"></a> CDocTemplate:: SetDefaultTitle

Chiamare questa funzione per caricare il titolo predefinito del documento e visualizzarlo nella barra del titolo del documento.

```
virtual void SetDefaultTitle(CDocument* pDocument) = 0;
```

### <a name="parameters"></a>Parametri

*pDocument*<br/>
Puntatore al documento il cui titolo deve essere impostato.

### <a name="remarks"></a>Commenti

Per informazioni sul titolo predefinito, vedere la descrizione di `CDocTemplate::docName` in [CDocTemplate:: GetDocString](#getdocstring).

## <a name="cdoctemplatesetserverinfo"></a><a name="setserverinfo"></a> CDocTemplate:: SetServerInfo

Determina le risorse e le classi quando il documento server è incorporato o modificato sul posto.

```cpp
void SetServerInfo(
    UINT nIDOleEmbedding,
    UINT nIDOleInPlaceServer = 0,
    CRuntimeClass* pOleFrameClass = NULL,
    CRuntimeClass* pOleViewClass = NULL);
```

### <a name="parameters"></a>Parametri

*nIDOleEmbedding*<br/>
ID delle risorse utilizzate quando un oggetto incorporato viene aperto in una finestra separata.

*nIDOleInPlaceServer*<br/>
ID delle risorse utilizzate quando un oggetto incorporato viene attivato sul posto.

*pOleFrameClass*<br/>
Puntatore a una struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) contenente informazioni sulla classe per l'oggetto finestra cornice creato quando si verifica l'attivazione sul posto.

*pOleViewClass*<br/>
Puntatore a una `CRuntimeClass` struttura contenente le informazioni sulla classe per l'oggetto visualizzazione creato quando si verifica l'attivazione sul posto.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro per identificare le risorse che verranno utilizzate dall'applicazione server quando l'utente richiede l'attivazione di un oggetto incorporato. Queste risorse sono costituite da menu e tabelle di tasti di scelta rapida. Questa funzione viene in genere chiamata nell'oggetto `InitInstance` dell'applicazione.

Il menu associato a *nIDOleInPlaceServer* contiene separatori che consentono al menu del server di eseguire il merge con il menu del contenitore. Per ulteriori informazioni sull'Unione dei menu del server e del contenitore, vedere l'articolo [menu e risorse (OLE)](../../mfc/menus-and-resources-ole.md).

## <a name="cdoctemplatecreatepreviewframe"></a><a name="createpreviewframe"></a> CDocTemplate:: CreatePreviewFrame

Crea un frame figlio usato per l'anteprima dettagliata.

```
CFrameWnd* CreatePreviewFrame(
    CWnd* pParentWnd,
    CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore a una finestra padre, generalmente fornita dalla Shell.

*pDoc*<br/>
Puntatore a un oggetto documento il cui contenuto verrà visualizzato in anteprima.

### <a name="return-value"></a>Valore restituito

Puntatore valido a un `CFrameWnd` oggetto o null se la creazione ha esito negativo.

### <a name="remarks"></a>Commenti

## <a name="cdoctemplatesetpreviewinfo"></a><a name="setpreviewinfo"></a> CDocTemplate:: SetPreviewInfo

Imposta il gestore di anteprime out-of-process.

```cpp
void SetPreviewInfo(
    UINT nIDPreviewFrame,
    CRuntimeClass* pPreviewFrameClass = NULL,
    CRuntimeClass* pPreviewViewClass = NULL);
```

### <a name="parameters"></a>Parametri

*nIDPreviewFrame*<br/>
Specifica un ID risorsa del frame di anteprima.

*pPreviewFrameClass*<br/>
Specifica un puntatore a una struttura di informazioni della classe di runtime del frame di anteprima.

*pPreviewViewClass*<br/>
Specifica un puntatore a una struttura di informazioni della classe di runtime della visualizzazione anteprima.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md)<br/>
[Classe CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md)<br/>
[CDocument (classe)](../../mfc/reference/cdocument-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)<br/>
[Classe CEditView](../../mfc/reference/ceditview-class.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)
