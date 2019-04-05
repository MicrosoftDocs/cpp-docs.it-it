---
title: CloakedIid (struttura)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::CloakedIid
helpviewer_keywords:
- CloakedIid structure
ms.assetid: 82e0e377-ca3a-46bc-b850-ae2c46c15bb5
ms.openlocfilehash: 10dc2af1897147045382e8463b6602fa015fc899
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59033723"
---
# <a name="cloakediid-structure"></a>CloakedIid (struttura)

Indica al `RuntimeClass`, `Implements` e `ChainInterfaces` modelli che l'interfaccia specificata non è accessibile nell'elenco di IID.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
struct CloakedIid : T;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
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

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)