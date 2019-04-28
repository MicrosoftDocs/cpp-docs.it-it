---
title: Classe CAtlServiceModuleT
ms.date: 11/04/2016
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
ms.openlocfilehash: 2d4d5d4a5c4d8a52f792cc04a968974967c1e13a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62260201"
---
# <a name="catlservicemodulet-class"></a>Classe CAtlServiceModuleT

Questa classe implementa un servizio.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class T, UINT nServiceNameID>
class ATL_NO_VTABLE CAtlServiceModuleT : public CAtlExeModuleT<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe derivata da `CAtlServiceModuleT`.

*nServiceNameID*<br/>
Identificatore della risorsa del servizio.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlServiceModuleT::CAtlServiceModuleT](#catlservicemodulet)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlServiceModuleT::Handler](#handler)|La routine del gestore per il servizio.|
|[CAtlServiceModuleT::InitializeSecurity](#initializesecurity)|Fornisce il valore predefinito delle impostazioni di sicurezza per il servizio.|
|[CAtlServiceModuleT::Install](#install)|Installa e crea il servizio.|
|[CAtlServiceModuleT::IsInstalled](#isinstalled)|Conferma che il servizio sia stato installato.|
|[CAtlServiceModuleT::LogEvent](#logevent)|Scrive nel registro eventi.|
|[CAtlServiceModuleT::OnContinue](#oncontinue)|Eseguire l'override di questo metodo per continuare il servizio.|
|[CAtlServiceModuleT::OnInterrogate](#oninterrogate)|Eseguire l'override di questo metodo per interrogare il servizio.|
|[CAtlServiceModuleT::OnPause](#onpause)|Eseguire l'override di questo metodo per sospendere il servizio.|
|[CAtlServiceModuleT::OnShutdown](#onshutdown)|Eseguire l'override di questo metodo per arrestare il servizio|
|[CAtlServiceModuleT::OnStop](#onstop)|Eseguire l'override di questo metodo per arrestare il servizio|
|[CAtlServiceModuleT::OnUnknownRequest](#onunknownrequest)|Eseguire l'override di questo metodo per gestire richieste sconosciute al servizio|
|[CAtlServiceModuleT::ParseCommandLine](#parsecommandline)|Analizza la riga di comando ed esegue la registrazione, se necessario.|
|[CAtlServiceModuleT::PreMessageLoop](#premessageloop)|Questo metodo viene chiamato immediatamente prima di immettere il ciclo di messaggi.|
|[CAtlServiceModuleT::RegisterAppId](#registerappid)|Registra il servizio nel Registro di sistema.|
|[CAtlServiceModuleT::Run](#run)|Esegue il servizio.|
|[CAtlServiceModuleT::ServiceMain](#servicemain)|Il metodo chiamato da Gestione controllo servizi.|
|[CAtlServiceModuleT::SetServiceStatus](#setservicestatus)|Aggiorna lo stato del servizio.|
|[CAtlServiceModuleT::Start](#start)|Chiamato da `CAtlServiceModuleT::WinMain` all'avvio del servizio.|
|[CAtlServiceModuleT::Uninstall](#uninstall)|Arresta e rimuove il servizio.|
|[CAtlServiceModuleT::Unlock](#unlock)|Decrementa il conteggio dei blocchi del servizio.|
|[CAtlServiceModuleT::UnregisterAppId](#unregisterappid)|Rimuove il servizio dal Registro di sistema.|
|[CAtlServiceModuleT::WinMain](#winmain)|Questo metodo implementa il codice necessario per eseguire il servizio.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlServiceModuleT::m_bService](#m_bservice)|Flag che indica che il programma viene eseguito come servizio.|
|[CAtlServiceModuleT::m_dwThreadID](#m_dwthreadid)|Variabile membro cui è archiviato l'identificatore di thread.|
|[CAtlServiceModuleT::m_hServiceStatus](#m_hservicestatus)|Variabile membro l'archiviazione di un handle per la struttura di informazioni di stato per il servizio corrente.|
|[CAtlServiceModuleT::m_status](#m_status)|Variabile membro archiviare la struttura di informazioni di stato per il servizio corrente.|
|[CAtlServiceModuleT::m_szServiceName](#m_szservicename)|Il nome del servizio in corso la registrazione.|

## <a name="remarks"></a>Note

`CAtlServiceModuleT`, derivato da [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md), implementa un modulo del servizio ATL. `CAtlServiceModuleT` fornisce metodi per l'elaborazione della riga di comando, l'installazione, la registrazione e la rimozione. Se la funzionalità aggiuntiva è necessaria, questi e altri metodi possono essere sostituiti.

Questa classe consente di sostituire l'obsoleto [CComModule (classi)](../../atl/reference/ccommodule-class.md) usato nelle versioni precedenti di ATL. Visualizzare [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

[CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)

`CAtlServiceModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="catlservicemodulet"></a>  CAtlServiceModuleT::CAtlServiceModuleT

Costruttore.

```
CAtlServiceModuleT() throw();
```

### <a name="remarks"></a>Note

Inizializza i membri dati e imposta lo stato del servizio iniziale.

##  <a name="handler"></a>  CAtlServiceModuleT::Handler

La routine del gestore per il servizio.

```
void Handler(DWORD dwOpcode) throw();
```

### <a name="parameters"></a>Parametri

*dwOpcode*<br/>
Un'opzione che definisce l'operazione del gestore. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Questo è il codice che chiama Gestione controllo servizi (SCM) per recuperare lo stato delle istruzioni per il servizio e dei problemi, ad esempio arresto o sospensione. Gestione controllo servizi passa un codice dell'operazione, illustrato di seguito, a `Handler` per indicare che il servizio deve essere eseguita.

|Codice operativo|Significato|
|--------------------|-------------|
|SERVICE_CONTROL_STOP|Arresta il servizio. L'override del metodo [CAtlServiceModuleT::OnStop](#onstop) in atlbase. h per modificare il comportamento.|
|SERVICE_CONTROL_PAUSE|Utente è stata implementata. L'override del metodo vuoto [CAtlServiceModuleT::OnPause](#onpause) in atlbase. h per sospendere il servizio.|
|SERVICE_CONTROL_CONTINUE|Utente è stata implementata. L'override del metodo vuoto [CAtlServiceModuleT::OnContinue](#oncontinue) in atlbase. h per continuare il servizio.|
|SERVICE_CONTROL_INTERROGATE|Utente è stata implementata. L'override del metodo vuoto [CAtlServiceModuleT::OnInterrogate](#oninterrogate) in atlbase. h per interrogare il servizio.|
|SERVICE_CONTROL_SHUTDOWN|Utente è stata implementata. L'override del metodo vuoto [CAtlServiceModuleT::OnShutdown](#onshutdown) in atlbase. h per arrestare il servizio.|

Se non viene riconosciuto il codice dell'operazione, il metodo [CAtlServiceModuleT::OnUnknownRequest](#onunknownrequest) viene chiamato.

Un servizio predefinito generato da ATL gestisce solo l'istruzione di interruzione. Se Gestione controllo servizi passa l'istruzione di interruzione, il servizio indica a Gestione controllo servizi che il programma sta per essere arrestato. Chiama quindi il servizio `PostThreadMessage` per inviare un messaggio quit a se stesso. Questo termina il ciclo di messaggi e il servizio verrà chiuso.

##  <a name="initializesecurity"></a>  CAtlServiceModuleT::InitializeSecurity

Fornisce il valore predefinito delle impostazioni di sicurezza per il servizio.

```
HRESULT InitializeSecurity() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

In Visual Studio .NET 2003, questo metodo non è implementato nella classe di base. La creazione guidata progetto di Visual Studio include questo metodo nel codice generato, ma si verificherà un errore di compilazione se un progetto creato in una versione precedente di Visual C++ viene compilato usando 7.1 ATL. Qualsiasi classe che deriva da `CAtlServiceModuleT` devono implementare questo metodo nella classe derivata.

Usare l'autenticazione livello PKT, livello di rappresentazione di RPC_C_IMP_LEVEL_IDENTIFY e un descrittore di sicurezza non null appropriato nella chiamata a `CoInitializeSecurity`.

Per i progetti generati dalla procedura guidata senza attributi del servizio, sarebbe in

[!code-cpp[NVC_ATL_Service#1](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_1.cpp)]

Per i progetti di servizio con gli attributi, sarebbe in

[!code-cpp[NVC_ATL_ServiceAttrib#1](../../atl/reference/codesnippet/cpp/catlservicemodulet-class_2.cpp)]

##  <a name="install"></a>  CAtlServiceModuleT::Install

Installa e crea il servizio.

```
BOOL Install() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Installa il servizio nel database di Gestione controllo servizi (SCM) e quindi crea l'oggetto servizio. Se non è stato possibile creare il servizio, viene visualizzata una finestra di messaggio e il metodo restituisce FALSE.

##  <a name="isinstalled"></a>  CAtlServiceModuleT::IsInstalled

Conferma che il servizio sia stato installato.

```
BOOL IsInstalled() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il servizio è installato, FALSE in caso contrario.

##  <a name="logevent"></a>  CAtlServiceModuleT::LogEvent

Scrive nel registro eventi.

```
void __cdecl LogEvent(LPCTSTR pszFormat, ...) throw();
```

### <a name="parameters"></a>Parametri

*pszFormat*<br/>
Stringa da scrivere nel registro eventi.

*...*<br/>
Facoltative aggiuntive stringhe da scrivere nel registro eventi.

### <a name="remarks"></a>Note

Questo metodo scrive i dettagli in un log eventi, usando la funzione [ReportEvent](/windows/desktop/api/winbase/nf-winbase-reporteventa). Se nessun servizio è in esecuzione, la stringa viene inviata alla console.

##  <a name="m_bservice"></a>  CAtlServiceModuleT::m_bService

Flag che indica che il programma viene eseguito come servizio.

```
BOOL m_bService;
```

### <a name="remarks"></a>Note

Utilizzato per distinguere un file EXE del servizio da un file eseguibile dell'applicazione.

##  <a name="m_dwthreadid"></a>  CAtlServiceModuleT::m_dwThreadID

Variabile membro archiviare l'identificatore del thread del servizio.

```
DWORD m_dwThreadID;
```

### <a name="remarks"></a>Note

Questa variabile archivia l'identificatore del thread del thread corrente.

##  <a name="m_hservicestatus"></a>  CAtlServiceModuleT::m_hServiceStatus

Variabile membro l'archiviazione di un handle per la struttura di informazioni di stato per il servizio corrente.

```
SERVICE_STATUS_HANDLE m_hServiceStatus;
```

### <a name="remarks"></a>Note

Il [SERVICE_STATUS](/windows/desktop/api/winsvc/ns-winsvc-_service_status) struttura contiene informazioni relative a un servizio.

##  <a name="m_status"></a>  CAtlServiceModuleT::m_status

Variabile membro archiviare la struttura di informazioni di stato per il servizio corrente.

```
SERVICE_STATUS m_status;
```

### <a name="remarks"></a>Note

Il [SERVICE_STATUS](/windows/desktop/api/winsvc/ns-winsvc-_service_status) struttura contiene informazioni relative a un servizio.

##  <a name="m_szservicename"></a>  CAtlServiceModuleT::m_szServiceName

Il nome del servizio in corso la registrazione.

```
TCHAR [256] m_szServiceName;
```

### <a name="remarks"></a>Note

Una stringa con terminazione null che archivia il nome del servizio.

##  <a name="oncontinue"></a>  CAtlServiceModuleT::OnContinue

Eseguire l'override di questo metodo per continuare il servizio.

```
void OnContinue() throw();
```

##  <a name="oninterrogate"></a>  CAtlServiceModuleT::OnInterrogate

Eseguire l'override di questo metodo per interrogare il servizio.

```
void OnInterrogate() throw();
```

##  <a name="onpause"></a>  CAtlServiceModuleT::OnPause

Eseguire l'override di questo metodo per sospendere il servizio.

```
void OnPause() throw();
```

##  <a name="onshutdown"></a>  CAtlServiceModuleT::OnShutdown

Eseguire l'override di questo metodo per arrestare il servizio.

```
void OnShutdown() throw();
```

##  <a name="onstop"></a>  CAtlServiceModuleT::OnStop

Eseguire l'override di questo metodo per arrestare il servizio.

```
void OnStop() throw();
```

##  <a name="onunknownrequest"></a>  CAtlServiceModuleT::OnUnknownRequest

Eseguire l'override di questo metodo per gestire le richieste sconosciute per il servizio.

```
void OnUnknownRequest(DWORD /* dwOpcode*/) throw();
```

### <a name="parameters"></a>Parametri

*dwOpcode*<br/>
Riservato.

##  <a name="parsecommandline"></a>  CAtlServiceModuleT::ParseCommandLine

Analizza la riga di comando ed esegue la registrazione, se necessario.

```
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```

### <a name="parameters"></a>Parametri

*lpCmdLine*<br/>
Riga di comando

*pnRetCode*<br/>
Il valore HRESULT corrispondente alla registrazione (se sono state effettuate).

### <a name="return-value"></a>Valore restituito

Restituisce true se l'esito positivo o false se non è stato possibile registrare il file RGS specificato nella riga di comando.

### <a name="remarks"></a>Note

Analizza la riga di comando e nei registri o Annulla la registrazione il file RGS specificato, se necessario. Questo metodo chiama [CAtlExeModuleT::ParseCommandLine](../../atl/reference/catlexemodulet-class.md#parsecommandline) per verificare la presenza **/RegServer** e **l'opzione /UnregServer**. Aggiunta dell'argomento **- / servizio** registrerà il servizio.

##  <a name="premessageloop"></a>  CAtlServiceModuleT::PreMessageLoop

Questo metodo viene chiamato immediatamente prima di immettere il ciclo di messaggi.

```
HRESULT PreMessageLoop(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Questo parametro viene passato a [CAtlExeModuleT::PreMessageLoop](../../atl/reference/catlexemodulet-class.md#premessageloop).

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per aggiungere il codice di inizializzazione personalizzata per il servizio.

##  <a name="registerappid"></a>  CAtlServiceModuleT::RegisterAppId

Registra il servizio nel Registro di sistema.

```
inline HRESULT RegisterAppId(bool bService = false) throw();
```

### <a name="parameters"></a>Parametri

*bService*<br/>
Deve essere true per registrare come un servizio.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="run"></a>  CAtlServiceModuleT::Run

Esegue il servizio.

```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come visualizzare la finestra. Questo parametro può essere uno dei valori descritti nel [WinMain](/windows/desktop/api/winbase/nf-winbase-winmain) sezione. Il valore predefinito è SW_HIDE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Dopo essere stato chiamato `Run` chiamate [CAtlServiceModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::RunMessageLoop](../../atl/reference/catlexemodulet-class.md#runmessageloop), e [CAtlExeModuleT::PostMessageLoop](../../atl/reference/catlexemodulet-class.md#postmessageloop).

##  <a name="servicemain"></a>  CAtlServiceModuleT::

Questo metodo viene chiamato da Gestione controllo servizi.

```
void ServiceMain(DWORD dwArgc, LPTSTR* lpszArgv) throw();
```

### <a name="parameters"></a>Parametri

*dwArgc*<br/>
L'argomento argc.

*lpszArgv*<br/>
L'argomento argv.

### <a name="remarks"></a>Note

Le chiamate di Gestione controllo servizi (SCM) `ServiceMain` quando si apre l'applicazione di servizi nel Pannello di controllo, selezionare il servizio e fare clic su Avvia.

Dopo il gestore SCM chiama `ServiceMain`, un servizio necessario dare il gestore SCM una funzione del gestore. Questa funzione consente a Gestione controllo servizi ottenere lo stato del servizio e passare le istruzioni specifiche (ad esempio, la sospensione o l'arresto). Successivamente, [CAtlServiceModuleT](#run) viene chiamato per eseguire il lavoro principale del servizio. `Run` continua l'esecuzione fino a quando il servizio viene arrestato.

##  <a name="setservicestatus"></a>  CAtlServiceModuleT::SetServiceStatus

Questo metodo aggiorna lo stato del servizio.

```
void SetServiceStatus(DWORD dwState) throw();
```

### <a name="parameters"></a>Parametri

*dwState*<br/>
Il nuovo stato. Visualizzare [SetServiceStatus](/windows/desktop/api/winsvc/nf-winsvc-setservicestatus) per i valori possibili.

### <a name="remarks"></a>Note

Aggiorna le informazioni sullo stato di Gestione controllo servizi per il servizio. Viene chiamato da [CAtlServiceModuleT](#run), [CAtlServiceModuleT:: ServiceMain](#servicemain) e altri metodi del gestore. Lo stato viene inoltre archiviato nella variabile membro [CAtlServiceModuleT::m_status](#m_status).

##  <a name="start"></a>  CAtlServiceModuleT:: Start

Chiamato da `CAtlServiceModuleT::WinMain` all'avvio del servizio.

```
HRESULT Start(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come visualizzare la finestra. Questo parametro può essere uno dei valori descritti nel [WinMain](/windows/desktop/api/winbase/nf-winbase-winmain) sezione.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Il [CAtlServiceModuleT:: WinMain](#winmain) metodo gestisce sia la registrazione e installazione, nonché le attività coinvolte nella rimozione delle voci del Registro di sistema e la disinstallazione del modulo. Quando viene eseguito il servizio, `WinMain` chiamate `Start`.

##  <a name="uninstall"></a>  CAtlServiceModuleT::Uninstall

Arresta e rimuove il servizio.

```
BOOL Uninstall() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Arresta l'esecuzione del servizio e lo rimuove dal database di Gestione controllo servizi.

##  <a name="unlock"></a>  CAtlServiceModuleT::Unlock

Decrementa il conteggio dei blocchi del servizio.

```
LONG Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il conteggio dei blocchi, che può essere utile per la diagnostica e debug.

##  <a name="unregisterappid"></a>  CAtlServiceModuleT::UnregisterAppId

Rimuove il servizio dal Registro di sistema.

```
HRESULT UnregisterAppId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="winmain"></a>  CAtlServiceModuleT::WinMain

Questo metodo implementa il codice necessario per avviare il servizio.

```
int WinMain(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come visualizzare la finestra. Questo parametro può essere uno dei valori descritti nel [WinMain](/windows/desktop/api/winbase/nf-winbase-winmain) sezione.

### <a name="return-value"></a>Valore restituito

Restituisce il valore restituito del servizio.

### <a name="remarks"></a>Note

Questo metodo elabora la riga di comando (con [CAtlServiceModuleT::ParseCommandLine](#parsecommandline)) e quindi avvia il servizio (usando [CAtlServiceModuleT:: Start](#start)).

## <a name="see-also"></a>Vedere anche

[Classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
