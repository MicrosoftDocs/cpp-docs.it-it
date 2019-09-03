---
title: '#Direttiva undef (C/C++)'
ms.date: 08/29/2019
f1_keywords:
- '#undef'
helpviewer_keywords:
- '#undef directive'
- undef directive (#undef)
- preprocessor, directives
ms.assetid: 88900e0e-2c19-4a63-b681-f3d3133c24ca
ms.openlocfilehash: 1a69bc568579e7da7c7e3816cb67c8153b8f1a27
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220211"
---
# <a name="undef-directive-cc"></a>direttiva #undef (C/C++)

Rimuove (rimuove la definizione) un nome creato in precedenza con `#define`.

## <a name="syntax"></a>Sintassi

> **#undef** *identificatore* di

## <a name="remarks"></a>Note

La direttiva **#undef** rimuove la definizione corrente dell' *identificatore*. Di conseguenza, le occorrenze successive dell' *identificatore* vengono ignorate dal preprocessore. Per rimuovere una definizione di macro utilizzando **#undef**, assegnare solo l' *identificatore*della macro, non un elenco di parametri.

È anche possibile applicare la direttiva **#undef** a un identificatore privo di definizione precedente. Questo assicura che l'identificatore rimanga non definito. La sostituzione della macro non viene eseguita nelle istruzioni **#undef** .

La direttiva **#undef** viene in genere abbinata a `#define` una direttiva per creare un'area in un programma di origine in cui un identificatore ha un significato speciale. Ad esempio, una funzione specifica del programma di origine può utilizzare le costanti manifesto per definire valori specifici dell'ambiente che non influiscono sul resto del programma. La direttiva **#undef** funziona anche con la `#if` direttiva per controllare la compilazione condizionale del programma di origine. Per ulteriori informazioni, vedere [le direttive #if, #elif, #else e #endif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).

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

**Sezione specifica Microsoft**

Le macro possono essere indefinite dalla riga di comando usando `/U` l'opzione, seguito da nomi di macro non definiti. L'effetto dell'esecuzione di questo comando è equivalente a una sequenza di `#undef` istruzioni *Nome macro* all'inizio del file.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
