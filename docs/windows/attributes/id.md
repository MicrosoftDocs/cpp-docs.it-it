---
title: ID (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.id
helpviewer_keywords:
- id attribute
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
ms.openlocfilehash: f67bf21fbe0040884cba4a54ed8d2a230cb20cd6
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88830553"
---
# <a name="id"></a>id

Specifica un parametro *DISPID* per una funzione membro, ovvero una proprietà o un metodo, in un'interfaccia o in un'interfaccia dispatch.

## <a name="syntax"></a>Sintassi

```cpp
[ id(dispid) ]
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch per il metodo di interfaccia.

## <a name="remarks"></a>Osservazioni

L'attributo **ID** C++ ha la stessa funzionalità dell'attributo MIDL dell' [ID](/windows/win32/Midl/id) .

## <a name="example"></a>Esempio

Per un esempio su come usare l' **ID**, vedere l'esempio relativo a [Bindable](bindable.md) .

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi dei membri dati](data-member-attributes.md)<br/>
[DefaultValue](defaultvalue.md)<br/>
[in](in-cpp.md)<br/>
[out](out-cpp.md)
