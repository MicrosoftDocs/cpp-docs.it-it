---
description: 'Altre informazioni su: defaultbind'
title: defaultbind (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.defaultbind
helpviewer_keywords:
- defaultbind attribute
ms.assetid: b20a8437-24e6-4b6d-a2df-09fe5e1006e0
ms.openlocfilehash: 4fbb6c9e9d563687ec4dd2746f7ab87702fe65d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333029"
---
# <a name="defaultbind"></a>defaultbind

Indica la singola proprietà associabile che meglio rappresenta l'oggetto.

## <a name="syntax"></a>Sintassi

```cpp
[defaultbind]
```

## <a name="remarks"></a>Osservazioni

L'attributo **defaultbind** di C++ ha la stessa funzionalità dell'attributo MIDL di [defaultbind](/windows/win32/Midl/defaultbind) .

## <a name="example"></a>Esempio

Vedere l'esempio per [associabile](bindable.md) per un esempio di come usare **defaultbind**.

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
[displaybind](displaybind.md)<br/>
[immediatebind](immediatebind.md)<br/>
[requestedit](requestedit.md)
