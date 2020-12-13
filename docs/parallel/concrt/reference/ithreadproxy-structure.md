---
description: 'Altre informazioni su: struttura IThreadProxy'
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
ms.openlocfilehash: e63a4d2bc29a1ae846e30d1b7e93c125def971b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334397"
---
# <a name="ithreadproxy-structure"></a>Struttura IThreadProxy

Astrazione per un thread di esecuzione. A seconda della chiave di criteri `SchedulerType` dell'utilità di pianificazione che si crea, Gestione risorse concederà un proxy del thread appoggiato da un thread Win32 normale o un thread UMS in modalità utente. I thread UMS sono supportati su sistemi operativi a 64 bit con Windows versione 7 e successive.

## <a name="syntax"></a>Sintassi

```cpp
struct IThreadProxy;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IThreadProxy:: GetId](#getid)|Restituisce un identificatore univoco per il proxy del thread.|
|[IThreadProxy:: switch out](#switchout)|Rimuove l'associazione tra il contesto e la radice del processore virtuale sottostante.|
|[IThreadProxy:: SwitchTo](#switchto)|Esegue un cambio di contesto cooperativo dal contesto attualmente in esecuzione a un altro.|
|[IThreadProxy:: YieldToSystem](#yieldtosystem)|Determina che il thread chiamante ceda l'esecuzione a un altro thread pronto per l'esecuzione sul processore corrente. Il sistema operativo seleziona il thread successivo da eseguire.|

## <a name="remarks"></a>Commenti

I proxy di thread sono associati ai contesti di esecuzione rappresentati dall'interfaccia `IExecutionContext` come mezzo per l'invio di lavoro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IThreadProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="ithreadproxygetid-method"></a><a name="getid"></a> Metodo IThreadProxy:: GetId

Restituisce un identificatore univoco per il proxy del thread.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di tipo Integer.

## <a name="ithreadproxyswitchout-method"></a><a name="switchout"></a> Metodo IThreadProxy:: switch out

Rimuove l'associazione tra il contesto e la radice del processore virtuale sottostante.

```cpp
virtual void SwitchOut(SwitchingProxyState switchState = Blocking) = 0;
```

### <a name="parameters"></a>Parametri

*switchState*<br/>
Indica lo stato del proxy del thread che esegue l'opzione. Il parametro è di tipo `SwitchingProxyState` .

### <a name="remarks"></a>Commenti

Utilizzare `SwitchOut` se è necessario rimuovere, per qualsiasi motivo, l'associazione tra un contesto e la radice del processore virtuale in cui è in esecuzione. A seconda del valore passato al parametro `switchState` e dell'eventuale esecuzione in una radice del processore virtuale, tramite la chiamata il proxy thread associato al contesto verrà restituito immediatamente o bloccato. È errato chiamare `SwitchOut` con il parametro impostato su `Idle`. Questa operazione comporterà un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) .

`SwitchOut` è utile quando si desidera ridurre il numero di radici del processore virtuale presenti nell'utilità di pianificazione, poiché richiesto da Gestione risorse oppure perché è stata richiesta una radice del processore virtuale temporaneamente in condizione di oversubscription, ma adesso non è più necessaria. In questo caso è necessario richiamare il metodo [IVirtualProcessorRoot:: Remove](iexecutionresource-structure.md#remove) nella radice del processore virtuale, prima di effettuare una chiamata a `SwitchOut` con il parametro `switchState` impostato su `Blocking` . In questo modo il proxy thread verrà bloccato e l'esecuzione verrà ripresa quando una radice del processore virtuale diversa nell'utilità di pianificazione è disponibile per eseguirlo. Il proxy del thread di blocco può essere ripreso chiamando la funzione `SwitchTo` per passare al contesto di esecuzione del proxy del thread. È anche possibile riprendere il proxy del thread, usando il contesto associato per attivare una radice del processore virtuale. Per ulteriori informazioni su come eseguire questa operazione, vedere [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate).

`SwitchOut` può essere utilizzato anche quando si desidera reinizializzare il processore virtuale in modo che possa essere attivato in futuro mentre si sta bloccando il proxy thread o lo si sta temporaneamente scollegando dalla radice del processore virtuale in cui è in esecuzione e tramite l'utilità di pianificazione viene inviato il lavoro. Utilizzare `SwitchOut` con il parametro `switchState` impostato su `Blocking` se si desidera bloccare il proxy thread. Può essere ripreso successivamente tramite `SwitchTo` o `IVirtualProcessorRoot::Activate` come indicato in precedenza. Utilizzare `SwitchOut` con il parametro impostato su `Nesting` quando si desidera scollegare temporaneamente questo proxy thread dalla radice del processore virtuale in cui è in esecuzione e dall'utilità di pianificazione a cui il processore virtuale è associato. Se si chiama `SwitchOut` con il parametro `switchState` impostato su `Nesting` durante l'esecuzione in una radice del processore virtuale, la radice verrà reinizializzata e l'esecuzione del proxy thread corrente continuerà senza bisogno della radice. Il proxy del thread viene considerato che ha lasciato l'utilità di pianificazione fino a quando non chiama il metodo [IThreadProxy:: switch](#switchout) con `Blocking` in un momento successivo. La seconda chiamata a `SwitchOut` con il parametro impostato su `Blocking` è progettata per restituire il contesto in uno stato bloccato in modo che possa essere ripreso da `SwitchTo` o `IVirtualProcessorRoot::Activate` nell'utilità di pianificazione da cui è stato scollegato. Poiché non era in esecuzione in una radice del processore virtuale, non viene eseguita alcuna reinizializzazione.

Una radice del processore virtuale reinizializzata non è diversa da una radice del processore virtuale nuova concessa all'utilità di pianificazione da Gestione Risorse. È possibile utilizzarla per l'esecuzione attivandola con un contesto di esecuzione utilizzando `IVirtualProcessorRoot::Activate`.

`SwitchOut` deve essere chiamato sull' `IThreadProxy` interfaccia che rappresenta il thread attualmente in esecuzione oppure i risultati non sono definiti.

Nelle librerie e nelle intestazioni fornite con Visual Studio 2010, questo metodo non accettava un parametro e non consentiva la reinizializzazione della radice del processore virtuale. Per mantenere il comportamento precedente, viene fornito il valore del parametro predefinito di `Blocking`.

## <a name="ithreadproxyswitchto-method"></a><a name="switchto"></a> Metodo IThreadProxy:: SwitchTo

Esegue un cambio di contesto cooperativo dal contesto attualmente in esecuzione a un altro.

```cpp
virtual void SwitchTo(
    _Inout_ IExecutionContext* pContext,
    SwitchingProxyState switchState) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Contesto di esecuzione al quale passare in modo cooperativo.

