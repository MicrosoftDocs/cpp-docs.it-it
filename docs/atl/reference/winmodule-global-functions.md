---
title: Funzioni globali WinModule | Documenti di Microsoft
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
ms.assetid: 8ce45a5b-26a7-491f-9096-c09ceca5f2c2
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
ms.openlocfilehash: c477f4500bd4fe78f21f04c58b02d1b493f72c01
ms.lasthandoff: 02/24/2017

---
# <a name="winmodule-global-functions"></a>Funzioni globali WinModule
Queste funzioni forniscono supporto per `_AtlCreateWndData` struttura operazioni.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlWinModuleAddCreateWndData](#atlwinmoduleaddcreatewnddata)|Questa funzione viene utilizzata per inizializzare e aggiungere una struttura `_AtlCreateWndData`.|  
|[AtlWinModuleExtractCreateWndData](#atlwinmoduleextractcreatewnddata)|Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  `            
##  <a name="a-nameatlwinmoduleaddcreatewnddataa--atlwinmoduleaddcreatewnddata"></a><a name="atlwinmoduleaddcreatewnddata"></a>AtlWinModuleAddCreateWndData  
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
 Puntatore al [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) struttura deve essere inizializzato e aggiunto al modulo corrente.  
  
 `pObject`  
 Puntatore a un oggetto **questo** puntatore.  
  
### <a name="remarks"></a>Note  
 Inizializza un `_AtlCreateWndData` struttura, viene utilizzato per archiviare il **questo** puntatore utilizzato per fare riferimento a istanze di classe e lo aggiunge all'elenco a cui fa riferimento un modulo `_ATL_WIN_MODULE70` struttura. Chiamato da [CAtlWinModule::AddCreateWndData](catlwinmodule-class.md#addcreatewnddata).  
  
##  <a name="a-nameatlwinmoduleextractcreatewnddataa--atlwinmoduleextractcreatewnddata"></a><a name="atlwinmoduleextractcreatewnddata"></a>AtlWinModuleExtractCreateWndData  
 Chiamare questa funzione per estrarre una struttura esistente `_AtlCreateWndData`.  
 
```
ATLINLINE ATLAPI_(void*) AtlWinModuleExtractCreateWndData(_ATL_WIN_MODULE* pWinModule);
```  
  
### <a name="parameters"></a>Parametri  
 `pWinModule`  
 Puntatore a un modulo [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione verrà estratto esistente `_AtlCreateWndData` struttura dall'elenco a cui fa riferimento un modulo `_ATL_WIN_MODULE70` struttura.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)

