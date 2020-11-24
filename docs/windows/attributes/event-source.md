---
title: event_source (attributo COM C++)
description: Informazioni su come usare l'attributo com dell'estensione Microsoft C++ `event_source` .
ms.date: 11/20/2020
f1_keywords:
- vc-attr.event_source
helpviewer_keywords:
- event handling, attributes
- event logs, event source
- event sources, creating
- event_source attribute
- event sources
- event handling, creating event source
ms.openlocfilehash: 3cdfaaa86f8fc36bf0dc90d7961077546362a662
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483269"
---
# <a name="event_source-attribute"></a>Attributo `event_source`

Crea un'origine evento.

> [!NOTE]
> Gli attributi degli eventi in C++ nativo non sono compatibili con C++ standard. Non vengono compilati quando si specifica la [`/permissive-`](../../build/reference/permissive-standards-conformance.md) modalità di conformità.

## <a name="syntax"></a>Sintassi

```cpp
[ event_source(type, optimize=[speed | size], decorate=[true | false]) ]
```

### <a name="parameters"></a>Parametri

*`type`*\
Un'enumerazione di uno dei valori seguenti:

- `native` per codice C/C++ non gestito (impostazione predefinita per le classi non gestite).

- `com` per il codice COM. Usare `coclass` When *`type`* = `com` . Questo valore richiedere che si includano i file di intestazione seguente:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*`optimize`*\
Quando il *tipo* è `native` , è possibile specificare `optimize=size` , per indicare che ci sono 4 byte di spazio di archiviazione (minimo) per tutti gli eventi in una classe o `optimize=speed` (impostazione predefinita) per indicare che ci sono 4 * (numero di eventi) byte di archiviazione.

*`decorate`*\
Quando il *tipo* è `native` , è possibile specificare `decorate=false` , per indicare che il nome espanso nel file Unito ( *`.mrg`* ) non deve includere il nome della classe contenitore. [`/Fx`](../../build/reference/fx-merge-injected-code.md) consente di generare *`.mrg`* file. `decorate=false`, che è l'impostazione predefinita, genera nomi di tipo completi nel file Unito.

## <a name="remarks"></a>Commenti

L' **`event_source`** attributo C++ specifica che la classe o la struttura a cui viene applicato sarà un'origine evento.

**`event_source`** viene usato in combinazione con l' [`event_receiver`](event-receiver.md) attributo e la [`__event`](../../cpp/event.md) parola chiave. Usare `event_receiver` per creare i ricevitori di eventi. Usare **`__event`** sui metodi all'interno dell'origine evento per specificare tali metodi come eventi.

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|--|--|
| **Si applica a** | **`class`**, **`struct`** |
| **Ripetibile** | No |
| **Attributi richiesti** | **`coclass`** Quando `type`=`com` |
| **Attributi non validi** | nessuno |

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)\
[`event_receiver`](event-receiver.md)\
[`__event`](../../cpp/event.md)\
[`__hook`](../../cpp/hook.md)\
[`__unhook`](../../cpp/unhook.md)\
[Attributi di classe](class-attributes.md)
