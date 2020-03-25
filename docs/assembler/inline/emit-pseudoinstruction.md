---
title: Pseudo-istruzione _emit
ms.date: 08/30/2018
f1_keywords:
- _emit
helpviewer_keywords:
- byte defining (inline assembly)
- _emit pseudoinstruction
ms.assetid: 004c48f3-364c-4e82-9a51-e326f9cc7b2b
ms.openlocfilehash: 8be250aadf20dc4a7dee6a0b565ece21840339d7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169474"
---
# <a name="_emit-pseudoinstruction"></a>Pseudo-istruzione _emit

**Sezione specifica Microsoft**

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
> Se `_emit` genera istruzioni che modificano i registri e l'applicazione viene compilata con le ottimizzazioni, il compilatore non può determinare i registri interessati. Se, ad esempio, `_emit` genera un'istruzione che modifica il registro **Rax** , il compilatore non sa che **Rax** è stato modificato. Il compilatore può quindi basarsi su un presupposto non corretto in relazione al valore nel registro dopo l'esecuzione del codice assembler inline. Di conseguenza, l'applicazione potrebbe comportarsi in modo imprevedibile durante l'esecuzione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
