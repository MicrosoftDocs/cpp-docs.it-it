---
title: Classe CComSimpleThreadAllocator | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComSimpleThreadAllocator
- ATLBASE/ATL::CComSimpleThreadAllocator
- ATLBASE/ATL::CComSimpleThreadAllocator::GetThread
dev_langs:
- C++
helpviewer_keywords:
- threading [ATL], selecting threads
- ATL threads
- CComSimpleThreadAllocator class
- ATL threads, allocating
ms.assetid: 66b2166a-8c50-49fd-b8e4-7f293470327d
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 04946d07bea39eb739c31a3254355d3527d2e9c3
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="ccomsimplethreadallocator-class"></a>Classe CComSimpleThreadAllocator
Questa classe gestisce la selezione di thread per la classe `CComAutoThreadModule`.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComSimpleThreadAllocator
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSimpleThreadAllocator::GetThread](#getthread)|Seleziona un thread.|  
  
## <a name="remarks"></a>Note  
 `CComSimpleThreadAllocator`gestisce la selezione di thread per [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md). `CComSimpleThreadAllocator::GetThread`semplicemente scorre ogni thread e restituisce il successivo nella sequenza.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="getthread"></a>CComSimpleThreadAllocator::GetThread  
 Seleziona un thread, specificando il thread successivo nella sequenza.  
  
```
int GetThread(CComApartment* /* pApt */, int nThreads);
```  
  
### <a name="parameters"></a>Parametri  
 `pApt`  
 Non usato nell'implementazione predefinita ATL.  
  
 `nThreads`  
 Il numero massimo di thread nel modulo EXE.  
  
### <a name="return-value"></a>Valore restituito  
 Un numero intero compreso tra zero e ( `nThreads` - 1). Identifica uno dei thread nel modulo EXE.  
  
### <a name="remarks"></a>Note  
 È possibile eseguire l'override `GetThread` per fornire un altro metodo di selezione oppure per utilizzare il `pApt` parametro.  
  
 `GetThread`viene chiamato da [CComAutoThreadModule::CreateInstance](../../atl/reference/ccomautothreadmodule-class.md#createinstance).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComApartment](../../atl/reference/ccomapartment-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

