---
description: 'Altre informazioni su: classe CDataRecoveryHandler'
title: Classe CDataRecoveryHandler
ms.date: 03/27/2019
f1_keywords:
- CDataRecoveryHandler
- AFXDATARECOVERY/CDataRecoveryHandler
- AFXDATARECOVERY/CDataRecoveryHandler::CDataRecoveryHandler
- AFXDATARECOVERY/CDataRecoveryHandler::AutosaveAllDocumentInfo
- AFXDATARECOVERY/CDataRecoveryHandler::AutosaveDocumentInfo
- AFXDATARECOVERY/CDataRecoveryHandler::CreateDocumentInfo
- AFXDATARECOVERY/CDataRecoveryHandler::DeleteAllAutosavedFiles
- AFXDATARECOVERY/CDataRecoveryHandler::DeleteAutosavedFile
- AFXDATARECOVERY/CDataRecoveryHandler::GenerateAutosaveFileName
- AFXDATARECOVERY/CDataRecoveryHandler::GetAutosaveInterval
- AFXDATARECOVERY/CDataRecoveryHandler::GetAutosavePath
- AFXDATARECOVERY/CDataRecoveryHandler::GetDocumentListName
- AFXDATARECOVERY/CDataRecoveryHandler::GetNormalDocumentTitle
- AFXDATARECOVERY/CDataRecoveryHandler::GetRecoveredDocumentTitle
- AFXDATARECOVERY/CDataRecoveryHandler::GetRestartIdentifier
- AFXDATARECOVERY/CDataRecoveryHandler::GetSaveDocumentInfoOnIdle
- AFXDATARECOVERY/CDataRecoveryHandler::GetShutdownByRestartManager
- AFXDATARECOVERY/CDataRecoveryHandler::Initialize
- AFXDATARECOVERY/CDataRecoveryHandler::QueryRestoreAutosavedDocuments
- AFXDATARECOVERY/CDataRecoveryHandler::ReadOpenDocumentList
- AFXDATARECOVERY/CDataRecoveryHandler::RemoveDocumentInfo
- AFXDATARECOVERY/CDataRecoveryHandler::ReopenPreviousDocuments
- AFXDATARECOVERY/CDataRecoveryHandler::RestoreAutosavedDocuments
- AFXDATARECOVERY/CDataRecoveryHandler::SaveOpenDocumentList
- AFXDATARECOVERY/CDataRecoveryHandler::SetAutosaveInterval
- AFXDATARECOVERY/CDataRecoveryHandler::SetAutosavePath
- AFXDATARECOVERY/CDataRecoveryHandler::SetRestartIdentifier
- AFXDATARECOVERY/CDataRecoveryHandler::SetSaveDocumentInfoOnIdle
- AFXDATARECOVERY/CDataRecoveryHandler::SetShutdownByRestartManager
- AFXDATARECOVERY/CDataRecoveryHandler::UpdateDocumentInfo
helpviewer_keywords:
- CDataRecoveryHandler [MFC], CDataRecoveryHandler
- CDataRecoveryHandler [MFC], AutosaveAllDocumentInfo
- CDataRecoveryHandler [MFC], AutosaveDocumentInfo
- CDataRecoveryHandler [MFC], CreateDocumentInfo
- CDataRecoveryHandler [MFC], DeleteAllAutosavedFiles
- CDataRecoveryHandler [MFC], DeleteAutosavedFile
- CDataRecoveryHandler [MFC], GenerateAutosaveFileName
- CDataRecoveryHandler [MFC], GetAutosaveInterval
- CDataRecoveryHandler [MFC], GetAutosavePath
- CDataRecoveryHandler [MFC], GetDocumentListName
- CDataRecoveryHandler [MFC], GetNormalDocumentTitle
- CDataRecoveryHandler [MFC], GetRecoveredDocumentTitle
- CDataRecoveryHandler [MFC], GetRestartIdentifier
- CDataRecoveryHandler [MFC], GetSaveDocumentInfoOnIdle
- CDataRecoveryHandler [MFC], GetShutdownByRestartManager
- CDataRecoveryHandler [MFC], Initialize
- CDataRecoveryHandler [MFC], QueryRestoreAutosavedDocuments
- CDataRecoveryHandler [MFC], ReadOpenDocumentList
- CDataRecoveryHandler [MFC], RemoveDocumentInfo
- CDataRecoveryHandler [MFC], ReopenPreviousDocuments
- CDataRecoveryHandler [MFC], RestoreAutosavedDocuments
- CDataRecoveryHandler [MFC], SaveOpenDocumentList
- CDataRecoveryHandler [MFC], SetAutosaveInterval
- CDataRecoveryHandler [MFC], SetAutosavePath
- CDataRecoveryHandler [MFC], SetRestartIdentifier
- CDataRecoveryHandler [MFC], SetSaveDocumentInfoOnIdle
- CDataRecoveryHandler [MFC], SetShutdownByRestartManager
- CDataRecoveryHandler [MFC], UpdateDocumentInfo
ms.assetid: 7794802c-e583-4eba-90b9-2fed1a161f9c
ms.openlocfilehash: 72189916f4555152ccc8997600d8426e188bb65c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222138"
---
# <a name="cdatarecoveryhandler-class"></a>Classe CDataRecoveryHandler

