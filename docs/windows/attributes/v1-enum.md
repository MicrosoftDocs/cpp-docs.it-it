---
description: 'Altre informazioni su: v1_enum'
title: v1_enum (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.v1_enum
helpviewer_keywords:
- v1_enum attribute
ms.assetid: 2fe92d92-81b9-4a1c-b6ce-437d0eb770ca
ms.openlocfilehash: c096ec78971e8980b68572c7f0bbb4510d03d3d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327200"
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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Tipo enumerato|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)
