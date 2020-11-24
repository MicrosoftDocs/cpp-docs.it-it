---
title: event_receiver (attributo COM C++)
description: Informazioni su come usare l'attributo com dell'estensione Microsoft C++ `event_receiver` .
ms.date: 11/20/2020
f1_keywords:
- vc-attr.event_receiver
helpviewer_keywords:
- event_receiver attribute
- event receivers
- events [C++], event receivers (sinks)
- event handling [C++], attributes
- event handling [C++], creating receiver
- event sinks, creating
- event sinks
ms.openlocfilehash: 8ed6ef6113d72a9565b275dff4e035dc56f11e82
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483282"
---
# <a name="event_receiver-attribute"></a>Attributo `event_receiver`

Crea un ricevitore di eventi (sink).

> [!NOTE]
> Gli attributi degli eventi in C++ nativo non sono compatibili con C++ standard. Non vengono compilati quando si specifica la [`/permissive-`](../../build/reference/permissive-standards-conformance.md) modalità di conformità.

## <a name="syntax"></a>Sintassi

```cpp
[ event_receiver(type
   [, layout_dependent=false]) ]
```

### <a name="parameters"></a>Parametri

*`type`*\
Un'enumerazione di uno dei valori seguenti:

- `native` per il codice C/C++ non gestito (impostazione predefinita per le classi native).

- `com` per il codice COM. Per questo valore è necessario includere i file di intestazione seguenti:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*`layout_dependent`*\
Specificare *`layout_dependent`* solo se `type` = **com**. *`layout_dependent`* è un valore booleano:

- **`true`** indica che la firma dei delegati nel ricevitore di eventi deve corrispondere esattamente a quelle a cui sono collegati nell'origine evento. I nomi dei gestori del ricevitore di eventi devono corrispondere ai nomi specificati nell'interfaccia dell'origine evento pertinente. Utilizzare `coclass` quando *`layout_dependent`* è **`true`** . È leggermente più efficiente specificare **`true`** .

- **`false`** (impostazione predefinita) indica che la convenzione di chiamata e la classe di archiviazione ( `virtual` , `static` e altre) non devono corrispondere al metodo dell'evento e ai gestori. Non è inoltre necessario che i nomi dei gestori corrispondano ai nomi dei metodi dell'interfaccia di origine eventi.

## <a name="remarks"></a>Commenti

L' **`event_receiver`** attributo c++ specifica che la classe o la struttura a cui viene applicata sarà un ricevitore di eventi, usando il modello di eventi unificato di Microsoft c++.

**`event_receiver`** viene usato con l' [`event_source`](event-source.md) attributo e le [`__hook`](../../cpp/hook.md) [`__unhook`](../../cpp/unhook.md) parole chiave e. Usare `event_source` per creare origini evento. Usare **`__hook`** nei metodi del ricevitore di eventi per associare i metodi del ricevitore di eventi ("hook") agli eventi di un'origine evento. Usare **`__unhook`** per annullare l'associazione.

*`layout_dependent`* viene specificato solo per i ricevitori di eventi COM ( `type` = **`com`** ). Il valore predefinito per *`layout_dependent`* è **`false`** .

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|--|--|
| **Si applica a** | **`class`**, **`struct`** |
| **Ripetibile** | No |
| **Attributi richiesti** | `coclass` Quando *`layout_dependent`*=**`true`** |
| **Attributi non validi** | nessuno |

Per ulteriori informazioni, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)\
[`event_source`](event-source.md)\
[`__event`](../../cpp/event.md)\
[`__hook`](../../cpp/hook.md)\
[`__unhook`](../../cpp/unhook.md)\
[Attributi di classe](class-attributes.md)
