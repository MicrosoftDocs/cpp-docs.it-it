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
ms.openlocfilehash: 84df5ad0ff27e6b09134b0f92f14f8e9b6fdc817
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233574"
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

**&***SourceClass* `::` *EventMethod* Puntatore al metodo dell'evento da cui si esegue l'unhook del metodo del gestore eventi:

- Eventi C++ nativi: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.

- Eventi COM: *SourceClass* è l'interfaccia dell'origine evento e *EventMethod* è uno dei relativi metodi.

- Eventi gestiti: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.

*interface*<br/>
Il nome dell'interfaccia viene discollegato dal *ricevitore*, solo per i ricevitori di eventi com in cui il parametro *layout_dependent* dell'attributo [event_receiver](../windows/attributes/event-receiver.md) è **`true`** .

*source*<br/>
Puntatore a un'istanza dell'origine evento. A seconda del codice `type` specificato in `event_receiver` , l' *origine* può essere una delle seguenti:

- Un puntatore a un oggetto di origine dell'evento nativo.

- `IUnknown`Puntatore basato su (origine com).

- Un puntatore a un oggetto gestito (per gli eventi gestiti).

**&***ReceiverClass* `::` `HandlerMethod`Puntatore al metodo del gestore dell'evento da disassociare da un evento. Il gestore viene specificato come metodo di una classe o un riferimento allo stesso oggetto. Se non si specifica il nome della classe, **`__unhook`** presuppone che la classe sia quella in cui viene chiamata.

- Eventi C++ nativi: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

- Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi ed `HandlerMethod` è uno dei relativi gestori.

- Eventi gestiti: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

*Receiver*(facoltativo) puntatore a un'istanza della classe Receiver dell'evento. Se non si specifica un ricevitore, il valore predefinito è la classe o la struttura del ricevitore in cui **`__unhook`** viene chiamato il metodo.

## <a name="usage"></a>Utilizzo

Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.

## <a name="remarks"></a>Osservazioni

Usare la funzione intrinseca **`__unhook`** in un ricevitore di eventi per annullare l'associazione o "annullare l'hook" di un metodo del gestore da un metodo di evento.

Sono disponibili tre forme di **`__unhook`** . Nella maggior parte dei casi, è possibile utilizzare la prima tipologia (a quattro argomenti). È possibile utilizzare il secondo formato (a due argomenti) di **`__unhook`** solo per un ricevitore di eventi com; questa operazione consente di scollegare l'intera interfaccia evento. È possibile utilizzare la terza tipologia (a un argomento) per eseguire l'unhook di tutti i delegati dall'origine specificata.

Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).

Se si chiama **`__unhook`** su un evento e un gestore eventi che non sono già collegati, non avrà alcun effetto.

In fase di compilazione, il compilatore verifica l'esistenza dell'evento ed effettua il controllo del tipo di parametro con il gestore specificato.

Ad eccezione degli eventi COM, **`__hook`** e **`__unhook`** possono essere chiamati all'esterno del ricevitore di eventi.

Un'alternativa all'utilizzo di **`__unhook`** consiste nell'utilizzare l'operatore-=.

Per informazioni sulla codifica di eventi gestiti nella nuova sintassi, vedere [evento](../extensions/event-cpp-component-extensions.md).

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="example"></a>Esempio

Per esempi, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) e [gestione degli eventi in com](../cpp/event-handling-in-com.md) .

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[event_source](../windows/attributes/event-source.md)<br/>
[event_receiver](../windows/attributes/event-receiver.md)<br/>
[__event](../cpp/event.md)<br/>
[__hook](../cpp/hook.md)<br/>
[__raise](../cpp/raise.md)
