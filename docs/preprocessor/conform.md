---
title: conform | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- conform_CPP
- vc-pragma.conform
dev_langs:
- C++
helpviewer_keywords:
- conform pragma
- forScope conform pragma
- pragmas, conform
ms.assetid: 71b3e174-c53c-4bfc-adf3-af39b1554191
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 05b1f9fef458b8c21de9eb3942730ff901d3922e
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50071232"
---
# <a name="conform"></a>conform
**Sezione specifica C++**

Specifica il comportamento in fase di esecuzione del [/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) opzione del compilatore.

## <a name="syntax"></a>Sintassi

> **#pragma è conforme (** *name* [**, mostrare** ] [**,** { **in** | **off** }] [[**,** { **push** | **pop** }] [**,** *identificatore* ]] **)**

### <a name="parameters"></a>Parametri

*name*<br/>
Specifica il nome dell'opzione del compilatore da modificare. Valido solo *name* è `forScope`.

**Show**<br/>
(Facoltativo) Fa sì che l'impostazione corrente di *nome* (true o false) da visualizzare mediante un messaggio di avviso durante la compilazione. Ad esempio `#pragma conform(forScope, show)`.

**sul**, **off**<br/>
(Facoltativo) L'impostazione *nome* a **sul** consente la [/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) opzione del compilatore. Il valore predefinito è **disattivata**.

**push**<br/>
(Facoltativo) Inserisce il valore corrente di *nome* nello stack interno del compilatore. Se si specifica *identificatore*, è possibile specificare la **sul** o **off** value per *nome* da inserire nello stack. Ad esempio `#pragma conform(forScope, push, myname, on)`.

**pop**<br/>
(Facoltativo) Imposta il valore della *nome* al valore nella parte superiore dello stack del compilatore interno e quindi estrae lo stack. Se viene specificato con l'identificatore **pop**, verrà visualizzato lo stack indietro fino a quando non individua il record con *identifier*, che verrà sicuramente estratta anche; il valore corrente per *nome* in il record successivo dello stack diventerà il nuovo valore per *nome*. Se si specifica **pop** con un *identifier* che non è presente in un record nello stack, il **pop** viene ignorato.

*identifier*<br/>
(Facoltativo) Può essere incluso in un **push** oppure **pop** comando. Se *identifier* viene usato, un' **sul** o **off** identificatore possa anche essere usato.

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

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)