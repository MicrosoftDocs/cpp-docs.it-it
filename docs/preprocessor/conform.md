---
title: Pragma conform
ms.date: 08/29/2019
f1_keywords:
- conform_CPP
- vc-pragma.conform
helpviewer_keywords:
- conform pragma
- forScope conform pragma
- pragmas, conform
ms.assetid: 71b3e174-c53c-4bfc-adf3-af39b1554191
ms.openlocfilehash: 816ff85bb19f549c6ea072073bd89fcd503545f2
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220503"
---
# <a name="conform-pragma"></a>Pragma conform

**C++Specifico**

Specifica il comportamento in fase di esecuzione dell'opzione del compilatore [/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) .

## <a name="syntax"></a>Sintassi

> **#pragma conforme (** *nome* [ **, Mostra** ] **[,** { **on** | **off** }] [ **[,** { **push** | **pop** }] [ **,** *identificatore* [ **,** { **on** **off}** ]  |  ] ] **)**

### <a name="parameters"></a>Parametri

*nome*\
Specifica il nome dell'opzione del compilatore da modificare. L'unico *nome* valido è `forScope`.

**Visualizza**\
Opzionale Determina la visualizzazione dell'impostazione corrente del *nome* (true o false) per mezzo di un messaggio di avviso durante la compilazione. Ad esempio `#pragma conform(forScope, show)`.

**acceso**, **disattivato**\
Opzionale L'impostazione del *nome* **su on** Abilita l'opzione del compilatore [/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) . Il valore predefinito è **off**.

**spingere**\
Opzionale Inserisce il valore corrente di *Name* nello stack interno del compilatore. Se si specifica l' *identificatore*, è possibile specificare il valore **on** o **off** per *nome* da inserire nello stack. Ad esempio `#pragma conform(forScope, push, myname, on)`.

**popup**\
Opzionale Imposta il valore di *Name* sul valore all'inizio dello stack interno del compilatore, quindi estrae lo stack. Se identificatore viene specificato con **pop**, lo stack verrà riestratto fino a quando non viene trovato il record con *identificatore*, che verrà anche Estratto; il valore corrente per il *nome* nel record successivo nello stack diventa il nuovo valore per il *nome*. Se si specifica **pop** con un *identificatore* che non è presente in un record nello stack, il **pop** viene ignorato.

*identificatore*\
Opzionale Può essere incluso con un comando **push** o **pop** . Se viene usato *Identifier* , è possibile usare anche un identificatore **on** o **off** .

## <a name="example"></a>Esempio

```cpp
// pragma_directive_conform.cpp
// compile with: /W1
// C4811 expected
#pragma conform(forScope, show)
#pragma conform(forScope, push, x, on)
#pragma conform(forScope, push, x1, off)
#pragma conform(forScope, push, x2, off)
#pragma conform(forScope, push, x3, off)
#pragma conform(forScope, show)
#pragma conform(forScope, pop, x1)
#pragma conform(forScope, show)

int main() {}
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
