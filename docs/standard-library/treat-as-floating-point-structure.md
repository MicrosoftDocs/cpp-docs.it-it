---
description: 'Altre informazioni su: struttura treat_as_floating_point'
title: Struttura treat_as_floating_point
ms.date: 11/04/2016
f1_keywords:
- chrono/std::chrono::treat_as_floating_point
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
ms.openlocfilehash: 498421d454de1e15ea52282665bcf9ae7d045946
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169060"
---
# <a name="treat_as_floating_point-structure"></a>Struttura treat_as_floating_point

Specifica se `Rep` può essere considerato un tipo a virgola mobile.

## <a name="syntax"></a>Sintassi

```cpp
template <class Rep>
struct treat_as_floating_point : is_floating_point<Rep>;
```

## <a name="remarks"></a>Osservazioni

`Rep` può essere considerato un tipo a virgola mobile solo quando la specializzazione `treat_as_floating_point<Rep>` è derivata da [true_type](../standard-library/type-traits-typedefs.md#true_type). Il modello di classe può essere specializzato per un tipo definito dall'utente.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<chrono>

**Spazio dei nomi:** std::chrono

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)
