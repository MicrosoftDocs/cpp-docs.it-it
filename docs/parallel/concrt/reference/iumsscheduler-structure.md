---
title: Struttura IUMSScheduler
ms.date: 11/04/2016
f1_keywords:
- IUMSScheduler
- CONCRTRM/concurrency::IUMSScheduler
- CONCRTRM/concurrency::IUMSScheduler::IUMSScheduler::SetCompletionList
helpviewer_keywords:
- IUMSScheduler structure
ms.assetid: 3a500225-4e02-4849-bb56-d744865f5870
ms.openlocfilehash: 45df744a9850510006e4bf887c8ed61b000a8e5c
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139987"
---
# <a name="iumsscheduler-structure"></a>Struttura IUMSScheduler

Interfaccia a un'astrazione di un'utilità di pianificazione di lavoro che vuole che Gestione risorse del runtime di concorrenza passi thread UMS pianificabili in modalità utente. Gestione risorse usa questa interfaccia per comunicare con le utilità di pianificazione dei thread UMS. L'interfaccia `IUMSScheduler` eredita dall'interfaccia `IScheduler` .

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSScheduler : public IScheduler;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSScheduler:: Tocomplete](#setcompletionlist)|Assegna un'interfaccia `IUMSCompletionList` a un'utilità di pianificazione del thread UMS.|

## <a name="remarks"></a>Osservazioni

Se si implementa un'utilità di pianificazione personalizzata che comunica con il Gestione risorse e si desidera che i thread UMS vengano passati all'utilità di pianificazione anziché ai normali thread Win32, è necessario fornire un'implementazione dell'interfaccia `IUMSScheduler`. Inoltre, è necessario impostare il valore dei criteri per la chiave dei criteri dell'utilità di pianificazione `SchedulerKind` essere `UmsThreadDefault`. Se il criterio specifica un thread UMS, l'interfaccia `IScheduler` passata come parametro al metodo [IResourceManager:: RegisterScheduler](iresourcemanager-structure.md#registerscheduler) deve essere un'interfaccia `IUMSScheduler`.

Il Gestione risorse è in grado di distribuire i thread UMS solo nei sistemi operativi con la funzionalità UMS. i sistemi operativi a 64 bit con Windows 7 e versioni successive supportano i thread UMS. Se si crea un criterio dell'utilità di pianificazione con la chiave di `SchedulerKind` impostata sul valore `UmsThreadDefault` e la piattaforma sottostante non supporta UMS, il valore della chiave `SchedulerKind` nel criterio verrà modificato nel valore `ThreadScheduler`. È consigliabile leggere sempre questo valore del criterio prima di prevedere la ricezione di thread UMS.

L'interfaccia `IUMSScheduler` è una estremità di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e l'Gestione risorse. L'altra estremità è rappresentata dalle interfacce `IResourceManager` e `ISchedulerProxy`, che vengono implementate dal Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[IScheduler](ischeduler-structure.md)

`IUMSScheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="setcompletionlist"></a>Metodo IUMSScheduler:: SetValue

Assegna un'interfaccia `IUMSCompletionList` a un'utilità di pianificazione del thread UMS.

```cpp
virtual void SetCompletionList(_Inout_ IUMSCompletionList* pCompletionList) = 0;
```

### <a name="parameters"></a>Parametri

*pCompletionList*<br/>
Interfaccia dell'elenco di completamento per l'utilità di pianificazione. È presente un unico elenco per ogni utilità di pianificazione.

### <a name="remarks"></a>Osservazioni

Il Gestione risorse richiamerà questo metodo su un'utilità di pianificazione che specifica che desidera i thread UMS, dopo che l'utilità di pianificazione ha richiesto un'allocazione iniziale delle risorse. L'utilità di pianificazione può utilizzare l'interfaccia `IUMSCompletionList` per determinare quando i proxy di thread UMS sono sbloccati. È valido solo per accedere a questa interfaccia da un proxy di thread in esecuzione su una radice del processore virtuale assegnata all'utilità di pianificazione UMS.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IUMSCompletionList](iumscompletionlist-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
