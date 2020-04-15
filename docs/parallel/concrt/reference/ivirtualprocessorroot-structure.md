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
ms.openlocfilehash: f642a29d0a80568f7a5f2a5e89f6951d4819243e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364253"
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
|[IVirtualProcessorRoot::Attivare](#activate)|Fa sì che il proxy `pContext` del thread associato all'interfaccia del contesto di esecuzione avvii l'esecuzione su questa radice del processore virtuale.|
|[IVirtualProcessorRoot::Deactivate](#deactivate)|Fa sì che il proxy del thread attualmente in esecuzione su questa radice del processore virtuale interrompa l'invio del contesto di esecuzione. Il proxy del thread riprenderà l'esecuzione in una chiamata al `Activate` metodo.|
|[IVirtualProcessorRoot::EnsureAllTasksVisibleIVirtualProcessorRoot::EnsureAllTasksVisible](#ensurealltasksvisible)|Fa sì che i dati archiviati nella gerarchia di memoria dei singoli processori diventino visibili a tutti i processori del sistema. Garantisce che un recinto di memoria completa è stato eseguito su tutti i processori prima che il metodo restituisce.|
|[IVirtualProcessorRoot::GetIdIVirtualProcessorRoot::GetId](#getid)|Restituisce un identificatore univoco per la radice del processore virtuale.|

## <a name="remarks"></a>Osservazioni

A ogni radice del processore virtuale è associata una risorsa di esecuzione. L'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia [IExecutionResource.](iexecutionresource-structure.md) Più radici del processore virtuale possono corrispondere allo stesso thread di hardware sottostante.

Gestione risorse concede radici del processore virtuale alle utilità di pianificazione in risposta alle richieste di risorse. Un'utilità di pianificazione può usare una radice del processore virtuale per eseguire il lavoro attivandola con un contesto di esecuzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[IExecutionResource (risorse di Gestione imbeci](iexecutionresource-structure.md)

`IVirtualProcessorRoot`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="ivirtualprocessorrootactivate-method"></a><a name="activate"></a>Metodo IVirtualProcessorRoot::ActivateIVirtualProcessorRoot::Activate Method

Fa sì che il proxy `pContext` del thread associato all'interfaccia del contesto di esecuzione avvii l'esecuzione su questa radice del processore virtuale.

```cpp
virtual void Activate(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Interfaccia al contesto di esecuzione che verrà inviata in questa radice del processore virtuale.

### <a name="remarks"></a>Osservazioni

Gestione risorse fornirà un proxy del thread se non è associato all'interfaccia del contesto di esecuzione`pContext`

Il `Activate` metodo può essere utilizzato per avviare l'esecuzione di lavoro su una nuova radice del processore virtuale restituita da Gestione risorse o per riprendere il proxy del thread in una radice del processore virtuale che è disattivato o sta per essere disattivato. Vedere [IVirtualProcessorRoot::Deactivate](#deactivate) per ulteriori informazioni sulla disattivazione. Quando si riprende una radice del processore `pContext` virtuale disattivata, il parametro deve essere lo stesso del parametro utilizzato per disattivare la radice del processore virtuale.

Una volta attivata per la prima volta una radice `Deactivate` `Activate` del processore virtuale, le coppie successive di chiamate a e possono gareggiare tra loro. Ciò significa che è accettabile che Gestione `Activate` risorse riceva `Deactivate` una chiamata a prima di ricevere la chiamata a cui era destinata.

Quando si attiva una radice del processore virtuale, si segnala a Gestione risorse che questa radice del processore virtuale è attualmente occupata con il lavoro. Se l'utilità di pianificazione non riesce a trovare `Deactivate` alcun lavoro da eseguire su questa radice, è previsto che richiami il metodo che informa Gestione risorse che la radice del processore virtuale è inattiva. Gestione risorse utilizza questi dati per bilanciare il carico del sistema.

`invalid_argument`viene generata `pContext` se l'argomento ha il valore `NULL`.

`invalid_operation`viene generata `pContext` se l'argomento non rappresenta il contesto di esecuzione inviato più di recente da questa radice del processore virtuale.

L'attivazione di una radice del processore virtuale aumenta di uno il livello di sottoscrizione del thread di hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource::CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="ivirtualprocessorrootdeactivate-method"></a><a name="deactivate"></a>Metodo IVirtualProcessorRoot::Deactivate

Fa sì che il proxy del thread attualmente in esecuzione su questa radice del processore virtuale interrompa l'invio del contesto di esecuzione. Il proxy del thread riprenderà l'esecuzione in una chiamata al `Activate` metodo.

```cpp
virtual bool Deactivate(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Il contesto attualmente inviato da questa radice.

### <a name="return-value"></a>Valore restituito

Un valore booleano. Il valore **true** indica che il proxy `Deactivate` del thread restituito dal `Activate` metodo in risposta a una chiamata al metodo. Il valore `false` indica che il proxy del thread restituito dal metodo in risposta a un evento di notifica in Gestione risorse. In un'utilità di pianificazione della modalità utente (UMS, User-mode schedulable thread scheduler), ciò indica che gli elementi sono apparsi nell'elenco di completamento dell'utilità di pianificazione e che l'utilità di pianificazione è necessaria per gestirli.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per interrompere temporaneamente l'esecuzione di una radice del processore virtuale quando non è possibile trovare alcun lavoro nell'utilità di pianificazione. Una chiamata `Deactivate` al metodo deve `Dispatch` avere origine dall'interno del metodo del contesto di esecuzione con cui è stata attivata l'ultima volta la radice del processore virtuale. In altre parole, il proxy `Deactivate` del thread che richiama il metodo deve essere quello attualmente in esecuzione nella radice del processore virtuale. La chiamata al metodo su una radice del processore virtuale non in esecuzione potrebbe causare un comportamento indefinito.

Una radice del processore virtuale disattivata può essere `Activate` riattivazione con una chiamata al `Deactivate` metodo, con lo stesso argomento che è stato passato al metodo. L'utilità di pianificazione è `Activate` responsabile di garantire che le chiamate ai metodi e `Deactivate` siano associate, ma non devono essere ricevute in un ordine specifico. Gestione risorse può gestire la `Activate` ricezione di una chiamata al `Deactivate` metodo prima di ricevere una chiamata al metodo per cui era destinato.

Se la radice di un processore virtuale `Deactivate` si risveglia e il valore restituito dal metodo `IUMSCompletionList::GetUnblockNotifications` è il valore **false**, l'utilità di pianificazione deve eseguire una query nell'elenco di completamento UMS tramite il metodo, agire su tali informazioni e successivamente chiamare nuovamente il `Deactivate` metodo. Questo deve essere ripetuto `Deactivate` fino a `true`quando il metodo restituisce il valore .

`invalid_argument`viene generata `pContext` se l'argomento ha il valore NULL.

`invalid_operation`viene generata se la radice del processore `pContext` virtuale non è mai stata attivata o se l'argomento non rappresenta il contesto di esecuzione inviato più di recente da questa radice del processore virtuale.

L'atto di disattivare una radice del processore virtuale riduce il livello di sottoscrizione del thread di hardware sottostante di uno. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource::CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="ivirtualprocessorrootensurealltasksvisible-method"></a><a name="ensurealltasksvisible"></a>Metodo IVirtualProcessorRoot::EnsureAllTasksVisibleIVirtualProcessorRoot::EnsureAllTasksVisible Method

Fa sì che i dati archiviati nella gerarchia di memoria dei singoli processori diventino visibili a tutti i processori del sistema. Garantisce che un recinto di memoria completa è stato eseguito su tutti i processori prima che il metodo restituisce.

```cpp
virtual void EnsureAllTasksVisible(_Inout_ IExecutionContext* pContext) = 0;
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Contesto attualmente inviato da questa radice del processore virtuale.

### <a name="remarks"></a>Osservazioni

Questo metodo può risultare utile quando si desidera sincronizzare la disattivazione di una radice del processore virtuale con l'aggiunta di nuovo lavoro nell'utilità di pianificazione. Per motivi di prestazioni, è possibile decidere di aggiungere elementi di lavoro all'utilità di pianificazione senza eseguire una barriera di memoria, ovvero gli elementi di lavoro aggiunti da un thread in esecuzione su un processore non sono immediatamente visibili a tutti gli altri processori. Utilizzando questo metodo insieme `Deactivate` al metodo è possibile assicurarsi che l'utilità di pianificazione non disattiva tutte le radici del processore virtuale mentre gli elementi di lavoro sono presenti nelle raccolte dell'utilità di pianificazione.

Una chiamata `EnsureAllTasksVisibleThe` al metodo deve `Dispatch` avere origine dall'interno del metodo del contesto di esecuzione con cui è stata attivata l'ultima volta la radice del processore virtuale. In altre parole, il proxy `EnsureAllTasksVisible` del thread che richiama il metodo deve essere quello attualmente in esecuzione nella radice del processore virtuale. La chiamata al metodo su una radice del processore virtuale non in esecuzione potrebbe causare un comportamento indefinito.

`invalid_argument`viene generata `pContext` se l'argomento ha il valore `NULL`.

`invalid_operation`viene generata se la radice del processore `pContext` virtuale non è mai stata attivata o se l'argomento non rappresenta il contesto di esecuzione inviato più di recente da questa radice del processore virtuale.

## <a name="ivirtualprocessorrootgetid-method"></a><a name="getid"></a>Metodo IVirtualProcessorRoot::GetIdIVirtualProcessorRoot::GetId Method

Restituisce un identificatore univoco per la radice del processore virtuale.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore integer.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
