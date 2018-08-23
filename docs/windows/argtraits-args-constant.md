---
title: 'Costante argtraits:: args | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::ArgTraits::args
dev_langs:
- C++
helpviewer_keywords:
- args constant
ms.assetid: a68100ab-254b-4571-a0bc-946f1633a46b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0600f3a6f220d54085ff7c2ff8d60c2148ced625
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42593310"
---
# <a name="argtraitsargs-constant"></a>Costante ArgTraits::args

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
static const int args = -1; ;
```

## <a name="remarks"></a>Note

Conta il numero di parametri di `Invoke` metodo di un'interfaccia di delegato.

## <a name="remarks"></a>Note

Quando **args** uguale a -1 indica non può esistere alcuna corrispondenza per il `Invoke` firma del metodo.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura ArgTraits](../windows/argtraits-structure.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)