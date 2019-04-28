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
ms.openlocfilehash: e8f42c35024995c026ae10fc7f0ab3db77d1e5dc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62312154"
---
# <a name="unhook"></a>__unhook

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

**&** *SourceClass* `::` *EventMethod* un puntatore al metodo dell'evento da cui eseguire l'unhook metodo del gestore eventi:

- Eventi C++ nativi: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.

- Eventi COM: *SourceClass* è l'interfaccia di origine evento e *EventMethod* è uno dei relativi metodi.

- Eventi gestiti: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.

*interface*<br/>
Il nome dell'interfaccia è sottoposto ad unhook da *ricevitore*, solo per i ricevitori di eventi COM in cui il *layout_dependent* parametro la [event_receiver](../windows/attributes/event-receiver.md) attributo è **true**.

*source*<br/>
Puntatore a un'istanza dell'origine evento. A seconda del codice `type` specificato in `event_receiver`, *origine* può essere uno dei seguenti:

- Un puntatore a un oggetto di origine dell'evento nativo.

- Un `IUnknown`-basato su puntatore (origine COM).

- Un puntatore a un oggetto gestito (per gli eventi gestiti).

**&** *ReceiverClass* `::` `HandlerMethod` un puntatore al metodo del gestore eventi per cui eseguire l'unhook da un evento. Il gestore di è specificato come un metodo di una classe o un riferimento allo stesso; Se non si specifica il nome della classe, **unhook** presuppone che la classe sia che in cui viene chiamato.

- Eventi C++ nativi: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

- Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi e `HandlerMethod` è uno dei relativi gestori.

- Eventi gestiti: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

*ricevitore*(facoltativo) un puntatore a un'istanza della classe del ricevitore di eventi. Se non si specifica un ricevitore, il valore predefinito è la classe del ricevitore o la struttura in cui **unhook** viene chiamato.

## <a name="usage"></a>Utilizzo

Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.

## <a name="remarks"></a>Note

Utilizzare la funzione intrinseca **unhook** in un ricevitore di eventi per dissociare o "eseguire l'unhook" un metodo del gestore da un metodo dell'evento.

Esistono tre forme di **unhook**. Nella maggior parte dei casi, è possibile utilizzare la prima tipologia (a quattro argomenti). È possibile utilizzare la seconda tipologia (a due argomenti) di **unhook** solo per un ricevitore di eventi COM; questo viene eseguito l'unhook dell'intera interfaccia eventi. È possibile utilizzare la terza tipologia (a un argomento) per eseguire l'unhook di tutti i delegati dall'origine specificata.

Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).

Se si chiama **unhook** per un evento e il gestore eventi che non sono già collegati, avrà alcun effetto.

In fase di compilazione, il compilatore verifica l'esistenza dell'evento ed effettua il controllo del tipo di parametro con il gestore specificato.

Fatta eccezione per eventi COM, **hook** e **unhook** può essere chiamato all'esterno del ricevitore di eventi.

Un'alternativa all'uso **unhook** consiste nell'usare l'operatore-=.

Per informazioni sulla codifica di eventi gestiti nella nuova sintassi, vedere [evento](../extensions/event-cpp-component-extensions.md).

> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.

## <a name="example"></a>Esempio

Visualizzare [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) e [gestione degli eventi in COM](../cpp/event-handling-in-com.md) per gli esempi.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[event_source](../windows/attributes/event-source.md)<br/>
[event_receiver](../windows/attributes/event-receiver.md)<br/>
[__event](../cpp/event.md)<br/>
[__hook](../cpp/hook.md)<br/>
[__raise](../cpp/raise.md)