`CDataRecoveryHandler`Salva i documenti e li ripristina se un'applicazione viene chiusa in modo imprevisto.

## <a name="syntax"></a>Sintassi

```
class CDataRecoveryHandler : public CObject
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|Nome|Description|
|-|-|
|[CDataRecoveryHandler:: CDataRecoveryHandler](#cdatarecoveryhandler)|Costruisce un oggetto `CDataRecoveryHandler`.|

### <a name="methods"></a>Metodi

|Nome|Description|
|-|-|
|[CDataRecoveryHandler:: AutosaveAllDocumentInfo](#autosavealldocumentinfo)|Salva in automatico ogni file registrato con la `CDataRecoveryHandler` classe.|
|[CDataRecoveryHandler:: AutosaveDocumentInfo](#autosavedocumentinfo)|Salva in automatico il documento specificato.|
|[CDataRecoveryHandler:: CreateDocumentInfo](#createdocumentinfo)|Aggiunge un documento all'elenco di documenti aperti.|
|[CDataRecoveryHandler::D eleteAllAutosavedFiles](#deleteallautosavedfiles)|Elimina tutti i file salvati in automatico correnti.|
|[CDataRecoveryHandler::D eleteAutosavedFile](#deleteautosavedfile)|Elimina il file autosalvato specificato.|
|[CDataRecoveryHandler:: GenerateAutosaveFileName](#generateautosavefilename)|Genera il nome di un file di salvataggio automatico associato al nome del file di documento fornito.|
|[CDataRecoveryHandler:: GetAutosaveInterval](#getautosaveinterval)|Restituisce l'intervallo tra i tentativi di salvataggio automatico.|
|[CDataRecoveryHandler:: GetAutosavePath](#getautosavepath)|Restituisce il percorso dei file autosalvati.|
|[CDataRecoveryHandler:: GetDocumentListName](#getdocumentlistname)|Recupera il nome del documento da un `CDocument` oggetto.|
|[CDataRecoveryHandler:: GetNormalDocumentTitle](#getnormaldocumenttitle)|Recupera il titolo normale per il documento specificato.|
|[CDataRecoveryHandler:: GetRecoveredDocumentTitle](#getrecovereddocumenttitle)|Crea e restituisce il titolo del documento recuperato.|
|[CDataRecoveryHandler:: GetRestartIdentifier](#getrestartidentifier)|Recupera l'identificatore di riavvio univoco per l'applicazione.|
|[CDataRecoveryHandler:: GetSaveDocumentInfoOnIdle](#getsavedocumentinfoonidle)|Indica se l'oggetto `CDataRecoveryHandler` esegue un salvataggio automatico nel ciclo di inattività corrente.|
|[CDataRecoveryHandler:: GetShutdownByRestartManager](#getshutdownbyrestartmanager)|Indica se la gestione riavvio ha causato la chiusura dell'applicazione.|
|[CDataRecoveryHandler:: Initialize](#initialize)|Inizializza `CDataRecoveryHandler`.|
|[CDataRecoveryHandler:: QueryRestoreAutosavedDocuments](#queryrestoreautosaveddocuments)|Visualizza una finestra di dialogo per l'utente per ogni documento `CDataRecoveryHandler` salvato da. La finestra di dialogo determina se l'utente desidera ripristinare il documento salvato in modo automatico.|
|[CDataRecoveryHandler:: ReadOpenDocumentList](#readopendocumentlist)|Carica l'elenco dei documenti aperti dal registro di sistema.|
|[CDataRecoveryHandler:: RemoveDocumentInfo](#removedocumentinfo)|Rimuove il documento fornito dall'elenco di documenti aperti.|
|[CDataRecoveryHandler:: ReopenPreviousDocuments](#reopenpreviousdocuments)|Apre i documenti aperti in precedenza.|
|[CDataRecoveryHandler:: RestoreAutosavedDocuments](#restoreautosaveddocuments)|Ripristina i documenti autosalvati in base all'input dell'utente.|
|[CDataRecoveryHandler:: SaveOpenDocumentList](#saveopendocumentlist)|Salva l'elenco corrente dei documenti aperti nel registro di sistema di Windows.|
|[CDataRecoveryHandler:: SetAutosaveInterval](#setautosaveinterval)|Imposta il tempo tra i cicli di salvataggio automatico in millisecondi.|
|[CDataRecoveryHandler:: SetAutosavePath](#setautosavepath)|Imposta la directory in cui vengono archiviati i file autosalvati.|
|[CDataRecoveryHandler:: SetRestartIdentifier](#setrestartidentifier)|Imposta l'identificatore di riavvio univoco per questa istanza di `CDataRecoveryHandler` .|
|[CDataRecoveryHandler:: SetSaveDocumentInfoOnIdle](#setsavedocumentinfoonidle)|Imposta un valore che indica se `CDataRecoveryHandler` Salva le informazioni del documento aperto nel registro di sistema di Windows durante il ciclo di inattività corrente.|
|[CDataRecoveryHandler:: SetShutdownByRestartManager](#setshutdownbyrestartmanager)|Imposta un valore che indica se l'uscita precedente dell'applicazione è stata causata da Gestione riavvio.|
|[CDataRecoveryHandler:: UpdateDocumentInfo](#updatedocumentinfo)|Aggiorna le informazioni per un documento perché l'utente lo ha salvato.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|-|-|
|m_bRestoringPreviousOpenDocs|Indica se il gestore di recupero dati riapre i documenti aperti in precedenza.|
|m_bSaveDocumentInfoOnIdle|Indica se il gestore del recupero dati Salva i documenti nel ciclo di inattività successivo.|
|m_bShutdownByRestartManager|Indica se Gestione riavvio causa la chiusura dell'applicazione.|
|m_dwRestartManagerSupportFlags|Flag che indicano il supporto fornito da Gestione riavvio per l'applicazione.|
|m_lstAutosavesToDelete|Elenco di file salvati automaticamente che non sono stati eliminati durante la chiusura dei documenti originali. Quando l'applicazione viene chiusa, gestione riavvio tenta di eliminare i file.|
|m_mapDocNameToAutosaveName|Mappa dei nomi dei documenti ai nomi di file salvati in modo automatico.|
|m_mapDocNameToDocumentPtr|Mappa dei nomi dei documenti ai puntatori di [CDocument](../../mfc/reference/cdocument-class.md) .|
|m_mapDocNameToRestoreBool|Mappa dei nomi di documento a un parametro booleano che indica se ripristinare il documento salvato in modo automatico.|
|m_mapDocumentPtrToDocName|Mappa dei `CDocument` puntatori ai nomi di documento.|
|m_mapDocumentPtrToDocTitle|Mappa dei `CDocument` puntatori ai titoli del documento. Questi titoli vengono usati per salvare i file.|
|m_nAutosaveInterval|Tempo in millisecondi tra i salvataggio automatico.|
|m_nTimerID|Identificatore del timer di salvataggio automatico.|
|m_strAutosavePath|Il percorso in cui sono archiviati i documenti autosalvati.|
|m_strRestartIdentifier|Rappresentazione di stringa di un GUID per Gestione riavvio.|

## <a name="remarks"></a>Commenti

Gestione riavvio utilizza la `CDataRecoveryHandler` classe per tenere traccia di tutti i documenti aperti e per salvarli in modo automatico in caso di necessità. Per abilitare il salvataggio automatico, usare il metodo [CDataRecoveryHandler:: SetSaveDocumentInfoOnIdle](#setsavedocumentinfoonidle) . Questo metodo indica `CDataRecoveryHandler` a di eseguire un salvataggio automatico nel ciclo inattivo successivo. Gestione riavvio chiama `SetSaveDocumentInfoOnIdle` quando `CDataRecoveryHandler` deve eseguire un salvataggio automatico.

Tutti i metodi della `CDataRecoveryHandler` classe sono virtuali. Eseguire l'override dei metodi in questa classe per creare un gestore di recupero dati personalizzato. A meno che non si crei un gestore di recupero dati personalizzato o Gestione riavvio, non creare un'istanza di CDataRecoveryHandler. La [classe CWinApp](../../mfc/reference/cwinapp-class.md) crea un `CDataRecoveryHandler` oggetto come richiesto.

Prima di poter utilizzare un `CDataRecoveryHandler` oggetto, è necessario chiamare [CDataRecoveryHandler:: Initialize](#initialize).

Poiché la `CDataRecoveryHandler` classe è strettamente connessa alla gestione riavvio, `CDataRecoveryHandler` dipende dal parametro globale `m_dwRestartManagerSupportFlags` . Questo parametro determina le autorizzazioni di gestione riavvio e il modo in cui interagisce con l'applicazione. Per incorporare Gestione riavvio in un'applicazione esistente, è necessario assegnare `m_dwRestartManagerSupportFlags` il valore appropriato nel costruttore dell'applicazione principale. Per altre informazioni su come usare Gestione riavvio, vedere [procedura: aggiungere il supporto di gestione riavvio](../../mfc/how-to-add-restart-manager-support.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdatarecovery. h

## <a name="cdatarecoveryhandlerautosavealldocumentinfo"></a><a name="autosavealldocumentinfo"></a> CDataRecoveryHandler:: AutosaveAllDocumentInfo

Salva in automatico ogni file registrato con la `CDataRecoveryHandler` classe.

```
virtual BOOL AutosaveAllDocumentInfo();
```

### <a name="return-value"></a>Valore restituito

TRUE se tutti i documenti sono stati `CDataRecoveryHandler` salvati; FALSE se non è stato salvato alcun documento.

### <a name="remarks"></a>Commenti

Questo metodo restituisce TRUE se non sono presenti documenti che devono essere salvati. Restituisce anche TRUE senza salvare i documenti se il recupero `CWinApp` `CDocManager` di o per l'applicazione genera un errore.

Per usare questo metodo, è necessario impostare AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART o AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL in `m_dwRestartManagerSupportFlags` . Per ulteriori informazioni, vedere [procedura: aggiungere il supporto di gestione riavvio](../../mfc/how-to-add-restart-manager-support.md).

## <a name="cdatarecoveryhandlerautosavedocumentinfo"></a><a name="autosavedocumentinfo"></a> CDataRecoveryHandler:: AutosaveDocumentInfo

Salva in automatico il documento specificato.

```
virtual BOOL AutosaveDocumentInfo(
    CDocument* pDocument,
    BOOL bResetModifiedFlag = TRUE);
