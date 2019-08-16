---
title: propputref (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.propputref
helpviewer_keywords:
- propputref attribute
ms.assetid: 9b0aed74-fdc7-4e59-9117-949bea4f86dd
ms.openlocfilehash: 9dc21494886f80890bcfde7f29bb3d6c86b4a51b
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514178"
---
# <a name="propputref"></a>propputref

Specifica una funzione di impostazione di proprietà che usa un riferimento invece di un valore.

## <a name="syntax"></a>Sintassi

```cpp
[propputref]
```

## <a name="remarks"></a>Note

L'attributo **propputref** C++ ha la stessa funzionalità dell'attributo MIDL di [propputref](/windows/win32/Midl/propputref) .

## <a name="example"></a>Esempio

Vedere l'esempio per [associabile](bindable.md) per un esempio di uso di **propputref**.

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