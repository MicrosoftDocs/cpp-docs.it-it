---
title: Classe CAtlExeModuleT
ms.date: 11/04/2016
f1_keywords:
- CAtlExeModuleT
- ATLBASE/ATL::CAtlExeModuleT
- ATLBASE/ATL::CAtlExeModuleT::CAtlExeModuleT
- ATLBASE/ATL::CAtlExeModuleT::InitializeCom
- ATLBASE/ATL::CAtlExeModuleT::ParseCommandLine
- ATLBASE/ATL::CAtlExeModuleT::PostMessageLoop
- ATLBASE/ATL::CAtlExeModuleT::PreMessageLoop
- ATLBASE/ATL::CAtlExeModuleT::RegisterClassObjects
- ATLBASE/ATL::CAtlExeModuleT::RevokeClassObjects
- ATLBASE/ATL::CAtlExeModuleT::Run
- ATLBASE/ATL::CAtlExeModuleT::RunMessageLoop
- ATLBASE/ATL::CAtlExeModuleT::UninitializeCom
- ATLBASE/ATL::CAtlExeModuleT::Unlock
- ATLBASE/ATL::CAtlExeModuleT::WinMain
- ATLBASE/ATL::CAtlExeModuleT::m_bDelayShutdown
- ATLBASE/ATL::CAtlExeModuleT::m_dwPause
- ATLBASE/ATL::CAtlExeModuleT::m_dwTimeOut
helpviewer_keywords:
- CAtlExeModuleT class
ms.assetid: 82245f3d-91d4-44fa-aa86-7cc7fbd758d9
ms.openlocfilehash: 87e526a10c9bcd6a52f4544c50344c5145cfa732
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62247058"
---
# <a name="catlexemodulet-class"></a>Classe CAtlExeModuleT

