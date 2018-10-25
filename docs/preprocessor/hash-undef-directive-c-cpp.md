---
title: '#undef (direttiva) (C/C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- '#undef'
dev_langs:
- C++
helpviewer_keywords:
- '#undef directive'
- undef directive (#undef)
- preprocessor, directives
ms.assetid: 88900e0e-2c19-4a63-b681-f3d3133c24ca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8412c7f4de3107674c67a64ee5e298a6173fbb12
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50082957"
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