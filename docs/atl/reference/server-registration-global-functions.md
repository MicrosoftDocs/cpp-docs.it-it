---
title: Funzioni globali di registrazione del serverServer Registration Global Functions
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlComModuleRegisterServer
- atlbase/ATL::AtlComModuleUnregisterServer
- atlbase/ATL::AtlComModuleRegisterClassObjects
- atlbase/ATL::AtlComModuleRevokeClassObjects
- atlbase/ATL::AtlComModuleGetClassObject
ms.assetid: c2f0a35d-857c-4538-a44d-c4ea0db63b06
ms.openlocfilehash: fb6353b52f487d0511c54223fe9e31dab88704b2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325921"
---
# <a name="server-registration-global-functions"></a>Funzioni globali di registrazione del serverServer Registration Global Functions

Queste funzioni forniscono supporto per la registrazione e l'annullamento della registrazione di oggetti server nella mappa oggetti.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[AtlComModuleRegisterServer](#atlcommoduleregisterserver)|Questa funzione viene chiamata per registrare ogni oggetto nella mappa oggetto.|
|[AtlComModuleUnregisterServer](#atlcommoduleunregisterserver)|Questa funzione viene chiamata per annullare la registrazione di ogni oggetto nella mappa oggetto.|
|[AtlComModuleRegisterClassObjects](#atlcommoduleregisterclassobjects)|Questa funzione viene chiamata per registrare gli oggetti della classe.|
|[AtlComModuleRevokeClassObjects](#atlcommodulerevokeclassobjects)|Questa funzione viene chiamata per revocare gli oggetti di classe da un modulo COM.|
|[AtlComModuleGetClassObject](#atlcommodulegetclassobject)|Questa funzione viene chiamata per ottenere l'oggetto classe.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atlcommoduleregisterserver"></a><a name="atlcommoduleregisterserver"></a>AtlComModuleRegisterServer (registro di sistema)

Questa funzione viene chiamata per registrare ogni oggetto nella mappa oggetto.

```
ATLINLINE ATLAPI AtlComModuleRegisterServer(
    _ATL_COM_MODULE* pComModule,
    BOOL bRegTypeLib,
    const CLSID* pCLSID);
```

### <a name="parameters"></a>Parametri

*pComModulo*<br/>
Puntatore al modulo COM.

*bRegTypeLib (in questo stato instato)*<br/>
TRUESe la libreria dei tipi deve essere registrata.

*PCLSID (intattoLOGI)*<br/>
Punta al CLSID dell'oggetto da registrare. Se NULL, tutti gli oggetti nella mappa degli oggetti verranno registrati.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

`AtlComModuleRegisterServer`scorre la mappa oggetti generata automaticamente ATL e registra ogni oggetto nella mappa. Se *pCLSID* non è NULL, viene registrato solo l'oggetto a cui fa riferimento *pCLSID;* in caso contrario, tutti gli oggetti vengono registrati.

Questa funzione viene chiamata da [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver).

## <a name="atlcommoduleunregisterserver"></a><a name="atlcommoduleunregisterserver"></a>AtlComModuleUnregisterServer (ServerUtenteACom)AtlComModuleUnregisterServer (ServerUtente

Questa funzione viene chiamata per annullare la registrazione di ogni oggetto nella mappa oggetto.

```
ATLINLINE ATLAPI AtlComModuleUnregisterServer(
    _ATL_COM_MODULE* pComModule,
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID);
```

### <a name="parameters"></a>Parametri

*pComModulo*<br/>
Puntatore al modulo COM.

*bUnRegTypeLib (in formazione instato)*<br/>
TRUESe la libreria dei tipi deve essere registrata.

*PCLSID (intattoLOGI)*<br/>
Punta al CLSID dell'oggetto di cui annullare la registrazione. Se NULL tutti gli oggetti nella mappa degli oggetti verranno annullati.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

`AtlComModuleUnregisterServer`scorre la mappa degli oggetti ATL e annulla la registrazione di ogni oggetto nella mappa. Se *pCLSID* non è NULL, viene annullata la registrazione solo dell'oggetto a cui fa riferimento *pCLSID;* in caso contrario, tutti gli oggetti vengono annullati.

Questa funzione viene chiamata da [CAtlComModule::UnregisterServer](catlcommodule-class.md#unregisterserver).

## <a name="atlcommoduleregisterclassobjects"></a><a name="atlcommoduleregisterclassobjects"></a>AtlComModuleRegisterClassObjects

Questa funzione viene chiamata per registrare gli oggetti della classe.

```
ATLINLINE ATLAPI AtlComModuleRegisterClassObjects(
    _ATL_COM_MODULE* pComModule,
    DWORD dwClsContext,
    DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*pComModulo*<br/>
Puntatore al modulo COM.

*dwClsContext*<br/>
Specifica il contesto in cui deve essere eseguito l'oggetto classe. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER. Per ulteriori dettagli, vedere [CLSCTX.](/windows/win32/api/wtypesbase/ne-wtypesbase-clsctx)

*dwFlags*<br/>
Determina i tipi di connessione all'oggetto classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE. Per ulteriori dettagli, vedere [REGCLS.](/windows/win32/api/combaseapi/ne-combaseapi-regcls)

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione di supporto viene utilizzata da [CComModule::RegisterClassObjects](ccommodule-class.md#registerclassobjects) (obsoleto in ATL 7.0) e [CAtlExeModuleT::RegisterClassObjects](catlexemodulet-class.md#registerclassobjects).

## <a name="atlcommodulerevokeclassobjects"></a><a name="atlcommodulerevokeclassobjects"></a>AtlComModuleRevokeClassObjects

Questa funzione viene chiamata per rimuovere le class factory dalla tabella degli oggetti in esecuzione.

```
ATLINLINE ATLAPI AtlComModuleRevokeClassObjects(_ATL_COM_MODULE* pComModule);
```

### <a name="parameters"></a>Parametri

*pComModulo*<br/>
Puntatore al modulo COM.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione di supporto viene utilizzata da [CComModule::RevokeClassObjects](ccommodule-class.md#revokeclassobjects) (obsoleto in ATL 7.0) e [CAtlExeModuleT::RevokeClassObjects](catlexemodulet-class.md#revokeclassobjects).

## <a name="atlcommodulegetclassobject"></a><a name="atlcommodulegetclassobject"></a>AtlComModuleGetClassObject

Questa funzione viene chiamata per restituire la class factory.

```
ATLINLINE ATLAPI AtlComModuleGetClassObject(
    _ATL_COM_MODULE* pComModule,
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv);
```

### <a name="parameters"></a>Parametri

*pComModulo*<br/>
Puntatore al modulo COM.

*rclsid*<br/>
CLSID dell'oggetto da creare.

*Riid*<br/>
IID dell'interfaccia richiesta.

*Ppv*<br/>
Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppv* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione di supporto viene utilizzata da [CComModule::GetClassObject](ccommodule-class.md#getclassobject) (obsoleto in ATL 7.0) e [CAtlDllModuleT::GetClassObject](catldllmodulet-class.md#getclassobject).

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
