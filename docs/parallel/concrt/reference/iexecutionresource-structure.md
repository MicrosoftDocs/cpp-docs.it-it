---
title: Struttura IExecutionResource
ms.date: 11/04/2016
f1_keywords:
- IExecutionResource
- CONCRTRM/concurrency::IExecutionResource
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::CurrentSubscriptionLevel
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::GetExecutionResourceId
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::GetNodeId
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::Remove
helpviewer_keywords:
- IExecutionResource structure
ms.assetid: 6b27042b-b98c-4f7f-b831-566950af84cd
ms.openlocfilehash: 56042c799f22b0e35bbd0d03d96d649e508f6e51
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50578945"
---
# <a name="iexecutionresource-structure"></a>Struttura IExecutionResource

Un'astrazione per un thread hardware.

## <a name="syntax"></a>Sintassi

```
struct IExecutionResource;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IExecutionResource::CurrentSubscriptionLevel](#currentsubscriptionlevel)|Restituisce il numero di processori virtuali attivato radici e sottoscritti esterni thread attualmente associato al thread di hardware sottostante che rappresenta questa risorsa di esecuzione.|
|[IExecutionResource::GetExecutionResourceId](#getexecutionresourceid)|Restituisce un identificatore univoco per il thread di hardware che rappresenta questa risorsa di esecuzione.|
|[IExecutionResource::GetNodeId](#getnodeid)|Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.|
|[IExecutionResource:: Remove](#remove)|Restituisce la risorsa di esecuzione a Resource Manager.|

## <a name="remarks"></a>Note

Risorse di esecuzione possono essere autonome o associate le radici del processore virtuale. Quando un thread nell'applicazione viene creata una sottoscrizione di thread, viene creata una risorsa di esecuzione autonomo. I metodi [ISchedulerProxy:: SubscribeThread](ischedulerproxy-structure.md#subscribecurrentthread) e [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) creare sottoscrizioni di thread e restituire un `IExecutionResource` interfaccia che rappresenta il sottoscrizione. Creazione di una sottoscrizione di thread è un modo per informare il gestore di risorse che un determinato thread farà parte il lavoro nella coda di un'utilità di pianificazione, con radici del processore virtuale di Resource Manager viene assegnato all'utilità di pianificazione. Resource Manager usa le informazioni per evitare la sovrascrittura della thread hardware quando possibile.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IExecutionResource`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="currentsubscriptionlevel"></a>  Metodo IExecutionResource:: CurrentSubscriptionLevel

Restituisce il numero di processori virtuali attivato radici e sottoscritti esterni thread attualmente associato al thread di hardware sottostante che rappresenta questa risorsa di esecuzione.

```
virtual unsigned int CurrentSubscriptionLevel() const = 0;
```

### <a name="return-value"></a>Valore restituito

Il livello di abbonamento corrente.

### <a name="remarks"></a>Note

Il livello di abbonamento indica il numero di thread in esecuzione è associato al thread hardware. Include solo i thread di Resource Manager è a conoscenza del sotto forma di thread sottoscritto e radici di processori virtuali sono attivamente in esecuzione il proxy thread.

La chiamata al metodo [ISchedulerProxy:: SubscribeCurrentThread](ischedulerproxy-structure.md#subscribecurrentthread), o il metodo [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) con il parametro `doSubscribeCurrentThread` impostata sul valore **true** incrementa il livello di abbonamento di un thread di hardware di uno. Restituiscono anche un `IExecutionResource` interfaccia che rappresenta la sottoscrizione. Una chiamata corrispondente per il [IExecutionResource:: Remove](#remove) decrementa a livello di sottoscrizione del thread hardware da uno.

L'atto di attivazione di una radice del processore virtuale usando il metodo [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate) incrementa il livello di abbonamento di un thread di hardware di uno. I metodi [IVirtualProcessorRoot:: Deactivate](ivirtualprocessorroot-structure.md#deactivate), o [IExecutionResource:: Remove](#remove) decrementa il livello di sottoscrizione di uno quando viene richiamato su una radice del processore virtuale attivata.

Resource Manager Usa informazioni a livello di sottoscrizione come uno dei modi in cui si desidera determinare il momento di spostare le risorse tra le utilità di pianificazione.

##  <a name="getexecutionresourceid"></a>  Metodo IExecutionResource:: GetExecutionResourceId

Restituisce un identificatore univoco per il thread di hardware che rappresenta questa risorsa di esecuzione.

```
virtual unsigned int GetExecutionResourceId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco per il thread di hardware sottostante di questa risorsa di esecuzione.

### <a name="remarks"></a>Note

Ogni thread di hardware viene assegnato un identificatore univoco per il Runtime di concorrenza. Se più risorse di esecuzione sono associati hardware thread, tutti hanno lo stesso identificatore di risorsa di esecuzione.

##  <a name="getnodeid"></a>  Metodo IExecutionResource:: GetNodeId

Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.

```
virtual unsigned int GetNodeId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco per un nodo del processore.

### <a name="remarks"></a>Note

Il Runtime di concorrenza rappresenta thread hardware sul sistema in gruppi di nodi del processore. I nodi vengono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori in un socket specifico o un nodo NUMA specifico possono appartenere allo stesso nodo del processore. Il gestore di risorse assegna identificatori univoci a questi nodi partire `0` fino a e includendo `nodeCount - 1`, dove `nodeCount` rappresenta il numero totale di nodi di processori nel sistema.

Il numero di nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).

##  <a name="remove"></a>  Metodo IExecutionResource:: Remove

Restituisce la risorsa di esecuzione a Resource Manager.

```
virtual void Remove(_Inout_ IScheduler* pScheduler) = 0;
```

### <a name="parameters"></a>Parametri

*pScheduler*<br/>
Interfaccia per l'utilità di pianificazione effettua la richiesta per rimuovere questa risorsa di esecuzione.

### <a name="remarks"></a>Note

Utilizzare questo metodo per restituire le risorse di esecuzione indipendente, nonché le risorse di esecuzione associate le radici del processore virtuale per Resource Manager.

Se si tratta di una risorsa di esecuzione autonoma ricevuto da uno dei metodi [ISchedulerProxy:: SubscribeCurrentThread](ischedulerproxy-structure.md#subscribecurrentthread) oppure [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors), chiamando il metodo `Remove` terminerà la sottoscrizione di thread che la risorsa è stata creata per rappresentare. È necessario terminare tutte le sottoscrizioni di thread prima della chiusura di un proxy dell'utilità di pianificazione e deve chiamare `Remove` dal thread che ha creato la sottoscrizione.

Anche le radici del processore virtuale possono essere restituite a Gestione risorse richiamando il metodo `Remove`, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`. Potrebbe essere necessario restituire una radice del processore virtuale in risposta a una chiamata ai [IScheduler:: RemoveVirtualProcessors](ischeduler-structure.md#removevirtualprocessors) metodo, o dopo avere effettuato con una radice del processore virtuale in condizione di oversubscription ottenuto dal [ ISchedulerProxy:: CreateOversubscriber](ischedulerproxy-structure.md#createoversubscriber) (metodo). Per le radici del processore virtuale, non sono previste restrizioni sul thread che può richiamare il `Remove` (metodo).

`invalid_argument` viene generata se il parametro `pScheduler` è impostata su `NULL`.

`invalid_operation` viene generata se il parametro `pScheduler` è diverso dall'utilità di pianificazione che questa risorsa di esecuzione sia stata creata per oppure, con una risorsa di esecuzione autonomi, se il thread corrente è diverso dal thread che ha creato la sottoscrizione di thread.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)
