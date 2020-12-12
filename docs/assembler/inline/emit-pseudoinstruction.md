---
description: 'Altre informazioni su: _emit Emit'
title: Pseudo-istruzione _emit
ms.date: 08/30/2018
f1_keywords:
- _emit
helpviewer_keywords:
- byte defining (inline assembly)
- _emit pseudoinstruction
ms.assetid: 004c48f3-364c-4e82-9a51-e326f9cc7b2b
ms.openlocfilehash: d3e2a39312c94ff0e4868bed9afa74011051a129
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117809"
---
# <a name="_emit-pseudoinstruction"></a>Pseudo-istruzione _emit

**Specifico di Microsoft**

Il **_emit** emit definisce un byte nella posizione corrente del segmento di testo corrente. Il **_emit** Emit è simile alla direttiva [DB](../../assembler/masm/db.md) di MASM.

Nel frammento seguente i byte 0x4A, 0x43 e 0x4B vengono posizionati nel codice:

```cpp
#define randasm __asm _emit 0x4A __asm _emit 0x43 __asm _emit 0x4B
.
.
.
__asm {
    randasm
    }
```

> [!CAUTION]
> Se `_emit` genera istruzioni che modificano i registri e l'applicazione viene compilata con le ottimizzazioni, il compilatore non può determinare i registri interessati. Se, ad esempio, viene `_emit` generata un'istruzione che modifica il registro **Rax** , il compilatore non sa che **Rax** è stato modificato. Il compilatore può quindi basarsi su un presupposto non corretto in relazione al valore nel registro dopo l'esecuzione del codice assembler inline. Di conseguenza, l'applicazione potrebbe comportarsi in modo imprevedibile durante l'esecuzione.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
