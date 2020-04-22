---
title: Classe CAtlServiceModuleT
ms.date: 05/06/2019
f1_keywords:
- CAtlServiceModuleT
- ATLBASE/ATL::CAtlServiceModuleT
- ATLBASE/ATL::CAtlServiceModuleT::CAtlServiceModuleT
- ATLBASE/ATL::CAtlServiceModuleT::Handler
- ATLBASE/ATL::CAtlServiceModuleT::InitializeSecurity
- ATLBASE/ATL::CAtlServiceModuleT::Install
- ATLBASE/ATL::CAtlServiceModuleT::IsInstalled
- ATLBASE/ATL::CAtlServiceModuleT::LogEvent
- ATLBASE/ATL::CAtlServiceModuleT::OnContinue
- ATLBASE/ATL::CAtlServiceModuleT::OnInterrogate
- ATLBASE/ATL::CAtlServiceModuleT::OnPause
- ATLBASE/ATL::CAtlServiceModuleT::OnShutdown
- ATLBASE/ATL::CAtlServiceModuleT::OnStop
- ATLBASE/ATL::CAtlServiceModuleT::OnUnknownRequest
- ATLBASE/ATL::CAtlServiceModuleT::ParseCommandLine
- ATLBASE/ATL::CAtlServiceModuleT::PreMessageLoop
- ATLBASE/ATL::CAtlServiceModuleT::RegisterAppId
- ATLBASE/ATL::CAtlServiceModuleT::Run
- ATLBASE/ATL::CAtlServiceModuleT::ServiceMain
- ATLBASE/ATL::CAtlServiceModuleT::SetServiceStatus
- ATLBASE/ATL::CAtlServiceModuleT::Start
- ATLBASE/ATL::CAtlServiceModuleT::Uninstall
- ATLBASE/ATL::CAtlServiceModuleT::Unlock
- ATLBASE/ATL::CAtlServiceModuleT::UnregisterAppId
- ATLBASE/ATL::CAtlServiceModuleT::WinMain
- ATLBASE/ATL::CAtlServiceModuleT::m_bService
- ATLBASE/ATL::CAtlServiceModuleT::m_dwThreadID
- ATLBASE/ATL::CAtlServiceModuleT::m_hServiceStatus
- ATLBASE/ATL::CAtlServiceModuleT::m_status
- ATLBASE/ATL::CAtlServiceModuleT::m_szServiceName
helpviewer_keywords:
- CAtlServiceModuleT class
ms.assetid: 8fc753ce-4a50-402b-9b4a-0a4ce5dd496c
ms.openlocfilehash: 6d1985384c2d9a324abac548f27be6be5f0cacf5
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748599"
---
# <a name="catlservicemodulet-class"></a>Classe CAtlServiceModuleT

Questa classe implementa un servizio.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, UINT nServiceNameID>
class ATL_NO_VTABLE CAtlServiceModuleT : public CAtlExeModuleT<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe `CAtlServiceModuleT`derivata da .

