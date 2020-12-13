---
description: 'Altre informazioni su: personalizzata (C++)'
title: custom (C++)
ms.date: 11/04/2016
f1_keywords:
- vc-attr.custom
helpviewer_keywords:
- custom attributes, defining
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
ms.openlocfilehash: 7771230fd6eed5f567fb2e74e8cd869a0b3618f0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333150"
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

*UUID*<br/>
ID univoco.

*value*<br/>
Valore che può essere inserito in una variante.

## <a name="remarks"></a>Commenti

L'attributo C++ **personalizzato** farà sì che le informazioni vengano inserite nella libreria dei tipi. Sarà necessario uno strumento che legga il valore personalizzato dalla libreria dei tipi.

L'attributo **personalizzato** ha la stessa funzionalità dell'attributo MIDL [personalizzato](/windows/win32/Midl/custom) .

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

- **Si applica a**: tipi non com `interface` , `idl_module` metodi, membri di interfaccia, parametri di interfaccia,,,, **`typedef`** **`class`** **`enum`** **`union`** e **`struct`** .
- **Ripetibile**: Sì.
- **Attributi obbligatori**: **coclass** (se usato nella classe).
- **Attributi non validi**: nessuno.

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)
