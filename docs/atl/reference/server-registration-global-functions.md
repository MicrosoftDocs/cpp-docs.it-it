---
title: Funzioni globali di registrazione server | Documenti di Microsoft
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
ms.assetid: c2f0a35d-857c-4538-a44d-c4ea0db63b06
caps.latest.revision: 19
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
ms.openlocfilehash: 4ace3bb50d824827071260e3f43cec3cda32742f
ms.lasthandoff: 02/24/2017

---
# <a name="server-registration-global-functions"></a>Funzioni globali di registrazione server
Queste funzioni forniscono il supporto per la registrazione e annullamento della registrazione di oggetti server nella mappa oggetto.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlComModuleRegisterServer](#atlcommoduleregisterserver)|Questa funzione viene chiamata per registrare ogni oggetto nella mappa oggetto.|  
|[AtlComModuleUnregisterServer](#atlcommoduleunregisterserver)|Questa funzione viene chiamata per annullare la registrazione di ogni oggetto nella mappa oggetto.|  
|[AtlComModuleRegisterClassObjects](#atlcommoduleregisterclassobjects)|Questa funzione viene chiamata per registrare gli oggetti della classe.|  
|[AtlComModuleRevokeClassObjects](#atlcommodulerevokeclassobjects)|Questa funzione viene chiamata per revocare gli oggetti della classe da un modulo COM.|  
|[AtlComModuleGetClassObject](#atlcommodulegetclassobject)|Questa funzione viene chiamata per ottenere l'oggetto della classe.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
   
##  <a name="a-nameatlcommoduleregisterservera--atlcommoduleregisterserver"></a><a name="atlcommoduleregisterserver"></a>AtlComModuleRegisterServer  
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
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 `AtlComModuleRegisterServer`Consente di analizzare la mappa di oggetti ATL generato automaticamente e registra ogni oggetto nella mappa. Se `pCLSID` non è NULL, è necessario solo l'oggetto a cui fa riferimento `pCLSID` è registrato; in caso contrario tutti gli oggetti registrati.  
  
 Questa funzione viene chiamata [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver).  
  
##  <a name="a-nameatlcommoduleunregisterservera--atlcommoduleunregisterserver"></a><a name="atlcommoduleunregisterserver"></a>AtlComModuleUnregisterServer  
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
 Punta al CLSID dell'oggetto per annullare la registrazione. Se NULL tutti gli oggetti nella mappa oggetto verrà annullata la registrazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 `AtlComModuleUnregisterServer`Consente di analizzare la mappa oggetto ATL e Annulla la registrazione di ogni oggetto nella mappa. Se `pCLSID` non è NULL, è necessario solo l'oggetto a cui fa riferimento `pCLSID` è stata annullata la registrazione; in caso contrario tutti gli oggetti non sono registrati.  
  
 Questa funzione viene chiamata [CAtlComModule::UnregisterServer](catlcommodule-class.md#unregisterserver).  
  
##  <a name="a-nameatlcommoduleregisterclassobjectsa--atlcommoduleregisterclassobjects"></a><a name="atlcommoduleregisterclassobjects"></a>AtlComModuleRegisterClassObjects  
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
 Specifica il contesto in cui viene eseguita l'oggetto della classe. I valori possibili sono CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER o CLSCTX_LOCAL_SERVER. Vedere [CLSCTX](http://msdn.microsoft.com/library/windows/desktop/ms693716) per ulteriori dettagli.  
  
 `dwFlags`  
 Determina i tipi di connessione per l'oggetto della classe. I valori possibili sono REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE o REGCLS_MULTI_SEPARATE. Vedere [REGCLS](http://msdn.microsoft.com/library/windows/desktop/ms679697) per ulteriori dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto viene utilizzata da [CComModule::RegisterClassObjects](ccommodule-class.md#registerclassobjects) (obsoleta in ATL 7.0) e [CAtlExeModuleT::RegisterClassObjects](catlexemodulet-class.md#registerclassobjects).  
  
##  <a name="a-nameatlcommodulerevokeclassobjectsa--atlcommodulerevokeclassobjects"></a><a name="atlcommodulerevokeclassobjects"></a>AtlComModuleRevokeClassObjects  
 Questa funzione viene chiamata per rimuovere le class factory dalla tabella degli oggetti in esecuzione.  
  
```
ATLINLINE ATLAPI AtlComModuleRevokeClassObjects(_ATL_COM_MODULE* pComModule);
```  
  
### <a name="parameters"></a>Parametri  
 `pComModule`  
 Puntatore al modulo COM.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto viene utilizzata da [CComModule::RevokeClassObjects](ccommodule-class.md#revokeclassobjects) (obsoleta in ATL 7.0) e [CAtlExeModuleT::RevokeClassObjects](catlexemodulet-class.md#revokeclassobjects).  
  
##  <a name="a-nameatlcommodulegetclassobjecta--atlcommodulegetclassobject"></a><a name="atlcommodulegetclassobject"></a>AtlComModuleGetClassObject  
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
 L'IID dell'interfaccia richiesta.  
  
 `ppv`  
 Un puntatore al puntatore a interfaccia identificato da `riid`. Se l'oggetto non supporta questa interfaccia, `ppv` è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione di supporto viene utilizzata da [CComModule::GetClassObject](ccommodule-class.md#getclassobject) (obsoleta in ATL 7.0) e [CAtlDllModuleT::GetClassObject](catldllmodulet-class.md#getclassobject).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)

