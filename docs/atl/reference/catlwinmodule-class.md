---
title: Classe CAtlWinModule | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlWinModule
- ATLBASE/ATL::CAtlWinModule
- ATLBASE/ATL::CAtlWinModule::CAtlWinModule
- ATLBASE/ATL::CAtlWinModule::AddCreateWndData
- ATLBASE/ATL::CAtlWinModule::ExtractCreateWndData
dev_langs: C++
helpviewer_keywords: CAtlWinModule class
ms.assetid: 7ec844af-0f68-4a34-b0c8-9de50a025df0
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dcaf3d6573432b7f6f16826b2551a7e9330abed9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CAtlWinModule::ExtractCreateWndData](#extractcreatewnddata)|Restituisce un puntatore all'oggetto dati modulo window.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce supporto per tutte le classi ATL che richiedono le funzionalità di windowing.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)  
  
 `CAtlWinModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="addcreatewnddata"></a>CAtlWinModule::AddCreateWndData  
 Questo metodo inizializza e lo aggiunge un `_AtlCreateWndData` struttura.  
  
```
void AddCreateWndData(_AtlCreateWndData* pData, void* pObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pData`  
 Puntatore al `_AtlCreateWndData` struttura deve essere inizializzato e aggiunti al modulo corrente.  
  
 `pObject`  
 Puntatore a un oggetto **questo** puntatore.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [AtlWinModuleAddCreateWndData](winmodule-global-functions.md#atlwinmoduleaddcreatewnddata) che inizializza un [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) struttura. Questa struttura archivierà il **questo** puntatore, utilizzato per ottenere l'istanza della classe nella routine della finestra.  
  
##  <a name="catlwinmodule"></a>CAtlWinModule::CAtlWinModule  
 Costruttore.  
  
```
CAtlWinModule();
```  
  
### <a name="remarks"></a>Note  
 Se l'inizializzazione non riesce, un **EXCEPTION_NONCONTINUABLE** viene generata l'eccezione.  
  
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
 Restituisce un puntatore al `_AtlCreateWndData` struttura aggiunto in precedenza con [CAtlWinModule::AddCreateWndData](#addcreatewnddata), oppure NULL se non è disponibile alcun oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi Module](../../atl/atl-module-classes.md)
