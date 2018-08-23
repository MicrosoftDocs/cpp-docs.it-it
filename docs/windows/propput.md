---
title: propput | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.propput
dev_langs:
- C++
helpviewer_keywords:
- propput attribute
ms.assetid: 1f84dda9-9cce-4e16-aaf0-b2c5219827f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a4e67da1e77882f6bc2e7fd7b5df57b9f0fa97c0
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42612275"
---
# <a name="propput"></a>propput

Specifica un funzione di impostazione delle proprietà.

## <a name="syntax"></a>Sintassi

```cpp
[propput]
```

## <a name="remarks"></a>Note

Il **propput** attributi di C++ ha la stessa funzionalità come la [propput](http://msdn.microsoft.com/library/windows/desktop/aa367146) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](../windows/bindable.md) per un esempio dell'uso dei **propput**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`propget`, `propputref`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[propget](../windows/propget.md)  
[propputref](../windows/propputref.md)