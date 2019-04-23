---
title: '#undef (direttiva) (C/C++)'
ms.date: 11/04/2016
f1_keywords:
- '#undef'
helpviewer_keywords:
- '#undef directive'
- undef directive (#undef)
- preprocessor, directives
ms.assetid: 88900e0e-2c19-4a63-b681-f3d3133c24ca
ms.openlocfilehash: 4f4f5ce244be6d7f4e13d7a2abc5d21232c08d9d
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59039007"
---
# <a name="undef-directive-cc"></a>Direttiva #undef (C/C++)
Rimuove (rimuove la definizione) un nome creato in precedenza con `#define`.

## <a name="syntax"></a>Sintassi

```
#undef
identifier
```

## <a name="remarks"></a>Note

Il **#undef** direttiva rimuove la definizione corrente di *identificatore*. Di conseguenza, le occorrenze successive dello *identificatore* vengono ignorate dal preprocessore. Per rimuovere una definizione di macro mediante **#undef**, assegnare solo la macro *identificatore* ; non fornire un elenco di parametri.

È inoltre possibile applicare il **#undef** direttiva in un identificatore che non dispone di alcuna definizione precedente. Questo assicura che l'identificatore rimanga non definito. Sostituzione della macro non viene eseguita all'interno **#undef** istruzioni.

Il **#undef** direttiva è in genere associata a un `#define` direttiva per creare un'area in un programma di origine in cui un identificatore ha un significato speciale. Ad esempio, una funzione specifica del programma di origine può utilizzare le costanti manifesto per definire valori specifici dell'ambiente che non influiscono sul resto del programma. Il **#undef** direttiva funziona anche con il `#if` direttiva per controllare la compilazione condizionale del programma di origine. Visualizzare [#if, #elif, #else e #endif direttive](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md) per altre informazioni.

Nell'esempio seguente, il **#undef** direttiva rimuove le definizioni di una costante simbolica e macro. Notare che viene specificato solo l'identificatore della macro.

```
#define WIDTH 80
#define ADD( X, Y ) ((X) + (Y))
.
.
.
#undef WIDTH
#undef ADD
```

**Sezione specifica Microsoft**

Le macro possono essere definite dalla riga di comando usando il `/U` opzione, seguita dai nomi delle macro per essere non definito. L'effetto dell'esecuzione di questo comando è equivalente a una sequenza di `#undef` *macro-name* istruzioni all'inizio del file.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)