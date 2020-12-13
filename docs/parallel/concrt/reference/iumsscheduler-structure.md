---
description: 'Altre informazioni su: Struttura IUMSScheduler'
title: Struttura IUMSScheduler
ms.date: 11/04/2016
f1_keywords:
- IUMSScheduler
- CONCRTRM/concurrency::IUMSScheduler
- CONCRTRM/concurrency::IUMSScheduler::IUMSScheduler::SetCompletionList
helpviewer_keywords:
- IUMSScheduler structure
ms.assetid: 3a500225-4e02-4849-bb56-d744865f5870
ms.openlocfilehash: e42a2e3d39e568ba12cd681053406ce88c7b5dba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334334"
---
# <a name="iumsscheduler-structure"></a>Struttura IUMSScheduler

Interfaccia a un'astrazione di un'utilità di pianificazione di lavoro che vuole che Gestione risorse del runtime di concorrenza passi thread UMS pianificabili in modalità utente. Gestione risorse usa questa interfaccia per comunicare con le utilità di pianificazione dei thread UMS.  L'interfaccia `IUMSScheduler` eredita dall'interfaccia `IScheduler` .

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSScheduler : public IScheduler;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IUMSScheduler:: Tocomplete](#setcompletionlist)|Assegna un' `IUMSCompletionList` interfaccia a un'utilità di pianificazione dei thread UMS.|

## <a name="remarks"></a>Commenti

Se si implementa un'utilità di pianificazione personalizzata che comunica con il Gestione risorse e si desidera che i thread UMS vengano passati all'utilità di pianificazione anziché ai normali thread Win32, è necessario fornire un'implementazione dell' `IUMSScheduler` interfaccia. Inoltre, è necessario impostare il valore dei criteri per la chiave dei criteri dell'utilità `SchedulerKind` di pianificazione su `UmsThreadDefault` . Se il criterio specifica un thread UMS, l' `IScheduler` interfaccia passata come parametro al metodo [IResourceManager:: RegisterScheduler](iresourcemanager-structure.md#registerscheduler) deve essere un' `IUMSScheduler` interfaccia.

Il Gestione risorse è in grado di distribuire i thread UMS solo nei sistemi operativi con la funzionalità UMS. i sistemi operativi a 64 bit con Windows 7 e versioni successive supportano i thread UMS. Se si crea un criterio dell'utilità di pianificazione con la `SchedulerKind` chiave impostata sul valore `UmsThreadDefault` e la piattaforma sottostante non supporta UMS, il valore della `SchedulerKind` chiave in tale criterio verrà modificato nel valore `ThreadScheduler` . È consigliabile leggere sempre questo valore del criterio prima di prevedere la ricezione di thread UMS.

L' `IUMSScheduler` interfaccia è una estremità di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e la gestione risorse. L'altra estremità è rappresentata dalle `IResourceManager` `ISchedulerProxy` interfacce e, che vengono implementate dal gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[IScheduler](ischeduler-structure.md)

`IUMSScheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="iumsschedulersetcompletionlist-method"></a><a name="setcompletionlist"></a> Metodo IUMSScheduler:: SetValue

Assegna un' `IUMSCompletionList` interfaccia a un'utilità di pianificazione dei thread UMS.

```cpp
virtual void SetCompletionList(_Inout_ IUMSCompletionList* pCompletionList) = 0;
```

### <a name="parameters"></a>Parametri

*pCompletionList*<br/>
Interfaccia dell'elenco di completamento per l'utilità di pianificazione. È presente un unico elenco per ogni utilità di pianificazione.

### <a name="remarks"></a>Commenti

Il Gestione risorse richiamerà questo metodo su un'utilità di pianificazione che specifica che desidera i thread UMS, dopo che l'utilità di pianificazione ha richiesto un'allocazione iniziale delle risorse. L'utilità di pianificazione può utilizzare l' `IUMSCompletionList` interfaccia per determinare quando i proxy di thread UMS sono sbloccati. È valido solo per accedere a questa interfaccia da un proxy di thread in esecuzione su una radice del processore virtuale assegnata all'utilità di pianificazione UMS.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IUMSCompletionList](iumscompletionlist-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
