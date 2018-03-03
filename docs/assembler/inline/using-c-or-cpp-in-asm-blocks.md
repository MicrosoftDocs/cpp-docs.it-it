---
title: Utilizzo di C o C++ in blocchi asm | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ab706f682372cb0a76f0d3283157d4da9105ed6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-c-or-c-in-asm-blocks"></a>Utilizzo di C o C++ in blocchi __asm
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Poiché le istruzioni assembly inline possono essere combinate con le istruzioni C++ o C, le stesse possono riferirsi alle variabili C++ o C indicandole per nome e utilizzare molti altri elementi di tali linguaggi.  
  
 Un blocco `__asm` può utilizzare i seguenti elementi di linguaggio:  
  
-   Simboli, incluse le etichette e i nomi di funzioni e variabili  
  
-   Costanti, incluse le costanti simboliche e i membri `enum`  
  
-   Direttive per il preprocessore e macro  
  
-   Commenti (sia  **/ \* \* /**  e  **//**  )  
  
-   Nomi dei tipi (laddove sia possibile utilizzare i tipi MASM)  
  
-   `typedef`i nomi, in genere utilizzati con gli operatori, ad esempio **PTR** e **tipo** o per specificare membri di struttura o unione  
  
 All'interno di un blocco `__asm` è possibile specificare le costanti Integer sia con la notazione C che con la notazione base dell'assembler (ad esempio, 0x100 e 100h sono equivalenti). Ciò consente di definire (utilizzando `#define`) una costante in C e utilizzarla in seguito nelle parti dell'assembly del programma C o C++. È inoltre possibile specificare le costanti nel formato ottale precedendole con 0. Ad esempio, 0777 specifica una costante ottale.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Uso degli operatori in blocchi __asm](../../assembler/inline/using-operators-in-asm-blocks.md)  
  
-   [Utilizzo di simboli C o C++ blocchi asm](../../assembler/inline/using-c-or-cpp-symbols-in-asm-blocks.md)  
  
-   [Accesso a dati C o C++ in blocchi __asm](../../assembler/inline/accessing-c-or-cpp-data-in-asm-blocks.md)  
  
-   [Scrittura di funzioni con assembly inline](../../assembler/inline/writing-functions-with-inline-assembly.md)  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)