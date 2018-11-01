---
title: ID (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.id
helpviewer_keywords:
- id attribute
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
ms.openlocfilehash: b7bcbd9229529ec00a3b778cafd5678d47af950c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630036"
---
# <a name="id"></a>ID

Specifica un *dispid* parametro per una funzione membro (una proprietà o un metodo, in un'interfaccia o interfaccia dispatch).

## <a name="syntax"></a>Sintassi

```cpp
[ id(dispid) ]
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
L'ID di invio per il metodo di interfaccia.

## <a name="remarks"></a>Note

Il **id** attributi di C++ ha la stessa funzionalità come la [id](/windows/desktop/Midl/id) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](bindable.md) per un esempio di come usare **id**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi di membro dati](data-member-attributes.md)<br/>
[defaultvalue](defaultvalue.md)<br/>
[in](in-cpp.md)<br/>
[out](out-cpp.md)