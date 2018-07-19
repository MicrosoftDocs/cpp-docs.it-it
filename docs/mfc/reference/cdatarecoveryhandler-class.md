---
title: Classe CDataRecoveryHandler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9be1d106257787d5a5dd919372726c8d31a1edc1
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37339280"
---
# <a name="cdatarecoveryhandler-class"></a>Classe CDataRecoveryHandler
Il `CDataRecoveryHandler` si chiuda documenti e li ripristina se un'applicazione viene chiusa in modo imprevisto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDataRecoveryHandler : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[CDataRecoveryHandler::CDataRecoveryHandler](#cdatarecoveryhandler)|Costruisce un oggetto `CDataRecoveryHandler`.|  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CDataRecoveryHandler::AutosaveAllDocumentInfo](#autosavealldocumentinfo)|Si chiuda ogni file registrato con il `CDataRecoveryHandler` classe.|  
|[CDataRecoveryHandler::AutosaveDocumentInfo](#autosavedocumentinfo)|Si chiuda il documento specificato.|  
|[CDataRecoveryHandler::CreateDocumentInfo](#createdocumentinfo)|Aggiunge un documento all'elenco dei documenti aperti.|  
|[CDataRecoveryHandler::DeleteAllAutosavedFiles](#deleteallautosavedfiles)|Elimina tutti i file salvato automaticamente corrente.|  
|[CDataRecoveryHandler::DeleteAutosavedFile](#deleteautosavedfile)|Elimina il file salvato specificato automaticamente.|  
|[CDataRecoveryHandler::GenerateAutosaveFileName](#generateautosavefilename)|Genera il nome di un file di salvataggio automatico associato al nome di file di documento fornito.|  
|[CDataRecoveryHandler::GetAutosaveInterval](#getautosaveinterval)|Restituisce l'intervallo tra i tentativi di salvataggio automatico.|  
|[CDataRecoveryHandler::GetAutosavePath](#getautosavepath)|Restituisce il percorso dei file salvato automaticamente.|  
|[CDataRecoveryHandler::GetDocumentListName](#getdocumentlistname)|Recupera il nome del documento da un `CDocument` oggetto.|  
|[CDataRecoveryHandler::GetNormalDocumentTitle](#getnormaldocumenttitle)|Recupera il titolo normale per il documento specificato.|  
|[CDataRecoveryHandler::GetRecoveredDocumentTitle](#getrecovereddocumenttitle)|Crea e restituisce il titolo per il documento recuperato.|  
|[CDataRecoveryHandler::GetRestartIdentifier](#getrestartidentifier)|Recupera l'identificatore univoco di riavvio per l'applicazione.|  
|[CDataRecoveryHandler::GetSaveDocumentInfoOnIdle](#getsavedocumentinfoonidle)|Indica se il `CDataRecoveryHandler` esegue un salvataggio automatico di ciclo inattivo corrente.|  
|[CDataRecoveryHandler::GetShutdownByRestartManager](#getshutdownbyrestartmanager)|Indica se Gestione riavvio causato la chiusura dell'applicazione.|  
|[CDataRecoveryHandler::Initialize](#initialize)|Inizializza `CDataRecoveryHandler`.|  
|[CDataRecoveryHandler::QueryRestoreAutosavedDocuments](#queryrestoreautosaveddocuments)|Visualizza una finestra di dialogo per l'utente per ogni documento il `CDataRecoveryHandler` salvato automaticamente. La finestra di dialogo determina se l'utente vuole ripristinare il documento salvato automaticamente.|  
|[CDataRecoveryHandler::ReadOpenDocumentList](#readopendocumentlist)|Carica l'elenco dei documenti aperti dal Registro di sistema.|  
|[CDataRecoveryHandler::RemoveDocumentInfo](#removedocumentinfo)|Rimuove il documento specificato dall'elenco di documenti aperti.|  
|[CDataRecoveryHandler::ReopenPreviousDocuments](#reopenpreviousdocuments)|Apre i documenti precedentemente aperti.|  
|[CDataRecoveryHandler::RestoreAutosavedDocuments](#restoreautosaveddocuments)|Ripristina i documenti salvato automaticamente in base all'input utente.|  
|[CDataRecoveryHandler::SaveOpenDocumentList](#saveopendocumentlist)|Salva l'elenco corrente dei documenti aperti nel Registro di sistema di Windows.|  
|[CDataRecoveryHandler::SetAutosaveInterval](#setautosaveinterval)|Imposta il tempo tra cicli di salvataggio automatico espresso in millisecondi.|  
|[CDataRecoveryHandler::SetAutosavePath](#setautosavepath)|Imposta la directory in cui sono archiviati i file salvato automaticamente.|  
|[CDataRecoveryHandler::SetRestartIdentifier](#setrestartidentifier)|Imposta l'identificatore univoco di riavvio per questa istanza del `CDataRecoveryHandler`.|  
|[CDataRecoveryHandler::SetSaveDocumentInfoOnIdle](#setsavedocumentinfoonidle)|Imposta se il `CDataRecoveryHandler` Salva le informazioni sul documento aperto nel Registro di sistema di Windows durante il ciclo inattivo corrente.|  
|[CDataRecoveryHandler::SetShutdownByRestartManager](#setshutdownbyrestartmanager)|Imposta se l'uscita dell'applicazione precedente è stato causato da Gestione riavvio.|  
|[CDataRecoveryHandler::UpdateDocumentInfo](#updatedocumentinfo)|Aggiorna le informazioni per un documento perché l'utente salvato.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|m_bRestoringPreviousOpenDocs|Indica se il gestore di recupero dati verrà riaperto documenti precedentemente aperti.|  
|m_bSaveDocumentInfoOnIdle|Indica se la si chiuda gestore di ripristino dei dati sui documenti nel successivo ciclo inattivo.|  
|m_bShutdownByRestartManager|Indica se Gestione riavvio provoca la chiusura dell'applicazione.|  
|m_dwRestartManagerSupportFlags|Fornisce i flag che indicano ciò che supportano Gestione riavvio per l'applicazione.|  
|m_lstAutosavesToDelete|Un elenco di file salvato automaticamente che non sono stati eliminati quando i documenti originali sono stati chiusi. Quando l'applicazione viene chiusa, i tentativi di Gestione riavvio l'eliminazione dei file.|  
|m_mapDocNameToAutosaveName|Una mappa dei nomi di documento per i nomi dei file salvato automaticamente.|  
|m_mapDocNameToDocumentPtr|Una mappa dei nomi di documento per il [CDocument](../../mfc/reference/cdocument-class.md) puntatori.|  
|m_mapDocNameToRestoreBool|Una mappa dei nomi di documento a un parametro booleano che indica se si desidera ripristinare il documento salvato automaticamente.|  
|m_mapDocumentPtrToDocName|Una mappa del `CDocument` puntatori per i nomi dei documenti.|  
|m_mapDocumentPtrToDocTitle|Una mappa del `CDocument` puntatori ai titoli dei documenti. Questi titoli vengono usati per salvare il file.|  
|m_nAutosaveInterval|Tempo in millisecondi tra si chiuda.|  
|m_nTimerID|L'identificatore per il timer di salvataggio automatico.|  
|m_strAutosavePath|Il percorso in cui sono archiviati i documenti salvato automaticamente.|  
|m_strRestartIdentifier|Rappresentazione di stringa di un GUID per la gestione riavvio.|  
  
## <a name="remarks"></a>Note  
 Usa Gestione riavvio il `CDataRecoveryHandler` classe mantenere tenerne traccia di tutti i documenti aperti e salvataggio automatico in base alle esigenze. Per abilitare il salvataggio automatico, usare il [CDataRecoveryHandler::SetSaveDocumentInfoOnIdle](#setsavedocumentinfoonidle) (metodo). Questo metodo indica il `CDataRecoveryHandler` per eseguire un salvataggio automatico nel successivo ciclo inattivo. Le chiamate di Gestione riavvio `SetSaveDocumentInfoOnIdle` quando il `CDataRecoveryHandler` deve eseguire un salvataggio automatico.  
  
 Tutti i metodi del `CDataRecoveryHandler` classe sono virtuali. Eseguire l'override di metodi in questa classe per creare un proprio gestore di ripristino di dati personalizzati. A meno che non si crea un proprio gestore di ripristino dei dati o riavviare la gestione, non creare un'istanza di un CDataRecoveryHandler. Il [classe CWinApp](../../mfc/reference/cwinapp-class.md) crea un `CDataRecoveryHandler` dell'oggetto come richiesto.  
  
 Prima di poter usare un `CDataRecoveryHandler` dell'oggetto, è necessario chiamare [CDataRecoveryHandler::Initialize](#initialize).  
  
 Poiché il `CDataRecoveryHandler` classe è strettamente connessa, Gestione riavvio `CDataRecoveryHandler` dipende dal parametro globale `m_dwRestartManagerSupportFlags`. Questo parametro determina quali autorizzazioni dispone di Gestione riavvio e le relative interazioni con l'applicazione. Per incorporare la gestione del riavvio in un'applicazione esistente, è necessario assegnare `m_dwRestartManagerSupportFlags` il valore appropriato nel costruttore dell'applicazione principale. Per altre informazioni su come usare Gestione riavvio, vedere [procedura: aggiunta di supporto di Gestione riavvio](../../mfc/how-to-add-restart-manager-support.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdatarecovery.h  
  
##  <a name="autosavealldocumentinfo"></a>  CDataRecoveryHandler::AutosaveAllDocumentInfo  
 Si chiuda ogni file registrato con il `CDataRecoveryHandler` classe.  
  
```  
virtual BOOL AutosaveAllDocumentInfo();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il `CDataRecoveryHandler` salvato tutti i documenti; FALSE se tutti i documenti non è stato salvato.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce TRUE se non sono presenti documenti che devono essere salvati. Restituisce TRUE anche senza salvare tutti i documenti se recupera le `CWinApp` o `CDocManager` per l'applicazione genera un errore.  
  
 Per usare questo metodo, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART o AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL deve essere impostata `m_dwRestartManagerSupportFlags`. Visualizzare [m_dwRestartManagerSupportFlags](#m_dwrestartmanagersupportflags) per altre informazioni.  
  
##  <a name="autosavedocumentinfo"></a>  CDataRecoveryHandler::AutosaveDocumentInfo  
 Si chiuda il documento specificato.  
  
```  
virtual BOOL AutosaveDocumentInfo(
    CDocument* pDocument,  
    BOOL bResetModifiedFlag = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *pDocument*|Un puntatore al `CDocument` per salvare.|  
|[in] *bResetModifiedFlag*|TRUE indica che il `CDataRecoveryHandler` prende in considerazione *pDocument* per essere modificato. FALSE indica che il framework prende in considerazione *pDocument* sia invariato. Vedere la sezione Osservazioni per altre informazioni sull'effetto di questo flag.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se i flag appropriati sono impostati e *pDocument* è un valore valido `CDocument` oggetto.  
  
### <a name="remarks"></a>Note  
 Ogni `CDocument` oggetto ha un flag che indica se è stato modificato dopo l'ultimo salvataggio. Uso [CDocument::IsModified](../../mfc/reference/cdocument-class.md#ismodified) per determinare lo stato di questo flag. Se un `CDocument` non è stato modificato dopo l'ultimo salvataggio, `AutosaveDocumentInfo` Elimina tutti i file per il documento salvato automaticamente. Se un documento è stato modificato dall'ultimo salvataggio, la chiusura, richiede all'utente di salvare il documento prima della chiusura.  
  
> [!NOTE]
>  Usando *bResetModifiedFlag* per modificare lo stato del documento per non modificato l'utente potrebbe perdere i dati non salvati. Se il framework prende in considerazione un documento senza modificato, la relativa chiusura non richiede all'utente di salvare.  
  
 Questo metodo genera un'eccezione con il [ASSERT](diagnostic-services.md#assert) macro se *pDocument* non è valida `CDocument` oggetto.  
  
 Per usare questo metodo, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART o AFX_RESTARTMANAGER_AUTOSAVE_AT_INTERVAL deve essere impostata *m_dwRestartManagerSupportFlags*.   
  
##  <a name="cdatarecoveryhandler"></a>  CDataRecoveryHandler::CDataRecoveryHandler  
 Costruisce un oggetto `CDataRecoveryHandler`.  
  
```  
CDataRecoveryHandler(
    DWORD dwRestartManagerSupportFlags,  
    int nAutosaveInterval);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *dwRestartManagerSupportFlags*|Indica quali opzioni di Gestione riavvio sono supportate.|  
|[in] *nAutosaveInterval*|Tempo trascorso tra si chiuda. Questo parametro è espresso in millisecondi.|  
  
### <a name="remarks"></a>Note  
 Il framework MFC crea automaticamente un `CDataRecoveryHandler` oggetto per l'applicazione quando si usa la **nuovo progetto** procedura guidata. A meno che non si sta personalizzando il comportamento di recupero di dati o Gestione riavvio, non è necessario creare un `CDataRecoveryHandler` oggetto.  
  
  
##  <a name="createdocumentinfo"></a>  CDataRecoveryHandler::CreateDocumentInfo  
 Aggiunge un documento all'elenco dei documenti aperti.  
  
```  
virtual BOOL CreateDocumentInfo(CDocument* pDocument);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *pDocument*|Un puntatore a un `CDocument`. Questo metodo crea informazioni del documento per questo `CDocument`.|  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce TRUE.  
  
### <a name="remarks"></a>Note  
 Questo metodo controlla se *pDocument* è già presente nell'elenco dei documenti prima di aggiungere il documento. Se *pDocument* è già incluso nell'elenco, questo metodo elimina il file salvato automaticamente associato *pDocument*.  
  
 Per usare questo metodo, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART o AFX_RESTARTMANAGER_AUTOSAVE_AT_INTERVAL deve essere impostata *m_dwRestartManagerSupportFlags*. 
  
##  <a name="deleteallautosavedfiles"></a>  CDataRecoveryHandler::DeleteAllAutosavedFiles  
 Elimina tutti i file salvato automaticamente corrente.  
  
```  
virtual BOOL DeleteAllAutosavedFiles();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce sempre TRUE.  
  
##  <a name="deleteautosavedfile"></a>  CDataRecoveryHandler::DeleteAutosavedFile  
 Elimina il file salvato specificato automaticamente.  
  
```  
virtual BOOL DeleteAutosavedFile(const CString& strAutosavedFile);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *strAutosavedFile*|Stringa che contiene il nome del file salvato automaticamente.|  
  
### <a name="return-value"></a>Valore restituito  
 Sempre l'implementazione predefinita restituisce TRUE.  
  
### <a name="remarks"></a>Note  
 Se questo metodo non è possibile eliminare il file salvato automaticamente, Salva il nome del file in un elenco. Il distruttore per la `CDataRecoveryHandler` tenta di eliminare ciascun file salvato automaticamente specificato in tale elenco.  
  
##  <a name="generateautosavefilename"></a>  CDataRecoveryHandler::GenerateAutosaveFileName  
 Genera il nome di un file di salvataggio automatico associato al nome di file di documento fornito.  
  
```  
virtual CString GenerateAutosaveFileName(const CString& strDocumentName) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *strDocumentName*  
 Stringa che contiene il nome del documento. `GenerateAutosaveFileName` Usa il nome del documento per generare un nome di file di salvataggio automatico corrispondente.  
  
### <a name="return-value"></a>Valore restituito  
 Il nome di file di salvataggio automatico generato dal *strDocumentName*.  
  
### <a name="remarks"></a>Note  
 Nome di ogni documento ha un mapping uno a uno con un nome di file di salvataggio automatico.  
  
##  <a name="getautosaveinterval"></a>  CDataRecoveryHandler::GetAutosaveInterval  
 Restituisce l'intervallo tra i tentativi di salvataggio automatico.  
  
```  
virtual int GetAutosaveInterval() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Prova il numero di millisecondi tra salvataggio automatico.  
  
##  <a name="getautosavepath"></a>  CDataRecoveryHandler::GetAutosavePath  
 Restituisce il percorso dei file salvato automaticamente.  
  
```  
virtual CString GetAutosavePath() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso in cui sono archiviati i documenti salvato automaticamente.  
  
##  <a name="getdocumentlistname"></a>  CDataRecoveryHandler::GetDocumentListName  
 Recupera il nome del documento da un `CDocument` oggetto.  
  
```  
virtual CString GetDocumentListName(CDocument* pDocument) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *pDocument*|Un puntatore a un `CDocument`. `GetDocumentListName` Recupera il nome del documento da questa `CDocument`.|  
  
### <a name="return-value"></a>Valore restituito  
 Il nome del documento dal *pDocument*.  
  
### <a name="remarks"></a>Note  
 Il `CDataRecoveryHandler` Usa il nome del documento come chiave in *m_mapDocNameToAutosaveName*, *m_mapDocNameToDocumentPtr*, e *m_mapDocNameToRestoreBool*. Questi parametri consentono il `CDataRecoveryHandler` per monitorare `CDocument` oggetti, il nome del file di salvataggio automatico e le impostazioni di salvataggio automatico.  
  
##  <a name="getnormaldocumenttitle"></a>  CDataRecoveryHandler::GetNormalDocumentTitle  
 Recupera il titolo normale per il documento specificato.  
  
```  
virtual CString GetNormalDocumentTitle(CDocument* pDocument);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *pDocument*|Un puntatore a un `CDocument`.|  
  
### <a name="return-value"></a>Valore restituito  
 Il titolo normale per il documento specificato.  
  
### <a name="remarks"></a>Note  
 Il titolo normale di un documento è in genere il nome del file del documento senza il percorso. Questo è il titolo nel **nome File** campo il **Salva con nome** nella finestra di dialogo.  
  
##  <a name="getrecovereddocumenttitle"></a>  CDataRecoveryHandler::GetRecoveredDocumentTitle  
 Crea e restituisce il titolo per il documento recuperato.  
  
```  
virtual CString GetRecoveredDocumentTitle(const CString& strDocumentTitle) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *strDocumentTitle*  
 Il titolo normale per il documento.  
  
### <a name="return-value"></a>Valore restituito  
 Titolo documento recuperato.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il titolo di un documento recuperato è il normale titolo **[recuperato]** aggiunto a tale file. Il titolo recuperato viene visualizzato all'utente quando il `CDataRecoveryHandler` chiede all'utente di ripristinare documenti salvato automaticamente.  
  
##  <a name="getrestartidentifier"></a>  CDataRecoveryHandler::GetRestartIdentifier  
 Recupera l'identificatore univoco di riavvio per l'applicazione.  
  
```  
virtual CString GetRestartIdentifier() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore univoco di riavvio.  
  
### <a name="remarks"></a>Note  
 L'identificatore di riavvio è univoco per ogni esecuzione dell'applicazione.  
  
 Il `CDataRecoveryHandler` archivia le informazioni nel Registro di sistema sui documenti attualmente aperti. Quando si esce da un'applicazione Gestione riavvio e la riavvia, fornisce l'identificatore di riavvio per il `CDataRecoveryHandler`. Il `CDataRecoveryHandler` utilizza l'identificatore di riavvio per recuperare l'elenco di documenti precedentemente aperti. In questo modo il `CDataRecoveryHandler` per tentare di trovare e ripristinare i file salvato automaticamente.  
  
##  <a name="getsavedocumentinfoonidle"></a>  CDataRecoveryHandler::GetSaveDocumentInfoOnIdle  
 Indica se il `CDataRecoveryHandler` esegue un salvataggio automatico di ciclo inattivo corrente.  
  
```  
virtual BOOL GetSaveDocumentInfoOnIdle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE indica il `CDataRecoveryHandler` si chiuda in ciclo inattivo corrente; FALSE indica che non esiste.  
  
##  <a name="getshutdownbyrestartmanager"></a>  CDataRecoveryHandler::GetShutdownByRestartManager  
 Indica se Gestione riavvio causato la chiusura dell'applicazione.  
  
```  
virtual BOOL GetShutdownByRestartManager() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE indica che Gestione riavvio causa la chiusura; dell'applicazione FALSE indica che non è stato eseguito.  
  
##  <a name="initialize"></a>  CDataRecoveryHandler::Initialize  
 Inizializza `CDataRecoveryHandler`.  
  
```  
virtual BOOL Initialize();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'inizializzazione ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Il processo di inizializzazione consente di caricare il percorso per archiviare i file di salvataggio automatico dal Registro di sistema. Se il `Initialize` metodo non è possibile trovare la directory o se il percorso è NULL, `Initialize` ha esito negativo e restituisce `FALSE`.  
  
 Uso [CDataRecoveryHandler::SetAutosavePath](#setautosavepath) per modificare il percorso di salvataggio automatico dopo aver inizializzato il `CDataRecoveryHandler`.  
  
 Il `Initialize` metodo avvia anche un timer per monitorare quando si verifica il successivo salvataggio automatico. Uso [CDataRecoveryHandler::SetAutosaveInterval](#setautosaveinterval) per modificare l'intervallo di salvataggio automatico dopo aver inizializzato il `CDataRecoveryHandler`.  
  
##  <a name="queryrestoreautosaveddocuments"></a>  CDataRecoveryHandler::QueryRestoreAutosavedDocuments  
 Visualizza una finestra di dialogo per l'utente per ogni documento il `CDataRecoveryHandler` salvato automaticamente. La finestra di dialogo determina se l'utente vuole ripristinare il documento salvato automaticamente.  
  
```  
virtual void QueryRestoreAutosavedDocuments();
```  
  
### <a name="remarks"></a>Note  
 Se l'applicazione è in formato Unicode, questo metodo visualizza una [CTaskDialog](../../mfc/reference/ctaskdialog-class.md) all'utente. In caso contrario, il framework utilizza [AfxMessageBox](../../mfc/reference/cstring-formatting-and-message-box-display.md#afxmessagebox) per chiedere all'utente.  
  
 Dopo aver `QueryRestoreAutosavedDocuments` raccoglie tutte le risposte da parte dell'utente, archivia le informazioni nella variabile di membro *m_mapDocNameToRestoreBool*. Questo metodo non ripristina i documenti salvato automaticamente.  
  
##  <a name="readopendocumentlist"></a>  CDataRecoveryHandler::ReadOpenDocumentList  
 Carica l'elenco dei documenti aperti dal Registro di sistema.  
  
```  
virtual BOOL ReadOpenDocumentList();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE indica che `ReadOpenDocumentList` caricato le informazioni per almeno un documento dal Registro di sistema. FALSE indica che nessuna informazione di documento è stata caricata.  
  
### <a name="remarks"></a>Note  
 Questa funzione Carica le informazioni documento aperto dal Registro di sistema e lo archivia nella variabile membro *m_mapDocNameToAutosaveName*.  
  
 Dopo aver `ReadOpenDocumentList` carica tutti i dati, Elimina le informazioni sul documento dal Registro di sistema.  
  
##  <a name="removedocumentinfo"></a>  CDataRecoveryHandler::RemoveDocumentInfo  
 Rimuove il documento specificato dall'elenco di documenti aperti.  
  
```  
virtual BOOL RemoveDocumentInfo(CDocument* pDocument);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *pDocument*|Puntatore al documento da rimuovere.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se *pDocument* è stato rimosso dall'elenco. FALSE se si è verificato un errore.  
  
### <a name="remarks"></a>Note  
 Quando l'utente chiude un documento, il framework utilizza questo metodo per rimuoverlo dall'elenco dei documenti aperti.  
  
 Se `RemoveDocumentInfo` non è stato trovato *pDocument* nell'elenco dei documenti aperti, non esegue alcuna operazione e restituisce TRUE.  
  
 Per usare questo metodo, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES deve essere impostata *m_dwRestartManagerSupportFlags*.   
  
##  <a name="reopenpreviousdocuments"></a>  CDataRecoveryHandler::ReopenPreviousDocuments  
 Apre i documenti precedentemente aperti.  
  
```  
virtual BOOL ReopenPreviousDocuments();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se almeno un documento è stato aperto. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene aperto il salvataggio più recente dei documenti precedentemente aperti. Se non è stato salvato un documento o salvato automaticamente, `ReopenPreviousDocuments` apre un documento vuoto in base al modello per il tipo di file.  
  
 Per usare questo metodo, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES deve essere impostata *m_dwRestartManagerSupportFlags*. Se questo parametro non è impostato, `ReopenPreviousDocuments` non esegue alcuna operazione e restituisce FALSE.  
  
 Se non sono presenti documenti archiviati nell'elenco di documenti precedentemente aperti, `ReopenPreviousDocuments` non esegue alcuna operazione e restituisce FALSE.  
  
##  <a name="restoreautosaveddocuments"></a>  CDataRecoveryHandler::RestoreAutosavedDocuments  
 Ripristina i documenti salvato automaticamente in base all'input utente.  
  
```  
virtual BOOL RestoreAutosavedDocuments();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo consente di ripristinare correttamente i documenti.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [CDataRecoveryHandler::QueryRestoreAutosavedDocuments](#queryrestoreautosaveddocuments) per determinare che documenta l'utente vuole ripristinare. Se un utente decide di non eseguire il ripristino di un documento salvato automaticamente, `RestoreAutosavedDocuments` Elimina il file di salvataggio automatico. In caso contrario, `RestoreAutosavedDocuments` sostituisce il documento aperto con la versione salvata automaticamente.  
  
 Per usare questo metodo, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES o AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES deve essere impostata `m_dwRestartManagerSupportFlags`.   
  
##  <a name="saveopendocumentlist"></a>  CDataRecoveryHandler::SaveOpenDocumentList  
 Salva l'elenco corrente dei documenti aperti nel Registro di sistema di Windows.  
  
```  
virtual BOOL SaveOpenDocumentList();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se non sono presenti documenti aperti per salvare o se sono state salvate correttamente. FALSE se sono presenti elementi da salvare nel Registro di sistema, ma non sono state salvate perché si è verificato un errore.  
  
### <a name="remarks"></a>Note  
 Le chiamate di Gestione riavvio `SaveOpenDocumentList` quando l'applicazione viene chiusa in modo imprevisto o quando termina un aggiornamento. Quando l'applicazione viene riavviata, Usa [CDataRecoveryHandler::ReadOpenDocumentList](#readopendocumentlist) per recuperare l'elenco dei documenti aperti.  
  
 Questo metodo salva solo l'elenco dei documenti aperti. Il metodo [CDataRecoveryHandler::AutosaveDocumentInfo](#autosavedocumentinfo) è responsabile per il salvataggio dei documenti stessi.  
  
##  <a name="setautosaveinterval"></a>  CDataRecoveryHandler::SetAutosaveInterval  
 Imposta il tempo tra cicli di salvataggio automatico espresso in millisecondi.  
  
```  
Virtual void SetAutosaveInterval(int nAutosaveInterval);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nAutosaveInterval*  
 Il nuovo intervallo di salvataggio automatico espresso in millisecondi.  
  
##  <a name="setautosavepath"></a>  CDataRecoveryHandler::SetAutosavePath  
 Imposta la directory in cui sono archiviati i file salvato automaticamente.  
  
```  
virtual void SetAutosavePath(const CString& strAutosavePath);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *strAutosavePath*|Il percorso in cui sono archiviati i file di salvataggio automatico.|  
  
### <a name="remarks"></a>Note  
 La modifica della directory di salvataggio automatico non sposta attualmente file salvato automaticamente.  
  
##  <a name="setrestartidentifier"></a>  CDataRecoveryHandler::SetRestartIdentifier  
 Imposta l'identificatore univoco di riavvio per questa istanza del `CDataRecoveryHandler`.  
  
```  
virtual void SetRestartIdentifier(const CString& strRestartIdentifier);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *strRestartIdentifier*|L'identificatore univoco per la gestione del riavvio.|  
  
### <a name="remarks"></a>Note  
 Gestione riavvio registra le informazioni sui documenti aperti nel Registro di sistema. Queste informazioni vengono archiviate con l'identificatore univoco di riavvio come chiave. Poiché l'identificatore di riavvio è univoco per ogni istanza di un'applicazione, più istanze di un'applicazione può venire chiusa in modo imprevisto e la gestione riavvio può ripristinare ognuno di essi.  
  
##  <a name="setsavedocumentinfoonidle"></a>  CDataRecoveryHandler::SetSaveDocumentInfoOnIdle  
 Imposta se il `CDataRecoveryHandler` Salva le informazioni sul documento aperto nel Registro di sistema di Windows durante il ciclo inattivo corrente.  
  
```  
virtual void SetSaveDocumentInfoOnIdle(BOOL bSaveOnIdle);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *bSaveOnIdle*|TRUE per salvare le informazioni documento durante il ciclo inattivo corrente; FALSE per non eseguire un salvataggio.|  
  
##  <a name="setshutdownbyrestartmanager"></a>  CDataRecoveryHandler::SetShutdownByRestartManager  
 Imposta se l'uscita dell'applicazione precedente è stato causato da Gestione riavvio.  
  
```  
virtual void SetShutdownByRestartManager(BOOL bShutdownByRestartManager);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *bShutdownByRestartManager*|TRUE per indicare che la gestione riavvio causato la chiusura; dell'applicazione FALSE per indicare che l'applicazione è stata chiusa per un altro motivo.|  
  
### <a name="remarks"></a>Note  
 Il framework si comporta in modo diverso in base l'uscita precedente non è previsto o sia stata avviata dal gestore di riavvio.  
  
##  <a name="updatedocumentinfo"></a>  CDataRecoveryHandler::UpdateDocumentInfo  
 Aggiorna le informazioni per un documento perché l'utente salvato.  
  
```  
virtual BOOL UpdateDocumentInfo(CDocument* pDocument);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *pDocument*|Un puntatore per il documento salvato.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo il documento salvato automaticamente eliminate e aggiornate le informazioni sul documento; FALSE se si è verificato un errore.  
  
### <a name="remarks"></a>Note  
 Quando un utente salva un documento, l'applicazione rimuove il file salvato automaticamente perché non è più necessaria. `UpdateDocumentInfo` Elimina il file salvato automaticamente chiamando [CDataRecoveryHandler::RemoveDocumentInfo](#removedocumentinfo). `UpdateDocumentInfo` Aggiunge quindi le informazioni dal *pDocument* all'elenco di attualmente aperto documenti perché `RemoveDocumentInfo` elimina tali informazioni, ma il salvato documento è ancora aperto.  
  
 Per usare questo metodo, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES deve essere impostata *m_dwRestartManagerSupportFlags*.   
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CObject](../../mfc/reference/cobject-class.md)   
 [Procedura: Aggiungere il supporto di Gestione riavvio](../../mfc/how-to-add-restart-manager-support.md)

