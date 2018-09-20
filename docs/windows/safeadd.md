---
title: SafeAdd | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeAdd
dev_langs:
- C++
helpviewer_keywords:
- SafeAdd function
ms.assetid: 3f82b91d-59fe-4ee1-873b-d056182fa8be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2ddf4f69c3c897c8f462554ce6a9db6b2a03408f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46400583"
---
# <a name="safeadd"></a>SafeAdd

Somma due numeri in modo da evita overflow.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T, typename U>
inline bool SafeAdd (
   T t,
   U u,
   T& result
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da aggiungere. Deve essere di tipo T.

*u*<br/>
[in] Il secondo numero da aggiungere. Deve essere di tipo U.

*Risultato*<br/>
[out] Il parametro in cui **SafeAdd** archivia il risultato.

## <a name="return-value"></a>Valore restituito

**true** se si verifica alcun errore; **false** se si verifica un errore.

## <a name="remarks"></a>Note

Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettato per un'operazione di addizione singolo senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md).

> [!NOTE]
> Questo metodo deve essere utilizzato solo quando è necessario proteggere una singola operazione matematica. Se sono presenti più operazioni, è necessario utilizzare la classe `SafeInt` anziché chiamare le singole funzioni autonome.

Per altre informazioni sui tipi di modello T e U, vedere [funzioni SafeInt](../windows/safeint-functions.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** SafeInt. h

**Namespace:** Microsoft:: Utilities

## <a name="see-also"></a>Vedere anche

[Funzioni SafeInt](../windows/safeint-functions.md)<br/>
[Libreria SafeInt](../windows/safeint-library.md)<br/>
[Classe SafeInt](../windows/safeint-class.md)<br/>
[SafeSubtract](../windows/safesubtract.md)