---
title: Panoramica sull'assembler inline
ms.date: 08/30/2018
helpviewer_keywords:
- inline assembler
- __asm keyword [C++], invoking inline assembler
- invoking inline assembler
- inline assembly, inline assembler
ms.assetid: d990331a-0e33-4760-8d7a-b720b0288335
ms.openlocfilehash: 21e0d9ca0e64922b83518eb79c19d2f2e67813bd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62167011"
---
# <a name="inline-assembler-overview"></a>Panoramica sull'assembler inline

**Sezione specifica Microsoft**

È possibile utilizzare l'assembler inline per incorporare le istruzioni in linguaggio assembly nei programmi di origine C e C++ senza effettuare dei passaggi aggiuntivi di collegamento e di assembly. L'assembler inline è incorporato nel compilatore, pertanto non è necessario utilizzare un assembler separato come Microsoft Macro Assembler (MASM).

Poiché l'assembler inline non richiede un assembly separato e operazioni di collegamento, è più conveniente di un assembly separato. Il codice assembly inline può utilizzare qualsiasi nome funzione o variabile di C o C++ incluso nell'ambito, in modo che sia facile integrarlo con il codice C e C++ del programma. E poiché il codice assembly può essere combinato con istruzioni di C++ e C, può effettuare attività che sono complesse o impossibili in C o C++ da solo.

Il [ASM](../../assembler/inline/asm.md) richiamare l'assembler inline e siano visualizzabili ovunque a C (parola chiave) o C++ istruzione sia valida. Non può essere visualizzata da sola. Deve essere seguita da un'istruzione dell'assembly, da un gruppo di istruzioni racchiuse tra parentesi graffe o almeno da una coppia di parentesi graffe vuote. Il termine "`__asm` block" qui si riferisce a qualsiasi istruzione o gruppo di istruzioni, racchiuso o meno tra parentesi graffe.

Il codice seguente è un semplice blocco `__asm` racchiuso tra parentesi graffe. Il codice è una sequenza di prologo di funzione personalizzata.

```cpp
// asm_overview.cpp
// processor: x86
void __declspec(naked) main()
{
    // Naked functions must provide their own prolog...
    __asm {
        push ebp
        mov ebp, esp
        sub esp, __LOCAL_SIZE
    }

    // ... and epilog
    __asm {
        pop ebp
        ret
    }
}
```

In alternativa, è possibile inserire `__asm` davanti a ogni istruzione dell'assembly:

```cpp
__asm push ebp
__asm mov  ebp, esp
__asm sub  esp, __LOCAL_SIZE
```

Poiché la parola chiave `__asm` è un separatore di istruzione, è anche possibile inserire le istruzioni di assembly nella stessa riga:

```cpp
__asm push ebp   __asm mov  ebp, esp   __asm sub  esp, __LOCAL_SIZE
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>