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
ms.openlocfilehash: fc2fb2df06225a5c963fe39178c1b4a10f77953d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368138"
---
# <a name="ithreadproxy-structure"></a>Struttura IThreadProxy

Astrazione per un thread di esecuzione. A seconda della chiave di criteri `SchedulerType` dell'utilità di pianificazione che si crea, Gestione risorse concederà un proxy del thread appoggiato da un thread Win32 normale o un thread UMS in modalità utente. I thread UMS sono supportati su sistemi operativi a 64 bit con Windows versione 7 e successive.

## <a name="syntax"></a>Sintassi

```cpp
struct IThreadProxy;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IThreadProxy::GetId](#getid)|Restituisce un identificatore univoco per il proxy del thread.|
|[IThreadProxy::SwitchOut](#switchout)|Rimuove l'associazione tra il contesto e la radice del processore virtuale sottostante.|
|[IThreadProxy::SwitchTo](#switchto)|Esegue un cambio di contesto cooperativo dal contesto attualmente in esecuzione a uno diverso.|
|[IThreadProxy::YieldToSystem](#yieldtosystem)|Determina che il thread chiamante ceda l'esecuzione a un altro thread pronto per l'esecuzione sul processore corrente. Il sistema operativo seleziona il thread successivo da eseguire.|

## <a name="remarks"></a>Osservazioni

I proxy di thread vengono accoppiati ai `IExecutionContext` contesti di esecuzione rappresentati dall'interfaccia come mezzo di invio del lavoro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IThreadProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="ithreadproxygetid-method"></a><a name="getid"></a>Metodo IThreadProxy::GetIdIThreadProxy::GetId Method

Restituisce un identificatore univoco per il proxy del thread.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore integer univoco.

## <a name="ithreadproxyswitchout-method"></a><a name="switchout"></a>Metodo IThreadProxy::SwitchOutIThreadProxy::SwitchOut Method

Rimuove l'associazione tra il contesto e la radice del processore virtuale sottostante.

```cpp
virtual void SwitchOut(SwitchingProxyState switchState = Blocking) = 0;
```

### <a name="parameters"></a>Parametri

*switchState (Statodi adedel*<br/>
Indica lo stato del proxy del thread che esegue l'opzione. Il parametro `SwitchingProxyState`è di tipo .

### <a name="remarks"></a>Osservazioni

Utilizzare `SwitchOut` se è necessario rimuovere, per qualsiasi motivo, l'associazione tra un contesto e la radice del processore virtuale in cui è in esecuzione. A seconda del valore passato al parametro `switchState` e dell'eventuale esecuzione in una radice del processore virtuale, tramite la chiamata il proxy thread associato al contesto verrà restituito immediatamente o bloccato. È errato chiamare `SwitchOut` con il parametro impostato su `Idle`. In questo modo verrà verificata un'eccezione [invalid_argument.](../../../standard-library/invalid-argument-class.md)

`SwitchOut` è utile quando si desidera ridurre il numero di radici del processore virtuale presenti nell'utilità di pianificazione, poiché richiesto da Gestione risorse oppure perché è stata richiesta una radice del processore virtuale temporaneamente in condizione di oversubscription, ma adesso non è più necessaria. In questo caso è necessario richiamare il metodo [IVirtualProcessorRoot::Remove](iexecutionresource-structure.md#remove) nella `SwitchOut` radice `switchState` del `Blocking`processore virtuale, prima di effettuare una chiamata a con il parametro impostato su . In questo modo il proxy thread verrà bloccato e l'esecuzione verrà ripresa quando una radice del processore virtuale diversa nell'utilità di pianificazione è disponibile per eseguirlo. Il proxy del thread di blocco `SwitchTo` può essere ripreso chiamando la funzione per passare al contesto di esecuzione del proxy del thread. È inoltre possibile riprendere il proxy del thread, utilizzando il contesto associato per attivare una radice del processore virtuale. Per ulteriori informazioni su come eseguire questa operazione, vedere [IVirtualProcessorRoot::Activate](ivirtualprocessorroot-structure.md#activate).

`SwitchOut` può essere utilizzato anche quando si desidera reinizializzare il processore virtuale in modo che possa essere attivato in futuro mentre si sta bloccando il proxy thread o lo si sta temporaneamente scollegando dalla radice del processore virtuale in cui è in esecuzione e tramite l'utilità di pianificazione viene inviato il lavoro. Utilizzare `SwitchOut` con il parametro `switchState` impostato su `Blocking` se si desidera bloccare il proxy thread. Può essere ripreso successivamente tramite `SwitchTo` o `IVirtualProcessorRoot::Activate` come indicato in precedenza. Utilizzare `SwitchOut` con il parametro impostato su `Nesting` quando si desidera scollegare temporaneamente questo proxy thread dalla radice del processore virtuale in cui è in esecuzione e dall'utilità di pianificazione a cui il processore virtuale è associato. Se si chiama `SwitchOut` con il parametro `switchState` impostato su `Nesting` durante l'esecuzione in una radice del processore virtuale, la radice verrà reinizializzata e l'esecuzione del proxy thread corrente continuerà senza bisogno della radice. Il proxy del thread è considerato aver lasciato l'utilità di pianificazione `Blocking` fino a quando non chiama il [IThreadProxy::SwitchOut](#switchout) metodo con in un secondo momento nel tempo. La seconda chiamata a `SwitchOut` con il parametro impostato su `Blocking` è progettata per restituire il contesto in uno stato bloccato in modo che possa essere ripreso da `SwitchTo` o `IVirtualProcessorRoot::Activate` nell'utilità di pianificazione da cui è stato scollegato. Poiché non era in esecuzione in una radice del processore virtuale, non viene eseguita alcuna reinizializzazione.

Una radice del processore virtuale reinizializzata non è diversa da una radice del processore virtuale nuova concessa all'utilità di pianificazione da Gestione Risorse. È possibile utilizzarla per l'esecuzione attivandola con un contesto di esecuzione utilizzando `IVirtualProcessorRoot::Activate`.

`SwitchOut`deve essere chiamato `IThreadProxy` sull'interfaccia che rappresenta il thread attualmente in esecuzione o i risultati non sono definiti.

Nelle librerie e nelle intestazioni fornite con Visual Studio 2010, questo metodo non accettava un parametro e non consentiva la reinizializzazione della radice del processore virtuale. Per mantenere il comportamento precedente, viene fornito il valore del parametro predefinito di `Blocking`.

## <a name="ithreadproxyswitchto-method"></a><a name="switchto"></a>Metodo IThreadProxy::SwitchToIThreadProxy::SwitchTo Method

Esegue un cambio di contesto cooperativo dal contesto attualmente in esecuzione a uno diverso.

```cpp
virtual void SwitchTo(
    _Inout_ IExecutionContext* pContext,
    SwitchingProxyState switchState) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Contesto di esecuzione a cui passare in modo cooperativo.

