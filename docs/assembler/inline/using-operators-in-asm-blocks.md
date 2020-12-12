---
description: 'Altre informazioni su: uso di operatori in blocchi di __asm'
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
ms.openlocfilehash: 266d840e6cb407d45c1d3a49bed6a2390e52aa2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97121849"
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

## <a name="see-also"></a>Vedi anche

[Utilizzo di C o C++ in blocchi di __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
