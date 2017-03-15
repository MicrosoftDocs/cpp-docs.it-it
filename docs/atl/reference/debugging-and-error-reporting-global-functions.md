---
title: Debug e funzioni globali di segnalazione | Documenti di Microsoft
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 4a412910d13d10606080c14412d33d2b614fdcec
ms.lasthandoff: 02/24/2017

---
# <a name="debugging-and-error-reporting-global-functions"></a>Debug e funzioni globali di segnalazione
Queste funzioni forniscono utili funzionalità di debug e trace.  
  
|||  
|-|-|  
|[AtlHresultFromLastError](http://msdn.microsoft.com/library/74530d7d-3c91-484c-acf3-aff755715d66)|Restituisce un `GetLastError` codice di errore sotto forma di HRESULT.|  
|[AtlHresultFromWin32](http://msdn.microsoft.com/library/63add2dd-274c-4e72-a98c-040b93413a2f)|Converte un codice di errore Win32 in HRESULT.|  
|[AtlReportError](http://msdn.microsoft.com/library/86b046a5-ea18-4ecf-9aab-40fc1eab847c)|Consente di impostare **IErrorInfo** per fornire i dettagli dell'errore a un client.|  
|[AtlThrow](http://msdn.microsoft.com/library/2bd111da-8170-488d-914a-c9bf6b6765f7)|Genera un oggetto `CAtlException`.|  
|[AtlThrowLastWin32](http://msdn.microsoft.com/library/8bce8e56-c7cd-4ebb-8c62-80ebc63a3d07)|Chiamare questa funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.|  
  
##  <a name="a-nameatlhresultfromlasterrora--atlhresultfromlasterror"></a><a name="atlhresultfromlasterror"></a>AtlHresultFromLastError  
 Restituisce il valore del codice dell'ultimo errore del thread chiamante sotto forma di HRESULT.  
  
```
HRESULT AtlHresultFromLastError();
```  
  
### <a name="remarks"></a>Note  
 `AtlHresultFromLastError`chiamate `GetLastError` per ottenere l'ultimo errore e viene restituito l'errore dopo averla convertita in un valore HRESULT utilizzando il **ha restituito HRESULT_FROM_WIN32** (macro).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  

##  <a name="a-nameatlhresultfromwin32a--atlhresultfromwin32"></a><a name="atlhresultfromwin32"></a>AtlHresultFromWin32  
 Converte un codice di errore Win32 in HRESULT.  
  
```
AtlHresultFromWin32(DWORD error);
```  
  
### <a name="parameters"></a>Parametri  
 *Errore*  
 Il valore di errore da convertire.  
  
### <a name="remarks"></a>Note  
 Converte un codice di errore Win32 in HRESULT, utilizzando la macro **ha restituito HRESULT_FROM_WIN32**.  
  
> [!NOTE]
>  Anziché utilizzare **HRESULT_FROM_WIN32(GetLastError())**, utilizzare la funzione [AtlHresultFromLastError](http://msdn.microsoft.com/library/74530d7d-3c91-484c-acf3-aff755715d66).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  

##  <a name="a-nameatlreporterrora--atlreporterror"></a><a name="atlreporterror"></a>AtlReportError  
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
 [in] Il CLSID dell'oggetto segnala l'errore.  
  
 `lpszDesc`  
 [in] Stringa che descrive l'errore. Le versioni Unicode specificare che `lpszDesc` è di tipo **LPCOLESTR**; la versione ANSI specifica un tipo di `LPCSTR`.  
  
 `iid`  
 [in] L'IID dell'interfaccia che definisce l'errore o `GUID_NULL` se l'errore è definito dal sistema operativo.  
  
 `hRes`  
 [in] Il `HRESULT` si desidera venga restituito al chiamante.  
  
 `nID`  
 [in] Identificatore di risorsa in cui è archiviata la stringa di descrizione di errore. Questo valore deve essere tra 0x0200 e 0xFFFF, inclusi. Nelle build di debug un **ASSERT** determinerà se `nID` non indicizza una stringa valida. Nelle build di rilascio, imposterà la stringa di descrizione di errore "Errore sconosciuto".  
  
 `dwHelpID`  
 [in] L'identificatore di contesto della Guida per l'errore.  
  
 `lpszHelpFile`  
 [in] Il percorso e il nome del file della Guida che descrive l'errore.  
  
 `hInst`  
 [in] Handle per la risorsa. Per impostazione predefinita, questo parametro è **__AtlBaseModuleModule::GetResourceInstance**, dove **__AtlBaseModuleModule** è l'istanza globale di [CAtlBaseModule](../../atl/reference/catlbasemodule-class.md) o una classe derivata da esso.  
  
### <a name="return-value"></a>Valore restituito  
 Se il `hRes` parametro è diverso da zero, restituisce il valore di `hRes`. Se `hRes` è zero, le prime quattro versioni di `AtlReportError` restituire `DISP_E_EXCEPTION`. Le due ultime versioni restituiscono il risultato della macro **MAKE_HRESULT (1, FACILITY_ITF,** `nID` **)**.  
  
### <a name="remarks"></a>Note  
 La stringa *lpszDesc* viene utilizzato come descrizione dell'errore. Quando il client riceve il `hRes` restituzione da `AtlReportError`, il client può accedere il **IErrorInfo** struttura per i dettagli dell'errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM&#52;](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_1.cpp)]  
  
> [!CAUTION]
>  Non utilizzare `AtlReportError` in C++ gestori catch. Alcuni override di queste funzioni utilizzano le macro di conversione di stringhe ATL internamente, che a sua volta utilizza il `_alloca` funzione internamente. Utilizzando `AtlReportError` in un blocco catch C++ gestore può causare eccezioni nei gestori catch C++.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
    
##  <a name="a-nameatlthrowa--atlthrow"></a><a name="atlthrow"></a>AtlThrow  
 Chiamare questa funzione per segnalare un errore in base a un codice di stato di `HRESULT`.  
  
```
__declspec(noreturn) inline void AtlThrow(HRESULT hr);
```  
  
### <a name="parameters"></a>Parametri  
 `hr`  
 Valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata dal codice ATL e MFC in caso di una condizione di errore. Può anche essere chiamato dal codice. L'implementazione predefinita di questa funzione dipende dalla definizione del simbolo **ATL_NO_EXCEPTIONS** e al tipo di progetto, MFC o ATL.  
  
 In tutti i casi, questa funzione analizza l'errore HRESULT al debugger.  
  
 In Visual Studio 2015 Update 3 e versioni successive, questa funzione è __declspec(noreturn) con gli attributi per evitare gli avvisi non corretti di SAL.  
  
 Se **ATL_NO_EXCEPTIONS** non è definito in un progetto MFC, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md) in base al valore di HRESULT.  
  
 Se **ATL_NO_EXCEPTIONS** non è definito in un progetto ATL, la funzione genera un [CAtlException](../../atl/reference/catlexception-class.md).  
  
 Se **ATL_NO_EXCEPTIONS** è definito, la funzione genera un errore di asserzione anziché generare un'eccezione.  
  
 Per i progetti ATL, è possibile fornire la propria implementazione di questa funzione può essere utilizzata da ATL in caso di errore. A tale scopo, definire una funzione con la stessa firma `AtlThrow` e #define `AtlThrow` è il nome della funzione. Deve essere effettuata prima di includere atlexcept.h (ovvero che deve essere eseguita prima di includere le intestazioni ATL poiché atlbase. h include atlexcept.h). Attributo della funzione `__declspec(noreturn)` per evitare gli avvisi non corretti di SAL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#95; NVC_ATL_Windowing](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_2.h)]  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldef.h  

##  <a name="a-nameatlthrowlastwin32a--atlthrowlastwin32"></a><a name="atlthrowlastwin32"></a>AtlThrowLastWin32  
 Chiamare questa funzione per segnalare un errore in base al risultato della funzione Windows `GetLastError`.  
  
```
inline void AtlThrowLastWin32();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione analizza il risultato di `GetLastError` al debugger.  
  
 Se **ATL_NO_EXCEPTIONS** non è definito in un progetto MFC, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md) in base al valore restituito da `GetLastError`.  
  
 Se **ATL_NO_EXCEPTIONS** non è definito in un progetto ATL, la funzione genera un [CAtlException](../../atl/reference/catlexception-class.md).  
  
 Se **ATL_NO_EXCEPTIONS** è definito, la funzione genera un errore di asserzione anziché generare un'eccezione.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldef.h  
   
     
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro di debug e la segnalazione errori](../../atl/reference/debugging-and-error-reporting-macros.md)










