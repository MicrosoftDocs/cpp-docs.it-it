---
title: Struttura treat_as_floating_point
ms.date: 11/04/2016
f1_keywords:
- chrono/std::chrono::treat_as_floating_point
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
ms.openlocfilehash: add69179b23a953a937458cbfa55254b21c5ea37
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72685108"
---
# <a name="treat_as_floating_point-structure"></a>Struttura treat_as_floating_point

Specifica se `Rep` può essere considerato un tipo a virgola mobile.

## <a name="syntax"></a>Sintassi

```cpp
template <class Rep>
struct treat_as_floating_point : is_floating_point<Rep>;
```

## <a name="remarks"></a>Note

`Rep` può essere considerato un tipo a virgola mobile solo quando la specializzazione `treat_as_floating_point<Rep>` è derivata da [true_type](../standard-library/type-traits-typedefs.md#true_type). Il modello di classe può essere specializzato per un tipo definito dall'utente.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<chrono >

**Spazio dei nomi:** std::chrono

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)
