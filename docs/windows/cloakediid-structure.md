---
title: CloakedIid (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::CloakedIid
dev_langs:
- C++
helpviewer_keywords:
- CloakedIid structure
ms.assetid: 82e0e377-ca3a-46bc-b850-ae2c46c15bb5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3a60d12adfade18c9989d1dc8609a38252d32073
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599098"
---
# <a name="cloakediid-structure"></a>CloakedIid (struttura)

Indica al `RuntimeClass`, `Implements` e `ChainInterfaces` modelli che l'interfaccia specificata non è accessibile nell'elenco di IID.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
struct CloakedIid : T;
```

#### <a name="parameters"></a>Parametri

*T*  
L'interfaccia viene nascosta (mascherato).

## <a name="remarks"></a>Note

Di seguito è riportato un esempio di come **CloakedIid** viene usata: `struct MyRuntimeClass : RuntimeClass<CloakedIid<IMyCloakedInterface>> {}`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`CloakedIid`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)