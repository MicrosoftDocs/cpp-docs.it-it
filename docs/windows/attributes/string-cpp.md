---
description: 'Altre informazioni su: String (C++)'
title: String (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.string
helpviewer_keywords:
- string attribute
ms.assetid: ddde900a-2e99-4fcd-86e8-57e1bdba7c93
ms.openlocfilehash: fadfd0b12a8054dedb275e9e2c33c23206856102
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329576"
---
# <a name="string-c"></a>string (C++)

Indica che la matrice unidimensionale **`char`** , **`wchar_t`** , `byte` (o equivalente) o il puntatore a una matrice di questo tipo devono essere considerati come una stringa.

## <a name="syntax"></a>Sintassi

```cpp
[string]
```

## <a name="remarks"></a>Osservazioni

L'attributo di **stringa** C++ ha la stessa funzionalità dell'attributo MIDL di [stringa](/windows/win32/Midl/string) .

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare una **stringa** in un'interfaccia e in un typedef:

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Matrice o puntatore a una matrice, un parametro di interfaccia, un metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di matrice](array-attributes.md)<br/>
[esportazione](export.md)
