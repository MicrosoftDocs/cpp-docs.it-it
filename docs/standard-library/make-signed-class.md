---
title: Classe make_signed
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::make_signed
helpviewer_keywords:
- make_signed class
- make_signed
ms.assetid: 686247c0-247c-496b-9b1b-ba9dcd633621
ms.openlocfilehash: c3c35e28dec3270299329c0186273e324effc2bb
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68453676"
---
# <a name="makesigned-class"></a>Classe make_signed

Rende la dimensione del tipo o del tipo firmato più piccolo superiore o uguale a quella del tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct make_signed;

template <class T>
using make_signed_t = typename make_signed<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Note

Un'istanza del modificatore di tipo include un tipo modificato che è *T* se `is_signed<T>` include true. In caso contrario è il tipo senza segno più piccolo `UT` per il quale `sizeof (T) <= sizeof (UT)`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
