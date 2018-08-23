---
title: SafeModulus | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeModulus
dev_langs:
- C++
helpviewer_keywords:
- SafeModulus function
ms.assetid: ae5c81eb-5dcf-45a5-aa76-465fdfe68654
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b807f24f03c5880b4b60708d6919052183ec564f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605210"
---
# <a name="safemodulus"></a>SafeModulus

Esegue l'operazione di modulo in due numeri.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T, typename U>
inline bool SafeModulus (
   const T t,
   const U u,
   T& result
) throw ();
```

### <a name="parameters"></a>Parametri

[in] *t*  
Divisore. Deve essere di tipo `T`.

[in] *u*  
Dividendo. Deve essere di tipo `U`.

[out] *risultato*  
Il parametro in cui **SafeModulus** archivia il risultato.

## <a name="return-value"></a>Valore restituito

**true** se si verifica alcun errore; **false** se si verifica un errore.

## <a name="remarks"></a>Note

Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettato per un'operazione modulo singolo senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md).

> [!NOTE]
> Questo metodo deve essere utilizzato solo quando è necessario proteggere una singola operazione matematica. Se sono presenti più operazioni, è necessario utilizzare la classe `SafeInt` anziché chiamare le singole funzioni autonome.

Per altre informazioni sui tipi di modello `T` e `U`, vedere [funzioni SafeInt](../windows/safeint-functions.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** SafeInt. h

**Namespace:** Microsoft:: Utilities

## <a name="see-also"></a>Vedere anche

[Funzioni SafeInt](../windows/safeint-functions.md)  
[Libreria SafeInt](../windows/safeint-library.md)  
[Classe SafeInt](../windows/safeint-class.md)  
[SafeDivide](../windows/safedivide.md)