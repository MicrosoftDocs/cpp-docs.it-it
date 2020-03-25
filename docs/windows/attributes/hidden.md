---
title: Hidden (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.hidden
helpviewer_keywords:
- hidden attribute
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
ms.openlocfilehash: 6b420e8f50bd217de460a81f5faaf9583c701376
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168096"
---
# <a name="hidden"></a>hidden

Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientato all'utente.

## <a name="syntax"></a>Sintassi

```cpp
[hidden]
```

## <a name="remarks"></a>Osservazioni

L'attributo **Hidden** C++ ha la stessa funzionalità dell'attributo MIDL [nascosto](/windows/win32/Midl/hidden) .

## <a name="example"></a>Esempio

Vedere l'esempio per [associabile](bindable.md) per un esempio di come usare **Hidden**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **classe**, **struct**, metodo, proprietà|
|**Ripetibile**|No|
|**Attributi obbligatori**|**coclasse** (se applicata alla **classe** o allo **struct**)|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)
