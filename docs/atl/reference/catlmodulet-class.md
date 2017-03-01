---
title: Classe CAtlModuleT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CAtlModuleT<T>
- ATL.CAtlModuleT
- ATL.CAtlModuleT<T>
- ATL::CAtlModuleT
- CAtlModuleT
dev_langs:
- C++
helpviewer_keywords:
- CAtlModuleT class
ms.assetid: 9b74d02f-9117-47b1-a05e-c5945f83dd2b
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
ms.openlocfilehash: 9c0c6a2302932df06db7166d83fe9a561dfe38ac
ms.lasthandoff: 02/24/2017

---
# <a name="catlmodulet-class"></a>Classe CAtlModuleT
Questa classe implementa un modulo ATL.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE CAtlModuleT : public CAtlModule
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `CAtlModuleT`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModuleT::CAtlModuleT](#catlmodulet)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModuleT::InitLibId](#initlibid)|Inizializza il membro dati che contiene il GUID del modulo corrente.|  
|[CAtlModuleT::RegisterAppId](#registerappid)|Aggiunge il file EXE nel Registro di sistema.|  
|[CAtlModuleT::RegisterServer](#registerserver)|Aggiunge il servizio nel Registro di sistema.|  
|[CAtlModuleT::UnregisterAppId](#unregisterappid)|Rimuove il file EXE nel Registro di sistema.|  
|[CAtlModuleT::UnregisterServer](#unregisterserver)|Rimuove il servizio dal Registro di sistema.|  
|[CAtlModuleT::UpdateRegistryAppId](#updateregistryappid)|Aggiorna le informazioni del file EXE nel Registro di sistema.|  
  
## <a name="remarks"></a>Note  
 `CAtlModuleT`, derivato da [CAtlModule](../../atl/reference/catlmodule-class.md), implementa un file eseguibile (EXE) o un modulo ATL servizio (EXE). Un modulo eseguibile è un server locale, out-of-process, mentre un modulo di servizio è un'applicazione Windows che viene eseguito in background all'avvio di Windows.  
  
 `CAtlModuleT`fornisce supporto per l'inizializzazione, la registrazione e annullamento della registrazione del modulo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  

  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 `CAtlModuleT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="a-namecatlmoduleta--catlmoduletcatlmodulet"></a><a name="catlmodulet"></a>CAtlModuleT::CAtlModuleT  
 Costruttore.  
  
```
CAtlModuleT() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [CAtlModuleT::InitLibId](#initlibid).  
  
##  <a name="a-nameinitlibida--catlmoduletinitlibid"></a><a name="initlibid"></a>CAtlModuleT::InitLibId  
 Inizializza il membro dati che contiene il GUID del modulo corrente.  
  
```
static void InitLibId() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamato dal costruttore [CAtlModuleT::CAtlModuleT](#catlmodulet).  
  
##  <a name="a-nameregisterappida--catlmoduletregisterappid"></a><a name="registerappid"></a>CAtlModuleT::RegisterAppId  
 Aggiunge il file EXE nel Registro di sistema.  
  
```
HRESULT RegisterAppId() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="a-nameregisterservera--catlmoduletregisterserver"></a><a name="registerserver"></a>CAtlModuleT::RegisterServer  
 Aggiunge il servizio nel Registro di sistema.  
  
```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bRegTypeLib`  
 TRUE se la libreria dei tipi deve essere registrato. Il valore predefinito è FALSE.  
  
 `pCLSID`  
 Punta al CLSID dell'oggetto da registrare. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà registrato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="a-nameunregisterappida--catlmoduletunregisterappid"></a><a name="unregisterappid"></a>CAtlModuleT::UnregisterAppId  
 Rimuove il file EXE nel Registro di sistema.  
  
```
HRESULT UnregisterAppId() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="a-nameunregisterservera--catlmoduletunregisterserver"></a><a name="unregisterserver"></a>CAtlModuleT::UnregisterServer  
 Rimuove il servizio dal Registro di sistema.  
  
```
HRESULT UnregisterServer(
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bUnRegTypeLib`  
 TRUE se la libreria dei tipi è inoltre possibile annullare la registrazione.  
  
 `pCLSID`  
 Punta al CLSID dell'oggetto per annullare la registrazione. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà annullata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="a-nameupdateregistryappida--catlmoduletupdateregistryappid"></a><a name="updateregistryappid"></a>CAtlModuleT::UpdateRegistryAppId  
 Aggiorna le informazioni del file EXE nel Registro di sistema.  
  
```
static HRESULT WINAPI UpdateRegistryAppId(BOOL /* bRegister*/) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bRegister`  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe da CAtlModule](../../atl/reference/catlmodule-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)

