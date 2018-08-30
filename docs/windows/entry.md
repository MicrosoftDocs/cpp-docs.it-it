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
ms.openlocfilehash: 95875eaea7206cbfb4ded271e329f10d7aee13fe
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43221891"
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

Il **voce** attributi di C++ ha la stessa funzionalità come la [voce](/windows/desktop/Midl/entry) attributo MIDL.

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