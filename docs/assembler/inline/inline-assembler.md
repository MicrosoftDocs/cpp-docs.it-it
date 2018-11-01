---
title: Assembler inline
ms.date: 08/30/2018
helpviewer_keywords:
- assembler [C++]
- assembler [C++], inline
- assembly language [C++], inline
- inline assembler [C++]
- inline assembly [C++]
ms.assetid: 7e13f18f-3628-4306-8b81-4a6d09c043fe
ms.openlocfilehash: f2be42cd5ab4d335d076a1eb4627c41f5b340350
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50529285"
---
# <a name="inline-assembler"></a>Assembler inline

**Sezione specifica Microsoft**

Il linguaggio assembly può essere utilizzato per diverse finalità, ad esempio per il miglioramento della velocità del programma, per la riduzione dei requisiti della memoria e per il controllo dell'hardware. È possibile utilizzare l'assembler inline per incorporare le istruzioni in linguaggio assembly direttamente nei programmi di origine C e C++ senza effettuare dei passaggi aggiuntivi di collegamento e di assembly. L'assembler inline è incorporato nel compilatore, pertanto non è necessario utilizzare un assembler separato come Microsoft Macro Assembler (MASM).

> [!NOTE]
>  I programmi con il codice assembler inline non sono completamente portabili in altre piattaforme hardware. Se si sta progetta ai fini della portabilità, evitare di utilizzare l'assembler inline.

Assembly inline non è supportato di ARM e x64 processori.  Negli argomenti riportati di seguito viene illustrato come utilizzare l'assembler inline di Visual C/C++ con i processori x86:

- [Panoramica di assembler inline](../../assembler/inline/inline-assembler-overview.md)

- [Vantaggi dell'assembly inline](../../assembler/inline/advantages-of-inline-assembly.md)

- [__asm](../../assembler/inline/asm.md)

- [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)

- [Uso di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)

- [Uso e mantenimento dei registri nell'assembly inline](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md)

- [Passaggio a etichette nell'assembly inline](../../assembler/inline/jumping-to-labels-in-inline-assembly.md)

- [Chiamata delle funzioni C nell'assembly inline](../../assembler/inline/calling-c-functions-in-inline-assembly.md)

- [Chiamata delle funzioni C++ nell'assembly inline](../../assembler/inline/calling-cpp-functions-in-inline-assembly.md)

- [Definizione dei blocchi __asm come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md)

- [Ottimizzazione dell'assembly Inline](../../assembler/inline/optimizing-inline-assembly.md)

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore e linguaggio assembly](../../intrinsics/compiler-intrinsics-and-assembly-language.md)<br/>
[Riferimenti al linguaggio C++](../../cpp/cpp-language-reference.md)<br/>