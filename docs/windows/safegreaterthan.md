---
title: SafeGreaterThan | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeGreaterThan
dev_langs:
- C++
helpviewer_keywords:
- SafeGreaterThan function
ms.assetid: 32cecac9-ba88-43eb-a7a4-30e390456739
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9d17f464fd618f69279a5fe2e65c1abf8147eec9
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45724800"
---
# <a name="safegreaterthan"></a>SafeGreaterThan

Confronta due numeri.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T, typename U>
inline bool SafeGreaterThan (
   const T t,
   const U u
) throw ();
```

### <a name="parameters"></a>Parametri

*t*<br/>
[in] Il primo numero da confrontare. Deve essere di tipo `T`.

*u*<br/>
[in] Il secondo numero da confrontare. Deve essere di tipo `U`.

## <a name="return-value"></a>Valore restituito

**true** se *t* è maggiore di quella *u*; in caso contrario **false**.

## <a name="remarks"></a>Note

**SafeGreaterThan** estende l'operatore di confronto regolari grazie alla possibilità di confrontare due tipi diversi di numeri.

Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettato per una singola operazione di confronto senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md).

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
[SafeLessThan](../windows/safelessthan.md)  
[SafeLessThanEquals](../windows/safelessthanequals.md)  
[SafeGreaterThanEquals](../windows/safegreaterthanequals.md)