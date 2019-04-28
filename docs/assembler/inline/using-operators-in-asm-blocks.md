---
title: Utilizzo degli operatori in blocchi __asm
ms.date: 08/30/2018
helpviewer_keywords:
- brackets [ ]
- brackets [ ], __asm blocks
- __asm keyword [C++], operators
- square brackets [ ], __asm blocks
- operators [C++], using in __asm blocks
- square brackets [ ]
ms.assetid: a26ccfd4-40ae-4a61-952f-c417982aa8dd
ms.openlocfilehash: a871c19942252bf6a1a4901f8854b7b759700cd9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62166503"
---
# <a name="using-operators-in-asm-blocks"></a>Utilizzo degli operatori in blocchi __asm

**Sezione specifica Microsoft**

Un' `__asm` blocco non è possibile usare operatori specifici di C o C++, ad esempio il **<<** operatore. Tuttavia, gli operatori condivisi da C e da MASM, ad esempio il \* (operatore), vengono interpretati come operatori di linguaggio assembly. Ad esempio, all'esterno di un' `__asm` bloccare, le parentesi quadre (**[]**) vengono interpretate come indici di matrice, che C ridimensiona automaticamente le dimensioni di un elemento nella matrice di inclusione. All'interno di un blocco `__asm`, vengono interpretate come operatore di indice di MASM, il che genera un offset dei byte non ridimensionato da qualsiasi oggetto dati o etichetta (non solo da una matrice). Nel codice riportato di seguito viene illustrata la differenza:

```cpp
int array[10];

__asm mov array[6], bx ;  Store BX at array+6 (not scaled)

array[6] = 0;         /* Store 0 at array+24 (scaled) */
```

Il primo riferimento a `array` non è ridimensionato, mentre il secondo lo è. Si noti che è possibile usare la **tipo** operatore per ottenere un ridimensionamento basato su una costante. Ad esempio, le seguenti istruzioni sono equivalenti:

```cpp
__asm mov array[6 * TYPE int], 0 ; Store 0 at array + 24

array[6] = 0;                   /* Store 0 at array + 24 */
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>