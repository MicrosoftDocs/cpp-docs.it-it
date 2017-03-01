---
title: Classe CAtlBaseModule | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CAtlBaseModule
- ATL.CAtlBaseModule
- CAtlBaseModule
dev_langs:
- C++
helpviewer_keywords:
- CAtlBaseModule class
ms.assetid: 55ade80c-9b0c-4c51-933e-2158436c1096
caps.latest.revision: 18
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 4897f6cf7e12a18401720ad663c90491bb0e599d
ms.lasthandoff: 02/24/2017

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
|[CAtlBaseModule::GetHInstanceAt](#gethinstanceat)|Restituisce un handle per un'istanza di risorse specificato.|  
|[CAtlBaseModule::GetModuleInstance](#getmoduleinstance)|Restituisce l'istanza del modulo da un `CAtlBaseModule` oggetto.|  
|[CAtlBaseModule::GetResourceInstance](#getresourceinstance)|Restituisce l'istanza della risorsa da un `CAtlBaseModule` oggetto.|  
|[CAtlBaseModule::RemoveResourceInstance](#removeresourceinstance)|Rimuove un'istanza della risorsa dall'elenco di handle stored.|  
|[CAtlBaseModule::SetResourceInstance](#setresourceinstance)|Imposta l'istanza di risorsa di un `CAtlBaseModule` oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlBaseModule::m_bInitFailed](#m_binitfailed)|Una variabile che indica se l'inizializzazione del modulo non è riuscito.|  
  
## <a name="remarks"></a>Note  
 Un'istanza di `CAtlBaseModule` _AtlBaseModule denominata è presente in ogni progetto ATL, che contiene un handle per l'istanza del modulo, un handle per il modulo che contiene risorse, che per impostazione predefinita, sono la stessa e una matrice di handle ai moduli che fornisce le risorse primarie. `CAtlBaseModule`è possibile accedere in modo sicuro da più thread.  
  
 Questa classe sostituisce obsoleta [CComModule](../../atl/reference/ccommodule-class.md) classe utilizzata nelle versioni precedenti di ATL.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module)  
  
 `CAtlBaseModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore. h  
  
##  <a name="a-nameaddresourceinstancea--catlbasemoduleaddresourceinstance"></a><a name="addresourceinstance"></a>CAtlBaseModule::AddResourceInstance  
 Aggiunge un'istanza di risorsa all'elenco di handle stored.  
  
```
bool AddResourceInstance(HINSTANCE hInst) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hInst`  
 L'istanza di risorsa da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la risorsa è stato aggiunto, false in caso contrario.  
  
##  <a name="a-namecatlbasemodulea--catlbasemodulecatlbasemodule"></a><a name="catlbasemodule"></a>CAtlBaseModule::CAtlBaseModule  
 Costruttore.  
  
```
CAtlBaseModule() throw();
```  
  
### <a name="remarks"></a>Note  
 Crea l'oggetto `CAtlBaseModule`.  
  
##  <a name="a-namegethinstanceata--catlbasemodulegethinstanceat"></a><a name="gethinstanceat"></a>CAtlBaseModule::GetHInstanceAt  
 Restituisce un handle per un'istanza di risorse specificato.  
  
```
HINSTANCE GetHInstanceAt(int i) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *i*  
 Il numero dell'istanza di risorsa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle per l'istanza di risorse, oppure NULL se non esiste alcuna istanza di risorsa corrispondente.  
  
##  <a name="a-namegetmoduleinstancea--catlbasemodulegetmoduleinstance"></a><a name="getmoduleinstance"></a>CAtlBaseModule::GetModuleInstance  
 Restituisce l'istanza del modulo da un `CAtlBaseModule` oggetto.  
  
```
HINSTANCE GetModuleInstance() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'istanza del modulo.  
  
##  <a name="a-namegetresourceinstancea--catlbasemodulegetresourceinstance"></a><a name="getresourceinstance"></a>CAtlBaseModule::GetResourceInstance  
 Restituisce l'istanza della risorsa.  
  
```
HINSTANCE GetResourceInstance() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'istanza della risorsa.  
  
##  <a name="a-namembinitfaileda--catlbasemodulembinitfailed"></a><a name="m_binitfailed"></a>CAtlBaseModule::m_bInitFailed  
 Una variabile che indica se l'inizializzazione del modulo non è riuscito.  
  
```
static bool m_bInitFailed;
```  
  
### <a name="remarks"></a>Note  
 True se il modulo inizializzato, false se non è riuscito a inizializzare.  
  
##  <a name="a-nameremoveresourceinstancea--catlbasemoduleremoveresourceinstance"></a><a name="removeresourceinstance"></a>CAtlBaseModule::RemoveResourceInstance  
 Rimuove un'istanza della risorsa dall'elenco di handle stored.  
  
```
bool RemoveResourceInstance(HINSTANCE hInst) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hInst`  
 L'istanza della risorsa da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la risorsa è stato rimosso correttamente, false in caso contrario.  
  
##  <a name="a-namesetresourceinstancea--catlbasemodulesetresourceinstance"></a><a name="setresourceinstance"></a>CAtlBaseModule::SetResourceInstance  
 Imposta l'istanza di risorsa di un `CAtlBaseModule` oggetto.  
  
```
HINSTANCE SetResourceInstance(HINSTANCE hInst) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hInst`  
 La nuova istanza della risorsa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'istanza di risorsa aggiornata.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)

