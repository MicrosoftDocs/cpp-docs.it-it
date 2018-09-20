---
title: satype | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 6562721cfdf1fb963a6af71e8a8665887fa4d4ae
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46413107"
---
# <a name="satype"></a>satype

Specifica il tipo di dati di `SAFEARRAY` struttura.

## <a name="syntax"></a>Sintassi

```cpp
[ satype(
   data_type
) ]
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

[Attributi del compilatore](../windows/compiler-attributes.md)<br/>
[Attributi di parametro](../windows/parameter-attributes.md)<br/>
[Attributi di metodo](../windows/method-attributes.md)<br/>
[ID](../windows/id.md)  