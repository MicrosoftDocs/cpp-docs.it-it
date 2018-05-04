---
title: Funzioni globali WinModule | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlbase/ATL::AtlWinModuleAddCreateWndData
- atlbase/ATL::AtlWinModuleExtractCreateWndData
dev_langs:
- C++
ms.assetid: 8ce45a5b-26a7-491f-9096-c09ceca5f2c2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 514703e2c7c968035e9defc7677943377778a761
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="winmodule-global-functions"></a>Funzioni globali WinModule
Queste funzioni forniscono il supporto per `_AtlCreateWndData` struttura operazioni.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.  
  
|||  
|-|-|  
|[AtlWinModuleAddCreateWndData](#atlwinmoduleaddcreatewnddata)|Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.|  
|[AtlWinModuleExtractCreateWndData](#atlwinmoduleextractcreatewnddata)|Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  `            
##  <a name="atlwinmoduleaddcreatewnddata"></a>  AtlWinModuleAddCreateWndData  
 Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.  
   
```
ATLINLINE ATLAPI_(void) AtlWinModuleAddCreateWndData(
    _ATL_WIN_MODULE* pWinModule,
    _AtlCreateWndData* pData,
    void* pObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pWinModule`  
 Puntatore a un modulo [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) struttura.  
  
 `pData`  
 Puntatore al [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) struttura deve essere inizializzato e aggiunti al modulo corrente.  
  
 `pObject`  
 Puntatore a un oggetto **questo** puntatore.  
  
### <a name="remarks"></a>Note  
 Inizializza un `_AtlCreateWndData` struttura, viene utilizzato per archiviare il **questo** puntatore utilizzato per fare riferimento a istanze di classe e lo aggiunge all'elenco a cui fa riferimento un modulo `_ATL_WIN_MODULE70` struttura. Chiamato da [CAtlWinModule::AddCreateWndData](catlwinmodule-class.md#addcreatewnddata).  
  
##  <a name="atlwinmoduleextractcreatewnddata"></a>  AtlWinModuleExtractCreateWndData  
 Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.  
 
```
ATLINLINE ATLAPI_(void*) AtlWinModuleExtractCreateWndData(_ATL_WIN_MODULE* pWinModule);
```  
  
### <a name="parameters"></a>Parametri  
 `pWinModule`  
 Puntatore a un modulo [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione consentirà di estrarre un oggetto esistente `_AtlCreateWndData` struttura dall'elenco a cui fa riferimento un modulo `_ATL_WIN_MODULE70` struttura.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)