```

### <a name="parameters"></a>Parametri

*pDocument*\
in Puntatore all'oggetto `CDocument` da salvare.

*bResetModifiedFlag*\
in TRUE indica che l'oggetto `CDataRecoveryHandler` considera *pDocument* da modificare. FALSE indica che il Framework considera senza modifiche *pDocument* . Per ulteriori informazioni sull'effetto di questo flag, vedere la sezione Osservazioni.

### <a name="return-value"></a>Valore restituito

TRUE se i flag appropriati sono impostati e *pDocument* è un `CDocument` oggetto valido.

### <a name="remarks"></a>Commenti

Ogni `CDocument` oggetto ha un flag che indica se è stato modificato dopo l'ultimo salvataggio. Utilizzare [CDocument::](../../mfc/reference/cdocument-class.md#ismodified) per determinare lo stato di questo flag. Se un oggetto `CDocument` non è stato modificato dall'ultimo salvataggio, `AutosaveDocumentInfo` Elimina tutti i file salvati in automatico per il documento. Se un documento è stato modificato dall'ultimo salvataggio, chiudendo viene richiesto all'utente di salvare il documento prima di chiuderlo.

> [!NOTE]
> L'uso di *bResetModifiedFlag* per modificare lo stato del documento in non modificato può causare la perdita di dati non salvati da parte dell'utente. Se il Framework considera invariato un documento, chiudendo non viene richiesto di salvare l'utente.

Questo metodo genera un'eccezione con la macro [Assert](diagnostic-services.md#assert) se *pDocument* non è un `CDocument` oggetto valido.

Per usare questo metodo, è necessario impostare AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART o AFX_RESTARTMANAGER_AUTOSAVE_AT_INTERVAL in *m_dwRestartManagerSupportFlags*.

## <a name="cdatarecoveryhandlercdatarecoveryhandler"></a><a name="cdatarecoveryhandler"></a> CDataRecoveryHandler:: CDataRecoveryHandler

Costruisce un oggetto `CDataRecoveryHandler`.

```
CDataRecoveryHandler(
    DWORD dwRestartManagerSupportFlags,
    int nAutosaveInterval);
