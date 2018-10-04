---
title: satype (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.satype
dev_langs:
- C++
helpviewer_keywords:
- satype attribute
ms.assetid: 1716590b-6bcb-4aba-b1bc-82f7335f02c3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 255517789a5854ee6f76c4982bb75825905df546
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791948"
---
# <a name="satype"></a>satype

Specifica il tipo di dati di `SAFEARRAY` struttura.

## <a name="syntax"></a>Sintassi

```cpp
[ satype(data_type) ]
```

### <a name="parameters"></a>Parametri

*data_type*<br/>
Tipo di dati per il `SAFEARRAY` struttura dei dati che viene passato come parametro a un metodo di interfaccia.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

## <a name="remarks"></a>Note

Il **satype** C++ attributo specifica il tipo di dati di `SAFEARRAY`.

> [!NOTE]
> Un livello di riferimento indiretto viene eliminato dal `SAFEARRAY` puntatore nel file con estensione IDL generato dal modo in cui viene dichiarata nel file con estensione cpp.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_satype.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyModule")];
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface A {
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);
};
```

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[ID](id.md)  