---
title: __unhook
description: Informazioni su come usare la parola chiave dell'estensione Microsoft C++ `__unhook` per la gestione degli eventi nativi.
ms.date: 11/04/2016
f1_keywords:
- __unhook
- __unhook_cpp
helpviewer_keywords:
- event handlers [C++], dissociating events
- __unhook keyword [C++]
ms.openlocfilehash: 74f8b814ea23c5513b7b73bf90ef59984742a266
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483321"
---
# <a name="__unhook-keyword"></a>`__unhook` parola chiave

Annulla l'associazione di un metodo del gestore da un evento.

> [!NOTE]
> Gli attributi degli eventi in C++ nativo non sono compatibili con C++ standard. Non vengono compilati quando si specifica la [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità di conformità.

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

### <a name="parameters"></a>Parametri

*`&SourceClass::EventMethod`*\
Puntatore al metodo dell'evento da cui eseguire l'unhook del metodo del gestore eventi:

- Eventi C++ nativi: *`SourceClass`* è la classe dell'origine evento e *`EventMethod`* è l'evento.

- Eventi COM: *`SourceClass`* è l'interfaccia dell'origine eventi ed *`EventMethod`* è uno dei relativi metodi.

- Eventi gestiti: *`SourceClass`* è la classe dell'origine evento e *`EventMethod`* è l'evento.

*`interface`*\
Il nome dell'interfaccia viene discollegato dal *ricevitore*, solo per i ricevitori di eventi com in cui il parametro *layout_dependent* dell' [`event_receiver`](../windows/attributes/event-receiver.md) attributo è **`true`** .

*`source`*\
Puntatore a un'istanza dell'origine evento. A seconda del codice `type` specificato in `event_receiver` , il tipo di *origine* può essere uno dei seguenti:

- Un puntatore a un oggetto di origine dell'evento nativo.

- `IUnknown`Puntatore basato su (origine com).

- Un puntatore a un oggetto gestito (per gli eventi gestiti).

*`&ReceiverClass::HandlerMethod`* Puntatore al metodo del gestore dell'evento da disassociare da un evento. Il gestore viene specificato come metodo di una classe o un riferimento allo stesso oggetto. Se non si specifica il nome della classe, **`__unhook`** presuppone che la classe sia quella in cui viene chiamata.

- Eventi C++ nativi: *`ReceiverClass`* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.

- Eventi COM: *`ReceiverClass`* è l'interfaccia del ricevitore di eventi e *`HandlerMethod`* è uno dei relativi gestori.

- Eventi gestiti: *`ReceiverClass`* è la classe del ricevitore di eventi e *`HandlerMethod`* è il gestore.

*`receiver`* opzionale Puntatore a un'istanza della classe del ricevitore di eventi. Se non si specifica un ricevitore, il valore predefinito è la classe o la struttura del ricevitore in cui **`__unhook`** viene chiamato.

## <a name="usage"></a>Utilizzo

Può essere usato in qualsiasi ambito di funzione, incluso `main` , all'esterno della classe Receiver di eventi.

## <a name="remarks"></a>Commenti

Utilizzare la funzione intrinseca **`__unhook`** in un ricevitore di eventi per rimuovere o annullare l'associazione di un metodo del gestore da un metodo di evento.

Sono disponibili tre forme di **`__unhook`** . Nella maggior parte dei casi, è possibile utilizzare la prima tipologia (a quattro argomenti). È possibile utilizzare il secondo formato (a due argomenti) di **`__unhook`** solo per un ricevitore di eventi com; l'intera interfaccia evento viene sganciata. È possibile utilizzare la terza tipologia (a un argomento) per eseguire l'unhook di tutti i delegati dall'origine specificata.

Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).

Se si chiama **`__unhook`** su un evento e un gestore eventi che non sono già collegati, non avrà alcun effetto.

In fase di compilazione, il compilatore verifica l'esistenza dell'evento ed effettua il controllo del tipo di parametro con il gestore specificato.

È possibile chiamare **`__hook`** e **`__unhook`** all'esterno del ricevitore di eventi, ad eccezione degli eventi com.

Un'alternativa all'utilizzo di **`__unhook`** consiste nell'utilizzare l'operatore-=.

Per informazioni sulla codifica di eventi gestiti nella nuova sintassi, vedere [evento](../extensions/event-cpp-component-extensions.md).

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="example"></a>Esempio

Per esempi, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) e [gestione degli eventi in com](../cpp/event-handling-in-com.md) .

## <a name="see-also"></a>Vedere anche

[Parole](../cpp/keywords-cpp.md)\
[`event_source`](../windows/attributes/event-source.md)\
[`event_receiver`](../windows/attributes/event-receiver.md)\
[`__event`](../cpp/event.md)\
[`__hook`](../cpp/hook.md)\
[`__raise`](../cpp/raise.md)
