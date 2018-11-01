---
title: Utilizzo di simboli C o C++ in blocchi __asm
ms.date: 08/30/2018
helpviewer_keywords:
- __asm keyword [C++], syntax
- symbols, in __asm blocks
- Visual C, symbols in __asm blocks
- __asm keyword [C++], C/C++ elements in
- Visual C++, in __asm blocks
ms.assetid: 0758ffdc-dfe9-41c8-a5e1-fd395bcac328
ms.openlocfilehash: fc22af8ec04d616eb8f5566b118e19c405605401
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50552516"
---
# <a name="using-c-or-c-symbols-in-asm-blocks"></a>Utilizzo di simboli C o C++ in blocchi __asm

**Sezione specifica Microsoft**

Un blocco `__asm` può fare riferimento a qualsiasi simbolo C o C++ nell'ambito in cui il blocco è presente. I simboli di C e C++ sono nomi di variabili, nomi di funzione ed etichette, ovvero nomi che non sono costanti simboliche o membri `enum`. Non è possibile chiamare funzioni membro C++.

Alcune restrizioni vengono applicate all'utilizzo dei simboli di C++ e C:

- Ogni istruzione in linguaggio assembly può contenere solo un simbolo C++ o C. I simboli possono trovarsi nella stessa istruzione assembly solo con **lunghezza**, **tipo**, e **dimensioni** espressioni.

- Le funzioni a cui viene fatto riferimento in un blocco `__asm` devono essere dichiarate (con prototipo) in precedenza nel programma. In caso contrario, il compilatore non è in grado di distinguere tra i nomi di funzione e le etichette nel blocco `__asm`.

- Un blocco `__asm` non può contenere alcun simboli di C o C++ con la stessa ortografia di parole riservate MASM (indipendentemente dall'uso di maiuscole e minuscole). Parole riservate di MASM includono, ad esempio i nomi di istruzioni **PUSH** e registrare i nomi, ad esempio sistema internazionale di misura.

- I tag di unione e di struttura non sono riconosciuti in blocchi `__asm`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>