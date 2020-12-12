---
description: 'Altre informazioni su: operatore operator = = (Microsoft:: WRL)'
title: Operatore operator== (Microsoft::WRL)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::operator==
ms.assetid: 94f383a5-17a9-40c7-9d9c-778acdc54b27
ms.openlocfilehash: 36d178dc948a6d580fc0a0dab43c36e734a319c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330798"
---
# <a name="operator-operator-microsoftwrl"></a>Operatore operator== (Microsoft::WRL)

Operatore di uguaglianza per gli oggetti [ComPtr](comptr-class.md) e [ComPtrRef](comptrref-class.md) .

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW bool operator==(
   const ComPtr<T>& a,
   const ComPtr<U>& b
);
WRL_NOTHROW bool operator==(
   const ComPtr<T>& a,
   decltype(__nullptr)
);
WRL_NOTHROW bool operator==(
   decltype(__nullptr),
   const ComPtr<T>& a
);
WRL_NOTHROW bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   const Details::ComPtrRef<ComPtr<U>>& b
);
WRL_NOTHROW bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   decltype(__nullptr)
);
WRL_NOTHROW bool operator==(
   decltype(__nullptr),
   const Details::ComPtrRef<ComPtr<T>>& a
);
WRL_NOTHROW bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   void* b
);
WRL_NOTHROW bool operator==(
   void* b,
   const Details::ComPtrRef<ComPtr<T>>& a
);
```

### <a name="parameters"></a>Parametri

*un*<br/>
Oggetto a sinistra.

*b*<br/>
Oggetto a destra.

## <a name="return-value"></a>Valore restituito

**`true`** Se gli oggetti sono uguali; in caso contrario, **`false`** .

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
