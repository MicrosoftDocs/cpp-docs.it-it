---
title: custom (C++)
ms.date: 11/04/2016
f1_keywords:
- vc-attr.custom
helpviewer_keywords:
- custom attributes, defining
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
ms.openlocfilehash: 19f28963a18abf42c6f629ac0f6491628387aa6d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491008"
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

## <a name="remarks"></a>Note

L'attributo **personalizzato** C++ farà sì che le informazioni vengano inserite nella libreria dei tipi. Sarà necessario uno strumento che legga il valore personalizzato dalla libreria dei tipi.

L'attributo **personalizzato** ha la stessa funzionalità dell'attributo MIDL [personalizzato](/windows/win32/Midl/custom) .

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**Interfaccia**non com, **classe**, **enum**s, `idl_module` metodi, membri di interfaccia, parametri di interfaccia, **typedef**s, **Union**s, **struct**s|
|**Ripetibile**|Sì|
|**Attributi obbligatori**|**coclasse** (se usato nella classe)|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)