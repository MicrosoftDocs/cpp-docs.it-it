---
description: 'Altre informazioni su: Hidden'
title: Hidden (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.hidden
helpviewer_keywords:
- hidden attribute
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
ms.openlocfilehash: 0609ef8b0dedb08e26e5442fd5070ca6a29e11d6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180227"
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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interfaccia**, **`class`** , **`struct`** , metodo, proprietà|
|**Ripetibile**|No|
|**Attributi richiesti**|**coclasse** (se applicata a **`class`** o **`struct`** )|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)
