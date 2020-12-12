---
description: 'Altre informazioni su: assembler inline'
title: Assembler inline
ms.date: 08/30/2018
helpviewer_keywords:
- assembler [C++]
- assembler [C++], inline
- assembly language [C++], inline
- inline assembler [C++]
- inline assembly [C++]
ms.assetid: 7e13f18f-3628-4306-8b81-4a6d09c043fe
ms.openlocfilehash: 67ae8c40dee71f693dd6641dd81e8f61b8536a1e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117770"
---
# <a name="inline-assembler"></a>Assembler inline

**Specifico di Microsoft**

Il linguaggio assembly può essere utilizzato per diverse finalità, ad esempio per il miglioramento della velocità del programma, per la riduzione dei requisiti della memoria e per il controllo dell'hardware. È possibile utilizzare l'assembler inline per incorporare le istruzioni in linguaggio assembly direttamente nei programmi di origine C e C++ senza effettuare dei passaggi aggiuntivi di collegamento e di assembly. L'assembler inline è incorporato nel compilatore, pertanto non è necessario utilizzare un assembler separato come Microsoft Macro Assembler (MASM).

> [!NOTE]
> I programmi con il codice assembler inline non sono completamente portabili in altre piattaforme hardware. Se si sta progetta ai fini della portabilità, evitare di utilizzare l'assembler inline.

L'assembly inline non è supportato nei processori ARM e x64.  Negli argomenti riportati di seguito viene illustrato come utilizzare l'assembler inline di Visual C/C++ con i processori x86:

- [Panoramica sull'assembler inline](../../assembler/inline/inline-assembler-overview.md)

- [Vantaggi dell'assembly inline](../../assembler/inline/advantages-of-inline-assembly.md)

- [__asm](../../assembler/inline/asm.md)

- [Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)

- [Utilizzo di C o C++ in blocchi di __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)

- [Utilizzo e mantenimento di registri nell'assembly inline](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md)

- [Passaggio alle etichette in assembly inline](../../assembler/inline/jumping-to-labels-in-inline-assembly.md)

- [Chiamata di funzioni C nell'assembly inline](../../assembler/inline/calling-c-functions-in-inline-assembly.md)

- [Chiamata di funzioni C++ nell'assembly inline](../../assembler/inline/calling-cpp-functions-in-inline-assembly.md)

- [Definizione di blocchi di __asm come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md)

- [Ottimizzazione dell'assembly inline](../../assembler/inline/optimizing-inline-assembly.md)

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore e linguaggio dell'assembly](../../intrinsics/compiler-intrinsics-and-assembly-language.md)<br/>
[Riferimenti per il linguaggio C++](../../cpp/cpp-language-reference.md)<br/>