*switchState*<br/>
Indica lo stato del proxy del thread che esegue l'opzione. Il parametro è di tipo `SwitchingProxyState` .

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per passare da un contesto di esecuzione a un altro, dal metodo [IExecutionContext::D la patch](iexecutioncontext-structure.md#dispatch) del primo contesto di esecuzione. Il metodo associa il contesto `pContext` di esecuzione a un proxy del thread, se non è già associato a uno. La proprietà del proxy del thread corrente è determinata dal valore specificato per l' `switchState` argomento.

Usare il valore `Idle` quando si desidera restituire il proxy del thread attualmente in esecuzione al gestione risorse. La chiamata a `SwitchTo` con il parametro `switchState` impostato su `Idle` provocherà l' `pContext` avvio dell'esecuzione del contesto di esecuzione sulla risorsa di esecuzione sottostante. La proprietà di questo proxy di thread viene trasferita al Gestione risorse e si prevede che il metodo del contesto di esecuzione venga restituito `Dispatch` immediatamente dopo la `SwitchTo` restituzione di, al fine di completare il trasferimento. Il contesto di esecuzione in cui è stato inviato il proxy del thread è stato dissociato dal proxy del thread e l'utilità di pianificazione è libera di riutilizzarla o eliminarla in modo appropriato.

Usare il valore `Blocking` quando si vuole che questo proxy del thread entri in uno stato bloccato. La chiamata a `SwitchTo` con il parametro `switchState` impostato su `Blocking` provocherà l' `pContext` avvio dell'esecuzione del contesto di esecuzione e bloccherà il proxy del thread corrente fino a quando non viene ripreso. Quando il proxy del thread si trova nello stato, l'utilità di pianificazione mantiene la proprietà del proxy del thread `Blocking` . Il proxy del thread di blocco può essere ripreso chiamando la funzione `SwitchTo` per passare al contesto di esecuzione del proxy del thread. È anche possibile riprendere il proxy del thread, usando il contesto associato per attivare una radice del processore virtuale. Per ulteriori informazioni su come eseguire questa operazione, vedere [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate).

Usare il valore `Nesting` quando si vuole scollegare temporaneamente questo proxy di thread dalla radice del processore virtuale in cui è in esecuzione e l'utilità di pianificazione per cui sta inviando il lavoro. La chiamata a `SwitchTo` con il parametro `switchState` impostato su `Nesting` provocherà l'avvio dell'esecuzione del contesto `pContext` di esecuzione e anche il proxy del thread corrente continuerà l'esecuzione senza la necessità di una radice del processore virtuale. Il proxy del thread viene considerato che ha lasciato l'utilità di pianificazione fino a quando non chiama il metodo [IThreadProxy:: switch](#switchout) out in un momento successivo. Il `IThreadProxy::SwitchOut` metodo può bloccare il proxy del thread finché non è disponibile una radice del processore virtuale per la ripianificazione.

`SwitchTo` deve essere chiamato sull' `IThreadProxy` interfaccia che rappresenta il thread attualmente in esecuzione oppure i risultati non sono definiti. La funzione genera un'eccezione `invalid_argument` se il parametro `pContext` è impostato su `NULL` .

## <a name="ithreadproxyyieldtosystem-method"></a><a name="yieldtosystem"></a> Metodo IThreadProxy:: YieldToSystem

Determina che il thread chiamante ceda l'esecuzione a un altro thread pronto per l'esecuzione sul processore corrente. Il sistema operativo seleziona il thread successivo da eseguire.

```cpp
virtual void YieldToSystem() = 0;
```

### <a name="remarks"></a>Commenti

Quando viene chiamato da un proxy di thread supportato da un normale thread di Windows, `YieldToSystem` si comporta esattamente come la funzione di Windows `SwitchToThread` . Tuttavia, quando viene chiamato dai thread pianificabili in modalità utente, la `SwitchToThread` funzione delega l'attività di selezione del thread successivo da eseguire all'utilità di pianificazione della modalità utente, non del sistema operativo. Per ottenere l'effetto desiderato del passare a un thread pronto diverso nel sistema, usare `YieldToSystem` .

`YieldToSystem` deve essere chiamato sull' `IThreadProxy` interfaccia che rappresenta il thread attualmente in esecuzione oppure i risultati non sono definiti.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Struttura IExecutionContext](iexecutioncontext-structure.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)
