---
title: Funzioni globali di registrazione server | Documenti Microsoft
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
ms.openlocfilehash: 08a4141ab5ff27e44f663a4d5f267c2b7d754283
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32364705"
---
# <a name="server-registration-global-functions"></a>Funzioni globali di registrazione server
Queste funzioni forniscono il supporto per la registrazione e annullamento della registrazione di oggetti server nella mappa oggetto.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.  
  
|||  
|-|-|  
|[AtlComModuleRegisterServer](#atlcommoduleregisterserver)|Questa funzione viene chiamata per registrare ogni oggetto nella mappa oggetto.|  
|[AtlComModuleUnregisterServer](#atlcommoduleunregisterserver)|Questa funzione viene chiamata per annullare la registrazione di ogni oggetto nella mappa oggetto.|  
|[AtlComModuleRegisterClassObjects](#atlcommoduleregisterclassobjects)|Questa funzione viene chiamata per registrare gli oggetti della classe.|  
|[AtlComModuleRevokeClassObjects](#atlcommodulerevokeclassobjects)|Questa funzione viene chiamata per revocare oggetti della classe da un modulo COM.|  
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
 `pComModule`  
 Puntatore al modulo COM.  
  
 `bRegTypeLib`  
 TRUE se la libreria dei tipi deve essere registrato.  
  
 `pCLSID`  
 Punta al CLSID dell'oggetto da registrare. Se NULL, vengono registrati tutti gli oggetti nella mappa oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 `AtlComModuleRegisterServer` esamina la mappa di oggetti generati automaticamente ATL e registra ogni oggetto nella mappa. Se `pCLSID` non è NULL, è necessario solo l'oggetto a cui fa riferimento `pCLSID` è registrato; in caso contrario tutti gli oggetti registrati.  
  
 Questa funzione viene chiamata [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver).  
  
##  <a name="atlcommoduleunregisterserver"></a>  AtlComModuleUnregisterServer  
 Questa funzione viene chiamata per annullare la registrazione di ogni oggetto nella mappa oggetto.  
  
```
ATLINLINE ATLAPI AtlComModuleUnregisterServer(
    _ATL_COM_MODULE* pComModule,
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID);
```  
  
### <a name="parameters"></a>Parametri  
 `pComModule`  
 Puntatore al modulo COM.  
  
 `bUnRegTypeLib`  
 TRUE se la libreria dei tipi deve essere registrato.  
  
 `pCLSID`  
 Punta al CLSID dell'oggetto da cui annullare la registrazione. Se NULL tutti gli oggetti nella mappa oggetto verrà annullati.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 `AtlComModuleUnregisterServer` esamina la mappa di oggetto ATL e Annulla la registrazione di ogni oggetto nella mappa. Se `pCLSID` non è NULL, è necessario solo l'oggetto a cui fa riferimento `pCLSID` annullare la registrazione; in caso contrario tutti gli oggetti non sono registrati.  
  
 Questa funzione viene chiamata [CAtlComModule::UnregisterServer](catlcommodule-class.md#unregisterserver).  
  
##  <a name="atlcommoduleregisterclassobjects"></a>  AtlComModuleRegisterClassObjects  
 Questa funzione viene chiamata per registrare gli oggetti della classe.  
  
```
ATLINLINE ATLAPI AtlComModuleRegisterClassObjects(
    _ATL_COM_MODULE* pComModule,
    DWORD dwClsContext,
    DWORD dwFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `pComModule`  
 Puntatore al modulo COM.  
  
 `dwClsContext`  
 Specifica il contesto in cui viene eseguita l'oggetto della classe. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER. Vedere [CLSCTX](http://msdn.microsoft.com/library/windows/desktop/ms693716) per altri dettagli.  
  
 `dwFlags`  
 Determina i tipi di connessione per l'oggetto della classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE. Vedere [REGCLS](http://msdn.microsoft.com/library/windows/desktop/ms679697) per altri dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto usata da [CComModule::RegisterClassObjects](ccommodule-class.md#registerclassobjects) (obsoleta in ATL 7.0) e [CAtlExeModuleT::RegisterClassObjects](catlexemodulet-class.md#registerclassobjects).  
  
##  <a name="atlcommodulerevokeclassobjects"></a>  AtlComModuleRevokeClassObjects  
 Questa funzione viene chiamata per rimuovere le class factory dalla tabella degli oggetti in esecuzione.  
  
```
ATLINLINE ATLAPI AtlComModuleRevokeClassObjects(_ATL_COM_MODULE* pComModule);
```  
  
### <a name="parameters"></a>Parametri  
 `pComModule`  
 Puntatore al modulo COM.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto usata da [CComModule::RevokeClassObjects](ccommodule-class.md#revokeclassobjects) (obsoleta in ATL 7.0) e [CAtlExeModuleT::RevokeClassObjects](catlexemodulet-class.md#revokeclassobjects).  
  
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
 `pComModule`  
 Puntatore al modulo COM.  
  
 `rclsid`  
 Il CLSID dell'oggetto da creare.  
  
 `riid`  
 IID dell'interfaccia richiesta.  
  
 `ppv`  
 Un puntatore al puntatore a interfaccia identificato dal `riid`. Se l'oggetto non supporta questa interfaccia, `ppv` è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto usata da [CComModule::GetClassObject](ccommodule-class.md#getclassobject) (obsoleta in ATL 7.0) e [CAtlDllModuleT::GetClassObject](catldllmodulet-class.md#getclassobject).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)
