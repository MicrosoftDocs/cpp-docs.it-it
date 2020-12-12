---
description: 'Altre informazioni su: library_block'
title: library_block (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.library_block
helpviewer_keywords:
- library_block attribute
ms.assetid: ae7a7ebe-5e1a-4eda-a058-11bbd058ece8
ms.openlocfilehash: 486c40fa8641e74b6e3bc72bc7f980e3ee1216e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329814"
---
# <a name="library_block"></a>library_block

Inserisce un costrutto all'interno del blocco della libreria IDL.

## <a name="syntax"></a>Sintassi

```cpp
[library_block]
```

## <a name="remarks"></a>Osservazioni

Quando si inserisce un costrutto all'interno del blocco di libreria, assicurarsi che venga passato nella libreria dei tipi, indipendentemente dal fatto che vi si faccia riferimento. Per impostazione predefinita, solo i costrutti modificati dagli attributi [coclass](coclass.md), [Dispatch](dispinterface.md)e [idl_module](idl-module.md) vengono inseriti nel blocco della libreria.

## <a name="example"></a>Esempio

Nel codice seguente, un'interfaccia personalizzata viene posizionata all'interno del blocco di libreria.

```cpp
// cpp_attr_ref_library_block.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib")];
[object, library_block, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface IMyInterface {
   HRESULT f1();
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)
