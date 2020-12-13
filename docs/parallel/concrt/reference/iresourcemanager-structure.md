---
description: 'Altre informazioni su: struttura IResourceManager'
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
ms.openlocfilehash: 1577d20f7a54bbf2f5613cd47afa22ead36b3630
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334481"
---
# <a name="iresourcemanager-structure"></a>Struttura IResourceManager

Un'interfaccia alla Gestione risorse del runtime di concorrenza. Si tratta dell'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse.

## <a name="syntax"></a>Sintassi

```cpp
struct IResourceManager;
```

## <a name="members"></a>Members

### <a name="public-enumerations"></a>Enumerazioni pubbliche

|Nome|Description|
|----------|-----------------|
|[IResourceManager:: OSVersion](#osversion)|Tipo enumerato che rappresenta la versione del sistema operativo.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IResourceManager:: CreateNodeTopology](#createnodetopology)|Presente solo nelle build di debug del runtime, questo metodo è un hook di test progettato per semplificare il test del Gestione risorse su topologie hardware diverse, senza richiedere hardware effettivo corrispondente alla configurazione. Con le build finali del runtime, questo metodo restituirà senza eseguire alcuna azione.|
|[IResourceManager:: GetAvailableNodeCount](#getavailablenodecount)|Restituisce il numero di nodi disponibili per Gestione risorse.|
|[IResourceManager:: GetFirstNode](#getfirstnode)|Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.|
|[IResourceManager:: Reference](#reference)|Incrementa il conteggio dei riferimenti nell'istanza Gestione risorse.|
|[IResourceManager:: RegisterScheduler](#registerscheduler)|Registra un'utilità di pianificazione con la Gestione risorse. Una volta registrata, l'utilità di pianificazione deve comunicare con il Gestione risorse usando l' `ISchedulerProxy` interfaccia restituita.|
|[IResourceManager:: Release](#release)|Decrementa il conteggio dei riferimenti nell'istanza Gestione risorse. Il Gestione risorse viene eliminato definitivamente quando il conteggio dei riferimenti passa a `0` .|

## <a name="remarks"></a>Commenti

Utilizzare la funzione [CreateResourceManager](concurrency-namespace-functions.md) per ottenere un'interfaccia per l'istanza di gestione risorse singleton. Il metodo incrementa un conteggio dei riferimenti sul Gestione risorse ed è necessario richiamare il metodo [IResourceManager:: Release](#release) per rilasciare il riferimento al termine della gestione risorse. In genere, ogni utilità di pianificazione creata richiama questo metodo durante la creazione e rilascia il riferimento al Gestione risorse dopo l'arresto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IResourceManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="iresourcemanagercreatenodetopology-method"></a><a name="createnodetopology"></a> Metodo IResourceManager:: CreateNodeTopology

Presente solo nelle build di debug del runtime, questo metodo è un hook di test progettato per semplificare il test del Gestione risorse su topologie hardware diverse, senza richiedere hardware effettivo corrispondente alla configurazione. Con le build finali del runtime, questo metodo restituirà senza eseguire alcuna azione.

```cpp
virtual void CreateNodeTopology(
    unsigned int nodeCount,
    _In_reads_(nodeCount) unsigned int* pCoreCount,
    _In_reads_opt_(nodeCount) unsigned int** pNodeDistance,
    _In_reads_(nodeCount) unsigned int* pProcessorGroups) = 0;
```

### <a name="parameters"></a>Parametri

*nodeCount*<br/>
Numero di nodi del processore simulati.

*pCoreCount*<br/>
Matrice che specifica il numero di core in ogni nodo.

*pNodeDistance*<br/>
Matrice che specifica la distanza del nodo tra due nodi qualsiasi. Il valore di questo parametro può essere `NULL` .

*pProcessorGroups*<br/>
Matrice che specifica il gruppo di processori a cui appartiene ciascun nodo.

### <a name="remarks"></a>Commenti

[invalid_argument](../../../standard-library/invalid-argument-class.md) viene generata se al parametro `nodeCount` è `0` stato passato il valore o se il parametro `pCoreCount` ha il valore `NULL` .

[invalid_operation](invalid-operation-class.md) viene generata se questo metodo viene chiamato mentre sono presenti altre utilità di pianificazione nel processo.

## <a name="iresourcemanagergetavailablenodecount-method"></a><a name="getavailablenodecount"></a> Metodo IResourceManager:: GetAvailableNodeCount

Restituisce il numero di nodi disponibili per Gestione risorse.

```cpp
virtual unsigned int GetAvailableNodeCount() const = 0;
```

### <a name="return-value"></a>Valore restituito

Il numero di nodi disponibili per la Gestione risorse.

## <a name="iresourcemanagergetfirstnode-method"></a><a name="getfirstnode"></a> Metodo IResourceManager:: GetFirstNode

Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.

```cpp
virtual ITopologyNode* GetFirstNode() const = 0;
```

### <a name="return-value"></a>Valore restituito

Primo nodo nell'ordine di enumerazione definito dal Gestione risorse.

## <a name="iresourcemanagerosversion-enumeration"></a><a name="osversion"></a> Enumerazione IResourceManager:: OSVersion

Tipo enumerato che rappresenta la versione del sistema operativo.

```cpp
enum OSVersion;
```

## <a name="iresourcemanagerreference-method"></a><a name="reference"></a> Metodo IResourceManager:: Reference

Incrementa il conteggio dei riferimenti nell'istanza Gestione risorse.

```cpp
virtual unsigned int Reference() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti risultante.

## <a name="iresourcemanagerregisterscheduler-method"></a><a name="registerscheduler"></a> Metodo IResourceManager:: RegisterScheduler

Registra un'utilità di pianificazione con la Gestione risorse. Una volta registrata, l'utilità di pianificazione deve comunicare con il Gestione risorse usando l' `ISchedulerProxy` interfaccia restituita.

```cpp
virtual ISchedulerProxy *RegisterScheduler(
    _Inout_ IScheduler* pScheduler,
    unsigned int version) = 0;
```

### <a name="parameters"></a>Parametri

*pScheduler*<br/>
`IScheduler`Interfaccia all'utilità di pianificazione da registrare.

*version*<br/>
Versione dell'interfaccia di comunicazione utilizzata dall'utilità di pianificazione per comunicare con l'Gestione risorse. L'uso di una versione consente all'Gestione risorse di evolvere l'interfaccia di comunicazione consentendo alle utilità di pianificazione di ottenere l'accesso alle funzionalità precedenti. Le utilità di pianificazione che vogliono usare Gestione risorse funzionalità presenti in Visual Studio 2010 devono usare la versione `CONCRT_RM_VERSION_1` .

### <a name="return-value"></a>Valore restituito

`ISchedulerProxy`Interfaccia Gestione risorse associata all'utilità di pianificazione. L'utilità di pianificazione deve usare questa interfaccia per comunicare con Gestione risorse da questo punto in poi.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per avviare la comunicazione con la Gestione risorse. Il metodo associa l' `IScheduler` interfaccia per l'utilità di pianificazione a un' `ISchedulerProxy` interfaccia e la consegna all'utente. È possibile usare l'interfaccia restituita per richiedere le risorse di esecuzione per l'uso da parte dell'utilità di pianificazione o per sottoscrivere i thread con la Gestione risorse. Il Gestione risorse utilizzerà gli elementi criteri dei criteri dell'utilità di pianificazione restituiti dal metodo [IScheduler:: GetPolicy](ischeduler-structure.md#getpolicy) per determinare il tipo di thread che dovrà essere eseguito dall'utilità di pianificazione. Se la `SchedulerKind` chiave dei criteri ha il valore `UmsThreadDefault` e il valore viene letto di nuovo dal criterio come valore `UmsThreadDefault` , l' `IScheduler` interfaccia passata al metodo deve essere un' `IUMSScheduler` interfaccia.

Il metodo genera un' `invalid_argument` eccezione se il parametro `pScheduler` ha il valore `NULL` o se il parametro `version` non è una versione valida per l'interfaccia di comunicazione.

## <a name="iresourcemanagerrelease-method"></a><a name="release"></a> Metodo IResourceManager:: Release

Decrementa il conteggio dei riferimenti nell'istanza Gestione risorse. Il Gestione risorse viene eliminato definitivamente quando il conteggio dei riferimenti passa a `0` .

```cpp
virtual unsigned int Release() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti risultante.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Struttura ISchedulerProxy](ischedulerproxy-structure.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)
