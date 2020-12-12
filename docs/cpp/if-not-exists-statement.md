---
description: 'Altre informazioni su: __if_not_exists Statement'
title: Istruzione __if_not_exists
ms.date: 11/04/2016
f1_keywords:
- __if_not_exists_cpp
helpviewer_keywords:
- __if_not_exists keyword [C++]
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
ms.openlocfilehash: 29f98c2d07858077207c10dfcdd45b9ce51268e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113948"
---
# <a name="__if_not_exists-statement"></a>Istruzione __if_not_exists

L' **`__if_not_exists`** istruzione verifica se l'identificatore specificato esiste. Se l'identificatore non è presente, il blocco di istruzioni specificato viene eseguito.

## <a name="syntax"></a>Sintassi

```
__if_not_exists ( identifier ) {
statements
};
```

#### <a name="parameters"></a>Parametri

*identificatore*\
Identificatore del quale si desidera verificare l'esistenza.

*istruzioni*\
Una o più istruzioni da eseguire se l' *identificatore* non esiste.

## <a name="remarks"></a>Commenti

> [!CAUTION]
> Per ottenere i risultati più affidabili, utilizzare l' **`__if_not_exists`** istruzione nei vincoli seguenti.

- Applicare l' **`__if_not_exists`** istruzione solo ai tipi semplici, non ai modelli.

- Applicare l' **`__if_not_exists`** istruzione agli identificatori all'interno o all'esterno di una classe. Non applicare l' **`__if_not_exists`** istruzione alle variabili locali.

- Utilizzare l' **`__if_not_exists`** istruzione solo nel corpo di una funzione. All'esterno del corpo di una funzione, l' **`__if_not_exists`** istruzione può testare solo i tipi completamente definiti.

- Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.

Il complemento all' **`__if_not_exists`** istruzione è l'istruzione [__if_exists](../cpp/if-exists-statement.md) .

## <a name="example"></a>Esempio

Per un esempio su come usare **`__if_not_exists`** , vedere [__if_exists istruzione](../cpp/if-exists-statement.md).

## <a name="see-also"></a>Vedi anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione __if_exists](../cpp/if-exists-statement.md)
