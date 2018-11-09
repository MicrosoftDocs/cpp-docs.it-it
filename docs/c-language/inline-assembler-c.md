---
title: Assembler inline (C)
ms.date: 11/04/2016
helpviewer_keywords:
- __asm keyword [C]
- inline assembler [C]
ms.assetid: 821acc77-60b1-434c-ba54-2ba930a25ab4
ms.openlocfilehash: 08507c7ce0c1163e8768ed3551cd7053503058e9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50549682"
---
# <a name="inline-assembler-c"></a>Assembler inline (C)

**Sezione specifica Microsoft**

È possibile utilizzare l'assembler inline per incorporare le istruzioni in linguaggio assembly direttamente nei programmi di origine C senza effettuare dei passaggi aggiuntivi di collegamento e di assembly. L'assembler inline è incorporato nel compilatore, pertanto non è necessario utilizzare un assembler separato come Microsoft Macro Assembler (MASM).

Poiché l'assembler inline non richiede un assembly separato e operazioni di collegamento, è più conveniente di un assembly separato. Il codice assembly inline può utilizzare qualsiasi variabile C o nome di funzione inclusa nell'ambito, quindi può essere facilmente integrato con il codice C del programma. E poiché il codice assembly può essere combinato con istruzioni di C, può eseguire attività complesse o impossibili in C da solo.

La parola chiave `__asm` consente di richiamare l'assembler inline e può essere visualizzata ovunque un'istruzione C sia valida. Non può essere visualizzata da sola. Deve essere seguita da un'istruzione dell'assembly, da un gruppo di istruzioni racchiuse tra parentesi graffe o almeno da una coppia di parentesi graffe vuote. Il termine "`__asm` block" qui si riferisce a qualsiasi istruzione o gruppo di istruzioni, racchiuso o meno tra parentesi graffe.

Il codice seguente è un blocco `__asm` semplice racchiuso tra parentesi graffe. Il codice è una sequenza di prologo di funzione personalizzata.

```
__asm
{
   push ebp
   mov  ebp, esp
   sub  esp, __LOCAL_SIZE
}
```

In alternativa, è possibile inserire `__asm` davanti a ogni istruzione dell'assembly:

```
__asm push ebp
__asm mov  ebp, esp
__asm sub  esp, __LOCAL_SIZE
```

Poiché la parola chiave `__asm` è un separatore di istruzione, è anche possibile inserire le istruzioni di assembly nella stessa riga:

```
__asm push ebp   __asm mov  ebp, esp   __asm sub  esp, __LOCAL_SIZE
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Attributi di funzioni](../c-language/function-attributes.md)