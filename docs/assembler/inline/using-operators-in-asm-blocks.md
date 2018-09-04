---
title: Utilizzo degli operatori in blocchi asm | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- brackets [ ]
- brackets [ ], __asm blocks
- __asm keyword [C++], operators
- square brackets [ ], __asm blocks
- operators [C++], using in __asm blocks
- square brackets [ ]
ms.assetid: a26ccfd4-40ae-4a61-952f-c417982aa8dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8731169013cba50e01c36aa721859e136938f015
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43676910"
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