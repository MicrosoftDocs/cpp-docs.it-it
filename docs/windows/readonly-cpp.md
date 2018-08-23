---
title: ReadOnly (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.readonly
dev_langs:
- C++
helpviewer_keywords:
- readonly attribute
ms.assetid: 1246cadd-5304-43a9-beea-51153d12704d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fc70734867b0b6b7c1d9ebc5e66c45893cf1db1e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42602091"
---
# <a name="readonly-c"></a>readonly (C++)

Non consente l'assegnazione a un membro dati.

## <a name="syntax"></a>Sintassi

```cpp
[readonly]
```

## <a name="remarks"></a>Note

L'attributo **readonly** di C++ ha la stessa funzionalità dell'attributo [readonly](http://msdn.microsoft.com/library/windows/desktop/aa367152) di MIDL.

Se si vuole impedire la modifica di un parametro di metodo, usare l'attributo [in](../windows/in-cpp.md) .

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

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di membro dati](../windows/data-member-attributes.md)  