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
ms.openlocfilehash: d37cc8e97d29cbedfeb4ba79502d44529485399f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78863195"
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
Classe derivata da `CAtlExeModuleT`.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlExeModuleT:: CAtlExeModuleT](#catlexemodulet)|Costruttore.|
|[CAtlExeModuleT:: ~ CAtlExeModuleT](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlExeModuleT:: InitializeCom](#initializecom)|Inizializza COM.|
|[CAtlExeModuleT::P arseCommandLine](#parsecommandline)|Analizza la riga di comando ed esegue la registrazione, se necessario.|
|[CAtlExeModuleT::P ostMessageLoop](#postmessageloop)|Questo metodo viene chiamato immediatamente dopo la chiusura del ciclo di messaggi.|
|[CAtlExeModuleT::P reMessageLoop](#premessageloop)|Questo metodo viene chiamato immediatamente prima dell'immissione del ciclo di messaggi.|
|[CAtlExeModuleT:: RegisterClassObjects](#registerclassobjects)|Registra l'oggetto classe.|
|[CAtlExeModuleT:: RevokeClassObjects](#revokeclassobjects)|Revoca l'oggetto classe.|
|[CAtlExeModuleT:: Run](#run)|Questo metodo esegue il codice nel modulo EXE per inizializzare, eseguire il ciclo di messaggi e pulire.|
|[CAtlExeModuleT:: RunMessageLoop](#runmessageloop)|Questo metodo esegue il ciclo di messaggi.|
|[CAtlExeModuleT:: UninitializeCom](#uninitializecom)|Non inizializza COM.|
|[CAtlExeModuleT:: Unlock](#unlock)|Decrementa il conteggio dei blocchi del modulo.|
|[CAtlExeModuleT:: WinMain](#winmain)|Questo metodo implementa il codice necessario per eseguire un file EXE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlExeModuleT:: m_bDelayShutdown](#m_bdelayshutdown)|Flag che indica che dovrebbe essere presente un ritardo durante la chiusura del modulo.|
|[CAtlExeModuleT:: m_dwPause](#m_dwpause)|Valore di pausa utilizzato per garantire che tutti gli oggetti vengano rilasciati prima dell'arresto.|
|[CAtlExeModuleT:: m_dwTimeOut](#m_dwtimeout)|Valore di timeout usato per ritardare lo scaricamento del modulo.|

## <a name="remarks"></a>Osservazioni

`CAtlExeModuleT` rappresenta il modulo per un'applicazione (EXE) e contiene codice che supporta la creazione di un file EXE, l'elaborazione della riga di comando, la registrazione di oggetti classe, l'esecuzione del ciclo di messaggi e la pulizia all'uscita.

Questa classe è progettata per migliorare le prestazioni quando gli oggetti COM nel server EXE vengono continuamente creati ed eliminati definitivamente. Dopo che l'ultimo oggetto COM è stato rilasciato, il file EXE attende una durata specificata dal membro dati [CAtlExeModuleT:: m_dwTimeOut](#m_dwtimeout) . Se durante questo periodo non è presente alcuna attività (ovvero non viene creato alcun oggetto COM), viene avviato il processo di arresto.

Il membro dati [CAtlExeModuleT:: m_bDelayShutdown](#m_bdelayshutdown) è un flag usato per determinare se l'exe deve usare il meccanismo definito in precedenza. Se è impostato su false, il modulo verrà interrotto immediatamente.

Per ulteriori informazioni sui moduli in ATL, vedere [ATL Module Classes](../../atl/atl-module-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

`CAtlExeModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="catlexemodulet"></a>CAtlExeModuleT:: CAtlExeModuleT

Costruttore.

```
CAtlExeModuleT() throw();
```

### <a name="remarks"></a>Osservazioni

Se non è stato possibile inizializzare il modulo EXE, WinMain verrà immediatamente restituito senza ulteriori elaborazioni.

##  <a name="dtor"></a>CAtlExeModuleT:: ~ CAtlExeModuleT

Distruttore.

```
~CAtlExeModuleT() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

##  <a name="initializecom"></a>CAtlExeModuleT:: InitializeCom

Inizializza COM.

```
static HRESULT InitializeCom() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal costruttore e può essere sottoposto a override per inizializzare COM in modo diverso rispetto all'implementazione predefinita. L'implementazione predefinita chiama `CoInitializeEx(NULL, COINIT_MULTITHREADED)` o `CoInitialize(NULL)` a seconda della configurazione del progetto.

Per eseguire l'override di questo metodo è in genere necessario eseguire l'override di [CAtlExeModuleT:: UninitializeCom](#uninitializecom).

##  <a name="m_bdelayshutdown"></a>CAtlExeModuleT:: m_bDelayShutdown

Flag che indica che dovrebbe essere presente un ritardo durante la chiusura del modulo.

```
bool m_bDelayShutdown;
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere la [Panoramica di CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md) .

##  <a name="m_dwpause"></a>CAtlExeModuleT:: m_dwPause

Valore di pausa utilizzato per assicurarsi che tutti gli oggetti vengano eliminati prima dell'arresto.

```
DWORD m_dwPause;
```

### <a name="remarks"></a>Osservazioni

Modificare questo valore dopo la chiamata a [CAtlExeModuleT:: InitializeCom](#initializecom) per impostare il numero di millisecondi utilizzato come valore di pausa per l'arresto del server. Il valore predefinito è 1000 millisecondi.

##  <a name="m_dwtimeout"></a>CAtlExeModuleT:: m_dwTimeOut

Valore di timeout usato per ritardare lo scaricamento del modulo.

```
DWORD m_dwTimeOut;
```

### <a name="remarks"></a>Osservazioni

Modificare questo valore dopo la chiamata a [CAtlExeModuleT:: InitializeCom](#initializecom) per definire il numero di millisecondi utilizzati come valore di timeout per l'arresto del server. Il valore predefinito è 5000 millisecondi. Per altri dettagli, vedere la [Panoramica di CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md) .

##  <a name="parsecommandline"></a>CAtlExeModuleT::P arseCommandLine

Analizza la riga di comando ed esegue la registrazione, se necessario.

```
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```

### <a name="parameters"></a>Parametri

*lpCmdLine*<br/>
Riga di comando passata all'applicazione.

*pnRetCode*<br/>
HRESULT corrispondente alla registrazione, se è avvenuta.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'applicazione deve continuare l'esecuzione; in caso contrario, false.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da [CAtlExeModuleT:: WinMain](#winmain) ed è possibile eseguirne l'override per gestire le opzioni della riga di comando. L'implementazione predefinita controlla gli argomenti della riga di comando **/regserver** e **l'opzione/unregserver** ed esegue la registrazione o l'annullamento della registrazione.

##  <a name="postmessageloop"></a>CAtlExeModuleT::P ostMessageLoop

Questo metodo viene chiamato immediatamente dopo la chiusura del ciclo di messaggi.

```
HRESULT PostMessageLoop() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per eseguire la pulizia dell'applicazione personalizzata. L'implementazione predefinita chiama [CAtlExeModuleT:: RevokeClassObjects](#revokeclassobjects).

##  <a name="premessageloop"></a>CAtlExeModuleT::P reMessageLoop

Questo metodo viene chiamato immediatamente prima dell'immissione del ciclo di messaggi.

```
HRESULT PreMessageLoop(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Il valore passato come parametro *nShowCmd* in WinMain.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per aggiungere codice di inizializzazione personalizzato per l'applicazione. L'implementazione predefinita registra gli oggetti classe.

##  <a name="registerclassobjects"></a>CAtlExeModuleT:: RegisterClassObjects

Registra l'oggetto classe con OLE in modo che altre applicazioni possano connettersi ad esso.

```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```

### <a name="parameters"></a>Parametri

*dwClsContext*<br/>
Specifica il contesto in cui deve essere eseguito l'oggetto classe. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER.

*dwFlags*<br/>
Determina i tipi di connessione all'oggetto classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, S_FALSE se non sono presenti classi da registrare o un errore HRESULT in caso di errore.

##  <a name="revokeclassobjects"></a>CAtlExeModuleT:: RevokeClassObjects

Rimuove l'oggetto classe.

```
HRESULT RevokeClassObjects() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, S_FALSE se non sono presenti classi da registrare o un errore HRESULT in caso di errore.

##  <a name="run"></a>CAtlExeModuleT:: Run

Questo metodo esegue il codice nel modulo EXE per inizializzare, eseguire il ciclo di messaggi e pulire.

```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come deve essere visualizzata la finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain](/windows/win32/api/winbase/nf-winbase-winmain) . Il valore predefinito è SW_HIDE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere sottoposto a override. In pratica, tuttavia, è preferibile eseguire l'override di [CAtlExeModuleT::P remessageloop](#premessageloop), [CAtlExeModuleT:: RunMessageLoop](#runmessageloop)o [CAtlExeModuleT::P ostmessageloop](#postmessageloop) .

##  <a name="runmessageloop"></a>CAtlExeModuleT:: RunMessageLoop

Questo metodo esegue il ciclo di messaggi.

```
void RunMessageLoop() throw();
```

### <a name="remarks"></a>Osservazioni

È possibile eseguire l'override di questo metodo per modificare il comportamento del ciclo di messaggi.

##  <a name="uninitializecom"></a>CAtlExeModuleT:: UninitializeCom

Non inizializza COM.

```
static void UninitializeCom() throw();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo chiama semplicemente [CoUninitialize](/windows/win32/api/combaseapi/nf-combaseapi-couninitialize) e viene chiamato dal distruttore. Eseguire l'override di questo metodo se si esegue l'override di [CAtlExeModuleT:: InitializeCom](#initializecom).

##  <a name="unlock"></a>CAtlExeModuleT:: Unlock

Decrementa il conteggio dei blocchi del modulo.

```
LONG Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore che può essere utile per la diagnostica o il test.

##  <a name="winmain"></a>CAtlExeModuleT:: WinMain

Questo metodo implementa il codice necessario per eseguire un file EXE.

```
int WinMain(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica come deve essere visualizzata la finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain](/windows/win32/api/winbase/nf-winbase-winmain) .

### <a name="return-value"></a>Valore restituito

Restituisce il valore restituito dell'eseguibile.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere sottoposto a override. Se si esegue l'override di [CAtlExeModuleT::P remessageloop](#premessageloop), [CAtlExeModuleT::P ostmessageloop](#postmessageloop)o [CAtlExeModuleT:: RunMessageLoop](#runmessageloop) non fornisce una flessibilità sufficiente, è possibile eseguire l'override della funzione `WinMain` utilizzando questo metodo.

## <a name="see-also"></a>Vedere anche

[Esempio ATLDuck](../../overview/visual-cpp-samples.md)<br/>
[Classe CAtlModuleT](../../atl/reference/catlmodulet-class.md)<br/>
[Classe CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
