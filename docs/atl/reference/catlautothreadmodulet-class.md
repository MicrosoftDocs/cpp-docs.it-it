---
title: Classe CAtlAutoThreadModuleT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlAutoThreadModuleT
- ATLBASE/ATL::CAtlAutoThreadModuleT
- ATLBASE/ATL::CAtlAutoThreadModuleT::GetDefaultThreads
dev_langs: C++
helpviewer_keywords: CAtlAutoThreadModuleT class
ms.assetid: ae1667c6-3fb8-47bc-b35d-9ea5e9896d7f
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 082214794b2caa66e8be1127c664e0ffec18a394
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlautothreadmodulet-class"></a>Classe CAtlAutoThreadModuleT
Questa classe fornisce metodi per l'implementazione di un server di pool di thread, modello di apartment COM.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, 
         class ThreadAllocator = CComSimpleThreadAllocator,
         DWORD dwWait = INFINITE>  
class ATL_NO_VTABLE CAtlAutoThreadModuleT : public IAtlAutoThreadModule
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe che implementerà il server COM.  
  
 `ThreadAllocator`  
 La classe di gestione di selezione di thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).  
  
 `dwWait`  
 Specifica l'intervallo di timeout in millisecondi. Il valore predefinito è infinito, ovvero intervallo di timeout del metodo mai allo scadere dell'intervallo.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlAutoThreadModuleT::GetDefaultThreads](#getdefaultthreads)|Questa funzione statica in modo dinamico calcola e restituisce il numero massimo di thread per il modulo EXE, in base al numero di processori.|  
  
## <a name="remarks"></a>Note  
 La classe [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) deriva da `CAtlAutoThreadModuleT` per implementare un pool di thread del modello di apartment COM server. Sostituisce la classe obsoleta [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
> [!NOTE]
>  Questa classe non deve essere utilizzata in una DLL, come il valore predefinito `dwWait` valore infinito provoca un deadlock quando la DLL viene scaricata.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlAutoThreadModule`  
  
 `CAtlAutoThreadModuleT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="getdefaultthreads"></a>CAtlAutoThreadModuleT::GetDefaultThreads  
 Questa funzione statica in modo dinamico calcola e restituisce il numero massimo di thread per il modulo EXE, in base al numero di processori.  
  
```
static int GetDefaultThreads();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di thread da creare nel modulo EXE.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera utilizzare un metodo diverso per il calcolo del numero di thread. Per impostazione predefinita, il numero di thread è in base al numero di processori.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)   
 [Classi Module](../../atl/atl-module-classes.md)
