---
title: event_source (C++ attributo COM)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.event_source
helpviewer_keywords:
- event handling, attributes
- event logs, event source
- event sources, creating
- event_source attribute
- event sources
- event handling, creating event source
ms.assetid: 0983e36a-6127-4fbb-8a22-8dfec6564c16
ms.openlocfilehash: 81eba3c032a3556d1c69ad02652455ebc07ab6be
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62409636"
---
# <a name="eventsource"></a>event_source

Crea un'origine evento.

## <a name="syntax"></a>Sintassi

```cpp
[ event_source(type, optimize=[speed | size], decorate=[true | false]) ]
```

### <a name="parameters"></a>Parametri

*type*<br/>
Un'enumerazione di uno dei valori seguenti:

- `native` per codice C/C++ non gestito (impostazione predefinita per le classi non gestite).

- `com` per il codice COM. È necessario usare `coclass` quando `type`=`com`. Questo valore richiedere che si includano i file di intestazione seguente:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*optimize*<br/>
Quando *tipo* viene `native`, è possibile specificare `optimize=size`, per indicare che ci sono 4 byte di spazio di archiviazione (minimo) per tutti gli eventi in una classe o `optimize=speed` (predefinito) per indicare che ci sono 4 * (numero di eventi) byte di spazio di archiviazione.

*decorate*<br/>
Quando *tipo* viene `native`, è possibile specificare `decorate=false`, per indicare che il nome espanso nel file unito (. mrg) non deve includere il nome della classe contenitore. [/Fx](../../build/reference/fx-merge-injected-code.md) consente di generare file .mrg. `decorate=false`, che è l'impostazione predefinita, si risolve in nomi di tipo completi nel file unito.

## <a name="remarks"></a>Note

L'attributo **event_source** di C++ specifica che la classe o struttura a cui viene applicato sarà un'origine evento.

**event_source** si usa in combinazione con l'attributo [event_receiver](event-receiver.md) e la parola chiave [__event](../../cpp/event.md) . Usare `event_receiver` per creare i ricevitori di eventi. Uso **event** sui metodi all'interno dell'origine evento per specificare tali metodi come eventi.

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**Coclasse** quando `type`=`com`|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[event_receiver](event-receiver.md)<br/>
[__event](../../cpp/event.md)<br/>
[__hook](../../cpp/hook.md)<br/>
[__unhook](../../cpp/unhook.md)<br/>
[Attributi di classe](class-attributes.md)