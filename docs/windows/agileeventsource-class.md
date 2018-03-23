---
title: Classe AgileEventSource | Documenti Microsoft
ms.custom: ''
ms.date: 03/22/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::AgileEventSource
- event/Microsoft::WRL::InvokeModeOptions
dev_langs:
- C++
helpviewer_keywords:
- AgileEventSource class
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7d025fc2be86fb5b59107d1deee39962c3c6db04
ms.sourcegitcommit: 1d11412c8f5e6ddf4edded89e0ef5097cc89f812
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2018
---
# <a name="agileeventsource-class"></a>Classe AgileEventSource
Rappresenta un evento agile. Eredita da [EventSource](eventsource-class.md) ed eseguire l'override di `Add` funzione membro con un parametro di tipo aggiuntivo che consente di specificare le opzioni richiamare l'evento agile.
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename TDelegateInterface, typename TEventSourceOptions = Microsoft::WRL::InvokeModeOptions<FireAll>>
class AgileEventSource
    : public Microsoft::WRL::EventSource<TDelegateInterface, TEventSourceOptions>;
```  
  
#### <a name="parameters"></a>Parametri  
 `TDelegateInterface`  
 L'interfaccia a un delegato che rappresenta un gestore eventi.

 `TEventSourceOptions` Un' [InvokeModeOptions](invokemodeoptions-structure.md) visuale il cui campo invokeMode è impostata su `InvokeMode::StopOnFirstError` o `InvokeMode::FireAll`.

## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo AgileEventSource::Add](#add)|Accoda il gestore dell'evento agile rappresentato dall'interfaccia del delegato specificato al set di gestori eventi per l'oggetto AgileEventSource corrente.|  

## <a name="add"></a> Metodo AgileEventSource::Add

Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori eventi per l'oggetto EventSource corrente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Add(  
   _In_ TDelegateInterface* delegateInterface,  
   _Out_ EventRegistrationToken* token  
);
```

### <a name="parameters"></a>Parametri

*delegateInterface*

L'interfaccia per un oggetto delegato, che rappresenta un gestore eventi.

*token* termine dell'operazione, un handle che rappresenta l'evento. Usare questo token come parametro al metodo Remove () per rimuovere il gestore dell'evento.

### <a name="return-value"></a>Valore restituito
S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `EventSource`  
 `AgileEventSource`
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)