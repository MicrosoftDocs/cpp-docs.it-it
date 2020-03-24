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
ms.openlocfilehash: fd9f8b444d263818aca1b16260f70730d5350e7c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169110"
---
# <a name="using-c-or-c-symbols-in-__asm-blocks"></a>Utilizzo di simboli C o C++ in blocchi __asm

**Sezione specifica Microsoft**

Un blocco `__asm` può fare riferimento a qualsiasi simbolo C o C++ nell'ambito in cui il blocco è presente. I simboli di C e C++ sono nomi di variabili, nomi di funzione ed etichette, ovvero nomi che non sono costanti simboliche o membri `enum`. Non è possibile chiamare funzioni membro C++.

Alcune restrizioni vengono applicate all'utilizzo dei simboli di C++ e C:

- Ogni istruzione in linguaggio assembly può contenere solo un simbolo C++ o C. Nella stessa istruzione di assembly possono essere presenti più simboli solo con espressioni di **lunghezza**, di **tipo**e di **dimensione** .

- Le funzioni a cui viene fatto riferimento in un blocco `__asm` devono essere dichiarate (con prototipo) in precedenza nel programma. In caso contrario, il compilatore non è in grado di distinguere tra i nomi di funzione e le etichette nel blocco `__asm`.

- Un blocco `__asm` non può contenere alcun simboli di C o C++ con la stessa ortografia di parole riservate MASM (indipendentemente dall'uso di maiuscole e minuscole). Le parole riservate di MASM includono nomi di istruzioni quali i nomi di **push** e di registro, ad esempio si.

- I tag di unione e di struttura non sono riconosciuti in blocchi `__asm`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
