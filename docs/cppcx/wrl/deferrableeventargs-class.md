---
description: 'Altre informazioni su: classe metodo deferrableeventargs'
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
ms.openlocfilehash: 23dae7fef88ff7978790e79a0486a83815467f5b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272929"
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
Classe che implementa *TEventArgsInterface*.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

| Nome | Description |
|--|--|
| [Metodo deferrableeventargs:: getrinvio](#getdeferral) | Ottiene un riferimento all'oggetto di [rinvio](/uwp/api/windows.foundation.deferral) che rappresenta un evento posticipato. |
| [Metodo deferrableeventargs:: InvokeAllFinished](#invokeallfinished) | Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato. |

## <a name="remarks"></a>Commenti

Istanze di questa classe vengono passate ai gestori eventi per eventi posticipati. I parametri del modello rappresentano un'interfaccia che definisce i dettagli degli argomenti dell'evento per un tipo specifico di evento posticipato e una classe che implementa tale interfaccia.

La classe viene visualizzata come primo argomento a un gestore eventi per un evento posticipato. È possibile chiamare il metodo [getrinvio](#getdeferral) per ottenere l'oggetto di [rinvio](/uwp/api/windows.foundation.deferral) dal quale è possibile ottenere tutte le informazioni sull'evento posticipato. Dopo aver completato la gestione degli eventi, è necessario chiamare Complete sull'oggetto Deferral. È quindi necessario chiamare [InvokeAllFinished](#invokeallfinished) alla fine del metodo del gestore eventi, che garantisce che il completamento di tutti gli eventi posticipati venga comunicato correttamente.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="deferrableeventargsgetdeferral"></a><a name="getdeferral"></a> Metodo deferrableeventargs:: getrinvio

Ottiene un riferimento all'oggetto di [rinvio](/uwp/api/windows.foundation.deferral) che rappresenta un evento posticipato.

```cpp
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)
```

### <a name="parameters"></a>Parametri

*result*<br/>
Puntatore che fa riferimento all'oggetto di [rinvio](/uwp/api/windows.foundation.deferral) quando la chiamata viene completata.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="deferrableeventargsinvokeallfinished"></a><a name="invokeallfinished"></a> Metodo deferrableeventargs:: InvokeAllFinished

Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.

```cpp
void InvokeAllFinished()
```

### <a name="remarks"></a>Commenti

È necessario chiamare questo metodo dopo che l'origine evento chiama [InvokeAll](eventsource-class.md#invokeall). Se si chiama questo metodo, si eviteranno ulteriori rinvii e si forzerà l'esecuzione del gestore di completamento se non sono stati eseguiti rinvii.
