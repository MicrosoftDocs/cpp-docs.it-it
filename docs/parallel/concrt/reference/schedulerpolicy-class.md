---
title: Classe SchedulerPolicy | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- SchedulerPolicy
- concrt/concurrency::SchedulerPolicy
- concrt/concurrency::SchedulerPolicy::SchedulerPolicy
- concrt/concurrency::SchedulerPolicy::GetPolicyValue
- concrt/concurrency::SchedulerPolicy::SetConcurrencyLimits
- concrt/concurrency::SchedulerPolicy::SetPolicyValue
dev_langs:
- C++
helpviewer_keywords:
- SchedulerPolicy class
ms.assetid: bcebf51a-65f8-45a3-809b-d1ff93527dc4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d7cf95898afa5e669d52b8bf18ad0cfc8733cb37
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46076268"
---
# <a name="schedulerpolicy-class"></a>Classe SchedulerPolicy
La classe `SchedulerPolicy` contiene un set di coppie chiave/valore, uno per ogni elemento dei criteri, che controllano il comportamento di un'istanza dell'utilità di pianificazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
class SchedulerPolicy;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[SchedulerPolicy](#ctor)|Di overload. Costruisce un nuovo criterio dell'utilità di pianificazione e la popola con i valori per [chiavi dei criteri](concurrency-namespace-enums.md) supportati dall'utilità di pianificazione di Runtime di concorrenza e Resource Manager.|  
|[~ Distruttore SchedulerPolicy](#dtor)|Elimina un criterio di utilità di pianificazione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[GetPolicyValue](#getpolicyvalue)|Recupera il valore della chiave del criterio fornito come il `key` parametro.|  
|[SetConcurrencyLimits](#setconcurrencylimits)|Imposta simultaneamente il `MinConcurrency` e `MaxConcurrency` i criteri durante il `SchedulerPolicy` oggetto.|  
|[SetPolicyValue](#setpolicyvalue)|Imposta il valore della chiave del criterio fornito come il `key` parametro e restituisce il valore precedente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator=](#operator_eq)|Assegna i criteri dell'utilità di pianificazione da un altro criterio dell'utilità di pianificazione.|  
  
## <a name="remarks"></a>Note  
 Per altre informazioni sui criteri che possono essere controllate utilizzando la `SchedulerPolicy` classe, vedere [PolicyElementKey](concurrency-namespace-enums.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SchedulerPolicy`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h, concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="getpolicyvalue"></a> GetPolicyValue 

 Recupera il valore della chiave del criterio fornito come il `key` parametro.  
  
```
unsigned int GetPolicyValue(PolicyElementKey key) const;
```  
  
### <a name="parameters"></a>Parametri  
*key*<br/>
La chiave dei criteri per recuperare un valore per.  
  
### <a name="return-value"></a>Valore restituito  
 Se la chiave specificata per il `key` parametro è supportato, il valore dei criteri per la chiave di cui è stato eseguito il cast a un `unsigned int`.  
  
### <a name="remarks"></a>Note  
 Il metodo genererà [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md) la chiave dei criteri non valida.  
  
##  <a name="operator_eq"></a> operator= 

 Assegna i criteri dell'utilità di pianificazione da un altro criterio dell'utilità di pianificazione.  
  
```
SchedulerPolicy& operator= (const SchedulerPolicy& _RhsPolicy);
```  
  
### <a name="parameters"></a>Parametri  
*_RhsPolicy*<br/>
Il criterio da assegnare a questo criterio.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento ai criteri dell'utilità di pianificazione.  
  
### <a name="remarks"></a>Note  
 Spesso, il modo più semplice per definire nuovi criteri dell'utilità di pianificazione consiste nel copiare i criteri esistenti e nel modificarli tramite i metodi `SetPolicyValue` o `SetConcurrencyLimits`.  
  
##  <a name="ctor"></a> SchedulerPolicy 

 Costruisce un nuovo criterio dell'utilità di pianificazione e la popola con i valori per [chiavi dei criteri](concurrency-namespace-enums.md) supportati dall'utilità di pianificazione di Runtime di concorrenza e Resource Manager.  
  
```
SchedulerPolicy();

SchedulerPolicy(
    size_t _PolicyKeyCount,
 ...);

SchedulerPolicy(
    const SchedulerPolicy& _SrcPolicy);
```  
  
### <a name="parameters"></a>Parametri  
*PolicyKeyCount*<br/>
Il numero di chiave/valore coppie che seguono il `_PolicyKeyCount` parametro.  
  
*_SrcPolicy*<br/>
I criteri di origine da copiare.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore crea un nuovo criterio dell'utilità di pianificazione in cui tutti i criteri verranno inizializzati ai valori predefiniti.  
  
 Il secondo costruttore crea un nuovo criterio dell'utilità di pianificazione che utilizza uno stile di parametro denominato di inizializzazione. I valori dopo la `_PolicyKeyCount` parametro vengono forniti come coppie chiave/valore. Qualsiasi chiave dei criteri che non è specificato in questo costruttore avrà il valore predefinito. Questo costruttore è stato possibile generare le eccezioni [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md), [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) o [invalid_scheduler_policy_thread_specification](invalid-scheduler-policy-thread-specification-class.md).  
  
 Il terzo costruttore è un costruttore di copia. Spesso, il modo più semplice per definire nuovi criteri dell'utilità di pianificazione consiste nel copiare i criteri esistenti e nel modificarli tramite i metodi `SetPolicyValue` o `SetConcurrencyLimits`.  
  
##  <a name="dtor"></a> ~SchedulerPolicy 

 Elimina un criterio di utilità di pianificazione.  
  
```
~SchedulerPolicy();
```  
  
##  <a name="setconcurrencylimits"></a> SetConcurrencyLimits 

 Imposta simultaneamente il `MinConcurrency` e `MaxConcurrency` i criteri durante il `SchedulerPolicy` oggetto.  
  
```
void SetConcurrencyLimits(
    unsigned int _MinConcurrency,
    unsigned int _MaxConcurrency = MaxExecutionResources);
```  
  
### <a name="parameters"></a>Parametri  
*_MinConcurrency*<br/>
Il valore per il `MinConcurrency` chiave dei criteri.  
  
*_MaxConcurrency*<br/>
Il valore per il `MaxConcurrency` chiave dei criteri.  
  
### <a name="remarks"></a>Note  
 Il metodo genererà [invalid_scheduler_policy_thread_specification](invalid-scheduler-policy-thread-specification-class.md) se il valore specificato per il `MinConcurrency` criterio è maggiore di quello specificato per il `MaxConcurrency` criteri.  
  
 Il metodo può anche generare [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) per gli altri valori non validi.  
  
##  <a name="setpolicyvalue"></a> SetPolicyValue 

 Imposta il valore della chiave del criterio fornito come il `key` parametro e restituisce il valore precedente.  
  
```
unsigned int SetPolicyValue(
    PolicyElementKey key,
    unsigned int value);
```  
  
### <a name="parameters"></a>Parametri  
*key*<br/>
La chiave di criterio per impostare un valore per.  
  
*valore*<br/>
Il valore su cui impostare la chiave del criterio.  
  
### <a name="return-value"></a>Valore restituito  
 Se la chiave specificata per il `key` parametro è supportato, il valore precedente dei criteri per la chiave di cui è stato eseguito il cast a un `unsigned int`.  
  
### <a name="remarks"></a>Note  
 Il metodo genererà [invalid_scheduler_policy_key](invalid-scheduler-policy-key-class.md) per una chiave di criteri non validi o un tasto qualsiasi criterio il cui valore non può essere impostato tramite la `SetPolicyValue` (metodo).  
  
 Il metodo genererà [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md) per un valore che non è supportato per la chiave specificata dal `key` parametro.  
  
 Si noti che questo metodo non è consentito impostare il `MinConcurrency` o `MaxConcurrency` criteri. Per impostare questi valori, usare il [SetConcurrencyLimits](#setconcurrencylimits) (metodo).  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [PolicyElementKey](concurrency-namespace-enums.md)   
 [Classe CurrentScheduler](currentscheduler-class.md)   
 [Classe Scheduler](scheduler-class.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



