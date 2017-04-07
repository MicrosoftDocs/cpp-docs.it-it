---
title: Classe CAtlWinModule | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlWinModule
- ATLBASE/ATL::CAtlWinModule
- ATLBASE/ATL::CAtlWinModule::CAtlWinModule
- ATLBASE/ATL::CAtlWinModule::AddCreateWndData
- ATLBASE/ATL::CAtlWinModule::ExtractCreateWndData
dev_langs:
- C++
helpviewer_keywords:
- CAtlWinModule class
ms.assetid: 7ec844af-0f68-4a34-b0c8-9de50a025df0
caps.latest.revision: 20
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 6db3ae9e610605524683e984f2aba602b1daf0d4
ms.lasthandoff: 02/24/2017

---
# <a name="catlwinmodule-class"></a>Classe CAtlWinModule
Questa classe fornisce supporto per i componenti di finestra ATL.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlWinModule : public _ATL_WIN_MODULE
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlWinModule::CAtlWinModule](#catlwinmodule)|Costruttore.|  
|[CAtlWinModule:: ~ CAtlWinModule](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlWinModule::AddCreateWndData](#addcreatewnddata)|Aggiunge un oggetto dati.|  
|[CAtlWinModule::ExtractCreateWndData](#extractcreatewnddata)|Restituisce un puntatore all'oggetto finestra modulo dati.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce supporto per tutte le classi ATL che richiedono funzionalità windowing.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)  
  
 `CAtlWinModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="addcreatewnddata"></a>CAtlWinModule::AddCreateWndData  
 Questo metodo inizializza e aggiunge un `_AtlCreateWndData` struttura.  
  
```
void AddCreateWndData(_AtlCreateWndData* pData, void* pObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pData`  
 Puntatore al `_AtlCreateWndData` struttura deve essere inizializzato e aggiunto al modulo corrente.  
  
 `pObject`  
 Puntatore a un oggetto **questo** puntatore.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [AtlWinModuleAddCreateWndData](http://msdn.microsoft.com/library/8463a6ed-07ea-4aad-92ec-ded681601b32) che inizializza un [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) struttura. Questa struttura archivierà il **questo** puntatore, utilizzato per ottenere l'istanza della classe nella routine della finestra.  
  
##  <a name="catlwinmodule"></a>CAtlWinModule::CAtlWinModule  
 Costruttore.  
  
```
CAtlWinModule();
```  
  
### <a name="remarks"></a>Note  
 Se un errore di inizializzazione, un **EXCEPTION_NONCONTINUABLE** eccezione.  
  
##  <a name="dtor"></a>CAtlWinModule:: ~ CAtlWinModule  
 Distruttore.  
  
```
~CAtlWinModule();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="extractcreatewnddata"></a>CAtlWinModule::ExtractCreateWndData  
 Questo metodo restituisce un puntatore a un `_AtlCreateWndData` struttura.  
  
```
void* ExtractCreateWndData();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il `_AtlCreateWndData` struttura aggiunto in precedenza con [CAtlWinModule::AddCreateWndData](#addcreatewnddata), oppure NULL se non è disponibile alcun oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)

