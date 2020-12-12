---
description: 'Altre informazioni su: non esplorabili'
title: nonbrowsable (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.nonbrowsable
helpviewer_keywords:
- nonbrowsable attribute
ms.assetid: e71a98e7-4b65-454a-9829-342b9f2a84be
ms.openlocfilehash: 943458ff989a3f00d2ce33a4f5681a8bd29a76ca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329768"
---
# <a name="nonbrowsable"></a>nonbrowsable

Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.

## <a name="syntax"></a>Sintassi

```cpp
[nonbrowsable]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ non **esplorabile** ha la stessa funzionalità dell'attributo MIDL non [esplorabile](/windows/win32/Midl/nonbrowsable) .

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_nonbrowsable.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, helpstring("help string"), helpstringcontext(1),
uuid="11111111-1111-1111-1111-111111111111"]
__interface IMyI
{
   [nonbrowsable] HRESULT xx();
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)
