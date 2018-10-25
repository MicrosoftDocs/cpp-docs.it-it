---
title: stringa (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.string
dev_langs:
- C++
helpviewer_keywords:
- string attribute
ms.assetid: ddde900a-2e99-4fcd-86e8-57e1bdba7c93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f78b7af310ce619eaf595726e51775ba72e37479
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50057114"
---
# <a name="string-c"></a>string (C++)

Indica che l'oggetto unidimensionale **char**, **wchar_t**, `byte` (o equivalenti) matrice o del puntatore a una matrice di questo tipo deve essere trattato come una stringa.

## <a name="syntax"></a>Sintassi

```cpp
[string]
```

## <a name="remarks"></a>Note

Il **stringa** attributi di C++ ha la stessa funzionalità come la [stringa](/windows/desktop/Midl/string) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare **stringa** su un'interfaccia e in un typedef:

```cpp
// cpp_attr_ref_string.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];
[export, string] typedef char a[21];
[dispinterface, restricted, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl
{
   [id(1)] HRESULT Method3([in, string] char *pC);
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Matrice o puntatore a una matrice, parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di matrice](array-attributes.md)<br/>
[export](export.md)