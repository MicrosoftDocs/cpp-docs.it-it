---
title: Struttura IResourceManager
ms.date: 11/04/2016
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
ms.openlocfilehash: 1f8f5992d9ce55100d193196a3c0f94b468ef892
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57275271"
---
# <a name="iresourcemanager-structure"></a>Struttura IResourceManager

Un'interfaccia alla Gestione risorse del runtime di concorrenza. Si tratta dell'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse.

## <a name="syntax"></a>Sintassi

```
struct IResourceManager;
```

## <a name="members"></a>Membri

### <a name="public-enumerations"></a>Enumerazioni pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[IResourceManager::OSVersion](#osversion)|Tipo enumerato che rappresenta la versione del sistema operativo.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IResourceManager::CreateNodeTopology](#createnodetopology)|Presente solo in modalità debug compilazioni di runtime, questo metodo è progettato per facilitare il test di Resource Manager su topologie hardware, senza richiedere hardware effettivo corrispondente alla configurazione un hook di test. Con le compilazioni delle vendite al dettaglio del runtime, questo metodo restituirà senza eseguire alcuna azione.|
|[IResourceManager::GetAvailableNodeCount](#getavailablenodecount)|Restituisce il numero di nodi disponibili per Gestione risorse.|
|[IResourceManager::GetFirstNode](#getfirstnode)|Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.|
|[IResourceManager::Reference](#reference)|Incrementa il conteggio dei riferimenti nell'istanza di Resource Manager.|
|[IResourceManager::RegisterScheduler](#registerscheduler)|Registra un'utilità di pianificazione con Resource Manager. Dopo aver registrato l'utilità di pianificazione, che deve comunicare con l'utilizzo di Resource Manager di `ISchedulerProxy` interfaccia restituita.|
|[IResourceManager::Release](#release)|Decrementa il conteggio dei riferimenti nell'istanza di Resource Manager. Il gestore di risorse viene eliminato definitivamente quando il conteggio dei riferimenti va a `0`.|

## <a name="remarks"></a>Note

Usare la [CreateResourceManager](concurrency-namespace-functions.md) funzione per ottenere un'interfaccia per l'istanza di Resource Manager singleton. Il metodo consente di incrementare un conteggio dei riferimenti in Resource Manager e deve richiamare il [IResourceManager:: Release](#release) metodo per rilasciare il riferimento al termine con Resource Manager. In genere, ogni utilità di pianificazione che si crea questo metodo viene richiamato durante la creazione e rilasciare il riferimento a Resource Manager dopo l'arresto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IResourceManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="createnodetopology"></a>  Metodo IResourceManager:: CreateNodeTopology

Presente solo in modalità debug compilazioni di runtime, questo metodo è progettato per facilitare il test di Resource Manager su topologie hardware, senza richiedere hardware effettivo corrispondente alla configurazione un hook di test. Con le compilazioni delle vendite al dettaglio del runtime, questo metodo restituirà senza eseguire alcuna azione.

```
virtual void CreateNodeTopology(
    unsigned int nodeCount,
    _In_reads_(nodeCount) unsigned int* pCoreCount,
    _In_reads_opt_(nodeCount) unsigned int** pNodeDistance,
    _In_reads_(nodeCount) unsigned int* pProcessorGroups) = 0;
```

### <a name="parameters"></a>Parametri

*nodeCount*<br/>
Il numero di nodi di processore simulata.

*pCoreCount*<br/>
Matrice che specifica il numero di core in ogni nodo.

*pNodeDistance*<br/>
Una matrice che specifica la distanza nodo tra due nodi. Questo parametro può avere il valore `NULL`.

*pProcessorGroups*<br/>
Matrice che specifica il gruppo di processori a cui appartiene ogni nodo.

### <a name="remarks"></a>Note

[invalid_argument](../../../standard-library/invalid-argument-class.md) viene generata se il parametro `nodeCount` ha il valore `0` è stata passata, o se il parametro `pCoreCount` presenta il valore `NULL`.

[invalid_operation](invalid-operation-class.md) viene generata se questo metodo viene chiamato anche se sono disponibili altre utilità di pianificazione del processo.

##  <a name="getavailablenodecount"></a>  Metodo IResourceManager:: Getavailablenodecount

Restituisce il numero di nodi disponibili per Gestione risorse.

```
virtual unsigned int GetAvailableNodeCount() const = 0;
```

### <a name="return-value"></a>Valore restituito

Il numero di nodi disponibili in Resource Manager.

##  <a name="getfirstnode"></a>  Metodo IResourceManager:: Getfirstnode

Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.

```
virtual ITopologyNode* GetFirstNode() const = 0;
```

### <a name="return-value"></a>Valore restituito

Il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.

##  <a name="iresourcemanager__osversion"></a>  Enumerazione IResourceManager:: OSVersion

Tipo enumerato che rappresenta la versione del sistema operativo.

```
enum OSVersion;
```

##  <a name="reference"></a>  Metodo IResourceManager:: Reference

Incrementa il conteggio dei riferimenti nell'istanza di Resource Manager.

```
virtual unsigned int Reference() = 0;
```

### <a name="return-value"></a>Valore restituito

Il conteggio dei riferimenti risultante.

##  <a name="registerscheduler"></a>  Metodo IResourceManager:: RegisterScheduler

Registra un'utilità di pianificazione con Resource Manager. Dopo aver registrato l'utilità di pianificazione, che deve comunicare con l'utilizzo di Resource Manager di `ISchedulerProxy` interfaccia restituita.

```
virtual ISchedulerProxy *RegisterScheduler(
    _Inout_ IScheduler* pScheduler,
    unsigned int version) = 0;
```

### <a name="parameters"></a>Parametri

*pScheduler*<br/>
Un `IScheduler` interfaccia per l'utilità di pianificazione da registrare.

*version*<br/>
La versione dell'interfaccia di comunicazione l'utilità di pianificazione Usa per comunicare con Gestione risorse. Usa una versione consente a Resource Manager per sviluppare l'interfaccia di comunicazione consentendo le utilità di pianificazione ottenere l'accesso alle funzionalità più obsolete. Utilità di pianificazione che vogliono usare le funzionalità di Resource Manager presente in Visual Studio 2010 devono usare la versione `CONCRT_RM_VERSION_1`.

### <a name="return-value"></a>Valore restituito

Il `ISchedulerProxy` interfaccia Resource Manager sono associati con l'utilità di pianificazione. L'utilità di pianificazione deve usare questa interfaccia per comunicare con Resource Manager da questo punto in.

### <a name="remarks"></a>Note

Utilizzare questo metodo per avviare la comunicazione con Resource Manager. Associa il metodo di `IScheduler` interfaccia per l'utilità di pianificazione con un `ISchedulerProxy` interfaccia e le mani la restituzione all'utente. È possibile usare l'interfaccia restituita per richiedere risorse di esecuzione per l'uso da utilità di pianificazione o sottoscrivere i thread con Gestione risorse. Il gestore di risorse utilizzerà elementi dei criteri dai criteri dell'utilità di pianificazione restituito dal [IScheduler:: GetPolicy](ischeduler-structure.md#getpolicy) metodo per determinare il tipo di thread che l'utilità di pianificazione sarà necessario per eseguire l'operazione. Se il `SchedulerKind` chiave dei criteri con il valore `UmsThreadDefault` e il valore viene letto nuovamente dai criteri di base il valore `UmsThreadDefault`, il `IScheduler` interfaccia passata al metodo deve essere un `IUMSScheduler` interfaccia.

Il metodo genera un' `invalid_argument` eccezione se il parametro `pScheduler` ha il valore `NULL` oppure se il parametro `version` non è una versione valida per l'interfaccia di comunicazione.

##  <a name="release"></a>  Metodo IResourceManager:: Release

Decrementa il conteggio dei riferimenti nell'istanza di Resource Manager. Il gestore di risorse viene eliminato definitivamente quando il conteggio dei riferimenti va a `0`.

```
virtual unsigned int Release() = 0;
```

### <a name="return-value"></a>Valore restituito

Il conteggio dei riferimenti risultante.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura ISchedulerProxy](ischedulerproxy-structure.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)
