---
title: in (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.in
dev_langs:
- C++
helpviewer_keywords:
- in attribute
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 95721a37865d7a129d9533b2b8aba7e45c912235
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611781"
---
# <a name="in-c"></a>in (C++)

Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.

## <a name="syntax"></a>Sintassi

```cpp
[in]
```

## <a name="remarks"></a>Note

Il **in** attributi di C++ ha la stessa funzionalità come la [in](http://msdn.microsoft.com/library/windows/desktop/aa367051) attributo MIDL.

## <a name="example"></a>Esempio

Visualizzare [associabile](../windows/bindable.md) per un esempio di come usare **in**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|**retval**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di parametro](../windows/parameter-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[defaultvalue](../windows/defaultvalue.md)  
[ID](../windows/id.md)  
[out](../windows/out-cpp.md)  