---
title: __hook
ms.date: 11/04/2016
f1_keywords:
- __hook_cpp
helpviewer_keywords:
- __hook keyword [C++]
- event handlers [C++], connecting events to
ms.assetid: f4cabb10-d293-4c0e-a1d2-4745ef9cc22c
ms.openlocfilehash: a8a7fb6a88fb22fee5f5f8ec8c0dc215479c62fd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50489739"
---
# <a name="hook"></a>__hook

Associa un metodo del gestore a un evento.

## <a name="syntax"></a>Sintassi

```
long __hook(
    &SourceClass::EventMethod,
    source,
    &ReceiverClass::HandlerMethod
    [, receiver = this]
);
long __hook(
    interface,
    source
);
```

### <a name="parameters"></a>Parametri

*& SourceClass::EventMethod*<br/>
Puntatore al metodo di eventi cui associare il metodo del gestore eventi:

- Eventi C++ nativi: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.

- Eventi COM: *SourceClass* è l'interfaccia di origine evento e *EventMethod* è uno dei relativi metodi.

- Eventi gestiti: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.

*interface*<br/>
Il nome dell'interfaccia associato a *ricevitore*, solo per i ricevitori di eventi COM in cui il *layout_dependent* parametro la [event_receiver](../windows/event-receiver.md) attributo è **true**.

*source*<br/>
Puntatore a un'istanza dell'origine evento. A seconda del codice `type` specificato in `event_receiver`, *origine* può essere uno dei seguenti:

- Un puntatore a un oggetto di origine dell'evento nativo.

- Un `IUnknown`-basato su puntatore (origine COM).

- Un puntatore a un oggetto gestito (per gli eventi gestiti).

*& ReceiverClass::HandlerMethod*<br/>
Puntatore al metodo del gestore eventi da associare a un evento. Il gestore di è specificato come un metodo di una classe o un riferimento allo stesso; Se non si specifica il nome della classe, **hook** presuppone che la classe sia che in cui viene chiamato.

- Eventi C++ nativi: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

- Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi e `HandlerMethod` è uno dei relativi gestori.

- Eventi gestiti: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

*Ricevitore*<br/>
(Facoltativo) Un puntatore a un'istanza della classe del ricevitore di eventi. Se non si specifica un ricevitore, il valore predefinito è la classe del ricevitore o la struttura in cui **hook** viene chiamato.

## <a name="usage"></a>Utilizzo

Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.

## <a name="remarks"></a>Note

Utilizzare la funzione intrinseca **hook** in un ricevitore di eventi per associare o dissociare un metodo del gestore con un metodo dell'evento. Il gestore specificato viene quindi chiamato quando l'origine genera l'evento specificato. È possibile associare più gestori a un singolo evento o associare più eventi a un singolo gestore.

Esistono due forme di **hook**. È possibile utilizzare la prima tipologia (a quattro argomenti) nella maggior parte dei casi, in particolare, per i ricevitori di eventi COM in cui il *layout_dependent* parametro delle [event_receiver](../windows/event-receiver.md) attributo **false** .

In questi casi non è necessario associare tutti i metodi in un'interfaccia prima di generare un evento a uno dei metodi; solo il metodo che gestisce l'evento deve essere associato. È possibile utilizzare la seconda tipologia (a due argomenti) di **hook** solo per un ricevitore di eventi COM in cui *layout_dependent* **= true**.

**hook** restituisce un valore long. Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).

Il compilatore controlla l'esistenza di un evento e che la firma dell'evento coincida con la firma del delegato.

Fatta eccezione per eventi COM, **hook** e **unhook** può essere chiamato all'esterno del ricevitore di eventi.

Un'alternativa all'uso **hook** consiste nell'usare l'operatore + =.

Per informazioni sulla codifica di eventi gestiti nella nuova sintassi, vedere [evento](../windows/event-cpp-component-extensions.md).

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="example"></a>Esempio

Visualizzare [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) e [gestione degli eventi in COM](../cpp/event-handling-in-com.md) per gli esempi.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Gestione di eventi](../cpp/event-handling.md)<br/>
[event_source](../windows/event-source.md)<br/>
[event_receiver](../windows/event-receiver.md)<br/>
[__unhook](../cpp/unhook.md)<br/>
[__raise](../cpp/raise.md)<br/>
