---
title: length_is | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.length_is
dev_langs:
- C++
helpviewer_keywords:
- length_is attribute
ms.assetid: 1d99b883-84bb-4b1e-b098-eb780fc94f40
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: aff0c2e2600f7f0c300d1043c9844104fd70c4e4
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415336"
---
# <a name="lengthis"></a>length_is

Specifica il numero di elementi della matrice deve essere trasmesso.

## <a name="syntax"></a>Sintassi

```cpp
[ length_is(
   "expression"
) ]
```

### <a name="parameters"></a>Parametri

*Espressione*<br/>
Una o più espressioni del linguaggio C. Gli slot di argomenti vuoto sono consentiti.

## <a name="remarks"></a>Note

Il **length_is** attributi di C++ ha la stessa funzionalità come la [length_is](/windows/desktop/Midl/length-is) attributo MIDL.

## <a name="example"></a>Esempio

Visualizzare [first_is](../windows/first-is.md) per un esempio di come specificare una sezione di una matrice.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Nel campo **struct** oppure **union**, parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](../windows/parameter-attributes.md)<br/>
[first_is](../windows/first-is.md)<br/>
[max_is](../windows/max-is.md)<br/>
[last_is](../windows/last-is.md)<br/>
[size_is](../windows/size-is.md)  