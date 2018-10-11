---
title: Funzioni globali di registrazione di server | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlbase/ATL::AtlComModuleRegisterServer
- atlbase/ATL::AtlComModuleUnregisterServer
- atlbase/ATL::AtlComModuleRegisterClassObjects
- atlbase/ATL::AtlComModuleRevokeClassObjects
- atlbase/ATL::AtlComModuleGetClassObject
dev_langs:
- C++
ms.assetid: c2f0a35d-857c-4538-a44d-c4ea0db63b06
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c43e28e035691b04181bef2162de828f3271a600
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49082754"
---
# <a name="server-registration-global-functions"></a>Funzioni globali di registrazione server

Queste funzioni forniscono il supporto per la registrazione e annullamento della registrazione di oggetti server nella mappa oggetto.

> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel Runtime di Windows.

|||
|-|-|
|[AtlComModuleRegisterServer](#atlcommoduleregisterserver)|Questa funzione viene chiamata per registrare ogni oggetto nella mappa oggetto.|
|[AtlComModuleUnregisterServer](#atlcommoduleunregisterserver)|Questa funzione viene chiamata per annullare la registrazione di ogni oggetto nella mappa oggetto.|
|[AtlComModuleRegisterClassObjects](#atlcommoduleregisterclassobjects)|Questa funzione viene chiamata per registrare gli oggetti della classe.|
|[AtlComModuleRevokeClassObjects](#atlcommodulerevokeclassobjects)|Questa funzione viene chiamata per revocare gli oggetti della classe da un modulo COM.|
|[AtlComModuleGetClassObject](#atlcommodulegetclassobject)|Questa funzione viene chiamata per ottenere l'oggetto della classe.|  

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="atlcommoduleregisterserver"></a>  AtlComModuleRegisterServer

Questa funzione viene chiamata per registrare ogni oggetto nella mappa oggetto.

```
ATLINLINE ATLAPI AtlComModuleRegisterServer(
    _ATL_COM_MODULE* pComModule,
    BOOL bRegTypeLib,
    const CLSID* pCLSID);
```

### <a name="parameters"></a>Parametri

*pComModule*<br/>
Puntatore al modulo COM.

*bRegTypeLib*<br/>
TRUE se la libreria dei tipi deve essere registrato.

*pCLSID*<br/>
Punta al CLSID dell'oggetto da registrare. Se NULL, verranno registrati tutti gli oggetti nella mappa oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

`AtlComModuleRegisterServer` descrive la mappa di oggetti generato automaticamente ATL e registra ogni oggetto nella mappa. Se *pCLSID* non è NULL, è necessario solo l'oggetto a cui fa riferimento *pCLSID* è registrata; in caso contrario, tutti gli oggetti registrati.

Questa funzione viene chiamata da [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver).

##  <a name="atlcommoduleunregisterserver"></a>  AtlComModuleUnregisterServer

Questa funzione viene chiamata per annullare la registrazione di ogni oggetto nella mappa oggetto.

```
ATLINLINE ATLAPI AtlComModuleUnregisterServer(
    _ATL_COM_MODULE* pComModule,
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID);
```

### <a name="parameters"></a>Parametri

*pComModule*<br/>
Puntatore al modulo COM.

*bUnRegTypeLib*<br/>
TRUE se la libreria dei tipi deve essere registrato.

*pCLSID*<br/>
Punta al CLSID dell'oggetto da cui annullare la registrazione. Se NULL tutti gli oggetti nella mappa oggetto sarà annullata la registrazione.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

`AtlComModuleUnregisterServer` viene illustrato il mapping di oggetto ATL e Annulla la registrazione di ogni oggetto nella mappa. Se *pCLSID* non è NULL, è necessario solo l'oggetto a cui fa riferimento *pCLSID* non registrato; in caso contrario tutti gli oggetti non sono registrati.

Questa funzione viene chiamata da [CAtlComModule::UnregisterServer](catlcommodule-class.md#unregisterserver).

##  <a name="atlcommoduleregisterclassobjects"></a>  AtlComModuleRegisterClassObjects

Questa funzione viene chiamata per registrare gli oggetti della classe.

```
ATLINLINE ATLAPI AtlComModuleRegisterClassObjects(
    _ATL_COM_MODULE* pComModule,
    DWORD dwClsContext,
    DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*pComModule*<br/>
Puntatore al modulo COM.

*dwClsContext*<br/>
Specifica il contesto in cui l'oggetto della classe deve essere eseguito. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER. Visualizzare [CLSCTX](/windows/desktop/api/wtypesbase/ne-wtypesbase-tagclsctx) per altri dettagli.

*dwFlags*<br/>
Determina i tipi di connessione per l'oggetto della classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE. Visualizzare [REGCLS](/windows/desktop/api/combaseapi/ne-combaseapi-tagregcls) per altri dettagli.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questa funzione helper usata da [CComModule::RegisterClassObjects](ccommodule-class.md#registerclassobjects) (obsoleta in ATL 7.0) e [CAtlExeModuleT::RegisterClassObjects](catlexemodulet-class.md#registerclassobjects).

##  <a name="atlcommodulerevokeclassobjects"></a>  AtlComModuleRevokeClassObjects

Questa funzione viene chiamata per rimuovere le class factory dalla tabella degli oggetti in esecuzione.

```
ATLINLINE ATLAPI AtlComModuleRevokeClassObjects(_ATL_COM_MODULE* pComModule);
```

### <a name="parameters"></a>Parametri

*pComModule*<br/>
Puntatore al modulo COM.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questa funzione helper usata da [CComModule::RevokeClassObjects](ccommodule-class.md#revokeclassobjects) (obsoleta in ATL 7.0) e [CAtlExeModuleT::RevokeClassObjects](catlexemodulet-class.md#revokeclassobjects).

##  <a name="atlcommodulegetclassobject"></a>  AtlComModuleGetClassObject

Questa funzione viene chiamata per restituire la class factory.

```
ATLINLINE ATLAPI AtlComModuleGetClassObject(
    _ATL_COM_MODULE* pComModule,
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv);
```

### <a name="parameters"></a>Parametri

*pComModule*<br/>
Puntatore al modulo COM.

*rclsid*<br/>
Il CLSID dell'oggetto da creare.

*riid*<br/>
IID dell'interfaccia richiesta.

*ppv*<br/>
Un puntatore al puntatore a interfaccia identificato dal *riid*. Se l'oggetto non supporta questa interfaccia, *ppv* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questa funzione helper usata da [CComModule::GetClassObject](ccommodule-class.md#getclassobject) (obsoleta in ATL 7.0) e [CAtlDllModuleT::GetClassObject](catldllmodulet-class.md#getclassobject).

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
