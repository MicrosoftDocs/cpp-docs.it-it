---
title: Funzioni globali di debug e segnalazione erroriDebugging and Error Reporting Global Functions
ms.date: 11/04/2016
f1_keywords:
- atlcomcli/ATL::AtlHresultFromLastError
- atlcom/ATL::AtlReportError
- atldef/ATL::AtlThrow
helpviewer_keywords:
- functions [ATL], error reporting
ms.assetid: 11339c02-98cd-428d-b3b9-7deeb155a6a3
ms.openlocfilehash: f7636b1f4e13340b223edd8c63c39bbeb21c8bd0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330199"
---
# <a name="debugging-and-error-reporting-global-functions"></a>Funzioni globali di debug e segnalazione erroriDebugging and Error Reporting Global Functions

Queste funzioni forniscono utili funzionalità di debug e traccia.

|||
|-|-|
|[AtlHresultFromLastError](debugging-and-error-reporting-global-functions.md#atlhresultfromlasterror)|Restituisce `GetLastError` un codice di errore sotto forma di HRESULT.|
|[AtlHresultFromWin32](debugging-and-error-reporting-global-functions.md#atlhresultfromwin32)|Converte un codice di errore Win32 in HRESULT.|
|[AtlReportError](debugging-and-error-reporting-global-functions.md#atlreporterror)|Configura `IErrorInfo` per fornire i dettagli dell'errore a un client.|
|[AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)|Genera un oggetto `CAtlException`.|
|[AtlThrowLastWin32](debugging-and-error-reporting-global-functions.md#atlthrowlastwin32)|Chiamare questa funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.|

## <a name="atlhresultfromlasterror"></a><a name="atlhresultfromlasterror"></a>AtlHresultFromLastError (Errore di AtlHresultFromLastError)

Restituisce il valore del codice dell'ultimo errore del thread chiamante sotto forma di HRESULT.

```
HRESULT AtlHresultFromLastError();
```

### <a name="remarks"></a>Osservazioni

`AtlHresultFromLastError`chiama `GetLastError` per ottenere l'ultimo errore e restituisce l'errore dopo averlo convertito in HRESULT utilizzando la macro HRESULT_FROM_WIN32.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli.h

## <a name="atlhresultfromwin32"></a><a name="atlhresultfromwin32"></a>AtlHresultFromWin32

Converte un codice di errore Win32 in HRESULT.

```
AtlHresultFromWin32(DWORD error);
```

### <a name="parameters"></a>Parametri

*error*<br/>
Valore di errore da convertire.

### <a name="remarks"></a>Osservazioni

Converte un codice di errore Win32 in un HRESULT, utilizzando la macro HRESULT_FROM_WIN32.

> [!NOTE]
> Anziché `HRESULT_FROM_WIN32(GetLastError())`utilizzare , utilizzare la funzione [AtlHresultFromLastError](debugging-and-error-reporting-global-functions.md#atlhresultfromlasterror).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli.h

## <a name="atlreporterror"></a><a name="atlreporterror"></a>AtlReportError (errore di AtlReport)

Imposta l'interfaccia `IErrorInfo` per fornire informazioni sugli errori ai client dell'oggetto.

```
HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    LPCOLESTR lpszDesc,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    LPCOLESTR lpszDesc,
    DWORD dwHelpID,
    LPCOLESTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    LPCSTR lpszDesc,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    LPCSTR lpszDesc,
    DWORD dwHelpID,
    LPCSTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    UINT nID,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0,
    HINSTANCE hInst = _AtlBaseModule.GetResourceInstance());

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    UINT nID,
    DWORD dwHelpID,
    LPCOLESTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0,
    HINSTANCE hInst = _AtlBaseModule.GetResourceInstance());
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] CLSID dell'oggetto che segnala l'errore.

*lpszDesc*<br/>
[in] Stringa che descrive l'errore. Le versioni Unicode specificano che *lpszDesc* è di tipo LPCOLESTR; la versione ANSI specifica un tipo di LPCSTR.

*Iid*<br/>
[in] IID dell'interfaccia che definisce l'errore o GUID_NULL se l'errore è definito dal sistema operativo.

*hRes*<br/>
[in] HRESULT che si desidera venga restituito al chiamante.

*nID*<br/>
[in] Identificatore di risorsa in cui è archiviata la stringa di descrizione dell'errore. Questo valore deve essere compreso tra 0x0200 e 0xFFFF, inclusi. Nelle build di debug, un **ASSERT** verrà risultato se *nID* non indicizza una stringa valida. Nelle build di rilascio, la stringa di descrizione dell'errore verrà impostata su "Errore sconosciuto".

*dwHelpID (ID DwHelp)*<br/>
[in] Identificatore del contesto della Guida per l'errore.

*lpszHelpFile (file)*<br/>
[in] Il percorso e il nome del file della Guida che descrive l'errore.

*hInst*<br/>
[in] Handle per la risorsa. Per impostazione predefinita, questo parametro è `__AtlBaseModuleModule::GetResourceInstance`, dove `__AtlBaseModuleModule` è l'istanza globale di [CAtlBaseModule](../../atl/reference/catlbasemodule-class.md) o di una classe derivata da esso.

### <a name="return-value"></a>Valore restituito

Se il parametro *hRes* è diverso da zero, restituisce il valore di *hRes*. Se *hRes* è zero, le `AtlReportError` prime quattro versioni di return DISP_E_EXCEPTION. Le ultime due versioni restituiscono il risultato della macro **MAKE_HRESULT( 1, FACILITY_ITF,** `nID` **)**.

### <a name="remarks"></a>Osservazioni

La stringa *lpszDesc* viene utilizzata come descrizione testuale dell'errore. Quando il client riceve i *repository restituiti* da `AtlReportError`, `IErrorInfo` il client può accedere alla struttura per informazioni dettagliate sull'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#52](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_1.cpp)]

> [!CAUTION]
> Non utilizzare `AtlReportError` i gestori catch di C. Alcuni override di queste funzioni utilizzano le macro di conversione `_alloca` delle stringhe ATL internamente, che a loro volta utilizzano la funzione internamente. L'utilizzo `AtlReportError` in un gestore catch in C, può causare eccezioni nei gestori catch di C.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="atlthrow"></a><a name="atlthrow"></a>AtlThrow

Chiamare questa funzione per segnalare un errore in base a un codice di stato HRESULT.

```
__declspec(noreturn) inline void AtlThrow(HRESULT hr);
```

### <a name="parameters"></a>Parametri

*hr*<br/>
Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata dal codice ATL e MFC in caso di una condizione di errore. Può anche essere chiamato dal proprio codice. L'implementazione predefinita di questa funzione dipende dalla definizione del simbolo _ATL_NO_EXCEPTIONS e dal tipo di progetto, MFC o ATL.

In tutti i casi, questa funzione traccia HRESULT nel debugger.

In Visual Studio 2015 Update 3 e versioni successive, a questa funzione viene attribuito __declspec(noreturn) per evitare avvisi SAL spuri.

Se _ATL_NO_EXCEPTIONS non è definito in un progetto MFC, questa funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o un [COleException](../../mfc/reference/coleexception-class.md) in base al valore di HRESULT.

Se _ATL_NO_EXCEPTIONS non è definito in un progetto ATL, la funzione genera [un'eccezione CAtlException](../../atl/reference/catlexception-class.md).

Se _ATL_NO_EXCEPTIONS è definito, la funzione causa un errore di asserzione anziché generare un'eccezione.

Per i progetti ATL, è possibile fornire la propria implementazione di questa funzione da utilizzare da ATL in caso di errore. A tale scopo, definire la propria `AtlThrow` funzione `AtlThrow` con la stessa firma e #define il nome della funzione. Questa operazione deve essere eseguita prima di includere atlexcept.h (il che significa che deve essere eseguita prima di includere tutte le intestazioni ATL poiché atlbase.h include atlexcept.h). Attribuire `__declspec(noreturn)` la funzione per evitare avvisi SAL spurie.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#95](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_2.h)]

## <a name="requirements"></a>Requisiti

**Intestazione:** atldef.h

## <a name="atlthrowlastwin32"></a><a name="atlthrowlastwin32"></a>AtlThrowLastWin32

Chiamare questa funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.

```
inline void AtlThrowLastWin32();
```

### <a name="remarks"></a>Osservazioni

Questa funzione consente di `GetLastError` tracciare il risultato del debugger.

Se _ATL_NO_EXCEPTIONS non è definito in un progetto MFC, questa funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) `GetLastError`o [un COleException](../../mfc/reference/coleexception-class.md) in base al valore restituito da .

Se _ATL_NO_EXCEPTIONS non è definito in un progetto ATL, la funzione genera [un'eccezione CAtlException](../../atl/reference/catlexception-class.md).

Se _ATL_NO_EXCEPTIONS è definito, la funzione causa un errore di asserzione anziché generare un'eccezione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldef.h

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro di debug e segnalazione errori](../../atl/reference/debugging-and-error-reporting-macros.md)
