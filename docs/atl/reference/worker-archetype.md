---
title: Sistema di rilevazione lavoro | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- Worker archetype
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cee9df0b137655fe66e68c189de756f15233a94d
ms.sourcegitcommit: 19a108b4b30e93a9ad5394844c798490cb3e2945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2018
ms.locfileid: "34255978"
---
# <a name="worker-archetype"></a>Sistema di rilevazione di lavoro
Classi conformi al *lavoro* sistema per fornire il codice per gli elementi di lavoro di processo in coda in un pool di thread.  
  
 **Implementazione**  
  
 Per implementare una classe conforme a questo sistema di rilevazione, la classe deve fornire le funzionalità seguenti:  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Initialize](#initialize)|Chiamato per inizializzare l'oggetto di lavoro prima di tutte le richieste vengono passate a [Execute](#execute).|  
|[Eseguire](#execute)|Chiamato per elaborare un elemento di lavoro.|  
|[Terminare](#terminate)|Chiamato per annullare l'inizializzazione dell'oggetto worker dopo tutte le richieste sono state passate [Execute](#execute).|  
  
|Typedef|Descrizione|  
|-------------|-----------------|  
|[RequestType](#requesttype)|Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe di lavoro.|  
  
 Una tipica *lavoro* classe è simile al seguente:  
  
 [!code-cpp[NVC_ATL_Utilities#137](../../atl/codesnippet/cpp/worker-archetype_1.cpp)]  
  
 **Implementazioni esistenti**  
  
 Queste classi sono conformi a questo sistema per:  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste del pool di thread e li passa un oggetto di lavoro che viene creato e distrutto per ogni richiesta.|  
  
 **Utilizzo**  
  
 Questi parametri di modello prevede che la classe sia conforme a questo sistema per:  
  
|Nome del parametro|Utilizzata da|  
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
 Un puntatore al [OVERLAPPED](http://msdn.microsoft.com/library/windows/desktop/ms684342) struttura utilizzata per creare la coda in cui sono stati accodati.  
  
## <a name="initialize"></a> WorkerArchetype::Initialize
Chiamato per inizializzare l'oggetto di lavoro prima di tutte le richieste vengono passate a `WorkerArchetype::Execute`.  
```
BOOL Initialize(void* pvParam) throw();
```  
  
#### <a name="parameters"></a>Parametri  
 `pvParam`  
 Un parametro personalizzato riconosciuto dalla classe di lavoro. Anche passato a `WorkerArchetype::Terminate` e `WorkerArchetype::Execute`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituire **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
## <a name="requesttype"></a> WorkerArchetype::RequestType
Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe di lavoro.  
  
```  
typedef MyRequestType RequestType;    
```  
  
### <a name="remarks"></a>Note  
 Questo tipo deve essere utilizzato come primo parametro di `WorkerArchetype::Execute` e deve essere in grado di sottoposto a cast da e verso un ULONG_PTR.  
  
## <a name="terminate"></a> WorkerArchetype::Terminate
Chiamato per annullare l'inizializzazione dell'oggetto worker dopo tutte le richieste sono state passate `WorkerArchetype::Execute`).  
    
``` 
void Terminate(void* pvParam) throw();
```  
  
#### <a name="parameters"></a>Parametri  
 `pvParam`  
 Un parametro personalizzato riconosciuto dalla classe di lavoro. Anche passato a `WorkerArchetype::Initialize` e `WorkerArchetype::Execute`.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../../atl/active-template-library-atl-concepts.md)   
 [Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)



