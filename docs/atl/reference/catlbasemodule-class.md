---
title: Classe CAtlBaseModule | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlBaseModule
- ATLCORE/ATL::CAtlBaseModule
- ATLCORE/ATL::CAtlBaseModule::CAtlBaseModule
- ATLCORE/ATL::CAtlBaseModule::AddResourceInstance
- ATLCORE/ATL::CAtlBaseModule::GetHInstanceAt
- ATLCORE/ATL::CAtlBaseModule::GetModuleInstance
- ATLCORE/ATL::CAtlBaseModule::GetResourceInstance
- ATLCORE/ATL::CAtlBaseModule::RemoveResourceInstance
- ATLCORE/ATL::CAtlBaseModule::SetResourceInstance
- ATLCORE/ATL::CAtlBaseModule::m_bInitFailed
dev_langs:
- C++
helpviewer_keywords:
- CAtlBaseModule class
ms.assetid: 55ade80c-9b0c-4c51-933e-2158436c1096
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 88671ae94a1df10f3866dd2ae2e70092d1ca0c4d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlbasemodule-class"></a>Classe CAtlBaseModule
Questa classe viene creata un'istanza in ogni progetto ATL.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlBaseModule : public _ATL_BASE_MODULE
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlBaseModule::CAtlBaseModule](#catlbasemodule)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlBaseModule::AddResourceInstance](#addresourceinstance)|Aggiunge un'istanza di risorsa all'elenco di handle stored.|  
|[CAtlBaseModule::GetHInstanceAt](#gethinstanceat)|Restituisce un handle a un'istanza di risorsa specificata.|  
|[CAtlBaseModule::GetModuleInstance](#getmoduleinstance)|Restituisce l'istanza del modulo da un `CAtlBaseModule` oggetto.|  
|[CAtlBaseModule::GetResourceInstance](#getresourceinstance)|Restituisce l'istanza di risorsa da un `CAtlBaseModule` oggetto.|  
|[CAtlBaseModule::RemoveResourceInstance](#removeresourceinstance)|Rimuove un'istanza di risorsa dall'elenco di handle stored.|  
|[CAtlBaseModule::SetResourceInstance](#setresourceinstance)|Imposta l'istanza di risorsa di un `CAtlBaseModule` oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlBaseModule::m_bInitFailed](#m_binitfailed)|Una variabile che indica se l'inizializzazione del modulo non è riuscito.|  
  
## <a name="remarks"></a>Note  
 Un'istanza di `CAtlBaseModule` _AtlBaseModule denominato è presente in ogni progetto ATL, contenente un handle per l'istanza del modulo, un handle per il modulo che contiene le risorse (che per impostazione predefinita, sono dello stesso) e una matrice di handle ai moduli fornendo primario risorse. `CAtlBaseModule`è possibile accedere in modo sicuro da più thread.  
  
 Questa classe sostituisce obsoleta [CComModule](../../atl/reference/ccommodule-class.md) classe utilizzata nelle versioni precedenti di ATL.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module)  
  
 `CAtlBaseModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore  
  
##  <a name="addresourceinstance"></a>CAtlBaseModule::AddResourceInstance  
 Aggiunge un'istanza di risorsa all'elenco di handle stored.  
  
```
bool AddResourceInstance(HINSTANCE hInst) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hInst`  
 Istanza di risorsa da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la risorsa è stata aggiunta, false in caso contrario.  
  
##  <a name="catlbasemodule"></a>CAtlBaseModule::CAtlBaseModule  
 Costruttore.  
  
```
CAtlBaseModule() throw();
```  
  
### <a name="remarks"></a>Note  
 Crea l'oggetto `CAtlBaseModule`.  
  
##  <a name="gethinstanceat"></a>CAtlBaseModule::GetHInstanceAt  
 Restituisce un handle a un'istanza di risorsa specificata.  
  
```
HINSTANCE GetHInstanceAt(int i) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *i*  
 Il numero dell'istanza di risorsa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle per l'istanza di risorsa, oppure NULL se non esiste alcuna istanza di risorsa corrispondente.  
  
##  <a name="getmoduleinstance"></a>CAtlBaseModule::GetModuleInstance  
 Restituisce l'istanza del modulo da un `CAtlBaseModule` oggetto.  
  
```
HINSTANCE GetModuleInstance() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'istanza del modulo.  
  
##  <a name="getresourceinstance"></a>CAtlBaseModule::GetResourceInstance  
 Restituisce l'istanza di risorsa.  
  
```
HINSTANCE GetResourceInstance() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'istanza di risorsa.  
  
##  <a name="m_binitfailed"></a>CAtlBaseModule::m_bInitFailed  
 Una variabile che indica se l'inizializzazione del modulo non è riuscito.  
  
```
static bool m_bInitFailed;
```  
  
### <a name="remarks"></a>Note  
 True se il modulo è inizializzato, false se non è riuscito a inizializzare.  
  
##  <a name="removeresourceinstance"></a>CAtlBaseModule::RemoveResourceInstance  
 Rimuove un'istanza di risorsa dall'elenco di handle stored.  
  
```
bool RemoveResourceInstance(HINSTANCE hInst) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hInst`  
 L'istanza di risorsa da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la risorsa è stata rimossa, false in caso contrario.  
  
##  <a name="setresourceinstance"></a>CAtlBaseModule::SetResourceInstance  
 Imposta l'istanza di risorsa di un `CAtlBaseModule` oggetto.  
  
```
HINSTANCE SetResourceInstance(HINSTANCE hInst) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hInst`  
 La nuova istanza di risorsa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'istanza di risorsa aggiornata.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi Module](../../atl/atl-module-classes.md)
