---
title: retval (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.retval
helpviewer_keywords:
- retval attribute
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
ms.openlocfilehash: 9f5ad86a289f8904278a58636e66809ae0edd55b
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59035099"
---
# <a name="retval"></a>retval

Specifica il parametro che riceve il valore restituito del membro.

## <a name="syntax"></a>Sintassi

```cpp
[retval]
```

## <a name="remarks"></a>Note

Il **retval** attributi di C++ ha la stessa funzionalità come la [retval](/windows/desktop/Midl/retval) attributo MIDL.

**retval** devono essere visualizzati nell'ultimo argomento nella dichiarazione della funzione.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](bindable.md) per un esempio dell'uso dei **retval**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|**out**|
|**Attributi non validi**|**in**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi dei parametri](parameter-attributes.md)<br/>
[Attributi del metodo](method-attributes.md)