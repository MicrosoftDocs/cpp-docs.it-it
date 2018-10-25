---
title: event_receiver (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.event_receiver
dev_langs:
- C++
helpviewer_keywords:
- event_receiver attribute
- event receivers
- events [C++], event receivers (sinks)
- event handling [C++], attributes
- event handling [C++], creating receiver
- event sinks, creating
- event sinks
ms.assetid: bf8fe770-3ea2-4128-b46b-166222ee4097
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 95e5d65d437b60f6421978682997067d8f53a3d5
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50073955"
---
# <a name="eventreceiver"></a>event_receiver

Crea un ricevitore di eventi (sink).

## <a name="syntax"></a>Sintassi

```cpp
[ event_receiver(type
   [, layout_dependent=false]) ]
```

### <a name="parameters"></a>Parametri

*type*<br/>
Un'enumerazione di uno dei valori seguenti:

- `native` per codice C/C++ non gestito (impostazione predefinita per le classi native).

- `com` per il codice COM. Questo valore richiedere che si includano i file di intestazione seguente:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*layout_dependent*<br/>
Specificare *layout_dependent* solo se `type` = **com**. *layout_dependent* è un valore booleano:

- **true** significa che la firma dei delegati nel caso in cui deve corrispondere esattamente a quelli a cui sono associati nell'evento origine ricevitore. I nomi dei gestori di ricevitore di eventi devono corrispondere ai nomi specificati nell'interfaccia di origine evento rilevante. È necessario utilizzare `coclass` quando si *layout_dependent* viene **true**. È leggermente più efficiente specificare **true**.

- **false** (predefinito) indica che la classe di archiviazione e convenzione di chiamata (virtual, static e così via) non è in modo che corrisponda il metodo di evento e i gestori; né è necessario i nomi dei gestori corrispondano ai nomi di metodo di interfaccia di origine evento.

## <a name="remarks"></a>Note

Il **event_receiver** attributo C++ specifica che la classe o struttura in cui viene applicato sarà un ricevitore di eventi, usando il modello di evento unificato di Visual C++.

**event_receiver** viene usato con il [event_source](event-source.md) attributo e il [hook](../../cpp/hook.md) e [unhook](../../cpp/unhook.md) parole chiave. Usare `event_source` per creare origini evento. Uso **hook** all'interno di metodi del ricevitore di eventi per associare i metodi di ricevitore di eventi ("hook") per gli eventi di un'origine evento. Uso **unhook** per annullare l'associazione di essi.

*layout_dependent* viene specificato solo per i ricevitori di eventi COM (`type`=**com**). Il valore predefinito per *layout_dependent* viene **false**.

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|`coclass` Quando *layout_dependent*=**true**|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[event_source](event-source.md)<br/>
[__event](../../cpp/event.md)<br/>
[__hook](../../cpp/hook.md)<br/>
[__unhook](../../cpp/unhook.md)<br/>
[Attributi di classe](class-attributes.md)