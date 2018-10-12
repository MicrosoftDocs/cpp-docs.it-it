---
title: Struttura ISchedulerProxy | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- ISchedulerProxy
- CONCRTRM/concurrency::ISchedulerProxy
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::BindContext
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::CreateOversubscriber
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::RequestInitialVirtualProcessors
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::Shutdown
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::SubscribeCurrentThread
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::UnbindContext
dev_langs:
- C++
helpviewer_keywords:
- ISchedulerProxy structure
ms.assetid: af416973-7a1c-4c30-aa3b-4161c2aaea54
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 72fa49d763159385607330231994d15952f0c771
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163140"
---
# <a name="ischedulerproxy-structure"></a>Struttura ISchedulerProxy

L'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse del runtime di concorrenza per negoziare l'allocazione delle risorse.

## <a name="syntax"></a>Sintassi

```
struct ISchedulerProxy;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ISchedulerProxy::BindContext](#bindcontext)|Associa un contesto di esecuzione con un proxy del thread, se non è già associato a uno.|
|[ISchedulerProxy::CreateOversubscriber](#createoversubscriber)|Crea una nuova radice del processore virtuale sul thread dell'hardware associato a una risorsa di esecuzione esistente.|
|[ISchedulerProxy:: RequestInitialVirtualProcessors](#requestinitialvirtualprocessors)|Richiede un'allocazione iniziale di radici del processore virtuale. Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che può eseguire operazioni dell'utilità di pianificazione.|
|[ISchedulerProxy::Shutdown](#shutdown)|Notifica al gestore di risorse che l'utilità di pianificazione è in corso l'arresto. In questo modo il gestore di risorse per recuperare immediatamente tutte le risorse concesse all'utilità di pianificazione.|
|[ISchedulerProxy::SubscribeCurrentThread](#subscribecurrentthread)|Registra il thread corrente con Resource Manager, associandolo con questa utilità di pianificazione.|
|[ISchedulerProxy::UnbindContext](#unbindcontext)|Rimuove l'associazione dal contesto di esecuzione specificato da un proxy del thread di `pContext` parametro e lo restituisce al pool libero della factory proxy thread. Questo metodo può essere chiamato solo in un contesto di esecuzione che è stato associato tramite il [ISchedulerProxy:: BindContext](#bindcontext) metodo e non è ancora stato avviato tramite il `pContext` parametro di un [IThreadProxy:: SwitchTo ](ithreadproxy-structure.md#switchto) chiamata al metodo.|

## <a name="remarks"></a>Note

Resource Manager passa un' `ISchedulerProxy` interfaccia per ogni utilità di pianificazione che esegue la registrazione con esso tramite il [IResourceManager:: RegisterScheduler](iresourcemanager-structure.md#registerscheduler) (metodo).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISchedulerProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="bindcontext"></a>  Metodo ISchedulerProxy:: BindContext

Associa un contesto di esecuzione con un proxy del thread, se non è già associato a uno.

```
virtual void BindContext(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Interfaccia per il contesto di esecuzione da associare a un proxy del thread.

### <a name="remarks"></a>Note

In genere, il [IThreadProxy:: SwitchTo](ithreadproxy-structure.md#switchto) metodo assocerà un proxy del thread a un contesto di esecuzione su richiesta. Esistono, tuttavia, casi in cui è necessario associare un contesto in anticipo per assicurarsi che il `SwitchTo` metodo passa a un contesto già associato. Ciò avviene in un contesto di pianificazione poiché non può chiamare metodi di allocazione della memoria UMS e associazione di un proxy del thread potrebbe comportare allocazione di memoria se un proxy del thread non è prontamente disponibile nel pool di gratuito della factory del proxy thread.

`invalid_argument` viene generata se il parametro `pContext` ha il valore `NULL`.

##  <a name="createoversubscriber"></a>  Metodo ISchedulerProxy:: CreateOversubscriber

Crea una nuova radice del processore virtuale sul thread dell'hardware associato a una risorsa di esecuzione esistente.

```
virtual IVirtualProcessorRoot* CreateOversubscriber(_Inout_ IExecutionResource* pExecutionResource) = 0;
```

### <a name="parameters"></a>Parametri

*pExecutionResource*<br/>
Un `IExecutionResource` interfaccia che rappresenta il thread di hardware che si desidera abilitare l'oversubscription.

### <a name="return-value"></a>Valore restituito

Interfaccia di `IVirtualProcessorRoot`.

### <a name="remarks"></a>Note

Usare questo metodo quando si vuole eseguire l'oversubscription di un thread di hardware specifico per un periodo di tempo limitato all'utilità di pianificazione. Dopo aver completato la radice del processore virtuale, è necessario reinserirlo al gestore di risorse chiamando il [rimuovere](iexecutionresource-structure.md#remove) metodo su di `IVirtualProcessorRoot` interfaccia.

È anche possibile eseguire l'oversubscription di una radice del processore virtuale esistente, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`.

##  <a name="requestinitialvirtualprocessors"></a>  Metodo ISchedulerProxy:: RequestInitialVirtualProcessors

Richiede un'allocazione iniziale di radici del processore virtuale. Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che può eseguire operazioni dell'utilità di pianificazione.

```
virtual IExecutionResource* RequestInitialVirtualProcessors(bool doSubscribeCurrentThread) = 0;
```

### <a name="parameters"></a>Parametri

*doSubscribeCurrentThread*<br/>
Indica se effettuare la sottoscrizione al thread corrente e per tale account durante l'allocazione delle risorse.

### <a name="return-value"></a>Valore restituito

Il `IExecutionResource` interfaccia per il thread corrente, se il parametro `doSubscribeCurrentThread` ha il valore **true**. Se il valore è **false**, il metodo restituisce NULL.

### <a name="remarks"></a>Note

Prima di un'utilità di pianificazione viene eseguita alcuna operazione, deve usare questo metodo per richiedere le radici del processore virtuale di Resource Manager. Il gestore di risorse accederanno criteri dell'utilità di pianificazione utilizzando [IScheduler:: GetPolicy](ischeduler-structure.md#getpolicy) e usare i valori per le chiavi dei criteri `MinConcurrency`, `MaxConcurrency` e `TargetOversubscriptionFactor` per determinare il numero di thread hardware per assegnare al utilità di pianificazione inizialmente e quanti radici di processori virtuali da creare per ogni thread di hardware. Per altre informazioni sull'uso di criteri dell'utilità di pianificazione per determinare l'allocazione iniziale di un'utilità di pianificazione, vedere [PolicyElementKey](concurrency-namespace-enums.md).

Il gestore delle risorse concede le risorse a un'utilità di pianificazione chiamando il metodo [IScheduler:: AddVirtualProcessors](ischeduler-structure.md#addvirtualprocessors) con un elenco di radici del processore virtuale. Il metodo viene richiamato come callback nell'utilità di pianificazione prima di questo metodo viene restituito.

Se l'utilità di pianificazione ha richiesto una sottoscrizione per il thread corrente, impostando il parametro `doSubscribeCurrentThread` al **true**, il metodo restituisce un `IExecutionResource` interfaccia. La sottoscrizione deve terminare in un secondo momento usando il [IExecutionResource:: Remove](iexecutionresource-structure.md#remove) (metodo).

Quando si stabilisce quali thread hardware sono selezionate, Resource Manager tenterà di ottimizzare per l'affinità del nodo del processore. Se l'abbonamento viene richiesto per il thread corrente, è un'indicazione che il thread corrente intende partecipare il lavoro assegnato a questa utilità di pianificazione. In tal caso, si trovano le radici di processori virtuali allocate sul nodo del processore che del thread corrente è in esecuzione, se possibile.

Sottoscrizione di un thread aumenta il livello di sottoscrizione del thread di hardware sottostante da uno. Il livello di abbonamento viene ridotto di uno quando viene terminata la sottoscrizione. Per altre informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

##  <a name="shutdown"></a>  Metodo ISchedulerProxy:: Shutdown

Notifica al gestore di risorse che l'utilità di pianificazione è in corso l'arresto. In questo modo il gestore di risorse per recuperare immediatamente tutte le risorse concesse all'utilità di pianificazione.

```
virtual void Shutdown() = 0;
```

### <a name="remarks"></a>Note

Tutti i `IExecutionContext` interfacce l'utilità di pianificazione ricevuto come risultato di un thread esterni usando i metodi di sottoscrizione `ISchedulerProxy::RequestInitialVirtualProcessors` oppure `ISchedulerProxy::SubscribeCurrentThread` deve essere restituito a Resource Manager usando `IExecutionResource::Remove` prima di un'utilità di pianificazione viene chiuso.

Se l'utilità di pianificazione qualsiasi disattivato radici del processore virtuale, è necessario attivarli usando [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate), in modo che il proxy thread in esecuzione su di essi lasciare il `Dispatch` dell'esecuzione del metodo contesti che stanno inviando prima di richiamare `Shutdown` su un proxy dell'utilità di pianificazione.

Non è necessario che tramite l'utilità di pianificazione vengano restituite singolarmente tutte le radici del processore virtuale concesse da Gestione risorse tramite chiamate al metodo `Remove` poiché tutte le radici del processore virtuale saranno restituite a Gestione risorse all'arresto.

##  <a name="subscribecurrentthread"></a>  Metodo ISchedulerProxy::

Registra il thread corrente con Resource Manager, associandolo con questa utilità di pianificazione.

```
virtual IExecutionResource* SubscribeCurrentThread() = 0;
```

### <a name="return-value"></a>Valore restituito

Il `IExecutionResource` l'interazione che rappresenta il thread corrente in fase di esecuzione.

### <a name="remarks"></a>Note

Usare questo metodo se si desidera che il gestore delle risorse per tenere conto per il thread corrente durante l'allocazione delle risorse per l'utilità di pianificazione e altre utilità di pianificazione. È particolarmente utile quando i piani di thread per partecipare al lavoro in coda all'utilità di pianificazione, con radici del processore virtuale, che l'utilità di pianificazione riceve da Resource Manager. Resource Manager usa le informazioni per evitare inutili oversubscription di thread hardware sul sistema.

La risorsa di esecuzione ricevuta tramite questo metodo deve essere restituita a Resource Manager usando il [IExecutionResource:: Remove](iexecutionresource-structure.md#remove) (metodo). Il thread che chiama il `Remove` metodo deve essere stesso thread che ha chiamato in precedenza il `SubscribeCurrentThread` (metodo).

Sottoscrizione di un thread aumenta il livello di sottoscrizione del thread di hardware sottostante da uno. Il livello di abbonamento viene ridotto di uno quando viene terminata la sottoscrizione. Per altre informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

##  <a name="unbindcontext"></a>  Metodo ISchedulerProxy:: UnbindContext

Rimuove l'associazione dal contesto di esecuzione specificato da un proxy del thread di `pContext` parametro e lo restituisce al pool libero della factory proxy thread. Questo metodo può essere chiamato solo in un contesto di esecuzione che è stato associato tramite il [ISchedulerProxy:: BindContext](#bindcontext) metodo e non è ancora stato avviato tramite il `pContext` parametro di un [IThreadProxy:: SwitchTo ](ithreadproxy-structure.md#switchto) chiamata al metodo.

```
virtual void UnbindContext(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Il contesto di esecuzione per annullare l'associazione dal relativo proxy thread.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IThreadProxy](ithreadproxy-structure.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
