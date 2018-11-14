---
title: Istruzione __if_not_exists
ms.date: 11/04/2016
f1_keywords:
- __if_not_exists_cpp
helpviewer_keywords:
- __if_not_exists keyword [C++]
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
ms.openlocfilehash: 845597460cdc0ce83adcbba1f47a78c83735cbf9
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51327772"
---
# <a name="ifnotexists-statement"></a>Istruzione __if_not_exists

Il **if_not_exists** istruzione verifica se l'identificatore specificato esiste. Se l'identificatore non è presente, il blocco di istruzioni specificato viene eseguito.

## <a name="syntax"></a>Sintassi

```
__if_not_exists ( identifier ) {
statements
};
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*identifier*|Identificatore del quale si desidera verificare l'esistenza.|
|*Istruzioni*|Uno o più istruzioni da eseguire se *identificatore* non esiste.|

## <a name="remarks"></a>Note

> [!CAUTION]
>  Per ottenere risultati più affidabili, usare il **if_not_exists** istruzione in base ai vincoli seguenti.

- Si applicano i **if_not_exists** unici tipi semplici, non i modelli dell'istruzione.

- Si applicano i **if_not_exists** istruzione agli identificatori sia interni che esterni alla classe. Non si applicano i **if_not_exists** istruzione alle variabili locali.

- Usare la **if_not_exists** istruzione solo nel corpo di una funzione. All'esterno del corpo di una funzione, il **if_not_exists** istruzione può testare solo tipi completamente definiti.

- Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.

Il complemento per il **if_not_exists** istruzione è la [if_exists](../cpp/if-exists-statement.md) istruzione.

## <a name="example"></a>Esempio

Per un esempio su come usare **if_not_exists**, vedere [if_exists istruzione](../cpp/if-exists-statement.md).

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[__if_exists Statement](../cpp/if-exists-statement.md)