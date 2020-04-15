---
title: Istruzione __if_not_exists
ms.date: 11/04/2016
f1_keywords:
- __if_not_exists_cpp
helpviewer_keywords:
- __if_not_exists keyword [C++]
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
ms.openlocfilehash: 1118f9fcca525b2b2d5869fb507ee974d2b0d28f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374133"
---
# <a name="__if_not_exists-statement"></a>Istruzione __if_not_exists

L'istruzione **__if_not_exists** verifica se l'identificatore specificato esiste. Se l'identificatore non è presente, il blocco di istruzioni specificato viene eseguito.

## <a name="syntax"></a>Sintassi

```
__if_not_exists ( identifier ) {
statements
};
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Identificatore*|Identificatore del quale si desidera verificare l'esistenza.|
|*Dichiarazioni*|Una o più istruzioni da eseguire se *l'identificatore* non esiste.|

## <a name="remarks"></a>Osservazioni

> [!CAUTION]
> Per ottenere i risultati più affidabili, utilizzare l'istruzione **__if_not_exists** in base ai vincoli seguenti.

- Applicare l'istruzione **__if_not_exists** solo ai tipi semplici, non ai modelli.

- Applicare l'istruzione **__if_not_exists** agli identificatori sia all'interno che all'esterno di una classe. Non applicare l'istruzione **__if_not_exists** alle variabili locali.

- Utilizzare l'istruzione **__if_not_exists** solo nel corpo di una funzione. All'esterno del corpo di una funzione, l'istruzione **__if_not_exists** può testare solo tipi completamente definiti.

- Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.

Il complemento all'istruzione **__if_not_exists** è l'__if_exists. [__if_exists](../cpp/if-exists-statement.md)

## <a name="example"></a>Esempio

Per un esempio sull'utilizzo **di __if_not_exists**, vedere [__if_exists Statement](../cpp/if-exists-statement.md).

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione __if_exists](../cpp/if-exists-statement.md)
