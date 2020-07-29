---
title: event_receiver (attributo COM C++)
ms.date: 10/02/2018
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
ms.assetid: bf8fe770-3ea2-4128-b46b-166222ee4097
ms.openlocfilehash: fb17eaa5d94636cedd650eb1bfb393d7c09e4fcc
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217272"
---
# <a name="event_receiver"></a>event_receiver

Crea un ricevitore di eventi (sink).

## <a name="syntax"></a>Sintassi

```cpp
[ event_receiver(type
   [, layout_dependent=false]) ]
```

### <a name="parameters"></a>Parametri

*type*<br/>
Un'enumerazione di uno dei valori seguenti:

- `native`per il codice C/C++ non gestito (impostazione predefinita per le classi native).

- `com` per il codice COM. Questo valore richiedere che si includano i file di intestazione seguente:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*layout_dependent*<br/>
Specificare *layout_dependent* solo se `type` = **com**. *layout_dependent* è un valore booleano:

- **`true`** indica che la firma dei delegati nel ricevitore di eventi deve corrispondere esattamente a quelle a cui sono collegate nell'origine evento. I nomi dei gestori del ricevitore di eventi devono corrispondere ai nomi specificati nell'interfaccia dell'origine evento pertinente. È necessario utilizzare `coclass` quando *layout_dependent* è **`true`** . È leggermente più efficiente da specificare **`true`** .

- **`false`**(impostazione predefinita) indica che la convenzione di chiamata e la classe di archiviazione (virtuale, statica e altre) non devono corrispondere al metodo dell'evento e ai gestori; non è necessario che i nomi dei gestori corrispondano ai nomi dei metodi dell'interfaccia di origine eventi.

## <a name="remarks"></a>Osservazioni

L'attributo **event_receiver** C++ specifica che la classe o la struttura a cui viene applicato sarà un ricevitore di eventi, usando il modello di evento Visual C++ Unified.

**event_receiver** viene utilizzato con l'attributo [event_source](event-source.md) e le parole chiave [__hook](../../cpp/hook.md) e [__unhook](../../cpp/unhook.md) . Usare `event_source` per creare origini evento. Usare **`__hook`** nei metodi del ricevitore di eventi per associare i metodi del ricevitore di eventi ("hook") agli eventi di un'origine evento. Usare **`__unhook`** per dissociarli.

*layout_dependent* viene specificato solo per i ricevitori di eventi com ( `type` = **com**). Il valore predefinito per *layout_dependent* è **`false`** .

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|`coclass`Quando *layout_dependent*=**`true`**|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[event_source](event-source.md)<br/>
[__event](../../cpp/event.md)<br/>
[__hook](../../cpp/hook.md)<br/>
[__unhook](../../cpp/unhook.md)<br/>
[Attributi di classe](class-attributes.md)
