---
description: Altre informazioni sulla pragma direttiva di conformità in Microsoft C/C++
title: conformi pragma
ms.date: 01/22/2021
f1_keywords:
- conform_CPP
- vc-pragma.conform
helpviewer_keywords:
- conform pragma
- forScope conform pragma
- pragma, conform
no-loc:
- pragma
ms.openlocfilehash: baaeb41e2364daac8de91ca15251226bf3dd1e2a
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713701"
---
# <a name="conform-no-locpragma"></a>`conform` pragma

**Sezione specifica C++**

Specifica il comportamento in fase di esecuzione dell' [`/Zc:forScope`](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) opzione del compilatore.

## <a name="syntax"></a>Sintassi

> **`#pragma conform(`***nome* [ **`, show`** ] [ **`,`** { **`on`**  |  **`off`** }] [[ **`,`** { **`push`**  |  **`pop`** }] [ **`,`** *identificatore* [ **`,`** { **`on`**  |  **`off`** }]]]**`)`**

### <a name="parameters"></a>Parametri

*nome*\
Specifica il nome dell'opzione del compilatore da modificare. L'unico *nome* valido è `forScope` .

**`show`**\
Opzionale Determina la visualizzazione dell'impostazione corrente del *nome* (true o false) per mezzo di un messaggio di avviso durante la compilazione. Ad esempio: `#pragma conform(forScope, show)`.

**`on`**, **`off`**\
Opzionale L'impostazione del *nome* su **`on`** Abilita l'opzione del compilatore [/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) . Il valore predefinito è **`off`** .

**`push`**\
Opzionale Inserisce il valore corrente di *Name* nello stack interno del compilatore. Se si specifica l' *identificatore*, è possibile specificare **`on`** il **`off`** valore o per il *nome* da inserire nello stack. Ad esempio: `#pragma conform(forScope, push, myname, on)`.

**`pop`**\
Opzionale Imposta il valore di *Name* sul valore all'inizio dello stack interno del compilatore, quindi estrae lo stack. Se l'identificatore viene specificato con **`pop`** , lo stack verrà estratto nuovamente fino a quando non viene trovato il record con *identificatore*, che verrà estratto. il valore corrente per il *nome* nel record successivo dello stack diventa il nuovo valore per il *nome*. Se si specifica **`pop`** con un *identificatore* che non si trova in un record nello stack, **`pop`** viene ignorato.

*identificatore*\
Opzionale Può essere incluso con un **`push`** **`pop`** comando o. Se viene usato *Identifier* , è **`on`** **`off`** possibile usare anche un identificatore o.

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

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
