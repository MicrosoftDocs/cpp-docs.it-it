---
title: __hook
ms.date: 11/04/2016
f1_keywords:
- __hook_cpp
helpviewer_keywords:
- __hook keyword [C++]
- event handlers [C++], connecting events to
ms.assetid: f4cabb10-d293-4c0e-a1d2-4745ef9cc22c
ms.openlocfilehash: 5a0eaf0a3bc0617dbcd1f43805af8a95291e7e47
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87188167"
---
# <a name="__hook"></a>__hook

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

*&SourceClass:: EventMethod*<br/>
Puntatore al metodo di eventi cui associare il metodo del gestore eventi:

- Eventi C++ nativi: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.

- Eventi COM: *SourceClass* è l'interfaccia dell'origine evento e *EventMethod* è uno dei relativi metodi.

- Eventi gestiti: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.

*interface*<br/>
Nome dell'interfaccia che viene collegato al *ricevitore*, solo per i ricevitori di eventi com in cui il parametro *layout_dependent* dell'attributo [event_receiver](../windows/attributes/event-receiver.md) è **`true`** .

*source*<br/>
Puntatore a un'istanza dell'origine evento. A seconda del codice `type` specificato in `event_receiver` , l' *origine* può essere una delle seguenti:

- Un puntatore a un oggetto di origine dell'evento nativo.

- `IUnknown`Puntatore basato su (origine com).

- Un puntatore a un oggetto gestito (per gli eventi gestiti).

*&ReceiverClass:: HandlerMethod*<br/>
Puntatore al metodo del gestore eventi da associare a un evento. Il gestore viene specificato come metodo di una classe o un riferimento allo stesso oggetto. Se non si specifica il nome della classe, **`__hook`** presuppone che la classe sia quella in cui viene chiamata.

- Eventi C++ nativi: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

- Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi ed `HandlerMethod` è uno dei relativi gestori.

- Eventi gestiti: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

*ricevitore*<br/>
Opzionale Puntatore a un'istanza della classe del ricevitore di eventi. Se non si specifica un ricevitore, il valore predefinito è la classe o la struttura del ricevitore in cui **`__hook`** viene chiamato il metodo.

## <a name="usage"></a>Utilizzo

Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.

## <a name="remarks"></a>Osservazioni

Utilizzare la funzione intrinseca **`__hook`** in un ricevitore di eventi per associare o collegare un metodo del gestore a un metodo di evento. Il gestore specificato viene quindi chiamato quando l'origine genera l'evento specificato. È possibile associare più gestori a un singolo evento o associare più eventi a un singolo gestore.

Esistono due forme di **`__hook`** . È possibile utilizzare il primo form (a quattro argomenti) nella maggior parte dei casi, in particolare, per i ricevitori di eventi COM in cui il parametro *layout_dependent* dell'attributo [event_receiver](../windows/attributes/event-receiver.md) è **`false`** .

In questi casi non è necessario associare tutti i metodi in un'interfaccia prima di generare un evento a uno dei metodi; solo il metodo che gestisce l'evento deve essere associato. È possibile utilizzare il secondo formato (a due argomenti) di **`__hook`** solo per un ricevitore di eventi com in cui *layout_dependent* **= true**.

**`__hook`** Restituisce un valore Long. Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).

Il compilatore controlla l'esistenza di un evento e che la firma dell'evento coincida con la firma del delegato.

Ad eccezione degli eventi COM, **`__hook`** e **`__unhook`** possono essere chiamati all'esterno del ricevitore di eventi.

Un'alternativa all'utilizzo di **`__hook`** consiste nell'utilizzare l'operatore + =.

Per informazioni sulla codifica di eventi gestiti nella nuova sintassi, vedere [evento](../extensions/event-cpp-component-extensions.md).

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="example"></a>Esempio

Per esempi, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) e [gestione degli eventi in com](../cpp/event-handling-in-com.md) .

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Gestione degli eventi](../cpp/event-handling.md)<br/>
[event_source](../windows/attributes/event-source.md)<br/>
[event_receiver](../windows/attributes/event-receiver.md)<br/>
[__unhook](../cpp/unhook.md)<br/>
[__raise](../cpp/raise.md)<br/>
