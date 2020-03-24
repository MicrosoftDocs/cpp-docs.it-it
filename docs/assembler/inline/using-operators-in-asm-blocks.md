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
ms.openlocfilehash: b6ac9f7174baf1e0ebe41181c6a6f43e7bb3f5d1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169097"
---
# <a name="using-operators-in-__asm-blocks"></a>Utilizzo degli operatori in blocchi __asm

**Sezione specifica Microsoft**

Un blocco `__asm` non può utilizzare C C++ o operatori specifici, ad esempio l'operatore **<<** . Gli operatori condivisi da C e MASM, ad esempio l'operatore di \*, vengono tuttavia interpretati come operatori del linguaggio assembly. Ad esempio, all'esterno di un blocco di `__asm`, le parentesi quadre ( **[]** ) vengono interpretate come indici di matrice di inclusione, che C scala automaticamente alla dimensione di un elemento nella matrice. All'interno di un blocco `__asm`, vengono interpretate come operatore di indice di MASM, il che genera un offset dei byte non ridimensionato da qualsiasi oggetto dati o etichetta (non solo da una matrice). Nel codice riportato di seguito viene illustrata la differenza:

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