```

### <a name="parameters"></a>Parametri

*dwRestartManagerSupportFlags*\
in Indica quali opzioni di gestione riavvio sono supportate.

*nAutosaveInterval*\
in Tempo tra i salvataggio automatico. Questo parametro è in millisecondi.

### <a name="remarks"></a>Commenti

Il framework MFC crea automaticamente un `CDataRecoveryHandler` oggetto per l'applicazione quando si utilizza la creazione guidata **nuovo progetto** . A meno che non si stia personalizzando il comportamento di ripristino dei dati o Gestione riavvio, non è necessario creare un `CDataRecoveryHandler` oggetto.

## <a name="cdatarecoveryhandlercreatedocumentinfo"></a><a name="createdocumentinfo"></a> CDataRecoveryHandler:: CreateDocumentInfo

Aggiunge un documento all'elenco di documenti aperti.

```
virtual BOOL CreateDocumentInfo(CDocument* pDocument);
```

### <a name="parameters"></a>Parametri

*pDocument*\
in Puntatore a un oggetto `CDocument` . Questo metodo crea le informazioni del documento per questo oggetto `CDocument` .

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce TRUE.

### <a name="remarks"></a>Commenti

Questo metodo controlla se *pDocument* è già presente nell'elenco di documenti prima di aggiungere il documento. Se *pDocument* è già presente nell'elenco, questo metodo elimina il file salvato in modo automatico associato a *pDocument*.

Per usare questo metodo, è necessario impostare AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART o AFX_RESTARTMANAGER_AUTOSAVE_AT_INTERVAL in *m_dwRestartManagerSupportFlags*.

## <a name="cdatarecoveryhandlerdeleteallautosavedfiles"></a><a name="deleteallautosavedfiles"></a> CDataRecoveryHandler::D eleteAllAutosavedFiles

Elimina tutti i file salvati in automatico correnti.

```
virtual BOOL DeleteAllAutosavedFiles();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce sempre TRUE.

