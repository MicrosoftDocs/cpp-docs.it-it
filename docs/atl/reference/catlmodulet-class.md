---
title: Classe CAtlModuleT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlModuleT
- ATLBASE/ATL::CAtlModuleT
- ATLBASE/ATL::CAtlModuleT::CAtlModuleT
- ATLBASE/ATL::CAtlModuleT::InitLibId
- ATLBASE/ATL::CAtlModuleT::RegisterAppId
- ATLBASE/ATL::CAtlModuleT::RegisterServer
- ATLBASE/ATL::CAtlModuleT::UnregisterAppId
- ATLBASE/ATL::CAtlModuleT::UnregisterServer
- ATLBASE/ATL::CAtlModuleT::UpdateRegistryAppId
dev_langs: C++
helpviewer_keywords: CAtlModuleT class
ms.assetid: 9b74d02f-9117-47b1-a05e-c5945f83dd2b
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a4f1ba8d59e85a480af38e5b9778fee0c714a0db
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CAtlModuleT::InitLibId](#initlibid)|Inizializza il membro dei dati che contiene il GUID del modulo corrente.|  
|[CAtlModuleT::RegisterAppId](#registerappid)|Aggiunge il file EXE nel Registro di sistema.|  
|[CAtlModuleT::RegisterServer](#registerserver)|Aggiunge il servizio nel Registro di sistema.|  
|[CAtlModuleT::UnregisterAppId](#unregisterappid)|Rimuove il file EXE dal Registro di sistema.|  
|[CAtlModuleT::UnregisterServer](#unregisterserver)|Rimuove il servizio dal Registro di sistema.|  
|[CAtlModuleT::UpdateRegistryAppId](#updateregistryappid)|Aggiorna le informazioni del file EXE nel Registro di sistema.|  
  
## <a name="remarks"></a>Note  
 `CAtlModuleT`, derivato da [CAtlModule](../../atl/reference/catlmodule-class.md), implementa un eseguibile (EXE) o un modulo ATL servizio (EXE). Un modulo eseguibile è un server locale, out-of-process, mentre un modulo del servizio è un'applicazione Windows che viene eseguito in background all'avvio di Windows.  
  
 `CAtlModuleT`fornisce supporto per l'inizializzazione, la registrazione e annullamento della registrazione del modulo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  

  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 `CAtlModuleT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="catlmodulet"></a>CAtlModuleT::CAtlModuleT  
 Costruttore.  
  
```
CAtlModuleT() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [CAtlModuleT::InitLibId](#initlibid).  
  
##  <a name="initlibid"></a>CAtlModuleT::InitLibId  
 Inizializza il membro dei dati che contiene il GUID del modulo corrente.  
  
```
static void InitLibId() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamato dal costruttore [CAtlModuleT::CAtlModuleT](#catlmodulet).  
  
##  <a name="registerappid"></a>CAtlModuleT::RegisterAppId  
 Aggiunge il file EXE nel Registro di sistema.  
  
```
HRESULT RegisterAppId() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="registerserver"></a>CAtlModuleT::RegisterServer  
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
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="unregisterappid"></a>CAtlModuleT::UnregisterAppId  
 Rimuove il file EXE dal Registro di sistema.  
  
```
HRESULT UnregisterAppId() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="unregisterserver"></a>CAtlModuleT::UnregisterServer  
 Rimuove il servizio dal Registro di sistema.  
  
```
HRESULT UnregisterServer(
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bUnRegTypeLib`  
 TRUE se la libreria dei tipi è anche possibile annullare la registrazione.  
  
 `pCLSID`  
 Punta al CLSID dell'oggetto da cui annullare la registrazione. Se NULL (valore predefinito), tutti gli oggetti nella mappa oggetto verrà annullata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="updateregistryappid"></a>CAtlModuleT::UpdateRegistryAppId  
 Aggiorna le informazioni del file EXE nel Registro di sistema.  
  
```
static HRESULT WINAPI UpdateRegistryAppId(BOOL /* bRegister*/) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bRegister`  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe da CAtlModule](../../atl/reference/catlmodule-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi Module](../../atl/atl-module-classes.md)