*switchState (Statodi adedel*<br/>
Indica lo stato del proxy del thread che esegue l'opzione. Il parametro `SwitchingProxyState`è di tipo .

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per passare da un contesto di esecuzione a un altro, dal [iExecutionContext::Dispatch](iexecutioncontext-structure.md#dispatch) metodo del primo contesto di esecuzione. Il metodo associa il `pContext` contesto di esecuzione a un proxy del thread se non è già associato a uno. La proprietà del proxy del thread corrente è `switchState` determinata dal valore specificato per l'argomento.

Utilizzare il `Idle` valore quando si desidera restituire il proxy del thread attualmente in esecuzione a Gestione risorse. La `SwitchTo` chiamata `switchState` con `Idle` il parametro `pContext` impostato su causerà l'avvio dell'esecuzione del contesto di esecuzione nella risorsa di esecuzione sottostante. La proprietà di questo proxy del thread viene trasferita a Gestione risorse `Dispatch` e si `SwitchTo` prevede di restituire dal metodo del contesto di esecuzione subito dopo i resi, per completare il trasferimento. Il contesto di esecuzione che il proxy del thread stava inviando è dissociato dal proxy del thread e l'utilità di pianificazione è libera di riutilizzarlo o distruggerlo come ritiene opportuno.

Utilizzare il `Blocking` valore quando si desidera che il proxy del thread entri in uno stato bloccato. La `SwitchTo` chiamata `switchState` con `Blocking` il parametro `pContext` impostato su causerà l'avvio dell'esecuzione del contesto di esecuzione e bloccherà il proxy del thread corrente fino alla ripresa. L'utilità di pianificazione mantiene la `Blocking` proprietà del proxy del thread quando il proxy del thread è nello stato. Il proxy del thread di blocco `SwitchTo` può essere ripreso chiamando la funzione per passare al contesto di esecuzione del proxy del thread. È inoltre possibile riprendere il proxy del thread, utilizzando il contesto associato per attivare una radice del processore virtuale. Per ulteriori informazioni su come eseguire questa operazione, vedere [IVirtualProcessorRoot::Activate](ivirtualprocessorroot-structure.md#activate).

Utilizzare il `Nesting` valore quando si desidera scollegare temporaneamente il proxy del thread dalla radice del processore virtuale in cui è in esecuzione e l'utilità di pianificazione per cui è in corso il lavoro di invio. La `SwitchTo` chiamata `switchState` con `Nesting` il parametro `pContext` impostato su causerà l'avvio dell'esecuzione del contesto di esecuzione e anche il proxy del thread corrente continua l'esecuzione senza la necessità di una radice del processore virtuale. Il proxy del thread è considerato aver lasciato l'utilità di pianificazione fino a quando non chiama il [IThreadProxy::SwitchOut](#switchout) metodo in un secondo momento nel tempo. Il `IThreadProxy::SwitchOut` metodo potrebbe bloccare il proxy del thread fino a quando non è disponibile una radice del processore virtuale per ripianificarlo.

`SwitchTo`deve essere chiamato `IThreadProxy` sull'interfaccia che rappresenta il thread attualmente in esecuzione o i risultati non sono definiti. La funzione `invalid_argument` genera un'eccezione se il parametro `pContext` è impostato su `NULL`.

## <a name="ithreadproxyyieldtosystem-method"></a><a name="yieldtosystem"></a>Metodo IThreadProxy::YieldToSystemIThreadProxy::YieldToSystem Method

Determina che il thread chiamante ceda l'esecuzione a un altro thread pronto per l'esecuzione sul processore corrente. Il sistema operativo seleziona il thread successivo da eseguire.

```cpp
virtual void YieldToSystem() = 0;
```

### <a name="remarks"></a>Osservazioni

Quando viene chiamato da un proxy di `YieldToSystem` thread supportato da `SwitchToThread`un normale thread di Windows, si comporta esattamente come la funzione di Windows . Tuttavia, quando viene chiamata da thread UMS `SwitchToThread` (User-Mode schedulable), la funzione delega l'attività di selezionare il thread successivo da eseguire all'utilità di pianificazione in modalità utente, non al sistema operativo. Per ottenere l'effetto desiderato del passaggio a un `YieldToSystem`filetto pronto diverso nel sistema, utilizzare .

`YieldToSystem`deve essere chiamato `IThreadProxy` sull'interfaccia che rappresenta il thread attualmente in esecuzione o i risultati non sono definiti.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IExecutionContext](iexecutioncontext-structure.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)