## <a name="cdatarecoveryhandlerdeleteautosavedfile"></a><a name="deleteautosavedfile"></a> CDataRecoveryHandler::D eleteAutosavedFile

Elimina il file autosalvato specificato.

```
virtual BOOL DeleteAutosavedFile(const CString& strAutosavedFile);
```

### <a name="parameters"></a>Parametri

*strAutosavedFile*\
in Stringa che contiene il nome del file autosalvato.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Commenti

Se questo metodo non è in grado di eliminare il file salvato in modo automatico, Salva il nome del file in un elenco. Il distruttore per `CDataRecoveryHandler` tenta di eliminare ogni file salvato in modo automatico specificato nell'elenco.

## <a name="cdatarecoveryhandlergenerateautosavefilename"></a><a name="generateautosavefilename"></a> CDataRecoveryHandler:: GenerateAutosaveFileName

Genera il nome di un file di salvataggio automatico associato al nome del file di documento fornito.

```
virtual CString GenerateAutosaveFileName(const CString& strDocumentName) const;
```

### <a name="parameters"></a>Parametri

*strDocumentName*<br/>
in Stringa che contiene il nome del documento. `GenerateAutosaveFileName` Usa il nome del documento per generare un nome file di salvataggio automatico corrispondente.

### <a name="return-value"></a>Valore restituito

Nome del file di salvataggio automatico generato da *strDocumentName*.

### <a name="remarks"></a>Commenti

Ogni nome di documento ha un mapping uno-a-uno con un nome file di salvataggio automatico.

## <a name="cdatarecoveryhandlergetautosaveinterval"></a><a name="getautosaveinterval"></a> CDataRecoveryHandler:: GetAutosaveInterval

Restituisce l'intervallo tra i tentativi di salvataggio automatico.

```
virtual int GetAutosaveInterval() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di millisecondi tra i tentativi di salvataggio automatico.

## <a name="cdatarecoveryhandlergetautosavepath"></a><a name="getautosavepath"></a> CDataRecoveryHandler:: GetAutosavePath

Restituisce il percorso dei file autosalvati.

```
virtual CString GetAutosavePath() const;
```

### <a name="return-value"></a>Valore restituito

Il percorso in cui sono archiviati i documenti autosalvati.

## <a name="cdatarecoveryhandlergetdocumentlistname"></a><a name="getdocumentlistname"></a> CDataRecoveryHandler:: GetDocumentListName

Recupera il nome del documento da un `CDocument` oggetto.

```
virtual CString GetDocumentListName(CDocument* pDocument) const;
```

### <a name="parameters"></a>Parametri

*pDocument*\
in Puntatore a un oggetto `CDocument` . `GetDocumentListName` Recupera il nome del documento da questo oggetto `CDocument` .

### <a name="return-value"></a>Valore restituito

Nome del documento da *pDocument*.

### <a name="remarks"></a>Commenti

`CDataRecoveryHandler`Usa il nome del documento come chiave in *m_mapDocNameToAutosaveName*, *m_mapDocNameToDocumentPtr* e *m_mapDocNameToRestoreBool*. Questi parametri consentono `CDataRecoveryHandler` a di monitorare `CDocument` gli oggetti, il nome del file di salvataggio automatico e le impostazioni di salvataggio automatico.

## <a name="cdatarecoveryhandlergetnormaldocumenttitle"></a><a name="getnormaldocumenttitle"></a> CDataRecoveryHandler:: GetNormalDocumentTitle

Recupera il titolo normale per il documento specificato.

```
virtual CString GetNormalDocumentTitle(CDocument* pDocument);
```

### <a name="parameters"></a>Parametri

*pDocument*\
in Puntatore a un oggetto `CDocument` .

### <a name="return-value"></a>Valore restituito

Titolo normale per il documento specificato.

### <a name="remarks"></a>Commenti

Il titolo normale di un documento è in genere il nome file del documento senza percorso. Si tratta del titolo nel campo **nome file** della finestra di dialogo **Salva con** nome.

## <a name="cdatarecoveryhandlergetrecovereddocumenttitle"></a><a name="getrecovereddocumenttitle"></a> CDataRecoveryHandler:: GetRecoveredDocumentTitle

Crea e restituisce il titolo del documento recuperato.

```
virtual CString GetRecoveredDocumentTitle(const CString& strDocumentTitle) const;
```

### <a name="parameters"></a>Parametri

*strDocumentTitle*<br/>
in Titolo normale per il documento.

### <a name="return-value"></a>Valore restituito

Titolo del documento recuperato.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, il titolo ripristinato di un documento è il titolo normale a cui è stato aggiunto **[ripristinato]** . Il titolo recuperato viene visualizzato all'utente quando l' `CDataRecoveryHandler` utente esegue una query per ripristinare i documenti salvati in modo automatico.

## <a name="cdatarecoveryhandlergetrestartidentifier"></a><a name="getrestartidentifier"></a> CDataRecoveryHandler:: GetRestartIdentifier

Recupera l'identificatore di riavvio univoco per l'applicazione.

```
virtual CString GetRestartIdentifier() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di riavvio univoco.

