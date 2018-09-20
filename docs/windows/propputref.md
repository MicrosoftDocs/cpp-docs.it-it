---
title: propputref | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.propputref
dev_langs:
- C++
helpviewer_keywords:
- propputref attribute
ms.assetid: 9b0aed74-fdc7-4e59-9117-949bea4f86dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f2afa793371f2e9840bbb98efc9f745ecbdd29b7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46389330"
---
# <a name="propputref"></a>propputref

Specifica una funzione di impostazione di proprietà che utilizza un riferimento anziché un valore.

## <a name="syntax"></a>Sintassi

```cpp
[propputref]
```

## <a name="remarks"></a>Note

Il **propputref** attributi di C++ ha la stessa funzionalità come la [propputref](/windows/desktop/Midl/propputref) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](../windows/bindable.md) per un esempio dell'uso dei **propputref**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`propget`, `propput`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi di metodo](../windows/method-attributes.md)<br/>
[propget](../windows/propget.md)<br/>
[propput](../windows/propput.md)  