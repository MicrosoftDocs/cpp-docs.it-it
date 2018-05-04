---
title: Classe CNonStatelessWorker | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CNonStatelessWorker
- ATLUTIL/ATL::CNonStatelessWorker
- ATLUTIL/ATL::CNonStatelessWorker::RequestType
- ATLUTIL/ATL::CNonStatelessWorker::Execute
- ATLUTIL/ATL::CNonStatelessWorker::Initialize
- ATLUTIL/ATL::CNonStatelessWorker::Terminate
dev_langs:
- C++
helpviewer_keywords:
- CNonStatelessWorker class
ms.assetid: d00936c6-9e7d-49fb-b87d-417b963367d1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: de03ded4bc0021a8884f608d10368e3d09c11cf8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cnonstatelessworker-class"></a>Classe CNonStatelessWorker
Riceve richieste da un pool di thread e li passa un oggetto di lavoro che viene creato ed eliminato in ogni richiesta.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Worker>  
class CNonStatelessWorker
```  
  
#### <a name="parameters"></a>Parametri  
 *Lavoro*  
 Una classe di thread di lavoro conforme al [sistema per lavoro](../../atl/reference/worker-archetype.md) adatto per la gestione delle richieste in coda in [CThreadPool](../../atl/reference/cthreadpool-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNonStatelessWorker::RequestType](#requesttype)|Implementazione di [WorkerArchetype::RequestType](worker-archetype.md#requesttype).|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNonStatelessWorker::Execute](#execute)|Implementazione di [WorkerArchetype::Execute](worker-archetype.md#execute).|  
|[CNonStatelessWorker::Initialize](#initialize)|Implementazione di [WorkerArchetype::Initialize](worker-archetype.md#initialize).|  
|[CNonStatelessWorker::Terminate](#terminate)|Implementazione di [WorkerArchetype::Terminate](worker-archetype.md#terminate).|  
  
## <a name="remarks"></a>Note  
 Questa classe è un thread di lavoro semplice per l'utilizzo con [CThreadPool](../../atl/reference/cthreadpool-class.md). Questa classe non fornisce tutte le funzionalità della propria gestione delle richieste. Al contrario, viene creata un'istanza di un'istanza di *lavoro* per ogni richiesta e delegati di implementazione dei metodi a tale istanza.  
  
 Il vantaggio di questa classe è che fornisce un modo pratico per modificare il modello di stato per le classi di thread di lavoro esistenti. `CThreadPool` verrà creato un singolo lavoro per la durata del thread, pertanto se la classe di lavoro contiene stato, che esso può contenere più richieste. Eseguendo semplicemente il wrapping di tale classe nel `CNonStatelessWorker` modello prima di utilizzarlo con `CThreadPool`, la durata del thread di lavoro e lo stato, contiene è limitato a una singola richiesta.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="execute"></a>  CNonStatelessWorker::Execute  
 Implementazione di [WorkerArchetype::Execute](worker-archetype.md#execute).  

  
```
void Execute(
    Worker::RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un'istanza di *lavoro* classe stack e chiamate [inizializzare](worker-archetype.md#initialize) su tale oggetto. Se l'inizializzazione ha esito positivo, questo metodo chiama anche [Execute](worker-archetype.md#execute) e [Terminate](worker-archetype.md#terminate) sullo stesso oggetto.  

  
##  <a name="initialize"></a>  CNonStatelessWorker::Initialize  
 Implementazione di [WorkerArchetype::Initialize](worker-archetype.md#initialize).  
  
```
BOOL Initialize(void* /* pvParam */) throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre TRUE.  
  
### <a name="remarks"></a>Note  
 Questa classe non esegue le operazioni di inizializzazione `Initialize`.  
  
##  <a name="requesttype"></a>  CNonStatelessWorker::RequestType  
 Implementazione di [WorkerArchetype::RequestType](worker-archetype.md#requesttype).  
  
```
typedef Worker::RequestType RequestType;
```  
  
### <a name="remarks"></a>Note  
 Questa classe gestisce lo stesso tipo di elemento di lavoro utilizzata per la *lavoro* parametro di modello. Vedere [CNonStatelessWorker Panoramica](../../atl/reference/cnonstatelessworker-class.md) per informazioni dettagliate.  
  
##  <a name="terminate"></a>  CNonStatelessWorker::Terminate  
 Implementazione di [WorkerArchetype::Terminate](worker-archetype.md#terminate).  
  
```
void Terminate(void* /* pvParam */) throw();
```  
  
### <a name="remarks"></a>Note  
 Questa classe non esegue le operazioni di pulitura `Terminate`.  
  
## <a name="see-also"></a>Vedere anche  
 [CThreadPool (classe)](../../atl/reference/cthreadpool-class.md)   
 [Sistema di rilevazione di lavoro](../../atl/reference/worker-archetype.md)   
 [Classi](../../atl/reference/atl-classes.md)
