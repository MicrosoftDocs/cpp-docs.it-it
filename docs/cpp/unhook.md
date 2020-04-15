---
title: __unhook
ms.date: 11/04/2016
f1_keywords:
- __unhook
- __unhook_cpp
helpviewer_keywords:
- event handlers [C++], dissociating events
- __unhook keyword [C++]
ms.assetid: 953a14f3-5199-459d-81e5-fcf015a19878
ms.openlocfilehash: 221ffc30a9b8a40c44f8009dfa511b72aa160e01
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337558"
---
# <a name="__unhook"></a>__unhook

Dissocia un metodo del gestore da un evento.

## <a name="syntax"></a>Sintassi

```cpp
long  __unhook(
   &SourceClass::EventMethod,
   source,
   &ReceiverClass::HandlerMethod
   [, receiver = this]
);
long  __unhook(
   interface,
   source
);
long  __unhook(
   source
);
```

#### <a name="parameters"></a>Parametri

**&***SourceClass* `::` *EventMethod* Puntatore al metodo dell'evento da cui è stato eseguito l'unhook del metodo del gestore eventi:

- Eventi nativi di C: *SourceClass* è la classe di origine dell'evento e *EventMethod* è l'evento.

- Eventi COM: *SourceClass* è l'interfaccia dell'origine eventi e *EventMethod* è uno dei relativi metodi.

- Eventi gestiti: *SourceClass* è la classe di origine dell'evento e *EventMethod* è l'evento.

*interfaccia*<br/>
Nome dell'interfaccia sganciato dal *ricevitore*, solo per i ricevitori di eventi COM in cui il parametro *layout_dependent* dell'attributo [event_receiver](../windows/attributes/event-receiver.md) è **true**.

*fonte*<br/>
Puntatore a un'istanza dell'origine evento. A seconda `type` del `event_receiver`codice specificato in , *l'origine* può essere una delle seguenti:

- Un puntatore a un oggetto di origine dell'evento nativo.

- Puntatore `IUnknown`basato su COM (origine COM).

- Un puntatore a un oggetto gestito (per gli eventi gestiti).

**&***ReceiverClass* `::` `HandlerMethod` Un puntatore al metodo del gestore eventi da annullare l'hook da un evento. Il gestore viene specificato come un metodo di una classe o un riferimento allo stesso; Se non si specifica il nome della classe, **__unhook** presuppone che la classe sia quella in cui viene chiamata.

- Eventi nativi di C: *ReceiverClass* è `HandlerMethod` la classe del ricevitore di eventi ed è il gestore.

- Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi ed `HandlerMethod` è uno dei relativi gestori.

- Eventi gestiti: *ReceiverClass* è `HandlerMethod` la classe del ricevitore di eventi e il gestore.

*receiver*(facoltativo) Un puntatore a un'istanza della classe del ricevitore di eventi. Se non si specifica un ricevitore, il valore predefinito è la classe o la struttura del ricevitore in cui viene chiamato **__unhook.**

## <a name="usage"></a>Uso

Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.

## <a name="remarks"></a>Osservazioni

Usare la funzione intrinseca **__unhook** in un ricevitore di eventi per dissociare o "sganciare" un metodo del gestore da un metodo dell'evento.

Ci sono tre forme di **__unhook**. Nella maggior parte dei casi, è possibile utilizzare la prima tipologia (a quattro argomenti). È possibile utilizzare la seconda forma (due argomenti) di **__unhook** solo per un ricevitore di eventi COM; questo sgancia l'intera interfaccia di eventi. È possibile utilizzare la terza tipologia (a un argomento) per eseguire l'unhook di tutti i delegati dall'origine specificata.

Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).

Se si chiama **__unhook** su un evento e un gestore eventi che non sono già stati collegati, non avrà alcun effetto.

In fase di compilazione, il compilatore verifica l'esistenza dell'evento ed effettua il controllo del tipo di parametro con il gestore specificato.

Ad eccezione degli eventi COM, **__hook** e **__unhook** possono essere chiamati all'esterno del ricevitore di eventi.

Un'alternativa all'utilizzo di **__unhook** consiste nell'utilizzare l'operatore -.

Per informazioni sulla codifica degli eventi gestiti nella nuova sintassi, vedere [event](../extensions/event-cpp-component-extensions.md).

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="example"></a>Esempio

Per alcuni esempi, vedere Gestione degli eventi [in C. nativo](../cpp/event-handling-in-native-cpp.md) e [Gestione degli eventi in COM.](../cpp/event-handling-in-com.md)

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Event_source](../windows/attributes/event-source.md)<br/>
[event_receiver](../windows/attributes/event-receiver.md)<br/>
[__event](../cpp/event.md)<br/>
[__hook](../cpp/hook.md)<br/>
[__raise](../cpp/raise.md)
