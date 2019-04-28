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
ms.openlocfilehash: f377d6079017266630434ce71602a7e70e58ae21
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62301864"
---
# <a name="iumsscheduler-structure"></a>Struttura IUMSScheduler

Interfaccia a un'astrazione di un'utilità di pianificazione di lavoro che vuole che Gestione risorse del runtime di concorrenza passi thread UMS pianificabili in modalità utente. Gestione risorse usa questa interfaccia per comunicare con le utilità di pianificazione dei thread UMS.  L'interfaccia `IUMSScheduler` eredita dall'interfaccia `IScheduler` .

## <a name="syntax"></a>Sintassi

```
struct IUMSScheduler : public IScheduler;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSScheduler::SetCompletionList](#setcompletionlist)|Assegna un `IUMSCompletionList` interfaccia a un'utilità di pianificazione di thread UMS.|

## <a name="remarks"></a>Note

Se si sta implementando un'utilità di pianificazione personalizzate che comunica con Resource Manager e si vuole che i thread UMS da passare all'utilità di pianificazione anziché dei thread Win32 normale, è necessario fornire un'implementazione del `IUMSScheduler` interfaccia. Inoltre, è necessario impostare il valore dei criteri per la chiave dei criteri dell'utilità di pianificazione `SchedulerKind` essere `UmsThreadDefault`. Se i criteri specificano thread UMS, il `IScheduler` passata come parametro per il [IResourceManager:: RegisterScheduler](iresourcemanager-structure.md#registerscheduler) metodo deve essere un `IUMSScheduler` interfaccia.

Il gestore di risorse è in grado di passare è thread UMS solo nei sistemi operativi con la funzionalità UMS. sistemi operativi a 64 bit con la versione Windows 7 e versioni successive supportano i thread UMS. Se si crea un criterio di utilità di pianificazione con il `SchedulerKind` chiave impostata sul valore `UmsThreadDefault` e la piattaforma sottostante non supporta UMS, il valore della `SchedulerKind` verrà modificato il valore chiave su tale criterio `ThreadScheduler`. Ti consigliamo di leggere nuovamente questo valore del criterio prima dell'attesa di ricevere i thread UMS.

Il `IUMSScheduler` interfaccia è un'estremità di un canale di comunicazione tra un'utilità di pianificazione e Gestione risorse bidirezionale. L'altra estremità è rappresentata dal `IResourceManager` e `ISchedulerProxy` interfacce che vengono implementate da Resource Manager.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[IScheduler](ischeduler-structure.md)

`IUMSScheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="setcompletionlist"></a>  Metodo IUMSScheduler:: SetCompletionList

Assegna un `IUMSCompletionList` interfaccia a un'utilità di pianificazione di thread UMS.

```
virtual void SetCompletionList(_Inout_ IUMSCompletionList* pCompletionList) = 0;
```

### <a name="parameters"></a>Parametri

*pCompletionList*<br/>
L'interfaccia dell'elenco di completamento per l'utilità di pianificazione. È disponibile un unico elenco per ogni utilità di pianificazione.

### <a name="remarks"></a>Note

Il gestore di risorse richiama questo metodo in un'utilità di pianificazione che specifica che i thread UMS, la richiesta dopo che l'utilità di pianificazione ha richiesto un'allocazione iniziale di risorse. L'utilità di pianificazione è possibile usare il `IUMSCompletionList` interfaccia per determinare quando sono stati sbloccati proxy del thread UMS. È valido solo per accedere all'interfaccia da un proxy del thread in esecuzione in una radice del processore virtuale assegnata all'utilità di pianificazione UMS.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IUMSCompletionList](iumscompletionlist-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
