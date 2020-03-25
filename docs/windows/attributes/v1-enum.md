---
title: v1_enum (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.v1_enum
helpviewer_keywords:
- v1_enum attribute
ms.assetid: 2fe92d92-81b9-4a1c-b6ce-437d0eb770ca
ms.openlocfilehash: 1a189f6f1c5ef9d4ae77df9f1eda3f3671ddaf52
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80166107"
---
# <a name="v1_enum"></a>v1_enum

Indica che il tipo enumerato specificato deve essere trasmesso come entità a 32 bit anziché come valore predefinito a 16 bit.

## <a name="syntax"></a>Sintassi

```cpp
[v1_enum]
```

## <a name="remarks"></a>Osservazioni

L'attributo **v1_enum** C++ ha la stessa funzionalità dell'attributo [v1_enum](/windows/win32/Midl/v1-enum) MIDL.

## <a name="example"></a>Esempio

Il codice seguente illustra l'uso di **v1_enum**:

```cpp
// cpp_attr_ref_v1_enum.cpp
// compile with: /LD
[module(name="MyLibrary")];

[export, v1_enum]
enum eList {
   e1 = 1, e2 = 2
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Tipo enumerato|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)
