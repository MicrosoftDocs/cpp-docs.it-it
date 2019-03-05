---
title: Struttura IThreadProxy
ms.date: 11/04/2016
f1_keywords:
- IThreadProxy
- CONCRTRM/concurrency::IThreadProxy
- CONCRTRM/concurrency::IThreadProxy::IThreadProxy::GetId
- CONCRTRM/concurrency::IThreadProxy::IThreadProxy::SwitchOut
- CONCRTRM/concurrency::IThreadProxy::IThreadProxy::SwitchTo
- CONCRTRM/concurrency::IThreadProxy::IThreadProxy::YieldToSystem
helpviewer_keywords:
- IThreadProxy structure
ms.assetid: feb89241-a555-4e61-ad48-40add54daeca
ms.openlocfilehash: 906b05800711e89592e5230bec7fa0fe1640379f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265717"
---
# <a name="ithreadproxy-structure"></a>Struttura IThreadProxy

Astrazione per un thread di esecuzione. A seconda della chiave di criteri `SchedulerType` dell'utilità di pianificazione che si crea, Gestione risorse concederà un proxy del thread appoggiato da un thread Win32 normale o un thread UMS in modalità utente. I thread UMS sono supportati su sistemi operativi a 64 bit con Windows versione 7 e successive.

## <a name="syntax"></a>Sintassi

```
struct IThreadProxy;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IThreadProxy::GetId](#getid)|Restituisce un identificatore univoco per il proxy thread.|
|[IThreadProxy::SwitchOut](#switchout)|Rimuove l'associazione tra il contesto e la radice del processore virtuale sottostante.|
|[IThreadProxy::SwitchTo](#switchto)|Esegue un cambio di contesto cooperativo dal contesto attualmente in esecuzione con un altro.|
|[IThreadProxy::YieldToSystem](#yieldtosystem)|Determina che il thread chiamante ceda l'esecuzione a un altro thread pronto per l'esecuzione sul processore corrente. Il sistema operativo seleziona il thread successivo da eseguire.|

## <a name="remarks"></a>Note

Proxy del thread sono associati ai contesti di esecuzione rappresentati dall'interfaccia `IExecutionContext` come mezzo per inviare lavoro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IThreadProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="getid"></a>  Metodo IThreadProxy:: GetID

Restituisce un identificatore univoco per il proxy thread.

```
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Un identificatore univoco di tipo integer.

##  <a name="switchout"></a>  Metodo IThreadProxy::

Rimuove l'associazione tra il contesto e la radice del processore virtuale sottostante.

```
virtual void SwitchOut(SwitchingProxyState switchState = Blocking) = 0;
```

### <a name="parameters"></a>Parametri

*switchState*<br/>
Indica lo stato del proxy del thread che sta eseguendo l'opzione. Il parametro è di tipo `SwitchingProxyState`.

### <a name="remarks"></a>Note

Utilizzare `SwitchOut` se è necessario rimuovere, per qualsiasi motivo, l'associazione tra un contesto e la radice del processore virtuale in cui è in esecuzione. A seconda del valore passato al parametro `switchState` e dell'eventuale esecuzione in una radice del processore virtuale, tramite la chiamata il proxy thread associato al contesto verrà restituito immediatamente o bloccato. È errato chiamare `SwitchOut` con il parametro impostato su `Idle`. Questa operazione comporterà un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione.

`SwitchOut` è utile quando si desidera ridurre il numero di radici del processore virtuale presenti nell'utilità di pianificazione, poiché richiesto da Gestione risorse oppure perché è stata richiesta una radice del processore virtuale temporaneamente in condizione di oversubscription, ma adesso non è più necessaria. In questo caso si deve richiamare il metodo [IVirtualProcessorRoot::Remove](iexecutionresource-structure.md#remove) nella radice del processore virtuale, prima di effettuare una chiamata a `SwitchOut` con il parametro `switchState` impostato su `Blocking`. In questo modo il proxy thread verrà bloccato e l'esecuzione verrà ripresa quando una radice del processore virtuale diversa nell'utilità di pianificazione è disponibile per eseguirlo. Il proxy del thread di blocco può essere ripresa chiamando la funzione `SwitchTo` per passare al contesto di esecuzione di questo proxy del thread. È inoltre possibile riprendere il proxy thread, utilizzando il contesto associato per attivare una radice del processore virtuale. Per altre informazioni su come eseguire questa operazione, vedere [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate).

`SwitchOut` può essere utilizzato anche quando si desidera reinizializzare il processore virtuale in modo che possa essere attivato in futuro mentre si sta bloccando il proxy thread o lo si sta temporaneamente scollegando dalla radice del processore virtuale in cui è in esecuzione e tramite l'utilità di pianificazione viene inviato il lavoro. Utilizzare `SwitchOut` con il parametro `switchState` impostato su `Blocking` se si desidera bloccare il proxy thread. Può essere ripreso successivamente tramite `SwitchTo` o `IVirtualProcessorRoot::Activate` come indicato in precedenza. Utilizzare `SwitchOut` con il parametro impostato su `Nesting` quando si desidera scollegare temporaneamente questo proxy thread dalla radice del processore virtuale in cui è in esecuzione e dall'utilità di pianificazione a cui il processore virtuale è associato. Se si chiama `SwitchOut` con il parametro `switchState` impostato su `Nesting` durante l'esecuzione in una radice del processore virtuale, la radice verrà reinizializzata e l'esecuzione del proxy thread corrente continuerà senza bisogno della radice. Il proxy thread è considerato SwitchOut l'utilità di pianificazione finché non viene chiamato il [IThreadProxy:: SwitchOut](#switchout) metodo con `Blocking` in un secondo momento nel tempo. La seconda chiamata a `SwitchOut` con il parametro impostato su `Blocking` è progettata per restituire il contesto in uno stato bloccato in modo che possa essere ripreso da `SwitchTo` o `IVirtualProcessorRoot::Activate` nell'utilità di pianificazione da cui è stato scollegato. Poiché non era in esecuzione in una radice del processore virtuale, non viene eseguita alcuna reinizializzazione.

