---
title: Classe time_base
ms.date: 11/04/2016
f1_keywords:
- locale/std::time_base
helpviewer_keywords:
- time_base class
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
ms.openlocfilehash: ddaf9905e859c062031940d35adfa2a3393dbb5a
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72685792"
---
# <a name="time_base-class"></a>Classe time_base

La classe funge da classe base per i facet del modello di classe time_get, definendo solo il tipo enumerato `dateorder` e diverse costanti di questo tipo.

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

- `no_order` non specifica alcun ordine specifico.

- `dmy` specifica il giorno, il mese e l'anno dell'ordine, come nel 2 dicembre 1979.

- `mdy` specifica il mese, il giorno e l'anno dell'ordine, come nel 2 dicembre 1979.

- `ymd` specifica l'anno, il mese e il giorno dell'ordine, come in 1979/12/2.

- `ydm` specifica l'anno, il giorno e il mese dell'ordine, come in 1979:2 Dec.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
