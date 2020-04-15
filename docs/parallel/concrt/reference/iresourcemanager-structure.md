---
title: Struttura IResourceManager
ms.date: 03/27/2019
f1_keywords:
- IResourceManager
- CONCRTRM/concurrency::IResourceManager
- CONCRTRM/concurrency::IResourceManager::IResourceManager::OSVersion
- CONCRTRM/concurrency::IResourceManager::IResourceManager::CreateNodeTopology
- CONCRTRM/concurrency::IResourceManager::IResourceManager::GetAvailableNodeCount
- CONCRTRM/concurrency::IResourceManager::IResourceManager::GetFirstNode
- CONCRTRM/concurrency::IResourceManager::IResourceManager::Reference
- CONCRTRM/concurrency::IResourceManager::IResourceManager::RegisterScheduler
- CONCRTRM/concurrency::IResourceManager::IResourceManager::Release
helpviewer_keywords:
- IResourceManager structure
ms.assetid: 3dd5ec2c-fe53-4121-ae77-1bc1d1167ff4
ms.openlocfilehash: 15e27a586fc039791255c01a053f6a1109183f90
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368179"
---
# <a name="iresourcemanager-structure"></a>Struttura IResourceManager

Un'interfaccia alla Gestione risorse del runtime di concorrenza. Si tratta dell'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse.

## <a name="syntax"></a>Sintassi

```cpp
struct IResourceManager;
```

## <a name="members"></a>Membri

