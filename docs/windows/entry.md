---
title: voce | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.entry
dev_langs:
- C++
helpviewer_keywords:
- entry attribute
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f9bc6a88ee7dca0bcd4ad2f87fd3aa4c318d8b9d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42604765"
---
# <a name="entry"></a>entry

Specifica una costante o alla funzione esportata in un modulo identificando il punto di ingresso nella DLL.

## <a name="syntax"></a>Sintassi

```cpp
[ entry(
   id
) ]
```

### <a name="parameters"></a>Parametri

*ID*  
L'ID del punto di ingresso.

## <a name="remarks"></a>Note

Il **voce** attributi di C++ ha la stessa funzionalità come la [voce](http://msdn.microsoft.com/library/windows/desktop/aa366815) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [idl_module](../windows/idl-module.md) per un esempio di uso dei **voce**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Attributo `idl_module`|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  