### <a name="remarks"></a>Commenti

L'identificatore di riavvio è univoco per ogni esecuzione dell'applicazione.

`CDataRecoveryHandler`Archivia le informazioni nel registro di sistema relative ai documenti attualmente aperti. Quando Gestione riavvio esce da un'applicazione e la riavvia, fornisce l'identificatore di riavvio a `CDataRecoveryHandler` . `CDataRecoveryHandler`Usa l'identificatore di riavvio per recuperare l'elenco dei documenti aperti in precedenza. Questo consente `CDataRecoveryHandler` a di provare a trovare e ripristinare i file salvati in modo automatico.

## <a name="cdatarecoveryhandlergetsavedocumentinfoonidle"></a><a name="getsavedocumentinfoonidle"></a> CDataRecoveryHandler:: GetSaveDocumentInfoOnIdle

Indica se l'oggetto `CDataRecoveryHandler` esegue un salvataggio automatico nel ciclo di inattività corrente.

```
virtual BOOL GetSaveDocumentInfoOnIdle() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica il `CDataRecoveryHandler` salvataggio automatico nel ciclo di inattività corrente. FALSE indica che non lo è.

## <a name="cdatarecoveryhandlergetshutdownbyrestartmanager"></a><a name="getshutdownbyrestartmanager"></a> CDataRecoveryHandler:: GetShutdownByRestartManager

Indica se la gestione riavvio ha causato la chiusura dell'applicazione.

```
virtual BOOL GetShutdownByRestartManager() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che la gestione riavvio ha causato la chiusura dell'applicazione. FALSE indica che non è stato fatto.

## <a name="cdatarecoveryhandlerinitialize"></a><a name="initialize"></a> CDataRecoveryHandler:: Initialize

Inizializza `CDataRecoveryHandler`.

