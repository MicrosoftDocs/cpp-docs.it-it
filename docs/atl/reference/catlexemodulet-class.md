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
ms.openlocfilehash: a20a02a467d74a89e3cda176a6a15961be4ffd61
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318979"
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
La classe `CAtlExeModuleT`derivata da .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Modulo CAtlExeModuleT::CAtlExeModuleT](#catlexemodulet)|Costruttore.|
|[CAtlExeModuleT:: CAtlExeModuleT](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Modulo CAtlExeModuleT::InitializeCom](#initializecom)|Inizializza COM.|
|[CAtlExeModuleT::ParseCommandLine](#parsecommandline)|Analizza la riga di comando ed esegue la registrazione se necessario.|
|[CAtlExeModuleT::PostMessageLoop](#postmessageloop)|Questo metodo viene chiamato immediatamente dopo la chiusura del ciclo di messaggi.|
|[CAtlExeModuleT::PreMessageLoop](#premessageloop)|Questo metodo viene chiamato immediatamente prima di entrare nel ciclo di messaggi.|
|[CAtlExeModuleT::RegisterClassObjects](#registerclassobjects)|Registra l'oggetto classe.|
|[CAtlExeModuleT::RevokeClassObjects](#revokeclassobjects)|Revoca l'oggetto classe.|
|[CAtlExeModuleT::Esegui](#run)|Questo metodo esegue il codice nel modulo EXE per inizializzare, eseguire il ciclo di messaggi e pulire.|
|[CAtlExeModuleT::RunMessageLoop](#runmessageloop)|Questo metodo esegue il ciclo di messaggi.|
|[Modulo CAtlExeModuleT::UninitializeCom](#uninitializecom)|Annulla l'inizializzazione di COM.|
|[CAtlExeModuleT::Sblocca](#unlock)|Decrementa il numero di blocchi del modulo.|
|[Modulo CAtlExeModuleT::WinMain](#winmain)|Questo metodo implementa il codice necessario per eseguire un file EXE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlExeModuleT::m_bDelayShutdown](#m_bdelayshutdown)|Flag che indica che dovrebbe verificarsi un ritardo nell'arresto del modulo.|
|[CAtlExeModuleT::m_dwPause](#m_dwpause)|Valore di pausa utilizzato per garantire che tutti gli oggetti vengano rilasciati prima dell'arresto.|
|[CAtlExeModuleT::m_dwTimeOut](#m_dwtimeout)|Valore di timeout utilizzato per ritardare lo scaricamento del modulo.|

## <a name="remarks"></a>Osservazioni

`CAtlExeModuleT`rappresenta il modulo per un'applicazione (EXE) e contiene il codice che supporta la creazione di un file EXE, l'elaborazione della riga di comando, la registrazione di oggetti classe, l'esecuzione del ciclo di messaggi e la pulizia all'uscita.

Questa classe è progettata per migliorare le prestazioni quando gli oggetti COM nel server EXE vengono continuamente creati ed eliminati. Dopo il rilascio dell'ultimo oggetto COM, il file EXE attende una durata specificata dal membro dati [CAtlExeModuleT::m_dwTimeOut.](#m_dwtimeout) Se non vi è alcuna attività durante questo periodo (vale a dire, non viene creato alcun oggetto COM), viene avviato il processo di arresto.

Il [cAtlExeModuleT::m_bDelayShutdown](#m_bdelayshutdown) membro dati è un flag utilizzato per determinare se il file EXE deve utilizzare il meccanismo definito in precedenza. Se è impostato su false, il modulo terminerà immediatamente.

Per ulteriori informazioni sui moduli in ATL, vedere [Classi di moduli ATL](../../atl/atl-module-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule (modulo CAtlModule)](../../atl/reference/catlmodule-class.md)

[CAtlModuleT (modulo CAtlModuleT)](../../atl/reference/catlmodulet-class.md)

`CAtlExeModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="catlexemoduletcatlexemodulet"></a><a name="catlexemodulet"></a>Modulo CAtlExeModuleT::CAtlExeModuleT

Costruttore.

```
CAtlExeModuleT() throw();
```

### <a name="remarks"></a>Osservazioni

Se non è stato possibile inizializzare il modulo EXE, WinMain restituirà immediatamente senza ulteriori elaborazioni.

## <a name="catlexemoduletcatlexemodulet"></a><a name="dtor"></a>CAtlExeModuleT:: CAtlExeModuleT

Distruttore.

```
~CAtlExeModuleT() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="catlexemoduletinitializecom"></a><a name="initializecom"></a>Modulo CAtlExeModuleT::InitializeCom

Inizializza COM.

```
static HRESULT InitializeCom() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal costruttore e può essere sottoposto a override per inizializzare COM in modo diverso dall'implementazione predefinita. L'implementazione `CoInitializeEx(NULL, COINIT_MULTITHREADED)` predefinita `CoInitialize(NULL)` chiama o dipende dalla configurazione del progetto.

L'override di questo metodo richiede in genere l'override di [CAtlExeModuleT::UninitializeCom](#uninitializecom).

## <a name="catlexemoduletm_bdelayshutdown"></a><a name="m_bdelayshutdown"></a>CAtlExeModuleT::m_bDelayShutdown

Flag che indica che dovrebbe verificarsi un ritardo nell'arresto del modulo.

```
bool m_bDelayShutdown;
```

### <a name="remarks"></a>Osservazioni

Vedere la [cenni preliminari su CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md) per i dettagli.

## <a name="catlexemoduletm_dwpause"></a><a name="m_dwpause"></a>CAtlExeModuleT::m_dwPause

Valore di pausa utilizzato per garantire che tutti gli oggetti vengano eliminati prima dell'arresto.

```
DWORD m_dwPause;
```

### <a name="remarks"></a>Osservazioni

Modificare questo valore dopo la chiamata a [CAtlExeModuleT::InitializeCom](#initializecom) per impostare il numero di millisecondi utilizzati come valore di pausa per l'arresto del server. Il valore predefinito è 1000 millisecondi.

## <a name="catlexemoduletm_dwtimeout"></a><a name="m_dwtimeout"></a>CAtlExeModuleT::m_dwTimeOut

Valore di timeout utilizzato per ritardare lo scaricamento del modulo.

```
DWORD m_dwTimeOut;
```

### <a name="remarks"></a>Osservazioni

Modificare questo valore dopo la chiamata a [CAtlExeModuleT::InitializeCom](#initializecom) per definire il numero di millisecondi utilizzati come valore di timeout per l'arresto del server. Il valore predefinito è 5000 millisecondi. Vedere la [cenni preliminari su CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md) per ulteriori dettagli.

## <a name="catlexemoduletparsecommandline"></a><a name="parsecommandline"></a>CAtlExeModuleT::ParseCommandLine

Analizza la riga di comando ed esegue la registrazione se necessario.

```
bool ParseCommandLine(LPCTSTR lpCmdLine, HRESULT* pnRetCode) throw();
```

### <a name="parameters"></a>Parametri

*LpCmdLine (linea di comando)*<br/>
Riga di comando passata all'applicazione.

*pnRetCodice*<br/>
HRESULT corrispondente alla registrazione (se ha avuto luogo).

### <a name="return-value"></a>Valore restituito

Restituisce true se l'applicazione deve continuare a essere eseguita, in caso contrario false.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da [CAtlExeModuleT::WinMain](#winmain) e può essere sottoposto a override per gestire le opzioni della riga di comando. L'implementazione predefinita controlla gli argomenti della riga di comando **/RegServer** e **/UnRegServer** ed esegue la registrazione o l'annullamento della registrazione.

## <a name="catlexemoduletpostmessageloop"></a><a name="postmessageloop"></a>CAtlExeModuleT::PostMessageLoop

Questo metodo viene chiamato immediatamente dopo la chiusura del ciclo di messaggi.

```
HRESULT PostMessageLoop() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per eseguire la pulizia dell'applicazione personalizzata. L'implementazione predefinita chiama [CAtlExeModuleT::RevokeClassObjects](#revokeclassobjects).

## <a name="catlexemoduletpremessageloop"></a><a name="premessageloop"></a>CAtlExeModuleT::PreMessageLoop

Questo metodo viene chiamato immediatamente prima di entrare nel ciclo di messaggi.

```
HRESULT PreMessageLoop(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Valore passato come parametro *nShowCmd* in WinMain.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per aggiungere codice di inizializzazione personalizzato per l'applicazione. L'implementazione predefinita registra gli oggetti della classe.

## <a name="catlexemoduletregisterclassobjects"></a><a name="registerclassobjects"></a>CAtlExeModuleT::RegisterClassObjects

Registra l'oggetto classe con OLE in modo che altre applicazioni possano connettersi a esso.

```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```

### <a name="parameters"></a>Parametri

*dwClsContext*<br/>
Specifica il contesto in cui deve essere eseguito l'oggetto classe. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER.

*dwFlags*<br/>
Determina i tipi di connessione all'oggetto classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo S_FALSE se non sono presenti classi da registrare o un errore HRESULT in caso di errore.

## <a name="catlexemoduletrevokeclassobjects"></a><a name="revokeclassobjects"></a>CAtlExeModuleT::RevokeClassObjects

Rimuove l'oggetto classe.

```
HRESULT RevokeClassObjects() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo S_FALSE se non sono presenti classi da registrare o un errore HRESULT in caso di errore.

## <a name="catlexemoduletrun"></a><a name="run"></a>CAtlExeModuleT::Esegui

Questo metodo esegue il codice nel modulo EXE per inizializzare, eseguire il ciclo di messaggi e pulire.

```
HRESULT Run(int nShowCmd = SW_HIDE) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica la modalità di visualizzazione della finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain.](/windows/win32/api/winbase/nf-winbase-winmain) L'impostazione predefinita è SW_HIDE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere sottoposto a override. Tuttavia, in pratica è preferibile eseguire l'override di [CAtlExeModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::RunMessageLoop](#runmessageloop)o [CAtlExeModuleT::PostMessageLoop](#postmessageloop) ).

## <a name="catlexemoduletrunmessageloop"></a><a name="runmessageloop"></a>CAtlExeModuleT::RunMessageLoop

Questo metodo esegue il ciclo di messaggi.

```
void RunMessageLoop() throw();
```

### <a name="remarks"></a>Osservazioni

Questo metodo può essere sottoposto a override per modificare il comportamento del ciclo di messaggi.

## <a name="catlexemoduletuninitializecom"></a><a name="uninitializecom"></a>Modulo CAtlExeModuleT::UninitializeCom

Annulla l'inizializzazione di COM.

```
static void UninitializeCom() throw();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita questo metodo chiama semplicemente [CoUninitialize](/windows/win32/api/combaseapi/nf-combaseapi-couninitialize) e viene chiamato dal distruttore. Eseguire l'override di questo metodo se si esegue l'override [di CAtlExeModuleT::InitializeCom](#initializecom).

## <a name="catlexemoduletunlock"></a><a name="unlock"></a>CAtlExeModuleT::Sblocca

Decrementa il numero di blocchi del modulo.

```
LONG Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore che può essere utile per la diagnostica o il test.

## <a name="catlexemoduletwinmain"></a><a name="winmain"></a>Modulo CAtlExeModuleT::WinMain

Questo metodo implementa il codice necessario per eseguire un file EXE.

```
int WinMain(int nShowCmd) throw();
```

### <a name="parameters"></a>Parametri

*nShowCmd*<br/>
Specifica la modalità di visualizzazione della finestra. Questo parametro può essere uno dei valori descritti nella sezione [WinMain.](/windows/win32/api/winbase/nf-winbase-winmain)

### <a name="return-value"></a>Valore restituito

Restituisce il valore restituito dell'eseguibile.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere sottoposto a override. Se si esegue l'override di [CAtlExeModuleT::PreMessageLoop](#premessageloop), [CAtlExeModuleT::PostMessageLoop](#postmessageloop)o [CAtlExeModuleT::RunMessageLoop](#runmessageloop) non `WinMain` fornisce sufficiente flessibilità, è possibile eseguire l'override della funzione utilizzando questo metodo .

## <a name="see-also"></a>Vedere anche

[Esempio ATLDuck](../../overview/visual-cpp-samples.md)<br/>
[Classe CAtlModuleT](../../atl/reference/catlmodulet-class.md)<br/>
[Classe CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
