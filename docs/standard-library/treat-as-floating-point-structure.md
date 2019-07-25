---
title: Struttura treat_as_floating_point
ms.date: 11/04/2016
f1_keywords:
- chrono/std::chrono::treat_as_floating_point
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
ms.openlocfilehash: 4cf3ac5be972d8636f1d3dbda3b195f4012517be
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459878"
---
# <a name="treatasfloatingpoint-structure"></a>Struttura treat_as_floating_point

Specifica se `Rep` può essere considerato un tipo a virgola mobile.

## <a name="syntax"></a>Sintassi

```cpp
template <class Rep>
struct treat_as_floating_point : is_floating_point<Rep>;
```

## <a name="remarks"></a>Note

`Rep` può essere considerato un tipo a virgola mobile solo quando la specializzazione `treat_as_floating_point<Rep>` è derivata da [true_type](../standard-library/type-traits-typedefs.md#true_type). La classe modello può essere specializzata per un tipo definito dall'utente.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> Chrono

**Spazio dei nomi:** std::chrono

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)
