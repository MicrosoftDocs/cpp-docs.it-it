---
title: "Assembler inline | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "assembler [C++]"
  - "assembler [C++], inline"
  - "linguaggio dell'assembly [C++], inline"
  - "assembler inline [C++]"
  - "assembly inline [C++]"
ms.assetid: 7e13f18f-3628-4306-8b81-4a6d09c043fe
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Assembler inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Il linguaggio assembly può essere utilizzato per diverse finalità, ad esempio per il miglioramento della velocità del programma, per la riduzione dei requisiti della memoria e per il controllo dell'hardware.  È possibile utilizzare l'assembler inline per incorporare le istruzioni in linguaggio assembly direttamente nei programmi di origine C e C\+\+ senza effettuare dei passaggi aggiuntivi di collegamento e di assembly.  L'assembler inline è incorporato nel compilatore, pertanto non è necessario utilizzare un assembler separato come Microsoft Macro Assembler \(MASM\).  
  
> [!NOTE]
>  I programmi con il codice assembler inline non sono completamente portabili in altre piattaforme hardware.  Se si sta progetta ai fini della portabilità, evitare di utilizzare l'assembler inline.  
  
 L'assembly inline non è supportato nei processori ARM e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].  Negli argomenti riportati di seguito viene illustrato come utilizzare l'assembler inline di Visual C\/C\+\+ con i processori x86:  
  
-   [Panoramica sull'assembler inline](../../assembler/inline/inline-assembler-overview.md)  
  
-   [Vantaggi dell'assembly inline](../../assembler/inline/advantages-of-inline-assembly.md)  
  
-   [\_\_asm](../../assembler/inline/asm.md)  
  
-   [Utilizzo del linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)  
  
-   [Utilizzo di C o C\+\+ in blocchi \_\_asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)  
  
-   [Utilizzo e mantenimento dei registri nell'assembly inline](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md)  
  
-   [Passaggio a etichette nell'assembly inline](../../assembler/inline/jumping-to-labels-in-inline-assembly.md)  
  
-   [Chiamare le funzioni C nell'assembly inline](../../assembler/inline/calling-c-functions-in-inline-assembly.md)  
  
-   [Chiamare le funzioni C\+\+ nell'assembly inline](../../assembler/inline/calling-cpp-functions-in-inline-assembly.md)  
  
-   [Definizione dei blocchi \_\_asm come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md)  
  
-   [Ottimizzazione dell'assembly Inline](../../assembler/inline/optimizing-inline-assembly.md)  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Intrinseci del compilatore e linguaggio dell'assembly](../../intrinsics/compiler-intrinsics-and-assembly-language.md)   
 [Riferimenti del linguaggio C\+\+](../../cpp/cpp-language-reference.md)