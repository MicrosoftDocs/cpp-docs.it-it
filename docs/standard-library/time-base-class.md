---
description: 'Altre informazioni su: time_base Class'
title: Classe time_base
ms.date: 11/04/2016
f1_keywords:
- locale/std::time_base
helpviewer_keywords:
- time_base class
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
ms.openlocfilehash: cad27546109cf8ed6d8314869a3306f238cc6528
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97289569"
---
# <a name="time_base-class"></a>Classe time_base

La classe funge da classe base per i facet di un modello di classe time_get, definendo solo il tipo enumerato `dateorder` e diverse costanti di questo tipo.

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

## <a name="remarks"></a>Osservazioni

Ogni costante caratterizza un modo diverso di ordinare i componenti di una data. Le costanti sono:

- `no_order` non specifica alcun ordine specifico.

- `dmy` Specifica il giorno, il mese e l'anno dell'ordine, come nel 2 dicembre 1979.

- `mdy` Specifica il mese, il giorno e l'anno dell'ordine, come nel 2 dicembre 1979.

- `ymd` Specifica l'anno, il mese e il giorno dell'ordine, come in 1979/12/2.

- `ydm` Specifica l'anno, il giorno e il mese dell'ordine, come in 1979:2 Dec.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
