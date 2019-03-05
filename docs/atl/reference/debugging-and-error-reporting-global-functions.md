---
title: Debug e funzioni globali di segnalazione degli errori
ms.date: 11/04/2016
f1_keywords:
- atlcomcli/ATL::AtlHresultFromLastError
- atlcom/ATL::AtlReportError
- atldef/ATL::AtlThrow
helpviewer_keywords:
- functions [ATL], error reporting
ms.assetid: 11339c02-98cd-428d-b3b9-7deeb155a6a3
ms.openlocfilehash: f7483b7473383958089b0c88d0b3c2645ddc2a4f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57287570"
---
# <a name="debugging-and-error-reporting-global-functions"></a>Debug e funzioni globali di segnalazione degli errori

Queste funzioni forniscono utili funzionalità di debug e trace.

|||
|-|-|
|[AtlHresultFromLastError](debugging-and-error-reporting-global-functions.md#atlhresultfromlasterror)|Restituisce un `GetLastError` codice di errore sotto forma di un valore HRESULT.|
|[AtlHresultFromWin32](debugging-and-error-reporting-global-functions.md#atlhresultfromwin32)|Converte un codice di errore Win32 in HRESULT.|
|[AtlReportError](debugging-and-error-reporting-global-functions.md#atlreporterror)|Configura `IErrorInfo` per fornire i dettagli dell'errore a un client.|
|[AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)|Genera un oggetto `CAtlException`.|
|[AtlThrowLastWin32](debugging-and-error-reporting-global-functions.md#atlthrowlastwin32)|Chiamare questa funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.|

##  <a name="atlhresultfromlasterror"></a>  AtlHresultFromLastError

Restituisce il valore del codice dell'ultimo errore del thread chiamante sotto forma di HRESULT.

```
HRESULT AtlHresultFromLastError();
```

### <a name="remarks"></a>Note

`AtlHresultFromLastError` le chiamate `GetLastError` per ottenere l'ultimo errore e viene restituito l'errore dopo averla convertita in valore HRESULT utilizzando la macro HRESULT_FROM_WIN32.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli

##  <a name="atlhresultfromwin32"></a>  AtlHresultFromWin32

Converte un codice di errore Win32 in HRESULT.

```
AtlHresultFromWin32(DWORD error);
```

### <a name="parameters"></a>Parametri

*error*<br/>
Il valore di errore da convertire.

### <a name="remarks"></a>Note

Converte un codice di errore Win32 in HRESULT, utilizzando la macro HRESULT_FROM_WIN32.

> [!NOTE]
>  Invece di usare `HRESULT_FROM_WIN32(GetLastError())`, usare la funzione [AtlHresultFromLastError](debugging-and-error-reporting-global-functions.md#atlhresultfromlasterror).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli

##  <a name="atlreporterror"></a>  AtlReportError

Configura il `IErrorInfo` interfaccia per fornire informazioni sugli errori ai client dell'oggetto.

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
[in] Il CLSID dell'oggetto segnalazione dell'errore.

*lpszDesc*<br/>
[in] Stringa che descrive l'errore. Le versioni Unicode specificarlo *lpszDesc* è di tipo LPCOLESTR; la versione ANSI specifica un tipo di LPCSTR.

*iid*<br/>
[in] IID dell'interfaccia che definisce l'errore o GUID_NULL se l'errore è definito dal sistema operativo.

*hRes*<br/>
[in] Il valore HRESULT desiderato restituito al chiamante.

*nID*<br/>
[in] L'identificatore di risorsa in cui è archiviata la stringa di descrizione di errore. Questo valore deve trovarsi tra 0x0200 e 0xFFFF, inclusi. Nelle build di debug, un' **ASSERT** determinerà se *nID* non esegue l'indicizzazione di una stringa valida. Nelle build di rilascio, imposterà la stringa di descrizione di errore a "Errore sconosciuto".

*dwHelpID*<br/>
[in] L'identificatore di contesto della Guida per l'errore.

*lpszHelpFile*<br/>
[in] Il percorso e il nome del file della Guida che descrive l'errore.

*hInst*<br/>
[in] Handle per la risorsa. Per impostazione predefinita, questo parametro è `__AtlBaseModuleModule::GetResourceInstance`, dove `__AtlBaseModuleModule` è l'istanza di global [CAtlBaseModule](../../atl/reference/catlbasemodule-class.md) o una classe derivata da esso.

### <a name="return-value"></a>Valore restituito

Se il *HRESULT* parametro è diverso da zero, restituisce il valore di *HRESULT*. Se *HRESULT* è zero, le prime quattro versioni di `AtlReportError` restituisce DISP_E_EXCEPTION. Le ultime due versioni restituiscono il risultato della macro **MAKE_HRESULT (1, FACILITY_ITF** `nID` **)**.

### <a name="remarks"></a>Note

La stringa *lpszDesc* viene utilizzato come la descrizione di testo dell'errore. Quando il client riceve la *HRESULT* si esce dalla `AtlReportError`, il client può accedere il `IErrorInfo` struttura per i dettagli dell'errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#52](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_1.cpp)]

> [!CAUTION]
>  Non usare `AtlReportError` in C++ gestori catch. Alcuni override di queste funzioni usano internamente, le macro di conversione di stringhe ATL che a loro volta usano i `_alloca` funzione internamente. Usando `AtlReportError` in un blocco catch C++ gestore può causare eccezioni nei gestori catch C++.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="atlthrow"></a>  AtlThrow

Chiamare questa funzione per segnalare un errore in base a un codice di stato HRESULT.

```
__declspec(noreturn) inline void AtlThrow(HRESULT hr);
```

### <a name="parameters"></a>Parametri

*hr*<br/>
Valore HRESULT standard.

### <a name="remarks"></a>Note

Questa funzione viene utilizzata dal codice ATL e MFC in caso di una condizione di errore. Può anche essere chiamato dal codice. L'implementazione predefinita di questa funzione dipende dalla definizione di ATL_NO_EXCEPTIONS il simbolo e il tipo di progetto, MFC o ATL.

In tutti i casi, questa funzione esegue la traccia HRESULT al debugger.

In Visual Studio 2015 Update 3 e versioni successive, questa funzione è __declspec(noreturn) con attributi per evitare la generazione di avvisi SAL spurie.

Se ATL_NO_EXCEPTIONS non è definito in un progetto MFC, questa funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o una [COleException](../../mfc/reference/coleexception-class.md) in base al valore di HRESULT.

Se ATL_NO_EXCEPTIONS non è definito in un progetto ATL, la funzione genera un [CAtlException](../../atl/reference/catlexception-class.md).

Se ATL_NO_EXCEPTIONS è definito, la funzione causa un errore di asserzione anziché generare un'eccezione.

Per i progetti ATL, è possibile fornire la propria implementazione di questa funzione deve essere usata da ATL in caso di errore. A tale scopo, definire una funzione con la stessa firma `AtlThrow` e #define `AtlThrow` nel nome della funzione. Questa operazione deve essere eseguita prima di includere atlexcept.h (il che significa che deve essere eseguita prima di includere le intestazioni ATL poiché atlbase. h include atlexcept.h). La funzione dell'attributo `__declspec(noreturn)` per evitare la generazione di avvisi SAL spurie.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#95](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_2.h)]

## <a name="requirements"></a>Requisiti

**Intestazione:** atldef.h

##  <a name="atlthrowlastwin32"></a>  AtlThrowLastWin32

Chiamare questa funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.

```
inline void AtlThrowLastWin32();
```

### <a name="remarks"></a>Note

Questa funzione analizza il risultato di `GetLastError` al debugger.

Se ATL_NO_EXCEPTIONS non è definito in un progetto MFC, questa funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o una [COleException](../../mfc/reference/coleexception-class.md) basato sul valore restituito da `GetLastError`.

Se ATL_NO_EXCEPTIONS non è definito in un progetto ATL, la funzione genera un [CAtlException](../../atl/reference/catlexception-class.md).

Se ATL_NO_EXCEPTIONS è definito, la funzione causa un errore di asserzione anziché generare un'eccezione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldef.h

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro di debug e segnalazione errori](../../atl/reference/debugging-and-error-reporting-macros.md)
