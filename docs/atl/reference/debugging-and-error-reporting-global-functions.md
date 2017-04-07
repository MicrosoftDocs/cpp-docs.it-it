---
title: Debug e funzioni globali di segnalazione degli errori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- functions [ATL], error reporting
ms.assetid: 11339c02-98cd-428d-b3b9-7deeb155a6a3
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 6c328c82c5e2ef5ff6f413d4eb3f1b62e2b693d8
ms.lasthandoff: 03/31/2017

---
# <a name="debugging-and-error-reporting-global-functions"></a>Debug e funzioni globali di segnalazione degli errori
Queste funzioni forniscono utili funzionalità di debug e traccia.  
  
|||  
|-|-|  
|[AtlHresultFromLastError](debugging-and-error-reporting-global-functions.md#atlhresultfromlasterror)|Restituisce un `GetLastError` codice di errore sotto forma di HRESULT.|  
|[AtlHresultFromWin32](debugging-and-error-reporting-global-functions.md#atlhresultfromwin32)|Converte un codice di errore Win32 in HRESULT.|  
|[AtlReportError](debugging-and-error-reporting-global-functions.md#atlreporterror)|Consente di impostare **IErrorInfo** per fornire i dettagli dell'errore a un client.|  
|[AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)|Genera un oggetto `CAtlException`.|  
|[AtlThrowLastWin32](debugging-and-error-reporting-global-functions.md#atlthrowlastwin32)|Chiamare questa funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.|  
  
##  <a name="atlhresultfromlasterror"></a>AtlHresultFromLastError  
 Restituisce il valore del codice dell'ultimo errore del thread chiamante sotto forma di HRESULT.  
  
```
HRESULT AtlHresultFromLastError();
```  
  
### <a name="remarks"></a>Note  
 `AtlHresultFromLastError`chiamate `GetLastError` per ottenere l'ultimo errore e viene restituito l'errore dopo averla convertita in un valore HRESULT usando il **HRESULT_FROM_WIN32** (macro).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  

##  <a name="atlhresultfromwin32"></a>AtlHresultFromWin32  
 Converte un codice di errore Win32 in HRESULT.  
  
```
AtlHresultFromWin32(DWORD error);
```  
  
### <a name="parameters"></a>Parametri  
 *Errore*  
 Il valore di errore da convertire.  
  
### <a name="remarks"></a>Note  
 Converte un codice di errore Win32 in HRESULT, utilizzando la macro **HRESULT_FROM_WIN32**.  
  
> [!NOTE]
>  Anziché utilizzare **HRESULT_FROM_WIN32(GetLastError())**, utilizzare la funzione [AtlHresultFromLastError](debugging-and-error-reporting-global-functions.md#atlhresultfromlasterror).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  

##  <a name="atlreporterror"></a>AtlReportError  
 Consente di impostare il `IErrorInfo` interfaccia per fornire informazioni sugli errori ai client dell'oggetto.  
  
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
 `clsid`  
 [in] Il CLSID dell'oggetto segnalazione dell'errore.  
  
 `lpszDesc`  
 [in] Stringa che descrive l'errore. Le versioni Unicode specificare che `lpszDesc` è di tipo **LPCOLESTR**; la versione ANSI specifica un tipo di `LPCSTR`.  
  
 `iid`  
 [in] L'IID dell'interfaccia che definisce l'errore o `GUID_NULL` se l'errore è definito dal sistema operativo.  
  
 `hRes`  
 [in] Il `HRESULT` desiderato restituito al chiamante.  
  
 `nID`  
 [in] Identificatore della risorsa in cui è archiviata la stringa di descrizione di errore. Questo valore deve trovarsi tra 0x0200 e 0xFFFF, inclusi. Nelle build di debug un **ASSERT** determinerà se `nID` non indicizza una stringa valida. Nelle build di rilascio, la stringa di descrizione di errore verrà impostata su "Unknown Error".  
  
 `dwHelpID`  
 [in] L'identificatore di contesto della Guida per l'errore.  
  
 `lpszHelpFile`  
 [in] Il percorso e il nome del file della Guida che descrive l'errore.  
  
 `hInst`  
 [in] Handle per la risorsa. Per impostazione predefinita, questo parametro è **__AtlBaseModuleModule::GetResourceInstance**, dove **__AtlBaseModuleModule** è l'istanza globale di [CAtlBaseModule](../../atl/reference/catlbasemodule-class.md) o una classe derivata da esso.  
  
### <a name="return-value"></a>Valore restituito  
 Se il `hRes` parametro è diverso da zero, restituisce il valore di `hRes`. Se `hRes` è zero, le prime quattro versioni di `AtlReportError` restituire `DISP_E_EXCEPTION`. Le due ultime versioni restituiscono il risultato della macro **MAKE_HRESULT (1, FACILITY_ITF,** `nID` **)**.  
  
### <a name="remarks"></a>Note  
 La stringa *lpszDesc* viene utilizzato come descrizione dell'errore. Quando il client riceve il `hRes` restituzione da `AtlReportError`, il client può accedere il **IErrorInfo** struttura per informazioni dettagliate sull'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM #52](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_1.cpp)]  
  
> [!CAUTION]
>  Non utilizzare `AtlReportError` in C++ gestori catch. Alcuni override di queste funzioni utilizzano le macro di conversione di stringhe ATL internamente, che a sua volta utilizza il `_alloca` funzione internamente. Utilizzando `AtlReportError` in un blocco catch C++ gestore può causare eccezioni nei gestori catch C++.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
    
##  <a name="atlthrow"></a>AtlThrow  
 Chiamare questa funzione per segnalare un errore in base a un codice di stato di `HRESULT`.  
  
```
__declspec(noreturn) inline void AtlThrow(HRESULT hr);
```  
  
### <a name="parameters"></a>Parametri  
 `hr`  
 Valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata dal codice ATL e MFC in caso di una condizione di errore. Inoltre, può essere chiamato dal codice. L'implementazione predefinita di questa funzione dipende dalla definizione del simbolo **ATL_NO_EXCEPTIONS** e il tipo di progetto, MFC o ATL.  
  
 In tutti i casi, questa funzione analizza il valore HRESULT al debugger.  
  
 In Visual Studio 2015 Update 3 e versioni successive, questa funzione è __declspec(noreturn) con attributi per evitare gli avvisi SAL non corretti.  
  
 Se **ATL_NO_EXCEPTIONS** non è definito in un progetto MFC, questa funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md) in base al valore di HRESULT.  
  
 Se **ATL_NO_EXCEPTIONS** non è definito in un progetto ATL, la funzione genera un [CAtlException](../../atl/reference/catlexception-class.md).  
  
 Se **ATL_NO_EXCEPTIONS** è definito, la funzione causa un errore di asserzione anziché generare un'eccezione.  
  
 Per i progetti ATL, è possibile fornire la propria implementazione di questa funzione può essere utilizzata da ATL in caso di errore. A tale scopo, definire una propria funzione con la stessa firma `AtlThrow` e #define `AtlThrow` sarà il nome della funzione. Questa operazione deve essere eseguita prima di includere atlexcept.h (ovvero che deve essere eseguito prima di includere le intestazioni ATL poiché atlbase. h include atlexcept.h). La funzione dell'attributo `__declspec(noreturn)` per evitare gli avvisi SAL non corretti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#95; NVC_ATL_Windowing](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_2.h)]  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldef.h  

##  <a name="atlthrowlastwin32"></a>AtlThrowLastWin32  
 Chiamare questa funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.  
  
```
inline void AtlThrowLastWin32();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione analizza il risultato di `GetLastError` al debugger.  
  
 Se **ATL_NO_EXCEPTIONS** non è definito in un progetto MFC, questa funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md) in base al valore restituito da `GetLastError`.  
  
 Se **ATL_NO_EXCEPTIONS** non è definito in un progetto ATL, la funzione genera un [CAtlException](../../atl/reference/catlexception-class.md).  
  
 Se **ATL_NO_EXCEPTIONS** è definito, la funzione causa un errore di asserzione anziché generare un'eccezione.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldef.h  
   
     
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro di debug e segnalazione errori](../../atl/reference/debugging-and-error-reporting-macros.md)










