---
title: Lavoro archetipo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- Worker archetype
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
caps.latest.revision: 16
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 046160644cca3bd23e4293a3c52692d2b4c94cd5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="worker-archetype"></a>Archetipo di lavoro
Classi conformi al *lavoro* archetipo fornire il codice per gli elementi di lavoro di processo in coda nel pool di thread.  
  
 **Implementazione**  
  
 Per implementare una classe conforme all'archetipo, la classe deve fornire le funzionalità seguenti:  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Inizializzare](#initialize)|Chiamato per inizializzare l'oggetto di lavoro prima di tutte le richieste vengono passate a [Execute](#execute).|  
|[Eseguire](#execute)|Chiamato per elaborare un elemento di lavoro.|  
|[Terminare](#terminate)|Chiamato da non inizializzare l'oggetto di lavoro dopo che tutte le richieste sono state passate a [Execute](#execute).|  
  
|Typedef|Descrizione|  
|-------------|-----------------|  
|[RequestType](#requesttype)|Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe di lavoro.|  
  
 Una tipica *lavoro* classe è simile al seguente:  
  
 [!code-cpp[NVC_ATL_Utilities&#137;](../../atl/codesnippet/cpp/worker-archetype_1.cpp)]  
  
 **Implementazioni esistenti**  
  
 Queste classi sono conformi all'archetipo:  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste dal pool di thread e li passa all'oggetto di lavoro che viene creato e distrutto per ogni richiesta.|  
  
 **Utilizzo**  
  
 Questi parametri di modello prevede che la classe di conformarsi all'archetipo:  
  
|Nome parametro|Utilizzata da|  
|--------------------|-------------|  
|*Lavoro*|[CThreadPool](../../atl/reference/cthreadpool-class.md)|  
|*Lavoro*|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
## <a name="execute"></a>WorkerArchetype::Execute
Chiamato per elaborare un elemento di lavoro.  
  
  
  
```  
void Execute(
    RequestType request,  
    void* pvWorkerParam,  
    OVERLAPPED* pOverlapped);
```  
  
#### <a name="parameters"></a>Parametri  
 `request`  
 L'elemento di lavoro da elaborare. L'elemento di lavoro è dello stesso tipo `RequestType`.  
  
 `pvWorkerParam`  
 Un parametro personalizzato riconosciuto dalla classe di lavoro. Anche passato a `WorkerArchetype::Initialize` e `Terminate`.  
  
 `pOverlapped`  
 Un puntatore per il [OVERLAPPED](http://msdn.microsoft.com/library/windows/desktop/ms684342) struttura utilizzata per creare la coda in cui sono stati accodati.  
  
## <a name="initialize"></a>WorkerArchetype::Initialize
Chiamato per inizializzare l'oggetto di lavoro prima di tutte le richieste vengono passate a `WorkerArchetype::Execute`.  
```
BOOL Initialize(void* pvParam) throw();
```  
  
#### <a name="parameters"></a>Parametri  
 `pvParam`  
 Un parametro personalizzato riconosciuto dalla classe di lavoro. Anche passato a `WorkerArchetype::Terminate` e `WorkerArchetype::Execute`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituire **TRUE** esito positivo, **FALSE** in caso di errore.  
  
## <a name="requesttype"></a>WorkerArchetype::RequestType
Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe di lavoro.  
  
```  
typedef MyRequestType RequestType;    
```  
  
### <a name="remarks"></a>Note  
 Questo tipo deve essere utilizzato come primo parametro di `WorkerArchetype::Execute` e deve essere eseguito il cast da e verso un ULONG_PTR.  
  
## <a name="terminate"></a>WorkerArchetype::Terminate
Chiamato da non inizializzare l'oggetto di lavoro dopo che tutte le richieste sono state passate a `WorkerArchetype::Execute`).  
    
``` 
void Terminate(void* pvParam) throw();
```  
  
#### <a name="parameters"></a>Parametri  
 `pvParam`  
 Un parametro personalizzato riconosciuto dalla classe di lavoro. Anche passato a `WorkerArchetype::Initialize` e `WorkerArchetype::Execute`.  
  
## <a name="see-also"></a>Vedere anche  
 [Archetipi](../../atl/reference/atl-archetypes.md)   
 [Concetti](../../atl/active-template-library-atl-concepts.md)   
 [Componenti COM Desktop ATL](../../atl/atl-com-desktop-components.md)




