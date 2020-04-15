---
title: Struttura ISchedulerProxy
ms.date: 11/04/2016
f1_keywords:
- ISchedulerProxy
- CONCRTRM/concurrency::ISchedulerProxy
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::BindContext
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::CreateOversubscriber
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::RequestInitialVirtualProcessors
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::Shutdown
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::SubscribeCurrentThread
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::UnbindContext
helpviewer_keywords:
- ISchedulerProxy structure
ms.assetid: af416973-7a1c-4c30-aa3b-4161c2aaea54
ms.openlocfilehash: f4a9e79c2da56406610ad6da08fb438e2f92923d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368153"
---
# <a name="ischedulerproxy-structure"></a>Struttura ISchedulerProxy

L'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse del runtime di concorrenza per negoziare l'allocazione delle risorse.

## <a name="syntax"></a>Sintassi

```cpp
struct ISchedulerProxy;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ISchedulerProxy::BindContext](#bindcontext)|Associa un contesto di esecuzione a un proxy del thread, se non è già associato a uno.|
|[ISchedulerProxy::CreateOversubscriber](#createoversubscriber)|Crea una nuova radice del processore virtuale nel thread di hardware associato a una risorsa di esecuzione esistente.|
|[ISchedulerProxy::RequestInitialVirtualProcessors](#requestinitialvirtualprocessors)|Richiede un'allocazione iniziale delle radici del processore virtuale. Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che può eseguire il lavoro per l'utilità di pianificazione.|
|[ISchedulerProxy::Arresta](#shutdown)|Notifica al Gestore risorse che l'utilità di pianificazione è in arresto. In questo modo Gestione risorse recuperare immediatamente tutte le risorse concesse all'utilità di pianificazione.|
|[ISchedulerProxy::SubscribeCurrentThread](#subscribecurrentthread)|Registra il thread corrente con Gestione risorse, associandolo a questa utilità di pianificazione.|
|[ISchedulerProxy::UnbindContext](#unbindcontext)|Annulla l'associazione di un proxy del `pContext` thread dal contesto di esecuzione specificato dal parametro e lo restituisce al pool libero della factory del proxy del thread. Questo metodo può essere chiamato solo su un contesto di esecuzione che è stato associato tramite il [ISchedulerProxy::BindContext](#bindcontext) metodo e non è stato ancora avviato tramite essere il `pContext` parametro di un [IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto) chiamata al metodo.|

## <a name="remarks"></a>Osservazioni

Gestione risorse passa `ISchedulerProxy` un'interfaccia a ogni utilità di pianificazione che si registra con esso utilizzando il [IResourceManager::RegisterScheduler](iresourcemanager-structure.md#registerscheduler) metodo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISchedulerProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="ischedulerproxybindcontext-method"></a><a name="bindcontext"></a>Metodo ISchedulerProxy::BindContextISchedulerProxy::BindContext Method

Associa un contesto di esecuzione a un proxy del thread, se non è già associato a uno.

```cpp
virtual void BindContext(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Interfaccia al contesto di esecuzione da associare a un proxy del thread.

### <a name="remarks"></a>Osservazioni

In genere, il [Metodo IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto) associa un proxy del thread a un contesto di esecuzione su richiesta. Esistono, tuttavia, circostanze in cui è necessario associare `SwitchTo` un contesto in anticipo per garantire che il metodo passi a un contesto già associato. Questo è il caso in un contesto di pianificazione UMS in quanto non può chiamare metodi che allocano memoria e l'associazione di un proxy del thread può comportare l'allocazione di memoria se un proxy del thread non è prontamente disponibile nel pool libero della factory del proxy del thread.

`invalid_argument`se il parametro `pContext` ha `NULL`il valore .

## <a name="ischedulerproxycreateoversubscriber-method"></a><a name="createoversubscriber"></a>Metodo ISchedulerProxy::CreateOversubscriber

Crea una nuova radice del processore virtuale nel thread di hardware associato a una risorsa di esecuzione esistente.

```cpp
virtual IVirtualProcessorRoot* CreateOversubscriber(_Inout_ IExecutionResource* pExecutionResource) = 0;
```

### <a name="parameters"></a>Parametri

*pExecutionResource (risorse di gestione)*<br/>
Interfaccia `IExecutionResource` che rappresenta il thread di hardware di cui si desidera eseguire l'oversubscription.

### <a name="return-value"></a>Valore restituito

Interfaccia `IVirtualProcessorRoot`.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo quando l'utilità di pianificazione desidera eseguire l'oversubscription di un thread di hardware specifico per un periodo di tempo limitato. Dopo aver completato la radice del processore virtuale, è necessario [Remove](iexecutionresource-structure.md#remove) restituirla `IVirtualProcessorRoot` al gestore delle risorse chiamando il Remove metodo sull'interfaccia.

È anche possibile eseguire l'oversubscription di una radice del processore virtuale esistente, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`.

## <a name="ischedulerproxyrequestinitialvirtualprocessors-method"></a><a name="requestinitialvirtualprocessors"></a>Metodo ISchedulerProxy::RequestInitialVirtualProcessors

Richiede un'allocazione iniziale delle radici del processore virtuale. Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che può eseguire il lavoro per l'utilità di pianificazione.

```cpp
virtual IExecutionResource* RequestInitialVirtualProcessors(bool doSubscribeCurrentThread) = 0;
```

### <a name="parameters"></a>Parametri

*doSubscribeCurrentThread (Thread di doSubscribeCurrentThread)*<br/>
Se sottoscrivere il thread corrente e tenerconne conto durante l'allocazione delle risorse.

### <a name="return-value"></a>Valore restituito

Interfaccia `IExecutionResource` per il thread corrente, `doSubscribeCurrentThread` se il parametro ha il valore **true**. Se il valore è **false**, il metodo restituisce NULL.

### <a name="remarks"></a>Osservazioni

Prima che un'utilità di pianificazione esegua qualsiasi operazione, è necessario utilizzare questo metodo per richiedere le radici del processore virtuale da Gestione risorse. Gestione risorse accederà ai criteri dell'utilità di pianificazione utilizzando [IScheduler::GetPolicy](ischeduler-structure.md#getpolicy) e utilizzerà i valori per le chiavi `MinConcurrency`dei criteri `MaxConcurrency` e `TargetOversubscriptionFactor` per determinare il numero di thread di hardware da assegnare inizialmente all'utilità di pianificazione e il numero di radici del processore virtuale da creare per ogni thread di hardware. Per ulteriori informazioni sull'utilizzo dei criteri dell'utilità di pianificazione per determinare l'allocazione iniziale di un'utilità di pianificazione, vedere [PolicyElementKey](concurrency-namespace-enums.md).

Gestione risorse concede risorse a un'utilità di pianificazione chiamando il metodo [IScheduler::AddVirtualProcessors](ischeduler-structure.md#addvirtualprocessors) con un elenco di radici del processore virtuale. Il metodo viene richiamato come callback nell'utilità di pianificazione prima della restituzione di questo metodo.

Se l'utilità di pianificazione ha richiesto `doSubscribeCurrentThread` la sottoscrizione per `IExecutionResource` il thread corrente impostando il parametro su **true**, il metodo restituisce un'interfaccia . La sottoscrizione deve essere terminata in un secondo momento utilizzando il [metodo IExecutionResource::Remove.](iexecutionresource-structure.md#remove)

Quando si determina quali thread di hardware sono selezionati, Gestione risorse tenterà di ottimizzare l'affinità dei nodi del processore. Se viene richiesta la sottoscrizione per il thread corrente, è un'indicazione che il thread corrente intende partecipare al lavoro assegnato a questa utilità di pianificazione. In tal caso, le radici dei processori virtuali allocate si trovano sul nodo del processore su cui è in esecuzione il thread corrente, se possibile.

L'atto di sottoscrivere un thread aumenta di uno il livello di sottoscrizione del thread di hardware sottostante. Il livello di sottoscrizione viene ridotto di uno quando la sottoscrizione viene terminata. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource::CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="ischedulerproxyshutdown-method"></a><a name="shutdown"></a>Metodo ISchedulerProxy::Shutdown

Notifica al Gestore risorse che l'utilità di pianificazione è in arresto. In questo modo Gestione risorse recuperare immediatamente tutte le risorse concesse all'utilità di pianificazione.

```cpp
virtual void Shutdown() = 0;
```

### <a name="remarks"></a>Osservazioni

Tutte `IExecutionContext` le interfacce ricevute dall'utilità di pianificazione come risultato `ISchedulerProxy::SubscribeCurrentThread` della sottoscrizione di un `IExecutionResource::Remove` thread esterno utilizzando i metodi `ISchedulerProxy::RequestInitialVirtualProcessors` o devono essere restituite a Gestione risorse utilizzando prima che un'utilità di pianificazione si arresti.

Se l'utilità di pianificazione dispone di radici del processore virtuale disattivate, è necessario attivarle utilizzando [IVirtualProcessorRoot::Activate](ivirtualprocessorroot-structure.md#activate)e fare in modo che i proxy del thread in esecuzione su di essi lascino il `Dispatch` metodo dei contesti di esecuzione che inviano prima di richiamare `Shutdown` su un proxy dell'utilità di pianificazione.

Non è necessario che tramite l'utilità di pianificazione vengano restituite singolarmente tutte le radici del processore virtuale concesse da Gestione risorse tramite chiamate al metodo `Remove` poiché tutte le radici del processore virtuale saranno restituite a Gestione risorse all'arresto.

## <a name="ischedulerproxysubscribecurrentthread-method"></a><a name="subscribecurrentthread"></a>Metodo ISchedulerProxy::SubscribeCurrentThread

Registra il thread corrente con Gestione risorse, associandolo a questa utilità di pianificazione.

```cpp
virtual IExecutionResource* SubscribeCurrentThread() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia `IExecutionResource` che rappresenta il thread corrente nel runtime.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo se si desidera che Gestione risorse tenga conto del thread corrente durante l'allocazione delle risorse all'utilità di pianificazione e ad altre utilità di pianificazione. È particolarmente utile quando il thread prevede di partecipare al lavoro in coda all'utilità di pianificazione, insieme alle radici del processore virtuale che l'utilità di pianificazione riceve da Gestione risorse. Gestione risorse utilizza le informazioni per evitare l'oversubscription non necessario di thread di hardware nel sistema.

La risorsa di esecuzione ricevuta tramite questo metodo deve essere restituita a Gestione risorse utilizzando il [metodo IExecutionResource::Remove.The](iexecutionresource-structure.md#remove) execution resource received via this method should be returned to the Resource Manager using the IExecutionResource::Remove method. Il thread che `Remove` chiama il metodo deve essere `SubscribeCurrentThread` lo stesso thread che ha chiamato in precedenza il metodo.

L'atto di sottoscrivere un thread aumenta di uno il livello di sottoscrizione del thread di hardware sottostante. Il livello di sottoscrizione viene ridotto di uno quando la sottoscrizione viene terminata. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource::CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="ischedulerproxyunbindcontext-method"></a><a name="unbindcontext"></a>Metodo ISchedulerProxy::UnbindContext

Annulla l'associazione di un proxy del `pContext` thread dal contesto di esecuzione specificato dal parametro e lo restituisce al pool libero della factory del proxy del thread. Questo metodo può essere chiamato solo su un contesto di esecuzione che è stato associato tramite il [ISchedulerProxy::BindContext](#bindcontext) metodo e non è stato ancora avviato tramite essere il `pContext` parametro di un [IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto) chiamata al metodo.

```cpp
virtual void UnbindContext(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Contesto di esecuzione da dissociare dal proxy del thread.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IThreadProxy](ithreadproxy-structure.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
