---
title: Classe time_base
ms.date: 11/04/2016
f1_keywords:
- locale/std::time_base
helpviewer_keywords:
- time_base class
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
ms.openlocfilehash: 85565dc0c0ec904551eb8dd981cfacc9a2e1f256
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68460034"
---
# <a name="timebase-class"></a>Classe time_base

La classe funge da classe base per i facet della classe modello time_get, definendo solo il tipo `dateorder` enumerato e diverse costanti di questo tipo.

## <a name="syntax"></a>Sintassi

```cpp
class time_base : public locale::facet {
public:
    enum dateorder {
        no_order,
        dmy,
        mdy,
        ymd,
        ydm
    };
    time_base(size_t _Refs = 0)
    ~time_base();
};
```

## <a name="remarks"></a>Note

Ogni costante caratterizza un modo diverso di ordinare i componenti di una data. Le costanti sono:

- `no_order`non specifica alcun ordine specifico.

- `dmy`Specifica il giorno, il mese e l'anno dell'ordine, come nel 2 dicembre 1979.

- `mdy`Specifica il mese, il giorno e l'anno dell'ordine, come nel 2 dicembre 1979.

- `ymd`Specifica l'anno, il mese e il giorno dell'ordine, come in 1979/12/2.

- `ydm`Specifica gli ordini anno, giorno e mese, come in 1979: 2 Dec.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
