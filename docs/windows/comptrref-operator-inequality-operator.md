---
title: Operatore comptrref::! = (operatore) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::operator!=
dev_langs:
- C++
ms.assetid: ab3093cc-6fbd-4039-890a-6df1cde992b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0f4aeb3bc5b2ee0598cf9e7d3f572f1f0e5fb5f2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46393178"
---
# <a name="comptrrefoperator-operator"></a>Operatore ComPtrRef::operator!=

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   const Details::ComPtrRef<ComPtr<U>>& b
);

bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   decltype(__nullptr)  
);

bool operator!=(
   decltype(__nullptr),
   const Details::ComPtrRef<ComPtr<T>>& a
);

bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   void* b
);

bool operator!=(
   void* b,
   const Details::ComPtrRef<ComPtr<T>>& a
);
```

### <a name="parameters"></a>Parametri

*a*<br/>
Un riferimento a un **ComPtrRef** oggetto.

*b*<br/>
Un riferimento a un'altra **ComPtrRef** oggetto o un puntatore a un oggetto anonimo (`void*`).

## <a name="return-value"></a>Valore restituito

Primo operatore rese **true** se oggetti *una* non è uguale all'oggetto *b*; in caso contrario, **false**.

Il secondo e terzo operatore yield **true** se oggetti *una* non è uguale a **nullptr**; in caso contrario, **false**.

Gli operatori quarto e quinto yield **true** se oggetti *una* non è uguale all'oggetto *b*; in caso contrario, **false**.

## <a name="remarks"></a>Note

Indica se due **ComPtrRef** oggetti non sono uguali.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)<br/>
[Classe ComPtrRef](../windows/comptrref-class.md)