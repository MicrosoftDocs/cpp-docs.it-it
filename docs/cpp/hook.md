---
title: __hook
description: Informazioni su come usare la parola chiave dell'estensione Microsoft C++ `__hook` per la gestione degli eventi nativi.
ms.date: 11/20/2020
f1_keywords:
- __hook_cpp
- __hook
helpviewer_keywords:
- __hook keyword [C++]
- event handlers [C++], connecting events to
ms.openlocfilehash: 2a2bde221c53f0e1d420e2ab3a88eb299f6c284c
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483256"
---
# <a name="__hook-keyword"></a>`__hook` parola chiave

Associa un metodo del gestore a un evento.

> [!NOTE]
> Gli attributi degli eventi in C++ nativo non sono compatibili con C++ standard. Non vengono compilati quando si specifica la [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità di conformità.

## <a name="syntax"></a>Sintassi

```cpp
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

*`&SourceClass::EventMethod`*\
Puntatore al metodo di eventi cui associare il metodo del gestore eventi:

- Eventi C++ nativi: *`SourceClass`* è la classe dell'origine evento e *`EventMethod`* è l'evento.

- Eventi COM: *`SourceClass`* è l'interfaccia dell'origine eventi ed *`EventMethod`* è uno dei relativi metodi.

- Eventi gestiti: *`SourceClass`* è la classe dell'origine evento e *`EventMethod`* è l'evento.

*`interface`*\
Nome dell'interfaccia a cui viene eseguito il hook *`receiver`* , solo per i ricevitori di eventi com in cui il *`layout_dependent`* parametro dell' [`event_receiver`](../windows/attributes/event-receiver.md) attributo è **`true`** .

*`source`*\
Puntatore a un'istanza dell'origine evento. A seconda del codice `type` specificato in `event_receiver` , i *`source`* possibili tipi sono i seguenti:

- Un puntatore a un oggetto di origine dell'evento nativo.

- `IUnknown`Puntatore basato su (origine com).

- Un puntatore a un oggetto gestito (per gli eventi gestiti).

*`&ReceiverClass::HandlerMethod`*\
Puntatore al metodo del gestore eventi da associare a un evento. Il gestore viene specificato come metodo di una classe o un riferimento allo stesso oggetto. Se non si specifica il nome della classe, **`__hook`** presuppone che la classe sia quella da cui viene chiamato.

- Eventi C++ nativi: *`ReceiverClass`* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

- Eventi COM: *`ReceiverClass`* è l'interfaccia del ricevitore di eventi e *`HandlerMethod`* è uno dei relativi gestori.

- Eventi gestiti: *`ReceiverClass`* è la classe del ricevitore di eventi e *`HandlerMethod`* è il gestore.

*`receiver`*\
Opzionale Puntatore a un'istanza della classe del ricevitore di eventi. Se non si specifica un ricevitore, il valore predefinito è la classe o la struttura del ricevitore in cui **`__hook`** viene chiamato.

## <a name="usage"></a>Utilizzo

Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.

## <a name="remarks"></a>Commenti

Utilizzare la funzione intrinseca **`__hook`** in un ricevitore di eventi per associare o collegare un metodo del gestore a un metodo di evento. Il gestore specificato viene quindi chiamato quando l'origine genera l'evento specificato. È possibile associare più gestori a un singolo evento o associare più eventi a un singolo gestore.

Esistono due forme di **`__hook`** . È possibile utilizzare il primo form (a quattro argomenti) nella maggior parte dei casi, in particolare, per i ricevitori di eventi COM in cui il parametro *layout_dependent* dell' [`event_receiver`](../windows/attributes/event-receiver.md) attributo è **`false`** .

In questi casi, non è necessario associare tutti i metodi in un'interfaccia prima di generare un evento su uno dei metodi. È sufficiente collegare il metodo che gestisce l'evento. È possibile utilizzare il secondo formato (a due argomenti) di **`__hook`** solo per un ricevitore di eventi com in cui *`layout_dependent`* **`= true`** .

**`__hook`** Restituisce un valore Long. Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).

Il compilatore controlla l'esistenza di un evento e che la firma dell'evento coincida con la firma del delegato.

È possibile chiamare **`__hook`** e **`__unhook`** all'esterno del ricevitore di eventi, ad eccezione degli eventi com.

Un'alternativa all'utilizzo di **`__hook`** consiste nell'utilizzare l'operatore + =.

Per informazioni sulla codifica di eventi gestiti nella nuova sintassi, vedere [`event`](../extensions/event-cpp-component-extensions.md) .

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="example"></a>Esempio

Per esempi, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) e [gestione degli eventi in com](../cpp/event-handling-in-com.md) .

## <a name="see-also"></a>Vedere anche

[Parole](../cpp/keywords-cpp.md)\
[Gestione degli eventi](../cpp/event-handling.md)\
[`event_source`](../windows/attributes/event-source.md)\
[`event_receiver`](../windows/attributes/event-receiver.md)\
[`__event`](../cpp/event.md)\
[`__unhook`](../cpp/unhook.md)\
[`__raise`](../cpp/raise.md)