```
virtual BOOL Initialize();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'inizializzazione ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Il processo di inizializzazione carica il percorso per archiviare i file di salvataggio automatico dal registro di sistema. Se il `Initialize` metodo non riesce a trovare la directory o se il percorso è null, ha `Initialize` esito negativo e restituisce `FALSE` .

Usare [CDataRecoveryHandler:: SetAutosavePath](#setautosavepath) per modificare il percorso di salvataggio automatico dopo l'inizializzazione dell'applicazione `CDataRecoveryHandler` .

Il `Initialize` metodo avvia anche un timer da monitorare quando si verifica il salvataggio automatico successivo. Usare [CDataRecoveryHandler:: SetAutosaveInterval](#setautosaveinterval) per modificare l'intervallo di salvataggio automatico dopo l'inizializzazione dell'applicazione `CDataRecoveryHandler` .

## <a name="cdatarecoveryhandlerqueryrestoreautosaveddocuments"></a><a name="queryrestoreautosaveddocuments"></a> CDataRecoveryHandler:: QueryRestoreAutosavedDocuments

Visualizza una finestra di dialogo per l'utente per ogni documento `CDataRecoveryHandler` salvato da. La finestra di dialogo determina se l'utente desidera ripristinare il documento salvato in modo automatico.

```
virtual void QueryRestoreAutosavedDocuments();
```

### <a name="remarks"></a>Commenti

Se l'applicazione è Unicode, questo metodo Visualizza un [CTaskDialog](../../mfc/reference/ctaskdialog-class.md) all'utente. In caso contrario, il Framework utilizza [AfxMessageBox](../../mfc/reference/cstring-formatting-and-message-box-display.md#afxmessagebox) per eseguire una query sull'utente.

Dopo la `QueryRestoreAutosavedDocuments` raccolta di tutte le risposte dall'utente, archivia le informazioni nella variabile membro *m_mapDocNameToRestoreBool*. Questo metodo non consente di ripristinare i documenti salvati in modo automatico.

## <a name="cdatarecoveryhandlerreadopendocumentlist"></a><a name="readopendocumentlist"></a> CDataRecoveryHandler:: ReadOpenDocumentList

Carica l'elenco dei documenti aperti dal registro di sistema.

```
virtual BOOL ReadOpenDocumentList();
```

### <a name="return-value"></a>Valore restituito

TRUE indica che `ReadOpenDocumentList` sono state caricate le informazioni per almeno un documento dal registro di sistema. FALSE indica che non sono state caricate informazioni sul documento.

### <a name="remarks"></a>Commenti

Questa funzione carica le informazioni del documento aperto dal registro di sistema e le archivia nella variabile membro *m_mapDocNameToAutosaveName*.

Dopo aver `ReadOpenDocumentList` caricato tutti i dati, le informazioni del documento vengono eliminate dal registro di sistema.

## <a name="cdatarecoveryhandlerremovedocumentinfo"></a><a name="removedocumentinfo"></a> CDataRecoveryHandler:: RemoveDocumentInfo

Rimuove il documento fornito dall'elenco di documenti aperti.

```
virtual BOOL RemoveDocumentInfo(CDocument* pDocument);
```

### <a name="parameters"></a>Parametri

*pDocument*\
in Puntatore al documento da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se *pDocument* è stato rimosso dall'elenco; FALSE se si è verificato un errore.

### <a name="remarks"></a>Commenti

Quando l'utente chiude un documento, il Framework utilizza questo metodo per rimuoverlo dall'elenco dei documenti aperti.

Se `RemoveDocumentInfo` non è in grado di trovare *pDocument* nell'elenco dei documenti aperti, non esegue alcuna operazione e restituisce true.

Per usare questo metodo, è necessario impostare AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES in *m_dwRestartManagerSupportFlags*.

## <a name="cdatarecoveryhandlerreopenpreviousdocuments"></a><a name="reopenpreviousdocuments"></a> CDataRecoveryHandler:: ReopenPreviousDocuments

Apre i documenti aperti in precedenza.

```
virtual BOOL ReopenPreviousDocuments();
```

### <a name="return-value"></a>Valore restituito

TRUE se è stato aperto almeno un documento; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo metodo apre il salvataggio più recente dei documenti aperti in precedenza. Se un documento non è stato salvato o salvato in modo automatico, `ReopenPreviousDocuments` apre un documento vuoto in base al modello per quel tipo di file.

Per usare questo metodo, è necessario impostare AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES in *m_dwRestartManagerSupportFlags*. Se questo parametro non è impostato, `ReopenPreviousDocuments` non esegue alcuna operazione e restituisce false.

Se non sono presenti documenti archiviati nell'elenco dei documenti aperti in precedenza, `ReopenPreviousDocuments` non esegue alcuna operazione e restituisce false.

## <a name="cdatarecoveryhandlerrestoreautosaveddocuments"></a><a name="restoreautosaveddocuments"></a> CDataRecoveryHandler:: RestoreAutosavedDocuments

Ripristina i documenti autosalvati in base all'input dell'utente.

```
virtual BOOL RestoreAutosavedDocuments();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ripristina correttamente i documenti.

### <a name="remarks"></a>Commenti

