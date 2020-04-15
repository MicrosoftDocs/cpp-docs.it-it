---
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
ms.openlocfilehash: 3376b8febe8ae4586ce649f3f83386875acb678f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375499"
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
|[CDocTemplate::CreateNewFrame](#createnewframe)|Crea una nuova finestra cornice contenente un documento e una visualizzazione.|
|[CDocTemplate::CreateOleFrame](#createoleframe)|Crea una finestra cornice abilitata per OLE.|
|[CDocTemplate::CreatePreviewFrame](#createpreviewframe)|Crea un frame figlio utilizzato per Rich Preview.|
|[CDocTemplate::GetDocString](#getdocstring)|Recupera una stringa associata al tipo di documento.|
|[Modello CDoc::GetFirstDocPosition](#getfirstdocposition)|Recupera la posizione del primo documento associato a questo modello.|
|[CDocTemplate::GetNextDoc](#getnextdoc)|Recupera un documento e la posizione di quello successivo.|
|[CDocTemplate::InitialUpdateFrame](#initialupdateframe)|Inizializza la finestra cornice e, facoltativamente, la rende visibile.|
|[CDocTemplate::LoadTemplate](#loadtemplate)|Carica le risorse `CDocTemplate` per una classe specificata o derivata.|
|[CDocTemplate::MatchDocType](#matchdoctype)|Determina il grado di attendibilità nella corrispondenza tra un tipo di documento e questo modello.|
|[CDocTemplate::OpenDocumentFile](#opendocumentfile)|Apre un file specificato da un nome di percorso.|
|[CDocTemplate::RemoveDocument](#removedocument)|Rimuove un documento da un modello.|
|[CDocTemplate::SaveAllModified](#saveallmodified)|Salva tutti i documenti associati a questo modello che sono stati modificati.|
|[CDocTemplate::SetContainerInfo](#setcontainerinfo)|Determina le risorse per i contenitori OLE durante la modifica di un elemento OLE sul posto.|
|[CDocTemplate::SetDefaultTitle](#setdefaulttitle)|Visualizza il titolo predefinito nella barra del titolo della finestra del documento.|
|[CDocTemplate::SetPreviewInfo](#setpreviewinfo)|Impostazioni fuori dal gestore di anteprima del processo.|
|[CDocTemplate::SetServerInfo](#setserverinfo)|Determina le risorse e le classi quando il documento server viene incorporato o modificato sul posto.|

## <a name="remarks"></a>Osservazioni

In genere si creano uno o più modelli `InitInstance` di documento nell'implementazione della funzione dell'applicazione. Un modello di documento definisce le relazioni tra tre tipi di classi:

- Una classe documento, derivata da `CDocument`.

- Una classe di visualizzazione, che visualizza i dati della classe documento elencata in precedenza. È possibile derivare `CView` `CScrollView`questa `CFormView`classe `CEditView`da , , , o . (È anche `CEditView` possibile utilizzare direttamente.)

- Una classe finestra cornice, che contiene la visualizzazione. Per un'applicazione SDI (Single Document Interface), `CFrameWnd`derivate questa classe da . Per un'applicazione MDI (Multiple Document Interface), `CMDIChildWnd`derivare questa classe da . Se non è necessario personalizzare il comportamento della finestra `CFrameWnd` cornice, è possibile utilizzare o `CMDIChildWnd` direttamente senza derivare la propria classe.

L'applicazione dispone di un modello di documento per ogni tipo di documento supportato. Ad esempio, se l'applicazione supporta sia fogli di calcolo che documenti di testo, l'applicazione dispone di due oggetti modello di documento. Ogni modello di documento è responsabile della creazione e della gestione di tutti i documenti del tipo.

Il modello di documento `CRuntimeClass` archivia i puntatori agli oggetti per le classi di documenti, visualizzazioni e finestre cornice. Questi `CRuntimeClass` oggetti vengono specificati durante la costruzione di un modello di documento.

Il modello di documento contiene l'ID delle risorse utilizzate con il tipo di documento , ad esempio le risorse di menu, icona o tabella dei tasti di scelta rapida. Il modello di documento contiene anche stringhe contenenti informazioni aggiuntive sul tipo di documento. Questi includono il nome del tipo di documento (ad esempio, "Foglio di lavoro") e l'estensione del file (ad esempio, ".xls"). Facoltativamente, può contenere altre stringhe utilizzate dall'interfaccia utente dell'applicazione, da Gestione file di Windows e dal supporto OLE (Object Linking and Embedding).

Se l'applicazione è un contenitore OLE e/o un server, il modello di documento definisce anche l'ID del menu utilizzato durante l'attivazione sul posto. Se l'applicazione è un server OLE, il modello di documento definisce l'ID della barra degli strumenti e del menu utilizzati durante l'attivazione sul posto. È possibile specificare queste `SetContainerInfo` risorse `SetServerInfo`OLE aggiuntive chiamando e .

Poiché `CDocTemplate` è una classe astratta, non è possibile utilizzare direttamente la classe. Un'applicazione tipica utilizza `CDocTemplate`una delle due classi derivate `CSingleDocTemplate`fornite dalla libreria Microsoft `CMultiDocTemplate`Foundation Class: , che implementa SDI e , che implementa MDI. Vedere tali classi per ulteriori informazioni sull'utilizzo dei modelli di documento.

Se l'applicazione richiede un paradigma dell'interfaccia utente fondamentalmente diverso da SDI `CDocTemplate`o MDI, è possibile derivare la propria classe da .

Per ulteriori `CDocTemplate`informazioni su , vedere Modelli di documento e Processo di [creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocTemplate`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cdoctemplateadddocument"></a><a name="adddocument"></a>CDocTemplate::AddDocument

Utilizzare questa funzione per aggiungere un documento a un modello.

```
virtual void AddDocument(CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pDoc (informazioni in stato ine*<br/>
Puntatore al documento da aggiungere.

### <a name="remarks"></a>Osservazioni

Le classi derivate [CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md) e [CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md) eseguono l'override di questa funzione. Se si deriva la propria `CDocTemplate`classe modello di documento da , la classe derivata deve eseguire l'override di questa funzione.

## <a name="cdoctemplatecdoctemplate"></a><a name="cdoctemplate"></a>CDocTemplate::CDocTemplate

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
Specifica l'ID delle risorse utilizzate con il tipo di documento. Ciò può includere menu, icona, tabella dei tasti di scelta rapida e risorse stringa.

La risorsa di tipo stringa è costituita da un massimo di sette sottostringhe separate dal carattere ''n'' (il carattere ''n' è necessario come segnaposto se non è inclusa una sottostringa; tuttavia, non sono necessari i caratteri finali ''n'); queste sottostringhe descrivono il tipo di documento. Per informazioni sulle sottostringhe, vedere [GetDocString](#getdocstring). Questa risorsa di tipo stringa si trova nel file di risorse dell'applicazione. Ad esempio:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"
END
```

Si noti che la stringa inizia con un carattere ''n'; Ciò è dovuto al fatto che la prima sottostringa non viene utilizzata per le applicazioni MDI e pertanto non è inclusa. È possibile modificare questa stringa utilizzando l'editor di stringhe; l'intera stringa viene visualizzata come una singola voce nell'Editor di stringhe, non come sette voci separate.

*pDocClass (in dottrina)*<br/>
Punta all'oggetto `CRuntimeClass` della classe documento. Questa classe `CDocument`è una classe derivata dall'utente per rappresentare i documenti.

*pFrameClass (classe pFrame)*<br/>
Punta all'oggetto `CRuntimeClass` della classe della finestra cornice. Questa classe può `CFrameWnd`essere una classe derivata da essa o da `CFrameWnd` se stessa se si desidera il comportamento predefinito per la finestra cornice principale.

*pViewClass (classe pViewClass)*<br/>
Punta all'oggetto `CRuntimeClass` della classe di visualizzazione. Questa classe `CView`è una classe derivata dall'utente per visualizzare i documenti.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro `CDocTemplate` per costruire un oggetto. Allocare `CDocTemplate` dinamicamente un oggetto e passarlo a [CWinApp::AddDocTemplate](../../mfc/reference/cwinapp-class.md#adddoctemplate) dalla funzione `InitInstance` membro della classe dell'applicazione.

## <a name="cdoctemplateclosealldocuments"></a><a name="closealldocuments"></a>CDocTemplate::CloseAllDocuments

Chiamare questa funzione membro per chiudere tutti i documenti aperti.

```
virtual void CloseAllDocuments(BOOL bEndSession);
```

### <a name="parameters"></a>Parametri

*bEndSessione*<br/>
Non usato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene in genere utilizzata come parte del comando File Exit. L'implementazione predefinita di questa funzione chiama il [CDocument::DeleteContents](../../mfc/reference/cdocument-class.md#deletecontents) funzione membro per eliminare i dati del documento e quindi chiude le finestre cornice per tutte le visualizzazioni associate al documento.

Eseguire l'override di questa funzione se si desidera richiedere all'utente di eseguire un'elaborazione di pulizia speciale prima che il documento venga chiuso. Ad esempio, se il documento rappresenta un record in un database, è possibile eseguire l'override di questa funzione per chiudere il database.

## <a name="cdoctemplatecreatenewdocument"></a><a name="createnewdocument"></a>CDocTemplate::CreateNewDocument

Chiamare questa funzione membro per creare un nuovo documento del tipo associato a questo modello di documento.

```
virtual CDocument* CreateNewDocument();
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento appena creato oppure NULL se si verifica un errore.

## <a name="cdoctemplatecreatenewframe"></a><a name="createnewframe"></a>CDocTemplate::CreateNewFrame

Crea una nuova finestra cornice contenente un documento e una visualizzazione.

```
virtual CFrameWnd* CreateNewFrame(
    CDocument* pDoc,
    CFrameWnd* pOther);
```

### <a name="parameters"></a>Parametri

*pDoc (informazioni in stato ine*<br/>
Documento a cui deve fare riferimento la nuova finestra cornice. Può essere NULL.

*pAltro*<br/>
Finestra cornice su cui deve essere basata la nuova finestra cornice. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice appena creata oppure NULL se si verifica un errore.

### <a name="remarks"></a>Osservazioni

`CreateNewFrame`utilizza `CRuntimeClass` gli oggetti passati al costruttore per creare una nuova finestra cornice con una visualizzazione e un documento associato. Se il *pDoc* parametro è NULL, il framework genera un messaggio TRACE.

Il parametro *pOther* viene utilizzato per implementare il comando Window New. Fornisce una finestra cornice su cui modellare la nuova finestra cornice. La nuova finestra cornice viene in genere creata invisibile. Chiamare questa funzione per creare finestre cornice all'esterno dell'implementazione framework standard di File New e File Open.Call this function to create frame windows outside the standard framework implementation of File New and File Open.

## <a name="cdoctemplatecreateoleframe"></a><a name="createoleframe"></a>CDocTemplate::CreateOleFrame

Crea una finestra cornice OLE.

```
CFrameWnd* CreateOleFrame(
    CWnd* pParentWnd,
    CDocument* pDoc,
    BOOL bCreateView);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre del frame.

*pDoc (informazioni in stato ine*<br/>
Puntatore al documento a cui deve fare riferimento la nuova finestra cornice OLE.

*bCreateView (visualizzazione utenti)*<br/>
Determina se viene creata una vista insieme al frame.

### <a name="return-value"></a>Valore restituito

Un puntatore a una finestra cornice se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se *bCreateView* è zero, viene creata una cornice vuota.

## <a name="cdoctemplategetdocstring"></a><a name="getdocstring"></a>CDocTemplate::GetDocString

Recupera una stringa associata al tipo di documento.

```
virtual BOOL GetDocString(
    CString& rString,
    enum DocStringIndex index) const;
```

### <a name="parameters"></a>Parametri

*rStringa*<br/>
Un riferimento `CString` a un oggetto che conterrà la stringa quando la funzione restituisce.

*Indice*<br/>
Indice della sottostringa recuperata dalla stringa che descrive il tipo di documento. Per il parametro è possibile specificare uno dei valori riportati di seguito:

- `CDocTemplate::windowTitle`Nome visualizzato nella barra del titolo della finestra dell'applicazione (ad esempio, "Microsoft Excel"). Presente solo nel modello di documento per le applicazioni SDI.

- `CDocTemplate::docName`Radice per il nome del documento predefinito (ad esempio, "Foglio"). Questa radice, più un numero, viene utilizzata per il nome predefinito di un nuovo documento di questo tipo ogni volta che l'utente sceglie il comando Nuovo dal menu File (ad esempio, "Foglio1" o "Foglio2"). Se non specificato, "Senza titolo" viene utilizzato come impostazione predefinita.

- `CDocTemplate::fileNewName`Nome del tipo di documento. Se l'applicazione supporta più di un tipo di documento, questa stringa viene visualizzata nella finestra di dialogo Nuovo file (ad esempio, "Foglio di lavoro"). Se non specificato, il tipo di documento non è accessibile utilizzando il comando Nuovo file.

- `CDocTemplate::filterName`Descrizione del tipo di documento e filtro con caratteri jolly corrispondenti a documenti di questo tipo. Questa stringa viene visualizzata nell'elenco a discesa Elenca file di tipo nella finestra di dialogo Apri file (ad esempio, "Fogli di lavoro (.xls)"). Se non specificato, il tipo di documento non è accessibile utilizzando il comando Apri file.

- `CDocTemplate::filterExt`Estensione per i documenti di questo tipo (ad esempio, ".xls"). Se non specificato, il tipo di documento non è accessibile utilizzando il comando Apri file.

- `CDocTemplate::regFileTypeId`Identificatore per il tipo di documento da archiviare nel database di registrazione gestito da Windows. Questa stringa è solo per uso interno (ad esempio, "ExcelWorksheet"). Se non specificato, il tipo di documento non può essere registrato con Gestione file di Windows.

- `CDocTemplate::regFileTypeName`Nome del tipo di documento da archiviare nel database di registrazione. Questa stringa può essere visualizzata nelle finestre di dialogo delle applicazioni che accedono al database di registrazione (ad esempio, "Foglio di lavoro di Microsoft Excel").

### <a name="return-value"></a>Valore restituito

Diverso da zero se la sottostringa specificata è stata trovata; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare una sottostringa specifica che descrive il tipo di documento. La stringa contenente queste sottostringhe viene archiviata nel modello di documento e deriva da una stringa nel file di risorse per l'applicazione. Il framework chiama questa funzione per ottenere le stringhe necessarie per l'interfaccia utente dell'applicazione. Se è stata specificata un'estensione del nome file per i documenti dell'applicazione, il framework chiama anche questa funzione quando si aggiunge una voce al database di registrazione di Windows; ciò consente l'apertura dei documenti da File Manager di Windows.

Chiamare questa funzione solo se si proietto la propria classe da `CDocTemplate`.

## <a name="cdoctemplategetfirstdocposition"></a><a name="getfirstdocposition"></a>Modello CDoc::GetFirstDocPosition

Recupera la posizione del primo documento associato a questo modello.

```
virtual POSITION GetFirstDocPosition() const = 0;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per scorrere l'elenco dei documenti associati a questo modello di documento. o NULL se l'elenco è vuoto.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per ottenere la posizione del primo documento nell'elenco dei documenti associati a questo modello. Utilizzare il valore POSITION come argomento per [CDocTemplate::GetNextDoc](#getnextdoc) per scorrere l'elenco di documenti associati al modello.

[CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md) e [CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md) eseguono entrambi l'override di questa funzione virtuale pura. Qualsiasi classe derivata da deve anche eseguire l'override di `CDocTemplate` questa funzione.

## <a name="cdoctemplategetnextdoc"></a><a name="getnextdoc"></a>CDocTemplate::GetNextDoc

Recupera l'elemento dell'elenco identificato da *rPos*, quindi imposta *rPos* sul valore POSITION della voce successiva nell'elenco.

```
virtual CDocument* GetNextDoc(POSITION& rPos) const = 0;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento successivo nell'elenco dei documenti associati a questo modello.

### <a name="parameters"></a>Parametri

*rPos*<br/>
Riferimento a un valore POSITION restituito da una precedente `GetNextDoc`chiamata a [GetFirstDocPosition](#getfirstdocposition) o .

### <a name="remarks"></a>Osservazioni

Se l'elemento recuperato è l'ultimo nell'elenco, il nuovo valore di *rPos* è impostato su NULL.

È possibile `GetNextDoc` utilizzare in un ciclo di iterazione in avanti se si stabilisce la posizione iniziale con una chiamata a [GetFirstDocPosition](#getfirstdocposition).

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

## <a name="cdoctemplateinitialupdateframe"></a><a name="initialupdateframe"></a>CDocTemplate::InitialUpdateFrame

Inizializza la finestra cornice e, facoltativamente, la rende visibile.

```
virtual void InitialUpdateFrame(
    CFrameWnd* pFrame,
    CDocument* pDoc,
    BOOL bMakeVisible = TRUE);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
Finestra cornice che richiede l'aggiornamento iniziale.

*pDoc (informazioni in stato ine*<br/>
Documento a cui è associata la cornice. Può essere NULL.

*bRendiVisibile*<br/>
Indica se il frame deve diventare visibile e attivo.

### <a name="remarks"></a>Osservazioni

Chiamare `IntitialUpdateFrame` dopo aver creato `CreateNewFrame`una nuova cornice con . La chiamata a questa funzione fa sì `OnInitialUpdate` che le visualizzazioni in tale finestra cornice ricevano le chiamate. Inoltre, se in precedenza non era attiva una visualizzazione attiva, la visualizzazione principale della finestra cornice viene resa attiva; la visualizzazione principale è una visualizzazione con un ID figlio di AFX_IDW_PANE_FIRST. Infine, la finestra cornice viene resa visibile se *bMakeVisible* è diverso da zero. Se *bMakeVisible* è zero, lo stato attivo corrente e lo stato visibile della finestra cornice rimarranno invariati.

Non è necessario chiamare questa funzione quando si utilizza l'implementazione del framework di File New e File Open.

## <a name="cdoctemplateloadtemplate"></a><a name="loadtemplate"></a>CDocTemplate::LoadTemplate

Carica le risorse `CDocTemplate` per una classe specificata o derivata.

```
virtual void LoadTemplate();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework per `CDocTemplate` caricare le risorse per una classe specificata o derivata. Normalmente viene chiamato durante la costruzione, tranne quando il modello viene costruito a livello globale. In tal caso, `LoadTemplate` la chiamata a viene ritardata fino a quando non viene chiamato [CWinApp::AddDocTemplate](../../mfc/reference/cwinapp-class.md#adddoctemplate) .

## <a name="cdoctemplatematchdoctype"></a><a name="matchdoctype"></a>CDocTemplate::MatchDocType

Determina il grado di attendibilità nella corrispondenza tra un tipo di documento e questo modello.

```
virtual Confidence MatchDocType(
    LPCTSTR lpszPathName,
    CDocument*& rpDocMatch);
```

### <a name="parameters"></a>Parametri

*LpszPathName (nome di metodo)*<br/>
Nome del percorso del file di cui deve essere determinato il tipo.

*rpDocMatch (corrispondenza su rpDocMatch)*<br/>
Puntatore a un documento a cui è assegnato il documento corrispondente, se il file specificato da *lpszPathName* è già aperto.

### <a name="return-value"></a>Valore restituito

Un valore dell'enumerazione **Confidence,** definito come segue:

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

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per determinare il tipo di modello di documento da utilizzare per l'apertura di un file. Se l'applicazione supporta più tipi di file, ad esempio, è possibile utilizzare questa funzione per `MatchDocType` determinare quale dei modelli di documento disponibili è appropriato per un determinato file chiamando per ogni modello a sua volta e scegliendo un modello in base al valore di attendibilità restituito.

Se il file specificato da *lpszPathName* è `CDocTemplate::yesAlreadyOpen` già aperto, questa `CDocument` funzione restituisce e copia l'oggetto del file nell'oggetto in corrispondenza di *rpDocMatch*.

Se il file non è aperto ma l'estensione in `CDocTemplate::filterExt` *lpszPathName* corrisponde all'estensione specificata da , questa funzione restituisce `CDocTemplate::yesAttemptNative` e imposta *rpDocMatch* su NULL. Per ulteriori `CDocTemplate::filterExt`informazioni su , vedere [CDocTemplate::GetDocString](#getdocstring).

Se due case è true, la funzione restituisce `CDocTemplate::yesAttemptForeign`.

L'implementazione predefinita `CDocTemplate::maybeAttemptForeign` `CDocTemplate::maybeAttemptNative`non restituisce o . Eseguire l'override di questa funzione per implementare la logica di corrispondenza dei tipi appropriata per l'applicazione, ad esempio utilizzando questi due valori dall'enumerazione **Confidence.Override** this function to implement type-matching logic appropriate to your application, perhaps using these two values from the Confidence enumeration.

## <a name="cdoctemplateopendocumentfile"></a><a name="opendocumentfile"></a>CDocTemplate::OpenDocumentFile

Apre un file specificato da un percorso.

```
virtual CDocument* OpenDocumentFile(LPCTSTR lpszPathName) = 0;

virtual CDocument* OpenDocumentFile(
    LPCTSTR lpszPathName,
    BOOL bAddToMRU) = 0;
```

### <a name="parameters"></a>Parametri

*LpszPathName (nome di metodo)*<br/>
[in] Puntatore al percorso del file che contiene il documento da aprire.

*bAddToMRU (informazioni in due)*<br/>
[in] TRUE indica che il documento è uno dei file più recenti; FALSE indica che il documento non è uno dei file più recenti.

### <a name="return-value"></a>Valore restituito

Puntatore al documento il cui file è denominato da *lpszPathName*; NULL in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Apre il file il cui percorso è specificato da *lpszPathName*. Se *lpszPathName* è NULL, viene creato un nuovo file che contiene un documento del tipo associato a questo modello.

## <a name="cdoctemplateremovedocument"></a><a name="removedocument"></a>CDocTemplate::RemoveDocument

Rimuove il documento a cui punta *pDoc* dall'elenco dei documenti associati a questo modello.

```
virtual void RemoveDocument(CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pDoc (informazioni in stato ine*<br/>
Puntatore al documento da rimuovere.

### <a name="remarks"></a>Osservazioni

Le classi `CMultiDocTemplate` `CSingleDocTemplate` derivate e eseguire l'override di questa funzione. Se si deriva la propria `CDocTemplate`classe modello di documento da , la classe derivata deve eseguire l'override di questa funzione.

## <a name="cdoctemplatesaveallmodified"></a><a name="saveallmodified"></a>CDocTemplate::SaveAllModified

Salva tutti i documenti che sono stati modificati.

```
virtual BOOL SaveAllModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="cdoctemplatesetcontainerinfo"></a><a name="setcontainerinfo"></a>CDocTemplate::SetContainerInfo

Determina le risorse per i contenitori OLE durante la modifica di un elemento OLE sul posto.

```
void SetContainerInfo(UINT nIDOleInPlaceContainer);
```

### <a name="parameters"></a>Parametri

*nIDOleInPlaceContainer*<br/>
ID delle risorse utilizzate quando viene attivato un oggetto incorporato.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per impostare le risorse da utilizzare quando un oggetto OLE è attivato sul posto. Queste risorse possono includere menu e tabelle dei tasti di scelta rapida. Questa funzione viene in genere chiamata nella funzione [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) dell'applicazione.

Il menu associato a *nIDOleInPlaceContainer* contiene separatori che consentono al menu dell'elemento sul posto attivato di unirla al menu dell'applicazione contenitore. Per ulteriori informazioni sull'unione di menu server e contenitore, vedere l'articolo [Menu e risorse (OLE)](../../mfc/menus-and-resources-ole.md).

## <a name="cdoctemplatesetdefaulttitle"></a><a name="setdefaulttitle"></a>CDocTemplate::SetDefaultTitle

Chiamare questa funzione per caricare il titolo predefinito del documento e visualizzarlo nella barra del titolo del documento.

```
virtual void SetDefaultTitle(CDocument* pDocument) = 0;
```

### <a name="parameters"></a>Parametri

*pDocumento*<br/>
Puntatore al documento il cui titolo deve essere impostato.

### <a name="remarks"></a>Osservazioni

Per informazioni sul titolo predefinito, `CDocTemplate::docName` vedere la descrizione di in [CDocTemplate::GetDocString](#getdocstring).

## <a name="cdoctemplatesetserverinfo"></a><a name="setserverinfo"></a>CDocTemplate::SetServerInfo

Determina le risorse e le classi quando il documento server viene incorporato o modificato sul posto.

```
void SetServerInfo(
    UINT nIDOleEmbedding,
    UINT nIDOleInPlaceServer = 0,
    CRuntimeClass* pOleFrameClass = NULL,
    CRuntimeClass* pOleViewClass = NULL);
```

### <a name="parameters"></a>Parametri

*nIDOleIncorporamento*<br/>
ID delle risorse utilizzate quando un oggetto incorporato viene aperto in una finestra separata.

*nIDOleInPlaceServer*<br/>
ID delle risorse utilizzate quando un oggetto incorporato viene attivato sul posto.

*pOleFrameClass (classe Frameclass)*<br/>
Puntatore a una struttura [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) contenente le informazioni sulla classe per l'oggetto finestra cornice creato quando si verifica l'attivazione sul posto.

*pOleViewClasse*<br/>
Puntatore `CRuntimeClass` a una struttura contenente le informazioni sulla classe per l'oggetto visualizzazione creato quando si verifica l'attivazione sul posto.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per identificare le risorse che verranno utilizzate dall'applicazione server quando l'utente richiede l'attivazione di un oggetto incorporato. Queste risorse sono costituite da menu e tabelle dei tasti di scelta rapida. Questa funzione viene in `InitInstance` genere chiamata nell'applicazione.

Il menu associato a *nIDOleInPlaceServer* contiene separatori che consentono al menu del server di unirla al menu del contenitore. Per ulteriori informazioni sull'unione di menu server e contenitore, vedere l'articolo [Menu e risorse (OLE)](../../mfc/menus-and-resources-ole.md).

## <a name="cdoctemplatecreatepreviewframe"></a><a name="createpreviewframe"></a>CDocTemplate::CreatePreviewFrame

Crea un frame figlio utilizzato per Rich Preview.

```
CFrameWnd* CreatePreviewFrame(
    CWnd* pParentWnd,
    CDocument* pDoc);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore a una finestra padre (in genere fornito da Shell).

*pDoc (informazioni in stato ine*<br/>
Puntatore a un oggetto documento, il cui contenuto verrà visualizzato in anteprima.

### <a name="return-value"></a>Valore restituito

Puntatore valido `CFrameWnd` a un oggetto oppure NULL se la creazione non riesce.

### <a name="remarks"></a>Osservazioni

## <a name="cdoctemplatesetpreviewinfo"></a><a name="setpreviewinfo"></a>CDocTemplate::SetPreviewInfo

Imposta il gestore di anteprima fuori processo.

```
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

*pPreviewViewClass (informazioni in base alla classe in stato incorso*<br/>
Specifica un puntatore a una struttura di informazioni della classe di runtime della visualizzazione di anteprima.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md)<br/>
[Classe CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Classe CScrollView](../../mfc/reference/cscrollview-class.md)<br/>
[Classe CEditView](../../mfc/reference/ceditview-class.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)
