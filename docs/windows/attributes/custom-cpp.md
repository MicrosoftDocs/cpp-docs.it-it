---
title: custom (C++)
ms.date: 11/04/2016
f1_keywords:
- vc-attr.custom
helpviewer_keywords:
- custom attributes, defining
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
ms.openlocfilehash: 227e67696e679452a9c6c0e18c04e3d918f7a93f
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59029434"
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

*predefinito*<br/>
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
[Attributi dei parametri](parameter-attributes.md)<br/>
[Attributi del metodo](method-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)