Questa classe rappresenta il modulo per un'applicazione.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE CAtlExeModuleT : public CAtlModuleT<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe derivata da `CAtlExeModuleT`.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlExeModuleT::CAtlExeModuleT](#catlexemodulet)|Costruttore.|
|[CAtlExeModuleT::~CAtlExeModuleT](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlExeModuleT::InitializeCom](#initializecom)|Inizializza COM.|
|[CAtlExeModuleT::ParseCommandLine](#parsecommandline)|Analizza la riga di comando ed esegue la registrazione, se necessario.|
|[CAtlExeModuleT::PostMessageLoop](#postmessageloop)|Questo metodo viene chiamato immediatamente dopo il ciclo di messaggi viene chiuso.|
|[CAtlExeModuleT::PreMessageLoop](#premessageloop)|Questo metodo viene chiamato immediatamente prima di immettere il ciclo di messaggi.|
|[CAtlExeModuleT::RegisterClassObjects](#registerclassobjects)|Registra l'oggetto di classe.|
|[CAtlExeModuleT::RevokeClassObjects](#revokeclassobjects)|Revoca l'oggetto della classe.|
|[CAtlExeModuleT::Run](#run)|Questo metodo esegue il codice nel modulo EXE per inizializzare, eseguire il ciclo di messaggi e la pulizia.|
|[CAtlExeModuleT::RunMessageLoop](#runmessageloop)|Questo metodo viene eseguito il ciclo di messaggi.|
|[CAtlExeModuleT::UninitializeCom](#uninitializecom)|Annulla l'inizializzazione COM.|
|[CAtlExeModuleT::Unlock](#unlock)|Decrementa conteggio dei blocchi del modulo.|
|[CAtlExeModuleT::WinMain](#winmain)|Questo metodo implementa il codice necessario per eseguire un file EXE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlExeModuleT::m_bDelayShutdown](#m_bdelayshutdown)|Un flag che indica che non vi sarà un ritardo in corso l'arresto del modulo.|
|[CAtlExeModuleT::m_dwPause](#m_dwpause)|Un valore di pausa utilizzato per verificare che tutti gli oggetti vengono rilasciati prima della chiusura.|
|[CAtlExeModuleT::m_dwTimeOut](#m_dwtimeout)|Un valore di timeout di ritardare lo scaricamento del modulo.|

## <a name="remarks"></a>Note

`CAtlExeModuleT` rappresenta il modulo per un'applicazione (EXE) e contiene il codice che supporta la creazione di un file EXE, la riga di comando di elaborazione, la registrazione degli oggetti di classe, che esegue il ciclo di messaggi e pulizia in uscita.

Questa classe è progettata per migliorare le prestazioni quando gli oggetti COM nel server EXE vengono continuamente creati e distrutti. Dopo l'ultimo oggetto COM viene rilasciata, il file EXE rimane in attesa per una durata specificata per il [CAtlExeModuleT::m_dwTimeOut](#m_dwtimeout) (membro dati). Se non si verifica alcuna attività durante questo periodo (vale a dire, non COM vengono creati oggetti), viene avviato il processo di arresto.

Il [CAtlExeModuleT::m_bDelayShutdown](#m_bdelayshutdown) membro dati è un flag utilizzato per determinare se il file EXE debba usare il meccanismo definito in precedenza. Se è impostata su false, quindi il modulo termina immediatamente.

Per altre informazioni sui moduli di ATL, vedere [classi di modulo ATL](../../atl/atl-module-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

`CAtlExeModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="catlexemodulet"></a>  CAtlExeModuleT::CAtlExeModuleT

Costruttore.

```
CAtlExeModuleT() throw();
```

### <a name="remarks"></a>Note

Se il modulo EXE nelze inicializovat, WinMain restituirà immediatamente senza ulteriore elaborazione.

##  <a name="dtor"></a>  CAtlExeModuleT:: ~ CAtlExeModuleT

Distruttore.

```
~CAtlExeModuleT() throw();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate.

##  <a name="initializecom"></a>  CAtlExeModuleT::InitializeCom

Inizializza COM.

```
static HRESULT InitializeCom() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal costruttore e può essere sottoposto a override per inizializzare COM in modo diverso rispetto all'implementazione predefinita. L'implementazione predefinita chiama sia `CoInitializeEx(NULL, COINIT_MULTITHREADED)` o `CoInitialize(NULL)` a seconda della configurazione di progetto.

Eseguire l'override di questo metodo in genere necessario eseguire l'override [CAtlExeModuleT::UninitializeCom](#uninitializecom).

##  <a name="m_bdelayshutdown"></a>  CAtlExeModuleT::m_bDelayShutdown

Un flag che indica che non vi sarà un ritardo in corso l'arresto del modulo.

```
bool m_bDelayShutdown;
```

### <a name="remarks"></a>Note

Vedere le [CAtlExeModuleT Panoramica](../../atl/reference/catlexemodulet-class.md) per informazioni dettagliate.

##  <a name="m_dwpause"></a>  CAtlExeModuleT::m_dwPause

Un valore di pausa utilizzato per verificare che tutti gli oggetti esistono più prima dell'arresto.

```
DWORD m_dwPause;
```

### <a name="remarks"></a>Note

Modificare questo valore dopo la chiamata [CAtlExeModuleT::InitializeCom](#initializecom) per impostare il numero di millisecondi, utilizzato come valore di pausa per l'arresto del server. Il valore predefinito è 1000 millisecondi.

##  <a name="m_dwtimeout"></a>  CAtlExeModuleT::m_dwTimeOut

Un valore di timeout di ritardare lo scaricamento del modulo.

```
DWORD m_dwTimeOut;
```

### <a name="remarks"></a>Note

Modificare questo valore dopo la chiamata [CAtlExeModuleT::InitializeCom](#initializecom) per definire il numero di millisecondi, utilizzato come valore di timeout per l'arresto del server. Il valore predefinito è 5000 millisecondi. Vedere le [CAtlExeModuleT Panoramica](../../atl/reference/catlexemodulet-class.md) per altri dettagli.

##  <a name="parsecommandline"></a>  CAtlExeModuleT::ParseCommandLine

Analizza la riga di comando ed esegue la registrazione, se necessario.

```
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```

### <a name="parameters"></a>Parametri

*lpCmdLine*<br/>
La riga di comando passati all'applicazione.

*pnRetCode*<br/>
Il valore HRESULT corrispondente alla registrazione (se sono state effettuate).

### <a name="return-value"></a>Valore restituito

Restituisce true se l'applicazione deve continuare a eseguire, in caso contrario, false.

### <a name="remarks"></a>Note

Questo metodo viene chiamato da [CAtlExeModuleT::WinMain](#winmain) e può essere sottoposto a override per la gestione della riga di comando. Controlla l'implementazione predefinita **/RegServer** e **l'opzione /UnRegServer** gli argomenti della riga di comando ed esegue la registrazione o annullamento della registrazione.

##  <a name="postmessageloop"></a>  CAtlExeModuleT::PostMessageLoop

Questo metodo viene chiamato immediatamente dopo il ciclo di messaggi viene chiuso.

```
HRESULT PostMessageLoop() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per eseguire la pulizia dell'applicazione personalizzata. L'implementazione predefinita chiama [CAtlExeModuleT::RevokeClassObjects](#revokeclassobjects).

##  <a name="premessageloop"></a>  CAtlExeModuleT::PreMessageLoop

Questo metodo viene chiamato immediatamente prima di immettere il ciclo di messaggi.

```
HRESULT PreMessageLoop(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Il valore passato come il *nShowCmd* parametro WinMain.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per aggiungere il codice di inizializzazione personalizzata per l'applicazione. L'implementazione predefinita registra gli oggetti della classe.

##  <a name="registerclassobjects"></a>  CAtlExeModuleT::RegisterClassObjects

Registra l'oggetto della classe OLE in modo che altre applicazioni possono connettersi a esso.

```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```

### <a name="parameters"></a>Parametri

*dwClsContext*<br/>
Specifica il contesto in cui l'oggetto della classe deve essere eseguito. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER.

*dwFlags*<br/>
Determina i tipi di connessione per l'oggetto della classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK su esito positivo, S_FALSE se si sono verificati senza classi di registrare o un valore HRESULT di errore in caso di errore.

##  <a name="revokeclassobjects"></a>  CAtlExeModuleT::RevokeClassObjects

Rimuove l'oggetto di classe.

```
HRESULT RevokeClassObjects() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK su esito positivo, S_FALSE se si sono verificati senza classi di registrare o un valore HRESULT di errore in caso di errore.

##  <a name="run"></a>  CAtlExeModuleT::Run

Questo metodo esegue il codice nel modulo EXE per inizializzare, eseguire il ciclo di messaggi e la pulizia.

```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come visualizzare la finestra. Questo parametro può essere uno dei valori descritti nel [WinMain](/windows/desktop/api/winbase/nf-winbase-winmain) sezione. Il valore predefinito è SW_HIDE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questo metodo può essere sottoposto a override. Tuttavia, in pratica è preferibile eseguire l'override [CAtlExeModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::RunMessageLoop](#runmessageloop), o [CAtlExeModuleT::PostMessageLoop](#postmessageloop) In alternativa.

##  <a name="runmessageloop"></a>  CAtlExeModuleT::RunMessageLoop

Questo metodo viene eseguito il ciclo di messaggi.

```
void RunMessageLoop() throw();
```

### <a name="remarks"></a>Note

Questo metodo può essere sottoposto a override per modificare il comportamento del ciclo di messaggi.

##  <a name="uninitializecom"></a>  CAtlExeModuleT::UninitializeCom

Annulla l'inizializzazione COM.

```
static void UninitializeCom() throw();
```

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo chiama [CoUninitialize](/windows/desktop/api/combaseapi/nf-combaseapi-couninitialize) e viene chiamato dal distruttore. Eseguire l'override di questo metodo se si esegue l'override [CAtlExeModuleT::InitializeCom](#initializecom).

##  <a name="unlock"></a>  CAtlExeModuleT::Unlock

Decrementa conteggio dei blocchi del modulo.

```
LONG Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore che può essere utile per la diagnostica o di testing.

##  <a name="winmain"></a>  CAtlExeModuleT::WinMain

Questo metodo implementa il codice necessario per eseguire un file EXE.

```
int WinMain(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come visualizzare la finestra. Questo parametro può essere uno dei valori descritti nel [WinMain](/windows/desktop/api/winbase/nf-winbase-winmain) sezione.

### <a name="return-value"></a>Valore restituito

Restituisce il valore restituito dell'eseguibile.

### <a name="remarks"></a>Note

Questo metodo può essere sottoposto a override. Se si esegue l'override [CAtlExeModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::PostMessageLoop](#postmessageloop), o [CAtlExeModuleT::RunMessageLoop](#runmessageloop) non offre una flessibilità sufficiente , è possibile eseguire l'override di `WinMain` funzionare con questo metodo.

## <a name="see-also"></a>Vedere anche

[Esempio ATLDuck](../../overview/visual-cpp-samples.md)<br/>
[Classe CAtlModuleT](../../atl/reference/catlmodulet-class.md)<br/>
[Classe CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
