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
ms.openlocfilehash: 70954906122c048e5199a801632626d35a8e3f18
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368088"
---
# <a name="iumsscheduler-structure"></a>Struttura IUMSScheduler

Interfaccia a un'astrazione di un'utilità di pianificazione di lavoro che vuole che Gestione risorse del runtime di concorrenza passi thread UMS pianificabili in modalità utente. Gestione risorse usa questa interfaccia per comunicare con le utilità di pianificazione dei thread UMS.  L'interfaccia `IUMSScheduler` eredita dall'interfaccia `IScheduler` .

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSScheduler : public IScheduler;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSScheduler::SetCompletionList](#setcompletionlist)|Assegna un'interfaccia `IUMSCompletionList` a un'utilità di pianificazione dei thread UMS.|

## <a name="remarks"></a>Osservazioni

Se si implementa un'utilità di pianificazione personalizzata che comunica con Gestione risorse e si desidera che i thread UMS `IUMSScheduler` vengano passati all'utilità di pianificazione anziché ai normali thread Win32, è necessario fornire un'implementazione dell'interfaccia. Inoltre, è necessario impostare il valore `SchedulerKind` dei `UmsThreadDefault`criteri per la chiave dei criteri dell'utilità di pianificazione su . Se il criterio specifica il `IScheduler` thread UMS, l'interfaccia passata come parametro al `IUMSScheduler` metodo [IResourceManager::RegisterScheduler](iresourcemanager-structure.md#registerscheduler) deve essere un'interfaccia.

Gestione risorse è in grado di consegnare i thread UMS solo nei sistemi operativi che dispongono della funzionalità UMS. I sistemi operativi a 64 bit con Windows 7 e versioni successive supportano i thread UMS. Se si crea un `SchedulerKind` criterio dell'utilità `UmsThreadDefault` di pianificazione con la chiave impostata `SchedulerKind` sul valore e la piattaforma `ThreadScheduler`sottostante non supporta UMS, il valore della chiave su tale criterio verrà modificato nel valore . È consigliabile leggere sempre questo valore di criteri prima di prevedere di ricevere i thread UMS.

L'interfaccia `IUMSScheduler` è un'estremità di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e Gestione risorse. L'altra estremità `IResourceManager` è `ISchedulerProxy` rappresentata dalle interfacce e , implementate da Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[IScheduler (IScheduler)](ischeduler-structure.md)

`IUMSScheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="iumsschedulersetcompletionlist-method"></a><a name="setcompletionlist"></a>Metodo IUMSScheduler::SetCompletionList

Assegna un'interfaccia `IUMSCompletionList` a un'utilità di pianificazione dei thread UMS.

```cpp
virtual void SetCompletionList(_Inout_ IUMSCompletionList* pCompletionList) = 0;
```

### <a name="parameters"></a>Parametri

*pCompletionList (elenco di completamento)*<br/>
Interfaccia dell'elenco di completamento per l'utilità di pianificazione. Esiste un singolo elenco per ogni utilità di pianificazione.

### <a name="remarks"></a>Osservazioni

Gestione risorse richiamerà questo metodo in un'utilità di pianificazione che specifica di volere i thread UMS, dopo che l'utilità di pianificazione ha richiesto un'allocazione iniziale delle risorse. L'utilità di `IUMSCompletionList` pianificazione può utilizzare l'interfaccia per determinare quando i proxy di thread UMS sono stati sbloccati. È valido accedere a questa interfaccia solo da un proxy di thread in esecuzione su una radice del processore virtuale assegnata all'utilità di pianificazione UMS.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IUMSCompletionList](iumscompletionlist-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
