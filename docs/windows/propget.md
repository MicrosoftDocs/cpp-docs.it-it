---
title: propget | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.propget
dev_langs:
- C++
helpviewer_keywords:
- propget attribute
ms.assetid: c9d4a97f-36dd-4b61-8eb0-b1a217598f14
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e3461f622e5146a9173e0a011fbec60a9674c545
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43223341"
---
# <a name="propget"></a>propget

Specifica una funzione di accesso di proprietà.

## <a name="syntax"></a>Sintassi

```cpp
[propget]
```

## <a name="remarks"></a>Note

Il **propget** attributi di C++ ha la stessa funzionalità come la [propget](/windows/desktop/Midl/propget) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](../windows/bindable.md) per un esempio dell'uso dei **propget**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`propput`, `propputref`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[propput](../windows/propput.md)  
[propputref](../windows/propputref.md)  