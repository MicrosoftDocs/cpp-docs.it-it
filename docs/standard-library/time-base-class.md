---
title: Classe time_base | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- locale/std::time_base
dev_langs:
- C++
helpviewer_keywords:
- time_base class
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4e4e371bd242dff337450fd87527455b50556afc
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48235776"
---
# <a name="timebase-class"></a>Classe time_base

La classe funge da classe base per i facet della classe di modello di time_get, la definizione sufficiente del tipo enumerato `dateorder` e diverse costanti di questo tipo.

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

- `no_order` non specifica nessun ordine particolare.

- `dmy` Specifica l'ordine giorno, mese, anno, come in 2 dicembre 1979.

- `mdy` Specifica l'ordine mese, giorno, anno, come in dicembre 2, 1979.

- `ymd` Specifica l'ordine anno, mese, giorno, come in 1979/12/2.

- `ydm` Specifica l'ordine anno, giorno, mese, come in 1979:2 dic.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
