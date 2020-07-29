---
title: Classe SchedulerPolicy
ms.date: 11/04/2016
f1_keywords:
- SchedulerPolicy
- concrt/concurrency::SchedulerPolicy
- concrt/concurrency::SchedulerPolicy::SchedulerPolicy
- concrt/concurrency::SchedulerPolicy::GetPolicyValue
- concrt/concurrency::SchedulerPolicy::SetConcurrencyLimits
- concrt/concurrency::SchedulerPolicy::SetPolicyValue
helpviewer_keywords:
- SchedulerPolicy class
ms.assetid: bcebf51a-65f8-45a3-809b-d1ff93527dc4
ms.openlocfilehash: b7b99dae2ffb58123c05a65872e4c71e149ac12c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219573"
---
# <a name="schedulerpolicy-class"></a>Classe SchedulerPolicy

La classe `SchedulerPolicy` contiene un set di coppie chiave/valore, uno per ogni elemento dei criteri, che controllano il comportamento di un'istanza dell'utilità di pianificazione.

## <a name="syntax"></a>Sintassi

```cpp
class SchedulerPolicy;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[SchedulerPolicy](#ctor)|Di overload. Costruisce un nuovo criterio dell'utilità di pianificazione e lo popola con i valori per le [chiavi dei criteri](concurrency-namespace-enums.md) supportate dalle utilità di pianificazione runtime di concorrenza e dalla gestione risorse.|
|[Distruttore ~ SchedulerPolicy](#dtor)|Elimina i criteri dell'utilità di pianificazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[GetPolicyValue](#getpolicyvalue)|Recupera il valore della chiave dei criteri fornita come `key` parametro.|
|[SetConcurrencyLimits](#setconcurrencylimits)|Imposta contemporaneamente i `MinConcurrency` `MaxConcurrency` criteri e sull' `SchedulerPolicy` oggetto.|
|[SetPolicyValue](#setpolicyvalue)|Imposta il valore della chiave dei criteri fornita come `key` parametro e restituisce il valore precedente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore =](#operator_eq)|Assegna i criteri dell'utilità di pianificazione da un altro criterio dell'utilità di pianificazione.|

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui criteri che possono essere controllati utilizzando la `SchedulerPolicy` classe, vedere [PolicyElementKey](concurrency-namespace-enums.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SchedulerPolicy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h, concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="getpolicyvalue"></a><a name="getpolicyvalue"></a>GetPolicyValue

Recupera il valore della chiave dei criteri fornita come `key` parametro.

```cpp
unsigned int GetPolicyValue(PolicyElementKey key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dei criteri per la quale recuperare un valore.

### <a name="return-value"></a>Valore restituito

Se la chiave specificata dal `key` parametro è supportata, il valore dei criteri per il cast della chiave a un oggetto **`unsigned int`** .

### <a name="remarks"></a>Osservazioni

Il metodo genererà [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md) per una chiave dei criteri non valida.

## <a name="operator"></a><a name="operator_eq"></a>operatore =

Assegna i criteri dell'utilità di pianificazione da un altro criterio dell'utilità di pianificazione.

```cpp
SchedulerPolicy& operator= (const SchedulerPolicy& _RhsPolicy);
```

### <a name="parameters"></a>Parametri

*_RhsPolicy*<br/>
Criteri da assegnare a questo criterio.

### <a name="return-value"></a>Valore restituito

Riferimento ai criteri dell'utilità di pianificazione.

### <a name="remarks"></a>Osservazioni

Spesso, il modo più semplice per definire nuovi criteri dell'utilità di pianificazione consiste nel copiare i criteri esistenti e nel modificarli tramite i metodi `SetPolicyValue` o `SetConcurrencyLimits`.

## <a name="schedulerpolicy"></a><a name="ctor"></a>SchedulerPolicy

Costruisce un nuovo criterio dell'utilità di pianificazione e lo popola con i valori per le [chiavi dei criteri](concurrency-namespace-enums.md) supportate dalle utilità di pianificazione runtime di concorrenza e dalla gestione risorse.

```cpp
SchedulerPolicy();

SchedulerPolicy(
    size_t _PolicyKeyCount,
...);

SchedulerPolicy(
    const SchedulerPolicy& _SrcPolicy);
```

### <a name="parameters"></a>Parametri

*_PolicyKeyCount*<br/>
Numero di coppie chiave/valore che seguono il `_PolicyKeyCount` parametro.

*_SrcPolicy*<br/>
Criteri di origine da copiare.

### <a name="remarks"></a>Osservazioni

Il primo costruttore crea un nuovo criterio dell'utilità di pianificazione in cui tutti i criteri verranno inizializzati sui relativi valori predefiniti.

Il secondo costruttore crea un nuovo criterio dell'utilità di pianificazione che utilizza uno stile di inizializzazione del parametro denominato. I valori successivi al `_PolicyKeyCount` parametro vengono specificati come coppie chiave/valore. Qualsiasi chiave dei criteri non specificata in questo costruttore avrà il valore predefinito. Questo costruttore potrebbe generare eccezioni [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md), [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) o [invalid_scheduler_policy_thread_specification](invalid-scheduler-policy-thread-specification-class.md).

Il terzo costruttore è un costruttore di copia. Spesso, il modo più semplice per definire nuovi criteri dell'utilità di pianificazione consiste nel copiare i criteri esistenti e nel modificarli tramite i metodi `SetPolicyValue` o `SetConcurrencyLimits`.

## <a name="schedulerpolicy"></a><a name="dtor"></a>~ SchedulerPolicy

Elimina i criteri dell'utilità di pianificazione.

```cpp
~SchedulerPolicy();
```

## <a name="setconcurrencylimits"></a><a name="setconcurrencylimits"></a>SetConcurrencyLimits

Imposta contemporaneamente i `MinConcurrency` `MaxConcurrency` criteri e sull' `SchedulerPolicy` oggetto.

```cpp
void SetConcurrencyLimits(
    unsigned int _MinConcurrency,
    unsigned int _MaxConcurrency = MaxExecutionResources);
```

### <a name="parameters"></a>Parametri

*_MinConcurrency*<br/>
Valore per la `MinConcurrency` chiave dei criteri.

*_MaxConcurrency*<br/>
Valore per la `MaxConcurrency` chiave dei criteri.

### <a name="remarks"></a>Osservazioni

Il metodo genererà [invalid_scheduler_policy_thread_specification](invalid-scheduler-policy-thread-specification-class.md) se il valore specificato per il `MinConcurrency` criterio è maggiore di quello specificato per il `MaxConcurrency` criterio.

Il metodo può inoltre generare [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) per altri valori non validi.

## <a name="setpolicyvalue"></a><a name="setpolicyvalue"></a>SetPolicyValue

Imposta il valore della chiave dei criteri fornita come `key` parametro e restituisce il valore precedente.

```cpp
unsigned int SetPolicyValue(
    PolicyElementKey key,
    unsigned int value);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave dei criteri per cui impostare un valore.

*value*<br/>
Valore su cui impostare la chiave dei criteri.

### <a name="return-value"></a>Valore restituito

Se la chiave specificata dal `key` parametro è supportata, il valore del criterio precedente per il cast della chiave a un oggetto **`unsigned int`** .

### <a name="remarks"></a>Osservazioni

Il metodo genererà [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md) per una chiave dei criteri non valida o per qualsiasi chiave del criterio il cui valore non può essere impostato dal `SetPolicyValue` metodo.

Il metodo genererà [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) per un valore non supportato per la chiave specificata dal `key` parametro.

Si noti che questo metodo non è autorizzato a impostare `MinConcurrency` i `MaxConcurrency` criteri o. Per impostare questi valori, usare il metodo [SetConcurrencyLimits](#setconcurrencylimits) .

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Classe CurrentScheduler](currentscheduler-class.md)<br/>
[Classe Scheduler](scheduler-class.md)<br/>
[Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
