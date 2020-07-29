---
title: Utilizzo di C o C++ in blocchi __asm
ms.date: 08/30/2018
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
ms.openlocfilehash: 05e63d666f3fc39126d6f48e8fc523c4a02e76df
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87191417"
---
# <a name="using-c-or-c-in-__asm-blocks"></a>Utilizzo di C o C++ in blocchi __asm

**Specifico di Microsoft**

Poiché le istruzioni assembly inline possono essere combinate con le istruzioni C++ o C, le stesse possono riferirsi alle variabili C++ o C indicandole per nome e utilizzare molti altri elementi di tali linguaggi.

Un **`__asm`** blocco può utilizzare gli elementi del linguaggio seguenti:

- Simboli, incluse le etichette e i nomi di funzioni e variabili

- Costanti, incluse le costanti e **`enum`** i membri simbolici

- Direttive per il preprocessore e macro

- __ / \* Commenti \* ( / __ e __//__ )

- Nomi dei tipi (laddove sia possibile utilizzare i tipi MASM)

- **`typedef`** nomi, usati in genere con operatori quali **ptr** e **Type** oppure per specificare i membri della struttura o dell'Unione

All'interno di un **`__asm`** blocco è possibile specificare costanti integer con la notazione C o la notazione radice Assembler (ad esempio, 0x100 e 100h sono equivalenti). Ciò consente di definire (utilizzando `#define`) una costante in C e utilizzarla in seguito nelle parti dell'assembly del programma C o C++. È inoltre possibile specificare le costanti nel formato ottale precedendole con 0. Ad esempio, 0777 specifica una costante ottale.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Uso di operatori in blocchi di __asm](../../assembler/inline/using-operators-in-asm-blocks.md)

- [Utilizzo di simboli C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-symbols-in-asm-blocks.md)

- [Accesso a dati C o C++ in blocchi di __asm](../../assembler/inline/accessing-c-or-cpp-data-in-asm-blocks.md)

- [Scrittura di funzioni con assembly inline](../../assembler/inline/writing-functions-with-inline-assembly.md)

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
