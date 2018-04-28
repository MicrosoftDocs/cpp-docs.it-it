---
title: Utilizzo di C o C++ in blocchi asm | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inline assembly, mixing instructions with C/C++ statements
- symbols, in __asm blocks
- macros, __asm blocks
- preprocessor directives, used in __asm blocks
- type names, used in __asm blocks
- preprocessor directives
- preprocessor, directives
- constants, in __asm blocks
- comments, in __asm blocks
- typedef names, used in __asm blocks
- __asm keyword [C++], C/C++ elements in
ms.assetid: ae8b2b52-6b75-42e3-ac0c-ad02d922ed97
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5e9451a0b665e5377c2acaf871154ec78a38c8b5
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="using-c-or-c-in-asm-blocks"></a>Utilizzo di C o C++ in blocchi __asm
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Poiché le istruzioni assembly inline possono essere combinate con le istruzioni C++ o C, le stesse possono riferirsi alle variabili C++ o C indicandole per nome e utilizzare molti altri elementi di tali linguaggi.  
  
 Un blocco `__asm` può utilizzare i seguenti elementi di linguaggio:  
  
-   Simboli, incluse le etichette e i nomi di funzioni e variabili  
  
-   Costanti, incluse le costanti simboliche e i membri `enum`  
  
-   Direttive per il preprocessore e macro  
  
-   Commenti (sia **/ \* \* /** e **//** )  
  
-   Nomi dei tipi (laddove sia possibile utilizzare i tipi MASM)  
  
-   `typedef` i nomi, in genere utilizzati con gli operatori, ad esempio **PTR** e **tipo** o per specificare i membri di struttura o unione  
  
 All'interno di un blocco `__asm` è possibile specificare le costanti Integer sia con la notazione C che con la notazione base dell'assembler (ad esempio, 0x100 e 100h sono equivalenti). Ciò consente di definire (utilizzando `#define`) una costante in C e utilizzarla in seguito nelle parti dell'assembly del programma C o C++. È inoltre possibile specificare le costanti nel formato ottale precedendole con 0. Ad esempio, 0777 specifica una costante ottale.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Uso degli operatori in blocchi __asm](../../assembler/inline/using-operators-in-asm-blocks.md)  
  
-   [Utilizzo di C o C++ simboli blocchi asm](../../assembler/inline/using-c-or-cpp-symbols-in-asm-blocks.md)  
  
-   [Accesso a dati C o C++ in blocchi __asm](../../assembler/inline/accessing-c-or-cpp-data-in-asm-blocks.md)  
  
-   [Scrittura di funzioni con assembly inline](../../assembler/inline/writing-functions-with-inline-assembly.md)  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)