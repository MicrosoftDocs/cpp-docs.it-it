---
title: last_is | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.last_is
dev_langs:
- C++
helpviewer_keywords:
- last_is attribute
ms.assetid: 9e045ac0-fa38-4249-af55-67bde5d0a58c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b565e6e37baba764ffc0bb970b9d7ebcac4e3db2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46413731"
---
# <a name="lastis"></a>last_is

Specifica l'indice dell'ultimo elemento di matrice deve essere trasmesso.

## <a name="syntax"></a>Sintassi

```cpp
[ last_is(
   "expression"
) ]
```

### <a name="parameters"></a>Parametri

*Espressione*<br/>
Una o più espressioni del linguaggio C. Gli slot di argomenti vuoto sono consentiti.

## <a name="remarks"></a>Note

Il **last_is** attributi di C++ ha la stessa funzionalità come la [last_is](/windows/desktop/Midl/last-is) attributo MIDL.

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
[length_is](../windows/length-is.md)<br/>
[size_is](../windows/size-is.md)  