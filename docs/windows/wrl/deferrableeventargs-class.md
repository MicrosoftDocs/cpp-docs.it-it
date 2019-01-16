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
ms.openlocfilehash: 509686556bd06a6ec9d059593be46d0fc6a3876d
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336659"
---
# <a name="deferrableeventargs-class"></a>Classe DeferrableEventArgs

Classe di modello usata per i tipi di argomento evento per rinvii.

## <a name="syntax"></a>Sintassi

```cpp
template <typename TEventArgsInterface, typename TEventArgsClass>
class DeferrableEventArgs : public TEventArgsInterface;
```

### <a name="parameters"></a>Parametri

*TEventArgsInterface*<br/>
Tipo di interfaccia che dichiara gli argomenti per un evento posticipato.

*TEventArgsClass*<br/>
La classe che implementa *TEventArgsInterface*.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                                                         | Descrizione
------------------------------------------------------------ | -----------------------------------------------------------------------------------------------------------------------------
[DeferrableEventArgs::GetDeferral](#getdeferral)             | Ottiene un riferimento per la [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto che rappresenta un evento posticipato.
[DeferrableEventArgs::InvokeAllFinished](#invokeallfinished) | Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.

## <a name="remarks"></a>Note

Istanze di questa classe vengono passate ai gestori eventi per eventi posticipati. I parametri del modello rappresentano un'interfaccia che definisce i dettagli degli argomenti dell'evento per un tipo specifico di evento posticipato e una classe che implementa tale interfaccia.

La classe viene visualizzata come primo argomento a un gestore eventi per un evento posticipato. È possibile chiamare il [GetDeferral](#getdeferral) metodo per ottenere il [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto da cui è possibile ottenere tutte le informazioni sull'evento posticipato. Dopo aver completato la gestione degli eventi, è necessario chiamare Complete sull'oggetto Deferral. È quindi necessario chiamare [InvokeAllFinished](#invokeallfinished) alla fine del metodo del gestore eventi, che assicura che il completamento di tutti gli eventi posticipati sia comunicato correttamente.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="getdeferral"></a>DeferrableEventArgs::GetDeferral

Ottiene un riferimento per la [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto che rappresenta un evento posticipato.

```cpp
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)
```

### <a name="parameters"></a>Parametri

*result*<br/>
Un puntatore che farà riferimento il [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) al completamento della chiamata dell'oggetto.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="invokeallfinished"></a>DeferrableEventArgs::InvokeAllFinished

Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.

```cpp
void InvokeAllFinished()
```

### <a name="remarks"></a>Note

È necessario chiamare questo metodo dopo l'origine evento chiami [InvokeAll](eventsource-class.md#invokeall). Se si chiama questo metodo, si eviteranno ulteriori rinvii e si forzerà l'esecuzione del gestore di completamento se non sono stati eseguiti rinvii.