### <a name="public-enumerations"></a>Enumerazioni pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[IResourceManager::OSVersionIResourceManager::OSVersion](#osversion)|Tipo enumerato che rappresenta la versione del sistema operativo.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IResourceManager::CreateNodeTopologyIResourceManager::CreateNodeTopology](#createnodetopology)|Presente solo nelle build di debug del runtime, questo metodo è un hook di test progettato per facilitare il test di Gestione risorse su topologie hardware diverse, senza richiedere l'hardware effettivo corrispondente alla configurazione. Con le compilazioni retail del runtime, questo metodo restituirà senza eseguire alcuna azione.|
|[IResourceManager::GetAvailableNodeCountIResourceManager::GetAvailableNodeCount](#getavailablenodecount)|Restituisce il numero di nodi disponibili per Gestione risorse.|
|[IResourceManager::GetFirstNode](#getfirstnode)|Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.|
|[IResourceManager::RiferimentoIResourceManager::Reference](#reference)|Incrementa il conteggio dei riferimenti nell'istanza di Gestione risorse.|
|[IResourceManager::RegisterScheduler](#registerscheduler)|Registra un'utilità di pianificazione con Gestione risorse. Una volta registrata, l'utilità di pianificazione `ISchedulerProxy` deve comunicare con Gestione risorse usando l'interfaccia restituita.|
|[IResourceManager::Release](#release)|Decrementa il conteggio dei riferimenti nell'istanza di Resource Manager. Gestione risorse viene eliminato quando il `0`conteggio dei riferimenti passa a .|

## <a name="remarks"></a>Osservazioni

Utilizzare la funzione [CreateResourceManager](concurrency-namespace-functions.md) per ottenere un'interfaccia per l'istanza di Gestione risorse singleton. Il metodo incrementa un conteggio dei riferimenti in Gestione risorse ed è necessario richiamare il [metodo IResourceManager::Release](#release) per rilasciare il riferimento al termine dell'operazione con Gestione risorse. In genere, ogni utilità di pianificazione creata richiamerà questo metodo durante la creazione e rilascerà il riferimento a Gestione risorse dopo l'arresto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IResourceManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="iresourcemanagercreatenodetopology-method"></a><a name="createnodetopology"></a>Metodo IResourceManager::CreateNodeTopologyIResourceManager::CreateNodeTopology Method

Presente solo nelle build di debug del runtime, questo metodo è un hook di test progettato per facilitare il test di Gestione risorse su topologie hardware diverse, senza richiedere l'hardware effettivo corrispondente alla configurazione. Con le compilazioni retail del runtime, questo metodo restituirà senza eseguire alcuna azione.

```cpp
virtual void CreateNodeTopology(
    unsigned int nodeCount,
    _In_reads_(nodeCount) unsigned int* pCoreCount,
    _In_reads_opt_(nodeCount) unsigned int** pNodeDistance,
    _In_reads_(nodeCount) unsigned int* pProcessorGroups) = 0;
```

### <a name="parameters"></a>Parametri

*nodeCount (conteggio dei nodi)*<br/>
Numero di nodi del processore da simulare.

*pCoreCount (conteggio pCoreCount)*<br/>
Matrice che specifica il numero di core in ogni nodo.

*pNodeDistance (distanza di un nodo)*<br/>
Matrice che specifica la distanza del nodo tra due nodi qualsiasi. Questo parametro può `NULL`avere il valore .

*pGruppididididi*<br/>
Matrice che specifica il gruppo di processori a cui appartiene ogni nodo.

### <a name="remarks"></a>Osservazioni

[invalid_argument](../../../standard-library/invalid-argument-class.md) viene generata `nodeCount` se `0` il valore del parametro `pCoreCount` è `NULL`stato passato o se il parametro ha il valore .

[invalid_operation](invalid-operation-class.md) viene generata se questo metodo viene chiamato mentre altre utilità di pianificazione sono presenti nel processo.

## <a name="iresourcemanagergetavailablenodecount-method"></a><a name="getavailablenodecount"></a>Metodo IResourceManager::GetAvailableNodeCountIResourceManager::GetAvailableNodeCount Method

Restituisce il numero di nodi disponibili per Gestione risorse.

```cpp
virtual unsigned int GetAvailableNodeCount() const = 0;
```

### <a name="return-value"></a>Valore restituito

Numero di nodi disponibili per Gestione risorse.

## <a name="iresourcemanagergetfirstnode-method"></a><a name="getfirstnode"></a>Metodo IResourceManager::GetFirstNodeIResourceManager::GetFirstNode Method

Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.

```cpp
virtual ITopologyNode* GetFirstNode() const = 0;
```

### <a name="return-value"></a>Valore restituito

Primo nodo nell'ordine di enumerazione definito da Gestione risorse.

## <a name="iresourcemanagerosversion-enumeration"></a><a name="osversion"></a>Enumerazione IResourceManager::OSVersionIResourceManager::OSVersion Enumeration

Tipo enumerato che rappresenta la versione del sistema operativo.

```cpp
enum OSVersion;
```

## <a name="iresourcemanagerreference-method"></a><a name="reference"></a>Metodo IResourceManager::ReferenceIResourceManager::Reference Method

Incrementa il conteggio dei riferimenti nell'istanza di Gestione risorse.

```cpp
virtual unsigned int Reference() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti risultante.

## <a name="iresourcemanagerregisterscheduler-method"></a><a name="registerscheduler"></a>Metodo IResourceManager::RegisterSchedulerIResourceManager::RegisterScheduler Method

Registra un'utilità di pianificazione con Gestione risorse. Una volta registrata, l'utilità di pianificazione `ISchedulerProxy` deve comunicare con Gestione risorse usando l'interfaccia restituita.

```cpp
virtual ISchedulerProxy *RegisterScheduler(
    _Inout_ IScheduler* pScheduler,
    unsigned int version) = 0;
```

### <a name="parameters"></a>Parametri

*pScheduler (Utilità di pianificazione)*<br/>
Interfaccia `IScheduler` all'utilità di pianificazione da registrare.

*version*<br/>
La versione dell'interfaccia di comunicazione utilizzata dall'utilità di pianificazione per comunicare con Gestione risorse. L'utilizzo di una versione consente a Gestione risorse di evolvere l'interfaccia di comunicazione consentendo alle utilità di pianificazione di ottenere l'accesso alle funzionalità meno recenti. Le utilità di pianificazione che desiderano utilizzare le funzionalità di `CONCRT_RM_VERSION_1`Gestione risorse presenti in Visual Studio 2010 devono utilizzare la versione .

### <a name="return-value"></a>Valore restituito

Interfaccia `ISchedulerProxy` associata a Gestione risorse all'utilità di pianificazione. L'utilità di pianificazione deve usare questa interfaccia per comunicare con Gestione risorse da questo punto in su.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per avviare la comunicazione con Gestione risorse. Il metodo associa `IScheduler` l'interfaccia per `ISchedulerProxy` l'utilità di pianificazione a un'interfaccia e la consegna all'utente. È possibile usare l'interfaccia restituita per richiedere le risorse di esecuzione per l'utilizzo da parte dell'utilità di pianificazione o per sottoscrivere thread con Gestione risorse. Gestione risorse utilizzerà gli elementi dei criteri dei criteri dell'utilità di pianificazione restituiti dal metodo [IScheduler::GetPolicy](ischeduler-structure.md#getpolicy) per determinare il tipo di thread necessario per l'utilità di pianificazione. Se `SchedulerKind` la chiave dei `UmsThreadDefault` criteri ha il valore e il `UmsThreadDefault`valore `IScheduler` viene letto nuovamente dal `IUMSScheduler` criterio come valore , l'interfaccia passata al metodo deve essere un'interfaccia.

Il metodo genera `invalid_argument` un'eccezione se il parametro `pScheduler` ha il valore `NULL` o se il parametro `version` non è una versione valida per l'interfaccia di comunicazione.

## <a name="iresourcemanagerrelease-method"></a><a name="release"></a>Metodo IResourceManager::ReleaseIResourceManager::Release Method

Decrementa il conteggio dei riferimenti nell'istanza di Resource Manager. Gestione risorse viene eliminato quando il `0`conteggio dei riferimenti passa a .

```cpp
virtual unsigned int Release() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti risultante.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura ISchedulerProxy](ischedulerproxy-structure.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)
