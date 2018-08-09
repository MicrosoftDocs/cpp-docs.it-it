---
title: AsyncBase (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase
dev_langs:
- C++
helpviewer_keywords:
- AsyncBase class
ms.assetid: 64259b9b-f427-4ffd-a611-e7a2f82362b2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dcf5a095167e48a52405978a105cadaddfa870f2
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647814"
---
# <a name="asyncbase-class"></a>AsyncBase (classe)
Implementa la macchina a stati asincrona di Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
   typename TComplete,  
   typename TProgress = Details::Nil,  
   AsyncResultType resultType = SingleResult  
>  
class AsyncBase : public AsyncBase<TComplete, Details::Nil, resultType>;  
  
template <  
   typename TComplete,  
   AsyncResultType resultType  
>  
class AsyncBase<TComplete, Details::Nil, resultType> : public Microsoft::WRL::Implements<IAsyncInfo>;  
```  
  
### <a name="parameters"></a>Parametri  
 *TComplete*  
 Un gestore eventi che viene chiamato quando viene completata un'operazione asincrona.  
  
 *TProgress*  
 Un gestore eventi che viene chiamato quando l'esecuzione dell'operazione asincrona segnala lo stato corrente dell'operazione.  
  
 *resultType*  
 Uno dei [AsyncResultType](../windows/asyncresulttype-enumeration.md) valori di enumerazione. Per impostazione predefinita, `SingleResult`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore AsyncBase::AsyncBase](../windows/asyncbase-asyncbase-constructor.md)|Inizializza un'istanza di **AsyncBase** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo AsyncBase::Cancel](../windows/asyncbase-cancel-method.md)|Annulla un'operazione asincrona.|  
|[Metodo AsyncBase::Close](../windows/asyncbase-close-method.md)|Termina l'operazione asincrona.|  
|[Metodo AsyncBase::FireCompletion](../windows/asyncbase-firecompletion-method.md)|Richiama il gestore di evento di completamento, o Reimposta il delegato di stato interno.|  
|[Metodo AsyncBase::FireProgress](../windows/asyncbase-fireprogress-method.md)|Richiama il gestore di evento di stato di avanzamento corrente.|  
|[Metodo AsyncBase::get_ErrorCode](../windows/asyncbase-get-errorcode-method.md)|Recupera il codice di errore per l'operazione asincrona corrente.|  
|[Metodo AsyncBase::get_Id](../windows/asyncbase-get-id-method.md)|Recupera l'handle dell'operazione asincrona.|  
|[Metodo AsyncBase::get_Status](../windows/asyncbase-get-status-method.md)|Recupera un valore che indica lo stato dell'operazione asincrona.|  
|[Metodo AsyncBase::GetOnComplete](../windows/asyncbase-getoncomplete-method.md)|Copia l'indirizzo del gestore dell'evento di completamento corrente per la variabile specificata.|  
|[Metodo AsyncBase::GetOnProgress](../windows/asyncbase-getonprogress-method.md)|Copia l'indirizzo del gestore dell'evento di stato di avanzamento corrente per la variabile specificata.|  
|[Metodo AsyncBase::put_Id](../windows/asyncbase-put-id-method.md)|Imposta l'handle dell'operazione asincrona.|  
|[Metodo AsyncBase::PutOnComplete](../windows/asyncbase-putoncomplete-method.md)|Imposta l'indirizzo del gestore dell'evento di completamento al valore specificato.|  
|[Metodo AsyncBase::PutOnProgress](../windows/asyncbase-putonprogress-method.md)|Imposta l'indirizzo del gestore dell'evento di stato di avanzamento sul valore specificato.|  
|[Metodo AsyncBase::Start](../windows/asyncbase-start-method.md)|Avvia l'operazione asincrona.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo AsyncBase::CheckValidStateForDelegateCall](../windows/asyncbase-checkvalidstatefordelegatecall-method.md)|Verifica se le proprietà di delegato possono essere modificate nello stato asincrono corrente.|  
|[Metodo AsyncBase::CheckValidStateForResultsCall](../windows/asyncbase-checkvalidstateforresultscall-method.md)|Verifica se i risultati di un'operazione asincrona possono essere raccolti nello stato asincrono corrente.|  
|[Metodo AsyncBase::ContinueAsyncOperation](../windows/asyncbase-continueasyncoperation-method.md)|Determina se l'operazione asincrona deve continuare l'elaborazione o deve interrompersi.|  
|[Metodo AsyncBase::CurrentStatus](../windows/asyncbase-currentstatus-method.md)|Recupera lo stato dell'operazione asincrona corrente.|  
|[Metodo AsyncBase::ErrorCode](../windows/asyncbase-errorcode-method.md)|Recupera il codice di errore per l'operazione asincrona corrente.|  
|[Metodo AsyncBase::OnCancel](../windows/asyncbase-oncancel-method.md)|Quando sottoposto a override in una classe derivata, Annulla un'operazione asincrona.|  
|[Metodo AsyncBase::OnClose](../windows/asyncbase-onclose-method.md)|Quando sottoposto a override in una classe derivata, termina un'operazione asincrona.|  
|[Metodo AsyncBase::OnStart](../windows/asyncbase-onstart-method.md)|Quando sottoposto a override in una classe derivata, avvia un'operazione asincrona.|  
|[Metodo AsyncBase::TryTransitionToCompleted](../windows/asyncbase-trytransitiontocompleted-method.md)|Indica se l'operazione asincrona corrente è stata completata.|  
|[Metodo AsyncBase::TryTransitionToError](../windows/asyncbase-trytransitiontoerror-method.md)|Indica se il codice di errore può modificare lo stato di errore interno.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `AsyncBase`  
  
 `AsyncBase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)