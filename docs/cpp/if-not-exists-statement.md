---
title: Istruzione __if_not_exists
ms.date: 11/04/2016
f1_keywords:
- __if_not_exists_cpp
helpviewer_keywords:
- __if_not_exists keyword [C++]
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
ms.openlocfilehash: 3e0eb550830a1689d440e3b471759a98f1eef0ca
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87187257"
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

|Parametro|Descrizione|
|---------------|-----------------|
|*identificatore*|Identificatore del quale si desidera verificare l'esistenza.|
|*istruzioni*|Una o più istruzioni da eseguire se l' *identificatore* non esiste.|

## <a name="remarks"></a>Osservazioni

> [!CAUTION]
> Per ottenere i risultati più affidabili, utilizzare l' **`__if_not_exists`** istruzione nei vincoli seguenti.

- Applicare l' **`__if_not_exists`** istruzione solo ai tipi semplici, non ai modelli.

- Applicare l' **`__if_not_exists`** istruzione agli identificatori all'interno o all'esterno di una classe. Non applicare l' **`__if_not_exists`** istruzione alle variabili locali.

- Utilizzare l' **`__if_not_exists`** istruzione solo nel corpo di una funzione. All'esterno del corpo di una funzione, l' **`__if_not_exists`** istruzione può testare solo i tipi completamente definiti.

- Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.

Il complemento all' **`__if_not_exists`** istruzione è l'istruzione [__if_exists](../cpp/if-exists-statement.md) .

## <a name="example"></a>Esempio

Per un esempio su come usare **`__if_not_exists`** , vedere [__if_exists istruzione](../cpp/if-exists-statement.md).

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione __if_exists](../cpp/if-exists-statement.md)
