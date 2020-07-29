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
ms.openlocfilehash: ecdd3b6b6916a5c9585678838d8e494a58e0508c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87191196"
---
# <a name="using-c-or-c-symbols-in-__asm-blocks"></a>Utilizzo di simboli C o C++ in blocchi __asm

**Specifico di Microsoft**

Un **`__asm`** blocco può fare riferimento a qualsiasi simbolo C o C++ nell'ambito in cui viene visualizzato il blocco. I simboli C e C++ sono nomi di variabili, nomi di funzioni ed etichette, ovvero nomi che non sono costanti o membri simbolici **`enum`** . Non è possibile chiamare funzioni membro C++.

Alcune restrizioni vengono applicate all'utilizzo dei simboli di C++ e C:

- Ogni istruzione in linguaggio assembly può contenere solo un simbolo C++ o C. Nella stessa istruzione di assembly possono essere presenti più simboli solo con espressioni di **lunghezza**, di **tipo**e di **dimensione** .

- Le funzioni a cui viene fatto riferimento in un **`__asm`** blocco devono essere dichiarate (prototipo) prima nel programma. In caso contrario, il compilatore non può distinguere tra i nomi di funzione e le etichette nel **`__asm`** blocco.

- Un **`__asm`** blocco non può utilizzare alcun simbolo C o C++ con la stessa ortografia delle parole riservate di MASM (indipendentemente dal caso). Le parole riservate di MASM includono nomi di istruzioni quali i nomi di **push** e di registro, ad esempio si.

- I tag di struttura e Unione non sono riconosciuti nei **`__asm`** blocchi.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Utilizzo di C o C++ in blocchi di __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
