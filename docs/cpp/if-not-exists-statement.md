---
title: Istruzione __if_not_exists
ms.date: 11/04/2016
f1_keywords:
- __if_not_exists_cpp
helpviewer_keywords:
- __if_not_exists keyword [C++]
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
ms.openlocfilehash: 7372ac127a7b4dd5c05d58cfecca25f87690b0ae
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80178183"
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
|*identifier*|Identificatore del quale si desidera verificare l'esistenza.|
|*istruzioni*|Una o più istruzioni da eseguire se l' *identificatore* non esiste.|

## <a name="remarks"></a>Osservazioni

> [!CAUTION]
>  Per ottenere i risultati più affidabili, utilizzare l'istruzione **__if_not_exists** nei vincoli seguenti.

- Applicare l'istruzione **__if_not_exists** solo ai tipi semplici, non ai modelli.

- Applicare l'istruzione **__if_not_exists** agli identificatori all'interno o all'esterno di una classe. Non applicare l'istruzione **__if_not_exists** alle variabili locali.

- Usare l'istruzione **__if_not_exists** solo nel corpo di una funzione. All'esterno del corpo di una funzione, l'istruzione **__if_not_exists** può testare solo i tipi completamente definiti.

- Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.

Il complemento all'istruzione **__if_not_exists** è l'istruzione [__if_exists](../cpp/if-exists-statement.md) .

## <a name="example"></a>Esempio

Per un esempio su come usare **__if_not_exists**, vedere [__if_exists istruzione](../cpp/if-exists-statement.md).

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[__if_exists Statement](../cpp/if-exists-statement.md)
