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
ms.openlocfilehash: cdcfee20cfdc5a6dc315d00ef024d1616900a2e8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87191105"
---
# <a name="using-operators-in-__asm-blocks"></a>Utilizzo degli operatori in blocchi __asm

**Specifico di Microsoft**

Un **`__asm`** blocco non può utilizzare operatori specifici C o C++, ad esempio l' **<<** operatore. Gli operatori condivisi da C e MASM, ad esempio l' \* operatore, vengono tuttavia interpretati come operatori del linguaggio assembly. Ad esempio, all'esterno di un **`__asm`** blocco, le parentesi quadre (**[]**) vengono interpretate come indici di matrice di inclusione, che C scala automaticamente alla dimensione di un elemento nella matrice. All'interno di un **`__asm`** blocco, vengono considerati un operatore di indice MASM, che restituisce un offset di byte non ridimensionato da qualsiasi oggetto dati o etichetta (non solo da una matrice). Nel codice riportato di seguito viene illustrata la differenza:

```cpp
int array[10];

__asm mov array[6], bx ;  Store BX at array+6 (not scaled)

array[6] = 0;         /* Store 0 at array+24 (scaled) */
```

Il primo riferimento a `array` non è ridimensionato, mentre il secondo lo è. Si noti che è possibile usare l'operatore **Type** per ottenere la scalabilità in base a una costante. Ad esempio, le istruzioni seguenti sono equivalenti:

```cpp
__asm mov array[6 * TYPE int], 0 ; Store 0 at array + 24

array[6] = 0;                   /* Store 0 at array + 24 */
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Utilizzo di C o C++ in blocchi di __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
