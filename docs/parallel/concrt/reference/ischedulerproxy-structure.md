---
description: 'Altre informazioni su: struttura ISchedulerProxy'
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
ms.openlocfilehash: 4c3c488136c2b41a76b3080b2162fbf95dcb5ea8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334451"
---
# <a name="ischedulerproxy-structure"></a>Struttura ISchedulerProxy

L'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse del runtime di concorrenza per negoziare l'allocazione delle risorse.

## <a name="syntax"></a>Sintassi

```cpp
struct ISchedulerProxy;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[ISchedulerProxy:: BindContext](#bindcontext)|Associa un contesto di esecuzione a un proxy del thread, se non è già associato a uno.|
|[ISchedulerProxy:: CreateOversubscriber](#createoversubscriber)|Crea una nuova radice del processore virtuale nel thread hardware associato a una risorsa di esecuzione esistente.|
|[ISchedulerProxy:: RequestInitialVirtualProcessors](#requestinitialvirtualprocessors)|Richiede un'allocazione iniziale delle radici del processore virtuale. Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che può eseguire operazioni per l'utilità di pianificazione.|
|[ISchedulerProxy:: Shutdown](#shutdown)|Notifica all'Gestione risorse che l'utilità di pianificazione sta per essere arrestata. In questo modo il Gestione risorse recupererà immediatamente tutte le risorse concesse all'utilità di pianificazione.|
|[ISchedulerProxy:: SubscribeCurrentThread](#subscribecurrentthread)|Registra il thread corrente con l'Gestione risorse, associando l'oggetto all'utilità di pianificazione.|
|[ISchedulerProxy:: UnbindContext](#unbindcontext)|Annulla l'associazione di un proxy del thread dal contesto di esecuzione specificato dal `pContext` parametro e lo restituisce al pool libero della factory del proxy di thread. Questo metodo può essere chiamato solo su un contesto di esecuzione che è stato associato tramite il metodo [ISchedulerProxy:: BindContext](#bindcontext) e non è ancora stato avviato tramite il `pContext` parametro di una chiamata al metodo [IThreadProxy:: SwitchTo](ithreadproxy-structure.md#switchto) .|

## <a name="remarks"></a>Commenti

Il Gestione risorse `ISchedulerProxy` mette a disposizione un'interfaccia per ogni utilità di pianificazione che esegue la registrazione tramite il metodo [IResourceManager:: RegisterScheduler](iresourcemanager-structure.md#registerscheduler) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISchedulerProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="ischedulerproxybindcontext-method"></a><a name="bindcontext"></a> Metodo ISchedulerProxy:: BindContext

Associa un contesto di esecuzione a un proxy del thread, se non è già associato a uno.

```cpp
virtual void BindContext(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Interfaccia al contesto di esecuzione da associare a un proxy del thread.

### <a name="remarks"></a>Commenti

In genere, il metodo [IThreadProxy:: SwitchTo](ithreadproxy-structure.md#switchto) associa un proxy di thread a un contesto di esecuzione su richiesta. Esistono tuttavia situazioni in cui è necessario associare un contesto in anticipo per garantire che il `SwitchTo` Metodo passi a un contesto già associato. Questo avviene in un contesto di pianificazione UMS perché non è in grado di chiamare metodi che allocano memoria e l'associazione di un proxy di thread può comportare l'allocazione di memoria se un proxy del thread non è immediatamente disponibile nel pool libero della factory del proxy di thread.

`invalid_argument` viene generata se il parametro `pContext` ha il valore `NULL` .

## <a name="ischedulerproxycreateoversubscriber-method"></a><a name="createoversubscriber"></a> Metodo ISchedulerProxy:: CreateOversubscriber

Crea una nuova radice del processore virtuale nel thread hardware associato a una risorsa di esecuzione esistente.

```cpp
virtual IVirtualProcessorRoot* CreateOversubscriber(_Inout_ IExecutionResource* pExecutionResource) = 0;
```

### <a name="parameters"></a>Parametri

*pExecutionResource*<br/>
`IExecutionResource`Interfaccia che rappresenta il thread hardware di cui si desidera eseguire l'oversubscription.

### <a name="return-value"></a>Valore restituito

Interfaccia di `IVirtualProcessorRoot`.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo quando l'utilità di pianificazione desidera sovrascrivere un particolare thread hardware per un periodo di tempo limitato. Una volta completata la radice del processore virtuale, è necessario restituirla a Resource Manager chiamando il metodo [Remove](iexecutionresource-structure.md#remove) sull' `IVirtualProcessorRoot` interfaccia.

È anche possibile eseguire l'oversubscription di una radice del processore virtuale esistente, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`.

## <a name="ischedulerproxyrequestinitialvirtualprocessors-method"></a><a name="requestinitialvirtualprocessors"></a> Metodo ISchedulerProxy:: RequestInitialVirtualProcessors

Richiede un'allocazione iniziale delle radici del processore virtuale. Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che può eseguire operazioni per l'utilità di pianificazione.

```cpp
virtual IExecutionResource* RequestInitialVirtualProcessors(bool doSubscribeCurrentThread) = 0;
```

### <a name="parameters"></a>Parametri

*doSubscribeCurrentThread*<br/>
Indica se sottoscrivere il thread e l'account corrente durante l'allocazione delle risorse.

### <a name="return-value"></a>Valore restituito

`IExecutionResource`Interfaccia per il thread corrente, se il parametro `doSubscribeCurrentThread` ha il valore **`true`** . Se il valore è **`false`** , il metodo restituisce null.

### <a name="remarks"></a>Commenti

Prima di eseguire qualsiasi lavoro, un'utilità di pianificazione deve utilizzare questo metodo per richiedere le radici del processore virtuale dal Gestione risorse. Il Gestione risorse accederà ai criteri dell'utilità di pianificazione utilizzando [IScheduler:: GetPolicy](ischeduler-structure.md#getpolicy) e utilizzerà i valori per le chiavi dei criteri `MinConcurrency` `MaxConcurrency` e `TargetOversubscriptionFactor` per determinare il numero di thread hardware da assegnare inizialmente all'utilità di pianificazione e il numero di radici del processore virtuale da creare per ogni thread hardware. Per ulteriori informazioni sulla modalità di utilizzo dei criteri dell'utilità di pianificazione per determinare l'allocazione iniziale di un'utilità di pianificazione, vedere [PolicyElementKey](concurrency-namespace-enums.md).

Il Gestione risorse concede le risorse a un'utilità di pianificazione chiamando il metodo [IScheduler:: AddVirtualProcessors](ischeduler-structure.md#addvirtualprocessors) con un elenco di radici del processore virtuale. Il metodo viene richiamato come callback nell'utilità di pianificazione prima che questo metodo venga restituito.

Se l'utilità di pianificazione ha richiesto la sottoscrizione per il thread corrente impostando il parametro `doSubscribeCurrentThread` su **`true`** , il metodo restituisce un' `IExecutionResource` interfaccia. La sottoscrizione deve essere terminata in un secondo momento usando il metodo [IExecutionResource:: Remove](iexecutionresource-structure.md#remove) .

Quando si determinano i thread di hardware selezionati, il Gestione risorse tenterà di ottimizzare l'affinità dei nodi del processore. Se per il thread corrente è richiesta la sottoscrizione, è indicativo che il thread corrente intenda partecipare al lavoro assegnato all'utilità di pianificazione. In tal caso, le radici dei processori virtuali allocati si trovano sul nodo del processore su cui è in esecuzione il thread corrente, se possibile.

L'atto di sottoscrivere un thread aumenta di uno il livello di sottoscrizione del thread hardware sottostante. Il livello di sottoscrizione viene ridotto di uno quando la sottoscrizione viene terminata. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="ischedulerproxyshutdown-method"></a><a name="shutdown"></a> Metodo ISchedulerProxy:: Shutdown

Notifica all'Gestione risorse che l'utilità di pianificazione sta per essere arrestata. In questo modo il Gestione risorse recupererà immediatamente tutte le risorse concesse all'utilità di pianificazione.

```cpp
virtual void Shutdown() = 0;
```

### <a name="remarks"></a>Commenti

Tutte le `IExecutionContext` interfacce ricevute dall'utilità di pianificazione in seguito alla sottoscrizione di un thread esterno utilizzando i metodi `ISchedulerProxy::RequestInitialVirtualProcessors` o `ISchedulerProxy::SubscribeCurrentThread` devono essere restituite al gestione risorse utilizzando prima che `IExecutionResource::Remove` un'utilità di pianificazione venga arrestata.

Se l'utilità di pianificazione ha disattivato le radici del processore virtuale, è necessario attivarle usando [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate)e fare in modo che i proxy di thread in esecuzione su di essi lascino il `Dispatch` metodo dei contesti di esecuzione che inviano prima di richiamare `Shutdown` in un proxy dell'utilità di pianificazione.

Non è necessario che tramite l'utilità di pianificazione vengano restituite singolarmente tutte le radici del processore virtuale concesse da Gestione risorse tramite chiamate al metodo `Remove` poiché tutte le radici del processore virtuale saranno restituite a Gestione risorse all'arresto.

## <a name="ischedulerproxysubscribecurrentthread-method"></a><a name="subscribecurrentthread"></a> Metodo ISchedulerProxy:: SubscribeCurrentThread

Registra il thread corrente con l'Gestione risorse, associando l'oggetto all'utilità di pianificazione.

```cpp
virtual IExecutionResource* SubscribeCurrentThread() = 0;
```

### <a name="return-value"></a>Valore restituito

Oggetto `IExecutionResource` che rappresenta il thread corrente nel Runtime.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo se si desidera che il Gestione risorse conto per il thread corrente durante l'allocazione delle risorse all'utilità di pianificazione e ad altre utilità di pianificazione. È particolarmente utile quando il thread prevede di partecipare al lavoro accodato all'utilità di pianificazione, insieme alle radici del processore virtuale che l'utilità di pianificazione riceve dalla Gestione risorse. Il Gestione risorse usa le informazioni per impedire l'oversubscription superfluo dei thread hardware nel sistema.

La risorsa di esecuzione ricevuta tramite questo metodo deve essere restituita all'Gestione risorse usando il metodo [IExecutionResource:: Remove](iexecutionresource-structure.md#remove) . Il thread che chiama il `Remove` metodo deve essere lo stesso thread che in precedenza ha chiamato il `SubscribeCurrentThread` metodo.

L'atto di sottoscrivere un thread aumenta di uno il livello di sottoscrizione del thread hardware sottostante. Il livello di sottoscrizione viene ridotto di uno quando la sottoscrizione viene terminata. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="ischedulerproxyunbindcontext-method"></a><a name="unbindcontext"></a> Metodo ISchedulerProxy:: UnbindContext

Annulla l'associazione di un proxy del thread dal contesto di esecuzione specificato dal `pContext` parametro e lo restituisce al pool libero della factory del proxy di thread. Questo metodo può essere chiamato solo su un contesto di esecuzione che è stato associato tramite il metodo [ISchedulerProxy:: BindContext](#bindcontext) e non è ancora stato avviato tramite il `pContext` parametro di una chiamata al metodo [IThreadProxy:: SwitchTo](ithreadproxy-structure.md#switchto) .

```cpp
virtual void UnbindContext(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Il contesto di esecuzione da dissociare dal proxy del thread.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IThreadProxy](ithreadproxy-structure.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
