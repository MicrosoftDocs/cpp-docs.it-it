---
title: Classe DeferrableEventArgs
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::DeferrableEventArgs
- event/Microsoft::WRL::DeferrableEventArgs::GetDeferral
- event/Microsoft::WRL::DeferrableEventArgs::InvokeAllFinished
helpviewer_keywords:
- Microsoft::WRL::DeferrableEventArgs class
- Microsoft::WRL::DeferrableEventArgs::GetDeferral method
- Microsoft::WRL::DeferrableEventArgs::InvokeAllFinished method
ms.assetid: ece89267-7b72-40e1-8185-550c865b070a
ms.openlocfilehash: bae2472a75ab77f138fcee0951a6b869cc7c8e82
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372571"
---
# <a name="deferrableeventargs-class"></a>Classe DeferrableEventArgs

Classe di modello usata per i tipi di argomento evento per rinvii.

## <a name="syntax"></a>Sintassi

```cpp
template <typename TEventArgsInterface, typename TEventArgsClass>
class DeferrableEventArgs : public TEventArgsInterface;
```

### <a name="parameters"></a>Parametri

*Interfaccia TEventArgs*<br/>
Tipo di interfaccia che dichiara gli argomenti per un evento posticipato.

*Classe TEventArgsClass*<br/>
La classe che implementa *TEventArgsInterface*.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                                         | Descrizione
------------------------------------------------------------ | -----------------------------------------------------------------------------------------------------------------------------
[DeferrableEventArgs::GetDeferral](#getdeferral)             | Ottiene un riferimento all'oggetto [Deferral](/uwp/api/windows.foundation.deferral) che rappresenta un evento posticipato.
[DeferrableEventArgs::InvokeAllFinishedDeferrableEventArgs::InvokeAllFinished](#invokeallfinished) | Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.

## <a name="remarks"></a>Osservazioni

Istanze di questa classe vengono passate ai gestori eventi per eventi posticipati. I parametri del modello rappresentano un'interfaccia che definisce i dettagli degli argomenti dell'evento per un tipo specifico di evento posticipato e una classe che implementa tale interfaccia.

La classe viene visualizzata come primo argomento a un gestore eventi per un evento posticipato. È possibile chiamare il [GetDeferral](#getdeferral) metodo per ottenere il [Deferral](/uwp/api/windows.foundation.deferral) oggetto da cui è possibile ottenere tutte le informazioni sull'evento posticipato. Dopo aver completato la gestione degli eventi, è necessario chiamare Complete sull'oggetto Deferral. È quindi necessario chiamare [InvokeAllFinished](#invokeallfinished) alla fine del metodo del gestore eventi, che assicura che il completamento di tutti gli eventi posticipati venga comunicato correttamente.

## <a name="requirements"></a>Requisiti

**Intestazione:** event.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="deferrableeventargsgetdeferral"></a><a name="getdeferral"></a>DeferrableEventArgs::GetDeferral

Ottiene un riferimento all'oggetto [Deferral](/uwp/api/windows.foundation.deferral) che rappresenta un evento posticipato.

```cpp
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)
```

### <a name="parameters"></a>Parametri

*result*<br/>
Puntatore che farà riferimento all'oggetto [Deferral](/uwp/api/windows.foundation.deferral) al termine della chiamata.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="deferrableeventargsinvokeallfinished"></a><a name="invokeallfinished"></a>DeferrableEventArgs::InvokeAllFinishedDeferrableEventArgs::InvokeAllFinished

Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.

```cpp
void InvokeAllFinished()
```

### <a name="remarks"></a>Osservazioni

È necessario chiamare questo metodo dopo che l'origine eventi chiama [InvokeAll](eventsource-class.md#invokeall). Se si chiama questo metodo, si eviteranno ulteriori rinvii e si forzerà l'esecuzione del gestore di completamento se non sono stati eseguiti rinvii.
