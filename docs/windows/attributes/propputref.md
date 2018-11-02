---
title: propputref (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.propputref
helpviewer_keywords:
- propputref attribute
ms.assetid: 9b0aed74-fdc7-4e59-9117-949bea4f86dd
ms.openlocfilehash: 0ebf39be6d83e7c5a64ad29f34f9accf0743dbf4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50551281"
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

Vedere l'esempio relativo [associabile](bindable.md) per un esempio dell'uso dei **propputref**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`propget`, `propput`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[propget](propget.md)<br/>
[propput](propput.md)