Una radice del processore virtuale reinizializzata non è diversa da una radice del processore virtuale nuova concessa all'utilità di pianificazione da Gestione Risorse. È possibile utilizzarla per l'esecuzione attivandola con un contesto di esecuzione utilizzando `IVirtualProcessorRoot::Activate`.

`SwitchOut` deve essere chiamato sul `IThreadProxy` interfaccia che rappresenta il thread attualmente in esecuzione o i risultati sono indefiniti.

Nelle librerie e nelle intestazioni fornite con Visual Studio 2010, questo metodo non accettava un parametro e non consentiva la reinizializzazione della radice del processore virtuale. Per mantenere il comportamento precedente, viene fornito il valore del parametro predefinito di `Blocking`.

##  <a name="switchto"></a>  Metodo IThreadProxy:: SwitchTo

Esegue un cambio di contesto cooperativo dal contesto attualmente in esecuzione con un altro.

```
virtual void SwitchTo(
    _Inout_ IExecutionContext* pContext,
    SwitchingProxyState switchState) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Il contesto di esecuzione passa in modo cooperativo.

*switchState*<br/>
Indica lo stato del proxy del thread che sta eseguendo l'opzione. Il parametro è di tipo `SwitchingProxyState`.

### <a name="remarks"></a>Note

Usare questo metodo per passare da un contesto di esecuzione a un altro, dal [IExecutionContext:: dispatch](iexecutioncontext-structure.md#dispatch) metodo del contesto di esecuzione prima. Il metodo associa il contesto di esecuzione `pContext` con un proxy del thread se non è già associato a uno. La proprietà del proxy del thread corrente è determinata dal valore specificato per il `switchState` argomento.

Usare il valore `Idle` quando si desidera restituire il proxy thread attualmente in esecuzione per Resource Manager. La chiamata `SwitchTo` con il parametro `switchState` impostata su `Idle` causerà il contesto di esecuzione `pContext` per avviare l'esecuzione nella risorsa di esecuzione sottostante. Proprietà di questo proxy thread viene trasferita a Resource Manager e devono restituire dal contesto di esecuzione `Dispatch` metodo subito dopo `SwitchTo` restituisce un valore per completare il trasferimento. Il contesto di esecuzione che il proxy thread stava inviando viene dissociato dal proxy del thread, mentre l'utilità di pianificazione è gratuito per riutilizzarlo oppure eliminarlo come ritenga.

Usare il valore `Blocking` quando si desidera questo proxy thread a uno stato bloccato. La chiamata `SwitchTo` con il parametro `switchState` impostata su `Blocking` causerà il contesto di esecuzione `pContext` per avviare l'esecuzione e bloccare il proxy thread corrente fino a quando non viene ripresa. L'utilità di pianificazione mantiene la proprietà del proxy del thread quando il proxy thread è nel `Blocking` dello stato. Il proxy del thread di blocco può essere ripresa chiamando la funzione `SwitchTo` per passare al contesto di esecuzione di questo proxy del thread. È inoltre possibile riprendere il proxy thread, utilizzando il contesto associato per attivare una radice del processore virtuale. Per altre informazioni su come eseguire questa operazione, vedere [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate).

Usare il valore `Nesting` quando si desidera scollegare temporaneamente questo proxy thread dalla radice del processore virtuale in cui viene eseguito e l'utilità di pianificazione viene inviato il lavoro. La chiamata `SwitchTo` con il parametro `switchState` impostata su `Nesting` causerà il contesto di esecuzione `pContext` per avviare l'esecuzione e l'oggetto proxy del thread continuerà l'esecuzione senza la necessità di una radice del processore virtuale. Il proxy thread è considerato SwitchOut l'utilità di pianificazione finché non viene chiamato il [IThreadProxy::](#switchout) metodo in un secondo momento nel tempo. Il `IThreadProxy::SwitchOut` metodo è stato possibile bloccare il proxy thread fino a quando non è disponibile, modificare la pianificazione di una radice del processore virtuale.

`SwitchTo` deve essere chiamato sul `IThreadProxy` interfaccia che rappresenta il thread attualmente in esecuzione o i risultati sono indefiniti. La funzione genera un'eccezione `invalid_argument` se il parametro `pContext` è impostata su `NULL`.

##  <a name="yieldtosystem"></a>  Metodo IThreadProxy:: YieldToSystem

Determina che il thread chiamante ceda l'esecuzione a un altro thread pronto per l'esecuzione sul processore corrente. Il sistema operativo seleziona il thread successivo da eseguire.

```
virtual void YieldToSystem() = 0;
```

### <a name="remarks"></a>Note

Quando viene chiamato da un proxy del thread supportato da un thread di Windows normale `YieldToSystem` si comporta esattamente come la funzione Windows `SwitchToThread`. Tuttavia, quando viene chiamato dal thread UMS pianificabili in modalità utente, il `SwitchToThread` funzione delega il compito di prelievo thread successivo per l'esecuzione all'utilità di pianificazione in modalità di utente, non il sistema operativo. Per ottenere l'effetto desiderato del passaggio a un altro thread pronto nel sistema, usare `YieldToSystem`.

`YieldToSystem` deve essere chiamato sul `IThreadProxy` interfaccia che rappresenta il thread attualmente in esecuzione o i risultati sono indefiniti.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IExecutionContext](iexecutioncontext-structure.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)
