---
title: Hidden (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.hidden
helpviewer_keywords:
- hidden attribute
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
ms.openlocfilehash: e0e3c5cb0355f3bedd8ecee57b034f0d9dde87df
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224435"
---
# <a name="hidden"></a>hidden

Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientato all'utente.

## <a name="syntax"></a>Sintassi

```cpp
[hidden]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ **nascosto** ha la stessa funzionalità dell'attributo MIDL [nascosto](/windows/win32/Midl/hidden) .

## <a name="example"></a>Esempio

Vedere l'esempio per [associabile](bindable.md) per un esempio di come usare **Hidden**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **`class`** , **`struct`** , metodo, proprietà|
|**Ripetibile**|No|
|**Attributi richiesti**|**coclasse** (se applicata a **`class`** o **`struct`** )|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)
