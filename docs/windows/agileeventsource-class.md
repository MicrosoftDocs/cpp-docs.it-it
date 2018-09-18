---
title: Classe AgileEventSource | Microsoft Docs
ms.custom: ''
ms.date: 03/22/2018
ms.technology:
- cpp-windows
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
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8efebf67d87decef1fb6e53f2efa42acc9ac487c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46068520"
---
# <a name="agileeventsource-class"></a>Classe AgileEventSource

Rappresenta un evento generato da un componente di agile, che è un componente che è possibile accedere da qualsiasi thread. Eredita da [EventSource](eventsource-class.md) ed esegue l'override di `Add` funzione membro con un parametro di tipo aggiuntivi per specificare le opzioni richiamare l'evento agile.

## <a name="syntax"></a>Sintassi

```cpp
template<typename TDelegateInterface, typename TEventSourceOptions = Microsoft::WRL::InvokeModeOptions<FireAll>>
class AgileEventSource
    : public Microsoft::WRL::EventSource<TDelegateInterface, TEventSourceOptions>;
```

## <a name="parameters"></a>Parametri

*TDelegateInterface*<br/>
L'interfaccia a un delegato che rappresenta un gestore eventi.

*TEventSourceOptions*<br/>
Un' [InvokeModeOptions](invokemodeoptions-structure.md) il cui campo invokeMode è impostato su struttura `InvokeMode::StopOnFirstError` o `InvokeMode::FireAll`.

## <a name="remarks"></a>Note

La maggior parte dei componenti di runtime di Windows sono agili componenti. Per altre informazioni, vedere [Threading e marshalling (C++ c++ /CX)](../cppcx/threading-and-marshaling-c-cx.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EventSource`

`AgileEventSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo AgileEventSource::Add](#add)|Aggiunge il gestore dell'evento agile rappresentato dall'interfaccia del delegato specificato all'insieme di gestori di eventi per l'oggetto corrente **AgileEventSource** oggetto.|

## <a name="add"></a> Metodo AgileEventSource::Add

Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori di eventi per l'oggetto corrente [EventSource](eventsource-class.md) oggetto.

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

*token*  
Quando questa operazione viene completata, un handle che rappresenta l'evento. Usare questo token come parametro per il `Remove()` metodo rimuovere il gestore dell'evento.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.


## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)