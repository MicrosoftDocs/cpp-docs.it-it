---
title: in (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
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
ms.openlocfilehash: d31de803e1a867c7a9e509ced71eb3801d3946ff
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50066838"
---
# <a name="in-c"></a>in (C++)

Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.

## <a name="syntax"></a>Sintassi

```cpp
[in]
```

## <a name="remarks"></a>Note

Il **in** attributi di C++ ha la stessa funzionalità come la [in](/windows/desktop/Midl/in) attributo MIDL.

## <a name="example"></a>Esempio

Visualizzare [associabile](bindable.md) per un esempio di come usare **in**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|**retval**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[defaultvalue](defaultvalue.md)<br/>
[ID](id.md)<br/>
[out](out-cpp.md)