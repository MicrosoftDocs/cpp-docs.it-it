---
title: Struttura treat_as_floating_point
ms.date: 11/04/2016
f1_keywords:
- chrono/std::chrono::treat_as_floating_point
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
ms.openlocfilehash: 1b7b58983032ee74ed3d88feb7325cd537e1cc2f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411942"
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

**Intestazione:** \<chrono >

**Spazio dei nomi:** std::chrono

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<chrono>](../standard-library/chrono.md)<br/>
