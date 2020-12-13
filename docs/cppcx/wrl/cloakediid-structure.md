---
description: 'Altre informazioni su: Struttura CloakedIid'
title: CloakedIid (struttura)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::CloakedIid
helpviewer_keywords:
- CloakedIid structure
ms.assetid: 82e0e377-ca3a-46bc-b850-ae2c46c15bb5
ms.openlocfilehash: 06bddded27882ae1216064aafc311364a8d2fd9f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338783"
---
# <a name="cloakediid-structure"></a>CloakedIid (struttura)

Indica ai `RuntimeClass` `Implements` `ChainInterfaces` modelli e che l'interfaccia specificata non è accessibile nell'elenco di IID.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
struct CloakedIid : T;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Interfaccia nascosta (mascherata).

## <a name="remarks"></a>Commenti

Di seguito è riportato un esempio di utilizzo di **CloakedIid** : `struct MyRuntimeClass : RuntimeClass<CloakedIid<IMyCloakedInterface>> {}` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`CloakedIid`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
