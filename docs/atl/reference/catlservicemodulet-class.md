---
title: Classe funzione CAtlServiceModuleT
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
ms.openlocfilehash: 0985fba4e534b6e2f6efb58ed2a8685c390dd3bd
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82167798"
---
# <a name="catlservicemodulet-class"></a>Classe funzione CAtlServiceModuleT

Questa classe implementa un servizio.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, UINT nServiceNameID>
class ATL_NO_VTABLE CAtlServiceModuleT : public CAtlExeModuleT<T>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `CAtlServiceModuleT`.

*nServiceNameID*<br/>
Identificatore di risorsa del servizio.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Funzione CAtlServiceModuleT:: funzione CAtlServiceModuleT](#catlservicemodulet)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Funzione CAtlServiceModuleT:: handler](#handler)|Routine del gestore per il servizio.|
|[Funzione CAtlServiceModuleT:: InitializeSecurity](#initializesecurity)|Fornisce le impostazioni di sicurezza predefinite per il servizio.|
|[Funzione CAtlServiceModuleT:: install](#install)|Installa e crea il servizio.|
|[Funzione CAtlServiceModuleT:: disinstallato](#isinstalled)|Conferma che il servizio è stato installato.|
|[Funzione CAtlServiceModuleT:: LogEvent](#logevent)|Scrive nel log eventi.|
|[Funzione CAtlServiceModuleT:: OnContinue](#oncontinue)|Eseguire l'override di questo metodo per continuare il servizio.|
|[Funzione CAtlServiceModuleT:: oninterrogate](#oninterrogate)|Eseguire l'override di questo metodo per interrogare il servizio.|
|[Funzione CAtlServiceModuleT:: OnPause](#onpause)|Eseguire l'override di questo metodo per sospendere il servizio.|
|[Funzione CAtlServiceModuleT:: OnShutdown](#onshutdown)|Eseguire l'override di questo metodo per arrestare il servizio|
|[Funzione CAtlServiceModuleT:: OnStop](#onstop)|Eseguire l'override di questo metodo per arrestare il servizio|
|[Funzione CAtlServiceModuleT:: OnUnknownRequest](#onunknownrequest)|Eseguire l'override di questo metodo per gestire le richieste sconosciute al servizio|
|[Funzione CAtlServiceModuleT::P arseCommandLine](#parsecommandline)|Analizza la riga di comando ed esegue la registrazione, se necessario.|
|[Funzione CAtlServiceModuleT::P reMessageLoop](#premessageloop)|Questo metodo viene chiamato immediatamente prima dell'immissione del ciclo di messaggi.|
|[Funzione CAtlServiceModuleT:: RegisterAppId](#registerappid)|Registra il servizio nel registro di sistema.|
|[Funzione CAtlServiceModuleT:: Run](#run)|Esegue il servizio.|
|[Funzione CAtlServiceModuleT:: ServiceMain](#servicemain)|Metodo chiamato da Gestione controllo servizi.|
|[Funzione CAtlServiceModuleT:: SetServiceStatus](#setservicestatus)|Aggiorna lo stato del servizio.|
|[Funzione CAtlServiceModuleT:: Start](#start)|Chiamato da `CAtlServiceModuleT::WinMain` all'avvio del servizio.|
|[Funzione CAtlServiceModuleT:: Uninstall](#uninstall)|Arresta e rimuove il servizio.|
|[Funzione CAtlServiceModuleT:: Unlock](#unlock)|Decrementa il conteggio dei blocchi del servizio.|
|[Funzione CAtlServiceModuleT:: UnregisterAppId](#unregisterappid)|Rimuove il servizio dal registro di sistema.|
|[Funzione CAtlServiceModuleT:: WinMain](#winmain)|Questo metodo implementa il codice necessario per eseguire il servizio.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Funzione CAtlServiceModuleT:: m_bService](#m_bservice)|Flag che indica che il programma è in esecuzione come servizio.|
|[Funzione CAtlServiceModuleT:: m_dwThreadID](#m_dwthreadid)|Variabile membro che archivia l'identificatore del thread.|
|[Funzione CAtlServiceModuleT:: m_hServiceStatus](#m_hservicestatus)|Variabile membro che archivia un handle per la struttura delle informazioni sullo stato per il servizio corrente.|
|[Funzione CAtlServiceModuleT:: m_status](#m_status)|Variabile membro che archivia la struttura delle informazioni sullo stato per il servizio corrente.|
|[Funzione CAtlServiceModuleT:: m_szServiceName](#m_szservicename)|Nome del servizio registrato.|

## <a name="remarks"></a>Osservazioni

`CAtlServiceModuleT`, derivato da [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md), implementa un modulo del servizio ATL. `CAtlServiceModuleT`fornisce metodi per l'elaborazione, l'installazione, la registrazione e la rimozione da riga di comando. Se è necessaria una funzionalità aggiuntiva, è possibile eseguire l'override di questi e altri metodi.

Questa classe sostituisce la [classe CComModule](../../atl/reference/ccommodule-class.md) obsoleta usata nelle versioni precedenti di ATL. Per ulteriori informazioni, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

[CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)

`CAtlServiceModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="catlservicemoduletcatlservicemodulet"></a><a name="catlservicemodulet"></a>Funzione CAtlServiceModuleT:: funzione CAtlServiceModuleT

Costruttore.

```cpp
CAtlServiceModuleT() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza i membri dati e imposta lo stato iniziale del servizio.

## <a name="catlservicemodulethandler"></a><a name="handler"></a>Funzione CAtlServiceModuleT:: handler

Routine del gestore per il servizio.

```cpp
void Handler(DWORD dwOpcode) throw();
```

### <a name="parameters"></a>Parametri

*dwOpcode*<br/>
Opzione che definisce l'operazione del gestore. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Si tratta del codice chiamato da Gestione controllo servizi per recuperare lo stato del servizio ed emettere istruzioni, ad esempio Interrompi o Sospendi. Il servizio SCM passa un codice operativo, illustrato di seguito `Handler` , a per indicare il comportamento del servizio.

|Codice operativo|Significato|
|--------------------|-------------|
|SERVICE_CONTROL_STOP|arresta il servizio. Eseguire l'override del metodo [funzione CAtlServiceModuleT:: OnStop](#onstop) in atlbase. h per modificare il comportamento.|
|SERVICE_CONTROL_PAUSE|Utente implementato. Eseguire l'override del metodo vuoto [funzione CAtlServiceModuleT:: OnPause](#onpause) in atlbase. h per sospendere il servizio.|
|SERVICE_CONTROL_CONTINUE|Utente implementato. Eseguire l'override del metodo vuoto [funzione CAtlServiceModuleT:: OnContinue](#oncontinue) in atlbase. h per continuare il servizio.|
|SERVICE_CONTROL_INTERROGATE|Utente implementato. Eseguire l'override del metodo vuoto [funzione CAtlServiceModuleT:: Oninterrogate](#oninterrogate) in atlbase. h per interrogare il servizio.|
|SERVICE_CONTROL_SHUTDOWN|Utente implementato. Eseguire l'override del metodo vuoto [funzione CAtlServiceModuleT:: OnShutdown](#onshutdown) in atlbase. h per arrestare il servizio.|

Se il codice dell'operazione non viene riconosciuto, viene chiamato il metodo [funzione CAtlServiceModuleT:: OnUnknownRequest](#onunknownrequest) .

Un servizio generato da ATL predefinito gestisce solo l'istruzione Stop. Se SCM supera l'istruzione Stop, il servizio indica al gestore SCM che il programma sta per essere arrestato. Il servizio chiama `PostThreadMessage` quindi per inviare un messaggio QUIT a se stesso. Questa operazione interrompe il ciclo di messaggi e il servizio si chiuderà.

## <a name="catlservicemoduletinitializesecurity"></a><a name="initializesecurity"></a>Funzione CAtlServiceModuleT:: InitializeSecurity

Fornisce le impostazioni di sicurezza predefinite per il servizio.

```cpp
HRESULT InitializeSecurity() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Tutte le classi che derivano da `CAtlServiceModuleT` devono implementare questo metodo nella classe derivata.

Usare l'autenticazione a livello di PKT, il livello di rappresentazione di RPC_C_IMP_LEVEL_IDENTIFY e un descrittore di sicurezza non null appropriato `CoInitializeSecurity`nella chiamata a.

Per i progetti di servizio non attributi generati dalla procedura guidata, questo si trova in

[!code-cpp[NVC_ATL_Service#1](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_1.cpp)]

Per i progetti di servizio con attributi, il problema è

[!code-cpp[NVC_ATL_ServiceAttrib#1](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_2.cpp)]

## <a name="catlservicemoduletinstall"></a><a name="install"></a>Funzione CAtlServiceModuleT:: install

Installa e crea il servizio.

```cpp
BOOL Install() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Installa il servizio nel database di gestione controllo servizi (SCM), quindi crea l'oggetto servizio. Se non è stato possibile creare il servizio, viene visualizzata una finestra di messaggio e il metodo restituisce FALSE.

## <a name="catlservicemoduletisinstalled"></a><a name="isinstalled"></a>Funzione CAtlServiceModuleT:: disinstallato

Conferma che il servizio è stato installato.

```cpp
BOOL IsInstalled() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il servizio è installato; in caso contrario, FALSE.

## <a name="catlservicemoduletlogevent"></a><a name="logevent"></a>Funzione CAtlServiceModuleT:: LogEvent

Scrive nel log eventi.

```cpp
void __cdecl LogEvent(LPCTSTR pszFormat, ...) throw();
```

### <a name="parameters"></a>Parametri

*pszFormat*<br/>
Stringa da scrivere nel registro eventi.

*...*<br/>
Stringhe aggiuntive facoltative da scrivere nel registro eventi.

### <a name="remarks"></a>Osservazioni

Questo metodo scrive i dettagli in un log eventi, usando la funzione [ReportEvent](/windows/win32/api/winbase/nf-winbase-reporteventw). Se non è in esecuzione alcun servizio, la stringa viene inviata alla console.

## <a name="catlservicemoduletm_bservice"></a><a name="m_bservice"></a>Funzione CAtlServiceModuleT:: m_bService

Flag che indica che il programma è in esecuzione come servizio.

```cpp
BOOL m_bService;
```

### <a name="remarks"></a>Osservazioni

Usato per distinguere un file EXE del servizio da un file EXE dell'applicazione.

## <a name="catlservicemoduletm_dwthreadid"></a><a name="m_dwthreadid"></a>Funzione CAtlServiceModuleT:: m_dwThreadID

Variabile membro che archivia l'identificatore del thread del servizio.

```cpp
DWORD m_dwThreadID;
```

### <a name="remarks"></a>Osservazioni

Questa variabile archivia l'identificatore del thread corrente.

## <a name="catlservicemoduletm_hservicestatus"></a><a name="m_hservicestatus"></a>Funzione CAtlServiceModuleT:: m_hServiceStatus

Variabile membro che archivia un handle per la struttura delle informazioni sullo stato per il servizio corrente.

```cpp
SERVICE_STATUS_HANDLE m_hServiceStatus;
```

### <a name="remarks"></a>Osservazioni

La struttura [SERVICE_STATUS](/windows/win32/api/winsvc/ns-winsvc-service_status) contiene informazioni su un servizio.

## <a name="catlservicemoduletm_status"></a><a name="m_status"></a>Funzione CAtlServiceModuleT:: m_status

Variabile membro che archivia la struttura delle informazioni sullo stato per il servizio corrente.

```cpp
SERVICE_STATUS m_status;
```

### <a name="remarks"></a>Osservazioni

La struttura [SERVICE_STATUS](/windows/win32/api/winsvc/ns-winsvc-service_status) contiene informazioni su un servizio.

## <a name="catlservicemoduletm_szservicename"></a><a name="m_szservicename"></a>Funzione CAtlServiceModuleT:: m_szServiceName

Nome del servizio registrato.

```cpp
TCHAR [256] m_szServiceName;
```

### <a name="remarks"></a>Osservazioni

Stringa con terminazione null che archivia il nome del servizio.

## <a name="catlservicemoduletoncontinue"></a><a name="oncontinue"></a>Funzione CAtlServiceModuleT:: OnContinue

Eseguire l'override di questo metodo per continuare il servizio.

```cpp
void OnContinue() throw();
```

## <a name="catlservicemoduletoninterrogate"></a><a name="oninterrogate"></a>Funzione CAtlServiceModuleT:: oninterrogate

Eseguire l'override di questo metodo per interrogare il servizio.

```cpp
void OnInterrogate() throw();
```

## <a name="catlservicemoduletonpause"></a><a name="onpause"></a>Funzione CAtlServiceModuleT:: OnPause

Eseguire l'override di questo metodo per sospendere il servizio.

```cpp
void OnPause() throw();
```

## <a name="catlservicemoduletonshutdown"></a><a name="onshutdown"></a>Funzione CAtlServiceModuleT:: OnShutdown

Eseguire l'override di questo metodo per arrestare il servizio.

```cpp
void OnShutdown() throw();
```

## <a name="catlservicemoduletonstop"></a><a name="onstop"></a>Funzione CAtlServiceModuleT:: OnStop

Eseguire l'override di questo metodo per arrestare il servizio.

```cpp
void OnStop() throw();
```

## <a name="catlservicemoduletonunknownrequest"></a><a name="onunknownrequest"></a>Funzione CAtlServiceModuleT:: OnUnknownRequest

Eseguire l'override di questo metodo per gestire le richieste sconosciute al servizio.

```cpp
void OnUnknownRequest(DWORD /* dwOpcode*/) throw();
```

### <a name="parameters"></a>Parametri

*dwOpcode*<br/>
Riservato.

## <a name="catlservicemoduletparsecommandline"></a><a name="parsecommandline"></a>Funzione CAtlServiceModuleT::P arseCommandLine

Analizza la riga di comando ed esegue la registrazione, se necessario.

```cpp
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```

### <a name="parameters"></a>Parametri

*lpCmdLine*<br/>
Riga di comando

*pnRetCode*<br/>
HRESULT corrispondente alla registrazione, se è avvenuta.

### <a name="return-value"></a>Valore restituito

Restituisce true in caso di esito positivo o false se non è stato possibile registrare il file RGS fornito nella riga di comando.

### <a name="remarks"></a>Osservazioni

Analizza la riga di comando e registra o Annulla la registrazione del file RGS fornito, se necessario. Questo metodo chiama [CAtlExeModuleT::P arsecommandline](../../atl/reference/catlexemodulet-class.md#parsecommandline) per verificare la presenza di **/regserver** e **l'opzione/unregserver**. Se si aggiunge l'argomento **-/Service** , il servizio viene registrato.

## <a name="catlservicemoduletpremessageloop"></a><a name="premessageloop"></a>Funzione CAtlServiceModuleT::P reMessageLoop

Questo metodo viene chiamato immediatamente prima dell'immissione del ciclo di messaggi.

```cpp
HRESULT PreMessageLoop(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Questo parametro viene passato a [CAtlExeModuleT::P remessageloop](../../atl/reference/catlexemodulet-class.md#premessageloop).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per aggiungere codice di inizializzazione personalizzato per il servizio.

## <a name="catlservicemoduletregisterappid"></a><a name="registerappid"></a>Funzione CAtlServiceModuleT:: RegisterAppId

Registra il servizio nel registro di sistema.

```cpp
inline HRESULT RegisterAppId(bool bService = false) throw();
```

### <a name="parameters"></a>Parametri

*bService*<br/>
Deve essere true per la registrazione come servizio.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catlservicemoduletrun"></a><a name="run"></a>Funzione CAtlServiceModuleT:: Run

Esegue il servizio.

```cpp
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come deve essere visualizzata la finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain](/windows/win32/api/winbase/nf-winbase-winmain) . Il valore predefinito è SW_HIDE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Una volta chiamato, `Run` chiama [funzione CAtlServiceModuleT::P remessageloop](#premessageloop), [CAtlExeModuleT:: RunMessageLoop](../../atl/reference/catlexemodulet-class.md#runmessageloop)e [CAtlExeModuleT::P ostmessageloop](../../atl/reference/catlexemodulet-class.md#postmessageloop).

## <a name="catlservicemoduletservicemain"></a><a name="servicemain"></a>Funzione CAtlServiceModuleT:: ServiceMain

Questo metodo viene chiamato da Gestione controllo servizi.

```cpp
void ServiceMain(DWORD dwArgc, LPTSTR* lpszArgv) throw();
```

### <a name="parameters"></a>Parametri

*dwArgc*<br/>
Argomento argc.

*lpszArgv*<br/>
Argomento argv.

### <a name="remarks"></a>Osservazioni

Gestione controllo servizi (SCM) chiama `ServiceMain` quando si apre l'applicazione Servizi nel pannello di controllo, si seleziona il servizio e si fa clic su Avvia.

Dopo la chiamata `ServiceMain`a SCM, un servizio deve fornire al gestore SCM una funzione del gestore. Questa funzione consente a SCM di ottenere lo stato del servizio e passare istruzioni specifiche, ad esempio la sospensione o l'arresto. Successivamente, viene chiamato [funzione CAtlServiceModuleT:: Run](#run) per eseguire il lavoro principale del servizio. `Run`continua a essere eseguito fino a quando il servizio non viene arrestato.

## <a name="catlservicemoduletsetservicestatus"></a><a name="setservicestatus"></a>Funzione CAtlServiceModuleT:: SetServiceStatus

Questo metodo aggiorna lo stato del servizio.

```cpp
void SetServiceStatus(DWORD dwState) throw();
```

### <a name="parameters"></a>Parametri

*dwState*<br/>
Il nuovo stato. Per i valori possibili, vedere [SetServiceStatus](/windows/win32/api/winsvc/nf-winsvc-setservicestatus) .

### <a name="remarks"></a>Osservazioni

Aggiorna le informazioni sullo stato di gestione controllo servizi per il servizio. Viene chiamato da [funzione CAtlServiceModuleT:: Run](#run), [funzione CAtlServiceModuleT:: ServiceMain](#servicemain) e altri metodi del gestore. Lo stato viene inoltre archiviato nella variabile membro [funzione CAtlServiceModuleT:: m_status](#m_status).

## <a name="catlservicemoduletstart"></a><a name="start"></a>Funzione CAtlServiceModuleT:: Start

Chiamato da `CAtlServiceModuleT::WinMain` all'avvio del servizio.

```cpp
HRESULT Start(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come deve essere visualizzata la finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain](/windows/win32/api/winbase/nf-winbase-winmain) .

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il metodo [funzione CAtlServiceModuleT:: WinMain](#winmain) gestisce sia la registrazione che l'installazione, nonché le attività necessarie per la rimozione delle voci del registro di sistema e la disinstallazione del modulo. Quando il servizio viene eseguito, `WinMain` chiama `Start`.

## <a name="catlservicemoduletuninstall"></a><a name="uninstall"></a>Funzione CAtlServiceModuleT:: Uninstall

Arresta e rimuove il servizio.

```cpp
BOOL Uninstall() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Arresta l'esecuzione del servizio e lo rimuove dal database di gestione controllo servizi.

## <a name="catlservicemoduletunlock"></a><a name="unlock"></a>Funzione CAtlServiceModuleT:: Unlock

Decrementa il conteggio dei blocchi del servizio.

```cpp
LONG Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il conteggio dei blocchi, che può essere utile per la diagnostica e il debug.

## <a name="catlservicemoduletunregisterappid"></a><a name="unregisterappid"></a>Funzione CAtlServiceModuleT:: UnregisterAppId

Rimuove il servizio dal registro di sistema.

```cpp
HRESULT UnregisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catlservicemoduletwinmain"></a><a name="winmain"></a>Funzione CAtlServiceModuleT:: WinMain

Questo metodo implementa il codice necessario per avviare il servizio.

```cpp
int WinMain(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come deve essere visualizzata la finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain](/windows/win32/api/winbase/nf-winbase-winmain) .

### <a name="return-value"></a>Valore restituito

Restituisce il valore restituito del servizio.

### <a name="remarks"></a>Osservazioni

Questo metodo elabora la riga di comando (con [funzione CAtlServiceModuleT::P arsecommandline](#parsecommandline)), quindi avvia il servizio usando [funzione CAtlServiceModuleT:: Start](#start).

## <a name="see-also"></a>Vedere anche

[Classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
