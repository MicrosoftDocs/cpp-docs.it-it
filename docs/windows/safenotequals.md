---
title: SafeNotEquals | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeNotEquals
dev_langs:
- C++
helpviewer_keywords:
- SafeNotEquals function
ms.assetid: 032e45a8-4159-4b55-b7cc-ecd27f4e4788
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a8228a0a269a8f3d726617f2b7adbeb0f016447e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46397399"
---
# <a name="safenotequals"></a>SafeNotEquals

Determina se due numeri non sono uguali.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T, typename U>
inline bool SafeNotEquals (
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

**true** se *t* e *u* non sono uguali; in caso contrario **false**.

## <a name="remarks"></a>Note

Il metodo migliora `!=` poiché **SafeNotEquals** consente di confrontare due tipi diversi di numeri.

Questo metodo fa parte di [Libreria SafeInt](../windows/safeint-library.md) ed è progettato per una singola operazione di confronto senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md).

> [!NOTE]
> Questo metodo deve essere utilizzato solo quando è necessario proteggere una singola operazione matematica. Se sono presenti più operazioni, è necessario utilizzare la classe `SafeInt` anziché chiamare le singole funzioni autonome.

Per altre informazioni sui tipi di modello `T` e `U`, vedere [funzioni SafeInt](../windows/safeint-functions.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** SafeInt. h

**Namespace:** Microsoft:: Utilities

## <a name="see-also"></a>Vedere anche

[Funzioni SafeInt](../windows/safeint-functions.md)<br/>
[Libreria SafeInt](../windows/safeint-library.md)<br/>
[Classe SafeInt](../windows/safeint-class.md)<br/>
[SafeEquals](../windows/safeequals.md)