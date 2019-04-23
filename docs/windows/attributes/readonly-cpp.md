---
title: ReadOnly (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.readonly
helpviewer_keywords:
- readonly attribute
ms.assetid: 1246cadd-5304-43a9-beea-51153d12704d
ms.openlocfilehash: 7eea071b62130c65fbb46ebc8827fc2b428c4c0c
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59036914"
---
# <a name="readonly-c"></a>readonly (C++)

Non consente l'assegnazione a un membro dati.

## <a name="syntax"></a>Sintassi

```cpp
[readonly]
```

## <a name="remarks"></a>Note

L'attributo **readonly** di C++ ha la stessa funzionalità dell'attributo [readonly](/windows/desktop/Midl/readonly) di MIDL.

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

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di membro dati](data-member-attributes.md)