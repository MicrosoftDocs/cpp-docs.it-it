---
description: 'Altre informazioni su: direttiva #undef (C/C++)'
title: '#Direttiva undef (C/C++)'
ms.date: 08/29/2019
f1_keywords:
- '#undef'
helpviewer_keywords:
- '#undef directive'
- undef directive (#undef)
- preprocessor, directives
ms.assetid: 88900e0e-2c19-4a63-b681-f3d3133c24ca
ms.openlocfilehash: 20dfd1d0b26f18a26e7ad407704d6cb0ffd563bb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300436"
---
# <a name="undef-directive-cc"></a>direttiva #undef (C/C++)

Rimuove (rimuove la definizione) un nome creato in precedenza con `#define`.

## <a name="syntax"></a>Sintassi

>  *identificatore* #undef

## <a name="remarks"></a>Commenti

La direttiva **#undef** rimuove la definizione corrente dell' *identificatore*. Di conseguenza, le occorrenze successive dell' *identificatore* vengono ignorate dal preprocessore. Per rimuovere una definizione di macro utilizzando **#undef**, assegnare solo l' *identificatore* della macro, non un elenco di parametri.

È anche possibile applicare la direttiva **#undef** a un identificatore privo di definizione precedente. Questo assicura che l'identificatore rimanga non definito. La sostituzione della macro non viene eseguita nelle istruzioni **#undef** .

La direttiva **#undef** viene in genere abbinata a una `#define` direttiva per creare un'area in un programma di origine in cui un identificatore ha un significato speciale. Ad esempio, una funzione specifica del programma di origine può utilizzare le costanti manifesto per definire valori specifici dell'ambiente che non influiscono sul resto del programma. La direttiva **#undef** funziona anche con la `#if` direttiva per controllare la compilazione condizionale del programma di origine. Per ulteriori informazioni, vedere [le direttive #if, #elif, #else e #endif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).

Nell'esempio seguente, la direttiva **#undef** rimuove le definizioni di una costante simbolica e di una macro. Notare che viene specificato solo l'identificatore della macro.

```C
#define WIDTH 80
#define ADD( X, Y ) ((X) + (Y))
.
.
.
#undef WIDTH
#undef ADD
```

**Specifico di Microsoft**

Le macro possono essere indefinite dalla riga di comando usando l' `/U` opzione, seguito da nomi di macro non definiti. L'effetto dell'esecuzione di questo comando è equivalente a una sequenza di `#undef` istruzioni *Nome macro* all'inizio del file.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