Questo metodo chiama [CDataRecoveryHandler:: QueryRestoreAutosavedDocuments](#queryrestoreautosaveddocuments) per determinare i documenti che l'utente desidera ripristinare. Se un utente decide di non ripristinare un documento salvato in modo automatico, `RestoreAutosavedDocuments` Elimina il file di salvataggio automatico. In caso contrario, `RestoreAutosavedDocuments` sostituisce il documento aperto con la versione autosalvata.

Per usare questo metodo, è necessario impostare AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES o AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES in `m_dwRestartManagerSupportFlags` .

## <a name="cdatarecoveryhandlersaveopendocumentlist"></a><a name="saveopendocumentlist"></a> CDataRecoveryHandler:: SaveOpenDocumentList

Salva l'elenco corrente dei documenti aperti nel registro di sistema di Windows.

```
virtual BOOL SaveOpenDocumentList();
```

### <a name="return-value"></a>Valore restituito

TRUE se non sono presenti documenti aperti da salvare o se sono stati salvati correttamente. FALSE se sono presenti documenti da salvare nel registro di sistema, ma non salvati perché si è verificato un errore.

### <a name="remarks"></a>Commenti

Gestione riavvio chiama `SaveOpenDocumentList` quando l'applicazione viene chiusa in modo imprevisto o quando viene chiusa per un aggiornamento. Quando l'applicazione viene riavviata, USA [CDataRecoveryHandler:: ReadOpenDocumentList](#readopendocumentlist) per recuperare l'elenco dei documenti aperti.

Questo metodo salva solo l'elenco di documenti aperti. Il metodo [CDataRecoveryHandler:: AutosaveDocumentInfo](#autosavedocumentinfo) è responsabile del salvataggio dei documenti stessi.

## <a name="cdatarecoveryhandlersetautosaveinterval"></a><a name="setautosaveinterval"></a> CDataRecoveryHandler:: SetAutosaveInterval

Imposta il tempo tra i cicli di salvataggio automatico in millisecondi.

```
Virtual void SetAutosaveInterval(int nAutosaveInterval);
```

### <a name="parameters"></a>Parametri

*nAutosaveInterval*<br/>
in Nuovo intervallo di salvataggio automatico in millisecondi.

## <a name="cdatarecoveryhandlersetautosavepath"></a><a name="setautosavepath"></a> CDataRecoveryHandler:: SetAutosavePath

Imposta la directory in cui vengono archiviati i file autosalvati.

```
virtual void SetAutosavePath(const CString& strAutosavePath);
```

### <a name="parameters"></a>Parametri

*strAutosavePath*\
in Percorso in cui vengono archiviati i file di salvataggio automatico.

### <a name="remarks"></a>Commenti

La modifica della directory di salvataggio automatico non comporta lo spostamento dei file salvati in automatico.

## <a name="cdatarecoveryhandlersetrestartidentifier"></a><a name="setrestartidentifier"></a> CDataRecoveryHandler:: SetRestartIdentifier

Imposta l'identificatore di riavvio univoco per questa istanza di `CDataRecoveryHandler` .

```
virtual void SetRestartIdentifier(const CString& strRestartIdentifier);
```

### <a name="parameters"></a>Parametri

*strRestartIdentifier*\
in Identificatore univoco per Gestione riavvio.

### <a name="remarks"></a>Commenti

Gestione riavvio registra le informazioni sui documenti aperti nel registro di sistema. Queste informazioni vengono archiviate con l'identificatore di riavvio univoco come chiave. Poiché l'identificatore di riavvio è univoco per ogni istanza di un'applicazione, è possibile che più istanze di un'applicazione si chiudano in modo imprevisto e che Gestione riavvio possa ripristinarle ognuna.

## <a name="cdatarecoveryhandlersetsavedocumentinfoonidle"></a><a name="setsavedocumentinfoonidle"></a> CDataRecoveryHandler:: SetSaveDocumentInfoOnIdle

Imposta un valore che indica se `CDataRecoveryHandler` Salva le informazioni del documento aperto nel registro di sistema di Windows durante il ciclo di inattività corrente.

```
virtual void SetSaveDocumentInfoOnIdle(BOOL bSaveOnIdle);
```

### <a name="parameters"></a>Parametri

*bSaveOnIdle*\
in TRUE per salvare le informazioni sul documento durante il ciclo di inattività corrente; FALSE per non eseguire un salvataggio.

## <a name="cdatarecoveryhandlersetshutdownbyrestartmanager"></a><a name="setshutdownbyrestartmanager"></a> CDataRecoveryHandler:: SetShutdownByRestartManager

Imposta un valore che indica se l'uscita precedente dell'applicazione è stata causata da Gestione riavvio.

```
virtual void SetShutdownByRestartManager(BOOL bShutdownByRestartManager);
```

### <a name="parameters"></a>Parametri

*bShutdownByRestartManager*\
in TRUE per indicare che la gestione riavvio ha causato la chiusura dell'applicazione. FALSE per indicare che l'applicazione è stata chiusa per un altro motivo.

### <a name="remarks"></a>Commenti

Il Framework si comporta in modo diverso a seconda che l'uscita precedente non fosse prevista o che venisse avviata da Gestione riavvio.

## <a name="cdatarecoveryhandlerupdatedocumentinfo"></a><a name="updatedocumentinfo"></a> CDataRecoveryHandler:: UpdateDocumentInfo

Aggiorna le informazioni per un documento perché l'utente lo ha salvato.

```
virtual BOOL UpdateDocumentInfo(CDocument* pDocument);
```

### <a name="parameters"></a>Parametri

*pDocument*\
in Puntatore al documento salvato.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha eliminato il documento salvato automaticamente e ha aggiornato le informazioni del documento. FALSE se si è verificato un errore.

### <a name="remarks"></a>Commenti

Quando un utente salva un documento, l'applicazione rimuove il file salvato in modo automatico perché non è più necessario. `UpdateDocumentInfo` Elimina il file autosalvato chiamando [CDataRecoveryHandler:: RemoveDocumentInfo](#removedocumentinfo). `UpdateDocumentInfo` aggiunge quindi le informazioni da *pDocument* all'elenco dei documenti attualmente aperti poiché `RemoveDocumentInfo` Elimina tali informazioni, ma il documento salvato è ancora aperto.

Per usare questo metodo, è necessario impostare AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES in *m_dwRestartManagerSupportFlags*.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Procedura: aggiungere il supporto di gestione riavvio](../../mfc/how-to-add-restart-manager-support.md)
