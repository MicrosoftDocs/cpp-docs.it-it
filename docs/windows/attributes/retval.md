---
title: retval (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.retval
dev_langs:
- C++
helpviewer_keywords:
- retval attribute
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ffa4b43c595bfa75d805e8896aad8c44ac6baa50
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50064706"
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
[Attributi di parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)