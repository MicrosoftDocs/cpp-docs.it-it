---
title: con restrizioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.restricted
dev_langs:
- C++
helpviewer_keywords:
- restricted attribute
ms.assetid: 504a96be-b904-4269-8be1-920feba201b4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 449887e2424ce86fd97407b416e741c908910dfa
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592011"
---
# <a name="restricted"></a>restricted

Specifica che un membro di un modulo, interfaccia o interfaccia dispatch non può essere chiamato in modo arbitrario.

## <a name="syntax"></a>Sintassi

```cpp
[ restricted(
   interfaces
) ]
```

### <a name="parameters"></a>Parametri

*Interfacce*  
Una o più interfacce che non possono essere chiamate in modo arbitrario su un oggetto COM. Questo parametro è valido solo quando viene applicato a una classe.

## <a name="remarks"></a>Note

Il **con restrizioni** attributi di C++ ha la stessa funzionalità come il [limitato](http://msdn.microsoft.com/library/windows/desktop/aa367157) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare il **limitato** attributo:

```cpp
// cpp_attr_ref_restricted.cpp
// compile with: /LD
#include "windows.h"
#include "unknwn.h"
[module(name="MyLib")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface a
{
};

[object, uuid("00000000-0000-0000-0000-000000000002")]
__interface b
{
};

[coclass, restricted(a,b), uuid("00000000-0000-0000-0000-000000000003")]
class c : public a, public b
{
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo, dell'interfaccia **interface**, **classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**Coclasse** (quando applicato a **classe** oppure **struct**)|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di interfaccia](../windows/interface-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  