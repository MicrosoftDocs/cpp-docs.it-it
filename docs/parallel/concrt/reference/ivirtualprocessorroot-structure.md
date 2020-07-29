---
title: Struttura IVirtualProcessorRoot
ms.date: 11/04/2016
f1_keywords:
- IVirtualProcessorRoot
- CONCRTRM/concurrency::IVirtualProcessorRoot
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::Activate
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::Deactivate
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::EnsureAllTasksVisible
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::GetId
helpviewer_keywords:
- IVirtualProcessorRoot structure
ms.assetid: 5ef371b8-9e4f-4fef-bb0d-49099693dd2b
ms.openlocfilehash: 869d51144b686dd684f62b337bb90eff8a9a5589
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87193952"
---
# <a name="ivirtualprocessorroot-structure"></a>Struttura IVirtualProcessorRoot

Un'astrazione per un thread hardware sulla quale un proxy del thread può eseguire.

## <a name="syntax"></a>Sintassi

```cpp
struct IVirtualProcessorRoot : public IExecutionResource;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IVirtualProcessorRoot:: Activate](#activate)|Determina l'avvio dell'esecuzione del proxy di thread associato all'interfaccia del contesto `pContext` di esecuzione su questa radice del processore virtuale.|
|[IVirtualProcessorRoot::D ttiva](#deactivate)|Fa in modo che il proxy del thread attualmente in esecuzione su questa radice del processore virtuale interrompa l'invio del contesto di esecuzione. Il proxy del thread riprenderà l'esecuzione in una chiamata al `Activate` metodo.|
|[IVirtualProcessorRoot:: EnsureAllTasksVisible](#ensurealltasksvisible)|Fa in modo che i dati archiviati nella gerarchia di memoria dei singoli processori diventino visibili a tutti i processori nel sistema. Garantisce che sia stato eseguito un limite di memoria completo su tutti i processori prima che il metodo venga restituito.|
|[IVirtualProcessorRoot:: GetId](#getid)|Restituisce un identificatore univoco per la radice del processore virtuale.|

## <a name="remarks"></a>Osservazioni

A ogni radice del processore virtuale è associata una risorsa di esecuzione. L' `IVirtualProcessorRoot` interfaccia eredita dall'interfaccia [IExecutionResource](iexecutionresource-structure.md) . Più radici del processore virtuale possono corrispondere allo stesso thread hardware sottostante.

Il Gestione risorse concede le radici del processore virtuale alle utilità di pianificazione in risposta alle richieste di risorse. Un'utilità di pianificazione può utilizzare una radice del processore virtuale per eseguire il lavoro mediante l'attivazione con un contesto di esecuzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[IExecutionResource](iexecutionresource-structure.md)

`IVirtualProcessorRoot`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="ivirtualprocessorrootactivate-method"></a><a name="activate"></a>Metodo IVirtualProcessorRoot:: Activate

Determina l'avvio dell'esecuzione del proxy di thread associato all'interfaccia del contesto `pContext` di esecuzione su questa radice del processore virtuale.

```cpp
virtual void Activate(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Interfaccia del contesto di esecuzione che verrà inviata alla radice del processore virtuale.

### <a name="remarks"></a>Osservazioni

Il Gestione risorse fornirà un proxy di thread se non è associato all'interfaccia del contesto di esecuzione`pContext`

Il `Activate` metodo può essere utilizzato per avviare l'esecuzione di operazioni su una nuova radice del processore virtuale restituita dal gestione risorse o per riprendere il proxy del thread in una radice del processore virtuale che è stata disattivata o sta per essere disattivata. Per ulteriori informazioni sulla disattivazione, vedere [IVirtualProcessorRoot::D ttiva](#deactivate) . Quando si riprende una radice del processore virtuale disattivata, il parametro `pContext` deve corrispondere al parametro usato per disattivare la radice del processore virtuale.

Una volta attivata la radice di un processore virtuale per la prima volta, le coppie successive di chiamate a `Deactivate` e `Activate` possono gareggiare tra loro. Ciò significa che l'Gestione risorse riceve una chiamata a prima di ricevere `Activate` la chiamata per la quale è `Deactivate` stata progettata.

Quando si attiva una radice del processore virtuale, si segnala alla Gestione risorse che questa radice del processore virtuale è attualmente occupata. Se l'utilità di pianificazione non riesce a trovare alcun lavoro da eseguire in questa radice, è previsto che richiami il `Deactivate` metodo per informare il Gestione risorse che la radice del processore virtuale è inattiva. Il Gestione risorse utilizza questi dati per bilanciare il carico del sistema.

`invalid_argument`viene generata se l'argomento `pContext` ha il valore `NULL` .

`invalid_operation`viene generata se l'argomento non `pContext` rappresenta il contesto di esecuzione inviato più di recente dalla radice del processore virtuale.

L'attivazione di una radice del processore virtuale comporta un aumento del livello di sottoscrizione del thread hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="ivirtualprocessorrootdeactivate-method"></a><a name="deactivate"></a>IVirtualProcessorRoot::D Metodo ttiva

Fa in modo che il proxy del thread attualmente in esecuzione su questa radice del processore virtuale interrompa l'invio del contesto di esecuzione. Il proxy del thread riprenderà l'esecuzione in una chiamata al `Activate` metodo.

```cpp
virtual bool Deactivate(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Contesto attualmente inviato da questa radice.

### <a name="return-value"></a>Valore restituito

Un valore booleano. Un valore **`true`** indica che il proxy del thread è stato restituito dal `Deactivate` metodo in risposta a una chiamata al `Activate` metodo. Un valore **`false`** indica che il proxy del thread restituito dal metodo in risposta a un evento di notifica nel Gestione risorse. In un'utilità di pianificazione dei thread UMS (User-Mode Scheduling), ciò indica che gli elementi sono stati visualizzati nell'elenco di completamento dell'utilità di pianificazione e che l'utilità di pianificazione è necessaria per gestirli.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per arrestare temporaneamente l'esecuzione di una radice del processore virtuale quando non è possibile trovare alcun lavoro nell'utilità di pianificazione. Una chiamata al `Deactivate` metodo deve essere originata dall'interno del `Dispatch` metodo del contesto di esecuzione dell'ultima attivazione della radice del processore virtuale. In altre parole, il proxy del thread che richiama il `Deactivate` metodo deve essere quello attualmente in esecuzione sulla radice del processore virtuale. La chiamata al metodo su una radice del processore virtuale in cui non è in esecuzione può causare un comportamento indefinito.

Una radice del processore virtuale disattivata può essere riattivata con una chiamata al `Activate` metodo, con lo stesso argomento passato al `Deactivate` metodo. L'utilità di pianificazione è responsabile di garantire che le chiamate `Activate` ai `Deactivate` metodi e siano abbinate, ma non è necessario che vengano ricevute in un ordine specifico. Il Gestione risorse è in grado di gestire la ricezione di una chiamata al `Activate` metodo prima di ricevere una chiamata al `Deactivate` metodo per il quale era destinata.

Se una radice del processore virtuale si riattiva e il valore restituito dal `Deactivate` metodo è il valore **`false`** , l'utilità di pianificazione deve eseguire una query sull'elenco di completamento UMS tramite il `IUMSCompletionList::GetUnblockNotifications` metodo, agire su tali informazioni e successivamente chiamare `Deactivate` nuovamente il metodo. Questa operazione deve essere ripetuta fino a quando il `Deactivate` metodo restituisce il valore **`true`** .

`invalid_argument`viene generata se l'argomento `pContext` ha il valore null.

`invalid_operation`viene generata se la radice del processore virtuale non è mai stata attivata o l'argomento non `pContext` rappresenta il contesto di esecuzione che è stato inviato più di recente dalla radice del processore virtuale.

La disattivazione di una radice del processore virtuale comporta una riduzione del livello di sottoscrizione del thread hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="ivirtualprocessorrootensurealltasksvisible-method"></a><a name="ensurealltasksvisible"></a>Metodo IVirtualProcessorRoot:: EnsureAllTasksVisible

Fa in modo che i dati archiviati nella gerarchia di memoria dei singoli processori diventino visibili a tutti i processori nel sistema. Garantisce che sia stato eseguito un limite di memoria completo su tutti i processori prima che il metodo venga restituito.

```cpp
virtual void EnsureAllTasksVisible(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Contesto attualmente inviato dalla radice del processore virtuale.

### <a name="remarks"></a>Osservazioni

Questo metodo può risultare utile quando si desidera sincronizzare la disattivazione di una radice del processore virtuale con l'aggiunta di nuove operazioni nell'utilità di pianificazione. Per motivi di prestazioni, è possibile decidere di aggiungere elementi di lavoro all'utilità di pianificazione senza eseguire una barriera di memoria, il che significa che gli elementi di lavoro aggiunti da un thread in esecuzione su un processore non sono immediatamente visibili a tutti gli altri processori. Utilizzando questo metodo insieme al `Deactivate` metodo, è possibile assicurarsi che l'utilità di pianificazione non disattivi tutte le radici del processore virtuale mentre gli elementi di lavoro sono presenti nelle raccolte dell'utilità di pianificazione.

Una chiamata al `EnsureAllTasksVisibleThe` metodo deve essere originata dall'interno del `Dispatch` metodo del contesto di esecuzione dell'ultima attivazione della radice del processore virtuale. In altre parole, il proxy del thread che richiama il `EnsureAllTasksVisible` metodo deve essere quello attualmente in esecuzione sulla radice del processore virtuale. La chiamata al metodo su una radice del processore virtuale in cui non è in esecuzione può causare un comportamento indefinito.

`invalid_argument`viene generata se l'argomento `pContext` ha il valore `NULL` .

`invalid_operation`viene generata se la radice del processore virtuale non è mai stata attivata o l'argomento non `pContext` rappresenta il contesto di esecuzione che è stato inviato più di recente dalla radice del processore virtuale.

## <a name="ivirtualprocessorrootgetid-method"></a><a name="getid"></a>Metodo IVirtualProcessorRoot:: GetId

Restituisce un identificatore univoco per la radice del processore virtuale.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore di tipo Integer.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
