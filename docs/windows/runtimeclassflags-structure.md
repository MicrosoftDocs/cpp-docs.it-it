---
title: RuntimeClassFlags (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassFlags
dev_langs:
- C++
helpviewer_keywords:
- RuntimeClassFlags structure
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f0a32fc373900af1a4322f4f2511c44417d2916a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594274"
---
# <a name="runtimeclassflags-structure"></a>RuntimeClassFlags (struttura)

Contiene il tipo di un'istanza di un [RuntimeClass](../windows/runtimeclass-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <
   unsigned int flags
>
struct RuntimeClassFlags;
```

### <a name="parameters"></a>Parametri

*flags*  
Oggetto [RuntimeClassType (enumerazione)](../windows/runtimeclasstype-enumeration.md) valore.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|[Costante RuntimeClassFlags::value](../windows/runtimeclassflags-value-constant.md)|Contiene un [RuntimeClassType (enumerazione)](../windows/runtimeclasstype-enumeration.md) valore.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RuntimeClassFlags`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)