---
title: pseudoistruzione Emit | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: conceptual
f1_keywords:
- _emit
dev_langs:
- C++
helpviewer_keywords:
- byte defining (inline assembly)
- _emit pseudoinstruction
ms.assetid: 004c48f3-364c-4e82-9a51-e326f9cc7b2b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c8c11165e8b6632488d29e5fe79aa945332c25e9
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43689362"
---
# <a name="emit-pseudoinstruction"></a>Pseudo-istruzione _emit

**Sezione specifica Microsoft**

Il **pseudoistruzione** pseudoistruzione definisce un byte nella posizione corrente nel segmento di testo corrente. Il **pseudoistruzione** pseudoistruzione è simile al [DB](../../assembler/masm/db.md) direttive di MASM.

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
> Se `_emit` genera istruzioni che modificano i registri e l'applicazione viene compilata con le ottimizzazioni, il compilatore non può determinare i registri interessati. Ad esempio, se `_emit` genera un'istruzione che modifica il **rax** register, il compilatore non sa che **rax** è stato modificato. Il compilatore può quindi basarsi su un presupposto non corretto in relazione al valore nel registro dopo l'esecuzione del codice assembler inline. Di conseguenza, l'applicazione potrebbe comportarsi in modo imprevedibile durante l'esecuzione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>