*nServiceNameID (nome servizio)*<br/>
Identificatore di risorsa del servizio.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlServiceModuleT::CAtlServiceModuleT (modulo CAtlServiceModuleT)](#catlservicemodulet)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlServiceModuleT::Gestore](#handler)|Routine del gestore per il servizio.|
|[CAtlServiceModuleT::InitializeSecurity](#initializesecurity)|Fornisce le impostazioni di sicurezza predefinite per il servizio.|
|[CAtlServiceModuleT::Installare](#install)|Installa e crea il servizio.|
|[CAtlServiceModuleT::IsInstalled](#isinstalled)|Conferma che il servizio è stato installato.|
|[CAtlServiceModuleT::LogEvent](#logevent)|Scrive nel log eventi.|
|[CAtlServiceModuleT::OnContinue](#oncontinue)|Eseguire l'override di questo metodo per continuare il servizio.|
|[CAtlServiceModuleT::OnInterrogate](#oninterrogate)|Eseguire l'override di questo metodo per interrogare il servizio.|
|[CAtlServiceModuleT::OnPause](#onpause)|Eseguire l'override di questo metodo per sospendere il servizio.|
|[CAtlServiceModuleT::OnShutdown](#onshutdown)|Eseguire l'override di questo metodo per arrestare il servizio|
|[CAtlServiceModuleT::OnStop](#onstop)|Eseguire l'override di questo metodo per arrestare il servizio|
|[CAtlServiceModuleT::OnUnknownRequest](#onunknownrequest)|Eseguire l'override di questo metodo per gestire le richieste sconosciute al servizio|
|[CAtlServiceModuleT::ParseCommandLine](#parsecommandline)|Analizza la riga di comando ed esegue la registrazione se necessario.|
|[CAtlServiceModuleT::PreMessageLoop](#premessageloop)|Questo metodo viene chiamato immediatamente prima di entrare nel ciclo di messaggi.|
|[CAtlServiceModuleT::RegisterAppId](#registerappid)|Registra il servizio nel Registro di sistema.|
|[CAtlServiceModuleT::Esegui](#run)|Esegue il servizio.|
|[CAtlServiceModuleT::ServiceMain](#servicemain)|Metodo chiamato da Gestione controllo servizi.|
|[CAtlServiceModuleT::SetServiceStatus (modulo)](#setservicestatus)|Aggiorna lo stato del servizio.|
|[CAtlServiceModuleT::Start](#start)|Chiamato `CAtlServiceModuleT::WinMain` dall'avvio del servizio.|
|[CAtlServiceModuleT::Disinstallare](#uninstall)|Arresta e rimuove il servizio.|
|[CAtlServiceModuleT::Sblocca](#unlock)|Decrementa il numero di blocchi del servizio.|
|[CAtlServiceModuleT::UnregisterAppId](#unregisterappid)|Rimuove il servizio dal Registro di sistema.|
|[CAtlServiceModuleT::WinMain](#winmain)|Questo metodo implementa il codice necessario per eseguire il servizio.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlServiceModuleT::m_bService](#m_bservice)|Flag che indica che il programma è in esecuzione come servizio.|
|[CAtlServiceModuleT::m_dwThreadID](#m_dwthreadid)|Variabile membro in cui è archiviato l'identificatore del thread.|
|[CAtlServiceModuleT::m_hServiceStatus](#m_hservicestatus)|Variabile membro che archivia un handle per la struttura di informazioni sullo stato per il servizio corrente.|
|[CAtlServiceModuleT::m_status](#m_status)|Variabile membro che archivia la struttura delle informazioni sullo stato per il servizio corrente.|
|[CAtlServiceModuleT::m_szServiceName](#m_szservicename)|Nome del servizio da registrare.|

## <a name="remarks"></a>Osservazioni

`CAtlServiceModuleT`, derivato da [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md), implementa un modulo atL Service. `CAtlServiceModuleT`fornisce metodi per l'elaborazione, l'installazione, la registrazione e la rimozione da riga di comando. Se è necessaria una funzionalità aggiuntiva, è possibile eseguire l'override di questi e altri metodi.

Questa classe sostituisce la [classe CComModule](../../atl/reference/ccommodule-class.md) obsoleta utilizzata nelle versioni precedenti di ATL. Per ulteriori informazioni, vedere [Classi di moduli ATL.](../../atl/atl-module-classes.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule (modulo CAtlModule)](../../atl/reference/catlmodule-class.md)

[CAtlModuleT (modulo CAtlModuleT)](../../atl/reference/catlmodulet-class.md)

[CAtlExeModuleT (modulo CAtlExe)](../../atl/reference/catlexemodulet-class.md)

`CAtlServiceModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="catlservicemoduletcatlservicemodulet"></a><a name="catlservicemodulet"></a>CAtlServiceModuleT::CAtlServiceModuleT (modulo CAtlServiceModuleT)

Costruttore.

```
CAtlServiceModuleT() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza i membri dati e imposta lo stato iniziale del servizio.

## <a name="catlservicemodulethandler"></a><a name="handler"></a>CAtlServiceModuleT::Gestore

Routine del gestore per il servizio.

```cpp
void Handler(DWORD dwOpcode) throw();
```

### <a name="parameters"></a>Parametri

*dwCodiceop*<br/>
Opzione che definisce l'operazione del gestore. Per informazioni dettagliate, vedere la pagina Osservazioni.

### <a name="remarks"></a>Osservazioni

Questo è il codice chiamato da Gestione controllo servizi per recuperare lo stato del servizio ed eseguire istruzioni quali arresto o pausa. Il controllo Gestione controllo servizi passa `Handler` un codice operativo, illustrato di seguito, per indicare le operazioni che il servizio deve eseguire.

|Codice operativo|Significato|
|--------------------|-------------|
|SERVICE_CONTROL_STOP|arresta il servizio. Eseguire l'override del metodo [CAtlServiceModuleT::OnStop](#onstop) in atlbase.h per modificare il comportamento.|
|SERVICE_CONTROL_PAUSE|Implementato dall'utente. Eseguire l'override del metodo vuoto [CAtlServiceModuleT::OnPause](#onpause) in atlbase.h per sospendere il servizio.|
|SERVICE_CONTROL_CONTINUE|Implementato dall'utente. Eseguire l'override del metodo vuoto [CAtlServiceModuleT::OnContinue](#oncontinue) in atlbase.h per continuare il servizio.|
|SERVICE_CONTROL_INTERROGATE|Implementato dall'utente. Eseguire l'override del metodo vuoto [CAtlServiceModuleT::OnInterrogate](#oninterrogate) in atlbase.h per interrogare il servizio.|
|SERVICE_CONTROL_SHUTDOWN|Implementato dall'utente. Eseguire l'override del metodo vuoto [CAtlServiceModuleT::OnShutdown](#onshutdown) in atlbase.h per arrestare il servizio.|

Se il codice dell'operazione non è riconosciuto, viene chiamato il metodo [CAtlServiceModuleT::OnUnknownRequest.If](#onunknownrequest) the operation code isn't recognized, the method CAtlServiceModuleT::OnUnknownRequest is called.

Un servizio predefinito generato da ATL gestisce solo l'istruzione stop. Se Gestione controllo servizi supera l'istruzione di arresto, il servizio indica a Gestione controllo servizi che il programma sta per essere arrestato. Il servizio `PostThreadMessage` chiama quindi per inviare un messaggio di uscita a se stesso. In questo modo viene terminato il ciclo di messaggi e il servizio verrà infine chiuso.

## <a name="catlservicemoduletinitializesecurity"></a><a name="initializesecurity"></a>CAtlServiceModuleT::InitializeSecurity

Fornisce le impostazioni di sicurezza predefinite per il servizio.

```
HRESULT InitializeSecurity() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Qualsiasi classe che `CAtlServiceModuleT` deriva da deve implementare questo metodo nella classe derivata.

Utilizzare l'autenticazione a livello PKT, il livello di rappresentazione di `CoInitializeSecurity`RPC_C_IMP_LEVEL_IDENTIFY e un descrittore di protezione non null appropriato nella chiamata a .

Per i progetti di servizio senza attributi generati dalla procedura guidata,

[!code-cpp[NVC_ATL_Service#1](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_1.cpp)]

Per i progetti di servizio con attributi, ciò

[!code-cpp[NVC_ATL_ServiceAttrib#1](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_2.cpp)]

## <a name="catlservicemoduletinstall"></a><a name="install"></a>CAtlServiceModuleT::Installare

Installa e crea il servizio.

```
BOOL Install() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Installa il servizio nel database di Gestione controllo servizi (SCM) e quindi crea l'oggetto servizio. Se non è stato possibile creare il servizio, viene visualizzata una finestra di messaggio e il metodo restituisce FALSE.

## <a name="catlservicemoduletisinstalled"></a><a name="isinstalled"></a>CAtlServiceModuleT::IsInstalled

Conferma che il servizio è stato installato.

```
BOOL IsInstalled() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il servizio è installato, FALSE in caso contrario.

## <a name="catlservicemoduletlogevent"></a><a name="logevent"></a>CAtlServiceModuleT::LogEvent

Scrive nel log eventi.

```cpp
void __cdecl LogEvent(LPCTSTR pszFormat, ...) throw();
```

### <a name="parameters"></a>Parametri

*formato pszFormat*<br/>
Stringa da scrivere nel registro eventi.

*...*<br/>
Stringhe aggiuntive facoltative da scrivere nel registro eventi.

### <a name="remarks"></a>Osservazioni

Questo metodo scrive i dettagli in un log eventi, utilizzando la funzione [ReportEvent](/windows/win32/api/winbase/nf-winbase-reporteventw). Se nessun servizio è in esecuzione, la stringa viene inviata alla console.

## <a name="catlservicemoduletm_bservice"></a><a name="m_bservice"></a>CAtlServiceModuleT::m_bService

Flag che indica che il programma è in esecuzione come servizio.

```
BOOL m_bService;
```

### <a name="remarks"></a>Osservazioni

Utilizzato per distinguere un file EXE di servizio da un file EXE dell'applicazione.

## <a name="catlservicemoduletm_dwthreadid"></a><a name="m_dwthreadid"></a>CAtlServiceModuleT::m_dwThreadID

Variabile membro che archivia l'identificatore del thread del servizio.

```
DWORD m_dwThreadID;
```

### <a name="remarks"></a>Osservazioni

Questa variabile archivia l'identificatore del thread corrente.

## <a name="catlservicemoduletm_hservicestatus"></a><a name="m_hservicestatus"></a>CAtlServiceModuleT::m_hServiceStatus

Variabile membro che archivia un handle per la struttura di informazioni sullo stato per il servizio corrente.

```
SERVICE_STATUS_HANDLE m_hServiceStatus;
```

### <a name="remarks"></a>Osservazioni

La struttura [SERVICE_STATUS](/windows/win32/api/winsvc/ns-winsvc-service_status) contiene informazioni su un servizio.

## <a name="catlservicemoduletm_status"></a><a name="m_status"></a>CAtlServiceModuleT::m_status

Variabile membro che archivia la struttura delle informazioni sullo stato per il servizio corrente.

```
SERVICE_STATUS m_status;
```

### <a name="remarks"></a>Osservazioni

La struttura [SERVICE_STATUS](/windows/win32/api/winsvc/ns-winsvc-service_status) contiene informazioni su un servizio.

## <a name="catlservicemoduletm_szservicename"></a><a name="m_szservicename"></a>CAtlServiceModuleT::m_szServiceName

Nome del servizio da registrare.

```
TCHAR [256] m_szServiceName;
```

### <a name="remarks"></a>Osservazioni

Stringa con terminazione null in cui viene archiviato il nome del servizio.

## <a name="catlservicemoduletoncontinue"></a><a name="oncontinue"></a>CAtlServiceModuleT::OnContinue

Eseguire l'override di questo metodo per continuare il servizio.

```cpp
void OnContinue() throw();
```

## <a name="catlservicemoduletoninterrogate"></a><a name="oninterrogate"></a>CAtlServiceModuleT::OnInterrogate

Eseguire l'override di questo metodo per interrogare il servizio.

```cpp
void OnInterrogate() throw();
```

## <a name="catlservicemoduletonpause"></a><a name="onpause"></a>CAtlServiceModuleT::OnPause

Eseguire l'override di questo metodo per sospendere il servizio.

```cpp
void OnPause() throw();
```

## <a name="catlservicemoduletonshutdown"></a><a name="onshutdown"></a>CAtlServiceModuleT::OnShutdown

Eseguire l'override di questo metodo per arrestare il servizio.

```cpp
void OnShutdown() throw();
```

## <a name="catlservicemoduletonstop"></a><a name="onstop"></a>CAtlServiceModuleT::OnStop

Eseguire l'override di questo metodo per arrestare il servizio.

```cpp
void OnStop() throw();
```

## <a name="catlservicemoduletonunknownrequest"></a><a name="onunknownrequest"></a>CAtlServiceModuleT::OnUnknownRequest

Eseguire l'override di questo metodo per gestire le richieste sconosciute al servizio.

```cpp
void OnUnknownRequest(DWORD /* dwOpcode*/) throw();
```

### <a name="parameters"></a>Parametri

*dwCodiceop*<br/>
Riservato.

## <a name="catlservicemoduletparsecommandline"></a><a name="parsecommandline"></a>CAtlServiceModuleT::ParseCommandLine

Analizza la riga di comando ed esegue la registrazione se necessario.

```
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```

### <a name="parameters"></a>Parametri

*LpCmdLine (linea di comando)*<br/>
Riga di comando

*pnRetCodice*<br/>
HRESULT corrispondente alla registrazione (se ha avuto luogo).

### <a name="return-value"></a>Valore restituito

Restituisce true in caso di esito positivo o false se non è stato possibile registrare il file RGS fornito nella riga di comando.

### <a name="remarks"></a>Osservazioni

Analizza la riga di comando e registra o annulla la registrazione del file RGS fornito, se necessario. Questo metodo chiama [CAtlExeModuleT::ParseCommandLine](../../atl/reference/catlexemodulet-class.md#parsecommandline) per verificare la presenza di **/RegServer** e **/UnregServer**. L'aggiunta dell'argomento **-/Service** registrerà il servizio.

## <a name="catlservicemoduletpremessageloop"></a><a name="premessageloop"></a>CAtlServiceModuleT::PreMessageLoop

Questo metodo viene chiamato immediatamente prima di entrare nel ciclo di messaggi.

```
HRESULT PreMessageLoop(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Questo parametro viene passato a [CAtlExeModuleT::PreMessageLoop](../../atl/reference/catlexemodulet-class.md#premessageloop).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per aggiungere codice di inizializzazione personalizzato per il servizio.

## <a name="catlservicemoduletregisterappid"></a><a name="registerappid"></a>CAtlServiceModuleT::RegisterAppId

Registra il servizio nel Registro di sistema.

```
inline HRESULT RegisterAppId(bool bService = false) throw();
```

### <a name="parameters"></a>Parametri

*bServizio*<br/>
Deve essere vero per registrarsi come servizio.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catlservicemoduletrun"></a><a name="run"></a>CAtlServiceModuleT::Esegui

Esegue il servizio.

```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica la modalità di visualizzazione della finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain.](/windows/win32/api/winbase/nf-winbase-winmain) Il valore predefinito è SW_HIDE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Dopo la `Run` chiamata, chiama [CAtlServiceModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::RunMessageLoop](../../atl/reference/catlexemodulet-class.md#runmessageloop)e [CAtlExeModuleT::PostMessageLoop](../../atl/reference/catlexemodulet-class.md#postmessageloop).

## <a name="catlservicemoduletservicemain"></a><a name="servicemain"></a>CAtlServiceModuleT::ServiceMain

Questo metodo viene chiamato da Gestione controllo servizi.

```cpp
void ServiceMain(DWORD dwArgc, LPTSTR* lpszArgv) throw();
```

### <a name="parameters"></a>Parametri

*dwArgc*<br/>
L'argomento argc.

*lpszArgv*<br/>
L'argomento argv.

### <a name="remarks"></a>Osservazioni

Gestione controllo servizi chiama `ServiceMain` quando si apre l'applicazione Servizi nel Pannello di controllo, si seleziona il servizio e si fa clic su Avvia.

Dopo le chiamate `ServiceMain`di Gestione controllo servizi, un servizio deve fornire a Gestione controllo servizi una funzione di gestione. Questa funzione consente a Gestione controllo servizi di ottenere lo stato del servizio e di passare istruzioni specifiche (ad esempio la sospensione o l'arresto). Successivamente, [CAtlServiceModuleT::Run](#run) viene chiamato per eseguire il lavoro principale del servizio. `Run`continua a funzionare fino all'arresto del servizio.

## <a name="catlservicemoduletsetservicestatus"></a><a name="setservicestatus"></a>CAtlServiceModuleT::SetServiceStatus (modulo)

Questo metodo aggiorna lo stato del servizio.

```cpp
void SetServiceStatus(DWORD dwState) throw();
```

### <a name="parameters"></a>Parametri

*dwState (dwState)*<br/>
Il nuovo stato. Vedere [SetServiceStatus](/windows/win32/api/winsvc/nf-winsvc-setservicestatus) per i valori possibili.

### <a name="remarks"></a>Osservazioni

Aggiorna le informazioni sullo stato di Service Control Manager per il servizio. Viene chiamato da [CAtlServiceModuleT::Run](#run), [CAtlServiceModuleT::ServiceMain](#servicemain) e da altri metodi del gestore. Lo stato viene archiviato anche nella variabile membro [CAtlServiceModuleT::m_status](#m_status).

## <a name="catlservicemoduletstart"></a><a name="start"></a>CAtlServiceModuleT::Start

Chiamato `CAtlServiceModuleT::WinMain` dall'avvio del servizio.

```
HRESULT Start(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica la modalità di visualizzazione della finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain.](/windows/win32/api/winbase/nf-winbase-winmain)

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Il [CAtlServiceModuleT::WinMain](#winmain) metodo gestisce sia la registrazione e l'installazione, nonché le attività coinvolte nella rimozione delle voci del Registro di sistema e la disinstallazione del modulo. Quando il servizio `WinMain` viene `Start`eseguito, chiama .

## <a name="catlservicemoduletuninstall"></a><a name="uninstall"></a>CAtlServiceModuleT::Disinstallare

Arresta e rimuove il servizio.

```
BOOL Uninstall() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Arresta l'esecuzione del servizio e lo rimuove dal database di Gestione controllo servizi.

## <a name="catlservicemoduletunlock"></a><a name="unlock"></a>CAtlServiceModuleT::Sblocca

Decrementa il numero di blocchi del servizio.

```
LONG Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il conteggio dei blocchi, che può essere utile per la diagnostica e il debug.

## <a name="catlservicemoduletunregisterappid"></a><a name="unregisterappid"></a>CAtlServiceModuleT::UnregisterAppId

Rimuove il servizio dal Registro di sistema.

```
HRESULT UnregisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catlservicemoduletwinmain"></a><a name="winmain"></a>CAtlServiceModuleT::WinMain

Questo metodo implementa il codice necessario per avviare il servizio.

```
int WinMain(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica la modalità di visualizzazione della finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain.](/windows/win32/api/winbase/nf-winbase-winmain)

### <a name="return-value"></a>Valore restituito

Restituisce il valore restituito del servizio.

### <a name="remarks"></a>Osservazioni

Questo metodo elabora la riga di comando (con [CAtlServiceModuleT::ParseCommandLine](#parsecommandline)) e quindi avvia il servizio (utilizzando [CAtlServiceModuleT::Start](#start)).

## <a name="see-also"></a>Vedere anche

[Classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
