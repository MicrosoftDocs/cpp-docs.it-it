---
title: custom (C++)
ms.date: 11/04/2016
f1_keywords:
- vc-attr.custom
helpviewer_keywords:
- custom attributes, defining
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
ms.openlocfilehash: 7aca125879591f71fe2ba60f34b712918350940f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50565698"
---
# <a name="custom-c"></a>custom (C++)

Definisce i metadati per un oggetto nella libreria dei tipi.

## <a name="syntax"></a>Sintassi

```cpp
[ custom(
   uuid,
   value
) ];
```

### <a name="parameters"></a>Parametri

*uuid*<br/>
ID univoco.

*valore*<br/>
Un valore che può essere impostato in una variante.

## <a name="remarks"></a>Note

Il **personalizzato** C++ attributo farà in modo da inserire in libreria dei tipi di informazioni. È necessario uno strumento che legge il valore personalizzato da libreria dei tipi.

Il **personalizzati** attributo ha la stessa funzionalità di [personalizzato](/windows/desktop/Midl/custom) attributo MIDL.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Non COM **interface**, **classe**, **enum**s, `idl_module` metodi, i membri di interfaccia, i parametri dell'interfaccia **typedef**s, **unione**s **struct**s|
|**Ripetibile**|Yes|
|**Attributi obbligatori**|**Coclasse** (se usato nella classe)|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)