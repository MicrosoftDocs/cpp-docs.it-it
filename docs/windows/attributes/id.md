---
title: ID (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.id
helpviewer_keywords:
- id attribute
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
ms.openlocfilehash: 6f1d1d2b9d147e8b33b3b5fae629e0805971bb71
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69501413"
---
# <a name="id"></a>id

Specifica un parametro *DISPID* per una funzione membro, ovvero una proprietà o un metodo, in un'interfaccia o in un'interfaccia dispatch.

## <a name="syntax"></a>Sintassi

```cpp
[ id(dispid) ]
```

### <a name="parameters"></a>Parametri

*dispid*<br/>
ID dispatch per il metodo di interfaccia.

## <a name="remarks"></a>Note

L'attributo **ID** C++ ha la stessa funzionalità dell'attributo MIDL dell' [ID](/windows/win32/Midl/id) .

## <a name="example"></a>Esempio

Per un esempio su come usare l' **ID**, vedere l'esempio relativo a [Bindable](bindable.md) .

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi di membro dati](data-member-attributes.md)<br/>
[defaultvalue](defaultvalue.md)<br/>
[in](in-cpp.md)<br/>
[out](out-cpp.md)