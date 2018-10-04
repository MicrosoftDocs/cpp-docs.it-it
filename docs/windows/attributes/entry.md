---
title: voce (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
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
ms.openlocfilehash: 95eb37898d4934740e1520df758ed33d3dd4c79a
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791243"
---
# <a name="entry"></a>entry

Specifica una costante o alla funzione esportata in un modulo identificando il punto di ingresso nella DLL.

## <a name="syntax"></a>Sintassi

```cpp
[ entry(id) ]
```

### <a name="parameters"></a>Parametri

*ID*<br/>
L'ID del punto di ingresso.

## <a name="remarks"></a>Note

Il **voce** attributi di C++ ha la stessa funzionalità come la [voce](/windows/desktop/Midl/entry) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [idl_module](idl-module.md) per un esempio di uso dei **voce**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Attributo `idl_module`|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)  