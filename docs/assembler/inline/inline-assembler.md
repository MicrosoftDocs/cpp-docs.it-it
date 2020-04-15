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
ms.openlocfilehash: 2050f59601755a93c73b743debacbf52ba9cec05
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318071"
---
# <a name="inline-assembler"></a>Assembler inline

**Specifico di Microsoft**

Il linguaggio assembly può essere utilizzato per diverse finalità, ad esempio per il miglioramento della velocità del programma, per la riduzione dei requisiti della memoria e per il controllo dell'hardware. È possibile utilizzare l'assembler inline per incorporare le istruzioni in linguaggio assembly direttamente nei programmi di origine C e C++ senza effettuare dei passaggi aggiuntivi di collegamento e di assembly. L'assembler inline è incorporato nel compilatore, pertanto non è necessario utilizzare un assembler separato come Microsoft Macro Assembler (MASM).

> [!NOTE]
> I programmi con il codice assembler inline non sono completamente portabili in altre piattaforme hardware. Se si sta progetta ai fini della portabilità, evitare di utilizzare l'assembler inline.

L'assembly inline non è supportato sui processori ARM e x64.  Negli argomenti riportati di seguito viene illustrato come utilizzare l'assembler inline di Visual C/C++ con i processori x86:

- [Panoramica sull'assembler inline](../../assembler/inline/inline-assembler-overview.md)

- [Vantaggi dell'assembly inline](../../assembler/inline/advantages-of-inline-assembly.md)

- [__asm](../../assembler/inline/asm.md)

- [Utilizzo del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)

- [Utilizzo di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)

- [Utilizzo e mantenimento dei registri nell'assembly inline](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md)

- [Passaggio a etichette nell'assembly inline](../../assembler/inline/jumping-to-labels-in-inline-assembly.md)

- [Chiamare le funzioni C nell'assembly inline](../../assembler/inline/calling-c-functions-in-inline-assembly.md)

- [Chiamata di funzioni C , nell'assembly inlineCalling C ' Functions in Inline Assembly](../../assembler/inline/calling-cpp-functions-in-inline-assembly.md)

- [Definizione dei blocchi __asm come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md)

- [Ottimizzazione dell'assembly Inline](../../assembler/inline/optimizing-inline-assembly.md)

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore e linguaggio assemblyCompiler Intrinsics and Assembly Language](../../intrinsics/compiler-intrinsics-and-assembly-language.md)<br/>
[Guida di riferimento al linguaggio C](../../cpp/cpp-language-reference.md)<br/>
