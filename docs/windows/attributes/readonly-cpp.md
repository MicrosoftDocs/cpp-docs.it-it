---
description: 'Altre informazioni su: ReadOnly (C++)'
title: ReadOnly (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.readonly
helpviewer_keywords:
- readonly attribute
ms.assetid: 1246cadd-5304-43a9-beea-51153d12704d
ms.openlocfilehash: 5a970fa091747e1264d56550bdb11c3b66d81259
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327325"
---
# <a name="readonly-c"></a>readonly (C++)

Non consente l'assegnazione a un membro dati.

## <a name="syntax"></a>Sintassi

```cpp
[readonly]
```

## <a name="remarks"></a>Osservazioni

L'attributo **readonly** di C++ ha la stessa funzionalità dell'attributo [readonly](/windows/win32/Midl/readonly) di MIDL.

Se si vuole impedire la modifica di un parametro di metodo, usare l'attributo [in](in-cpp.md) .

## <a name="example"></a>Esempio

Il codice seguente mostra un utilizzo dell'attributo **readonly** :

```cpp
// cpp_attr_ref_readonly.cpp
// compile with: /LD
[idl_quote("midl_pragma warning(disable:2461)")];
#include "unknwn.h"
[module(name="ATLFIRELib")];

[dispinterface, uuid(11111111-1111-1111-1111-111111111111)]
__interface IFireTabCtrl
{
   [readonly, id(1)] int i();
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
[Attributi dei membri dati](data-member-attributes.md)
