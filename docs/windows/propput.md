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
ms.openlocfilehash: 5c8d9038fc8ded02afe02169731692b290466df6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46442812"
---
# <a name="propput"></a>propput

Specifica un funzione di impostazione delle proprietà.

## <a name="syntax"></a>Sintassi

```cpp
[propput]
```

## <a name="remarks"></a>Note

Il **propput** attributi di C++ ha la stessa funzionalità come la [propput](/windows/desktop/Midl/propput) attributo MIDL.

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

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi di metodo](../windows/method-attributes.md)<br/>
[propget](../windows/propget.md)<br/>
[propputref](../windows/propputref.md)