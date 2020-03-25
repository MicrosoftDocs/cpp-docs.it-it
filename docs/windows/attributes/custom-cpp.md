---
title: custom (C++)
ms.date: 11/04/2016
f1_keywords:
- vc-attr.custom
helpviewer_keywords:
- custom attributes, defining
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
ms.openlocfilehash: f51b0210fff4db5be359fa94237f4d7c77b4fef2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214890"
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

*value*<br/>
Valore che può essere inserito in una variante.

## <a name="remarks"></a>Osservazioni

L'attributo **personalizzato** C++ farà sì che le informazioni vengano inserite nella libreria dei tipi. Sarà necessario uno strumento che legga il valore personalizzato dalla libreria dei tipi.

L'attributo **personalizzato** ha la stessa funzionalità dell'attributo MIDL [personalizzato](/windows/win32/Midl/custom) .

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**Interfaccia**non com, **classe**, **enum**s, metodi di `idl_module`, membri di interfaccia, parametri di interfaccia, **typedef**, **Union**s, **struct**s|
|**Ripetibile**|Sì|
|**Attributi obbligatori**|**coclasse** (se utilizzata nella classe)|
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
