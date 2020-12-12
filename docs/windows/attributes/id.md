---
description: 'Altre informazioni su: ID'
title: ID (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.id
helpviewer_keywords:
- id attribute
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
ms.openlocfilehash: 04f7144e1c6f8b6655b0b6be23e0ffa4f22dc27c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180201"
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

## <a name="remarks"></a>Commenti

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

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi dei membri dati](data-member-attributes.md)<br/>
[DefaultValue](defaultvalue.md)<br/>
[in](in-cpp.md)<br/>
[out](out-cpp.md)
