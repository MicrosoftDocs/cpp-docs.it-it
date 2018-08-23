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
ms.openlocfilehash: 0b3792bc5377d90acb6f5ddf619e888ddd606e1e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594093"
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

*Espressione*  
Una o più espressioni del linguaggio C. Gli slot di argomenti vuoto sono consentiti.

## <a name="remarks"></a>Note

Il **length_is** attributi di C++ ha la stessa funzionalità come la [length_is](http://msdn.microsoft.com/library/windows/desktop/aa367068) attributo MIDL.

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

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  
[Attributi di parametro](../windows/parameter-attributes.md)  
[first_is](../windows/first-is.md)  
[max_is](../windows/max-is.md)  
[last_is](../windows/last-is.md)  
[size_is](../windows/size-is.md)  