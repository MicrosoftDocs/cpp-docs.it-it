---
title: Utilizzo degli operatori in blocchi asm | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 2e1c7c4b8415655aff36327db9c6a9f866d82683
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32051130"
---
# <a name="using-operators-in-asm-blocks"></a>Utilizzo degli operatori in blocchi __asm
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Un `__asm` blocco non è possibile utilizzare operatori specifici di C o C++, ad esempio il **<<** operatore. Tuttavia, gli operatori condivisi da C e da MASM, ad esempio il \* operatore, vengono interpretati come operatori di linguaggio assembly. Ad esempio, all'esterno di un `__asm` blocco, le parentesi quadre (**[]**) vengono interpretate come contenenti indici di matrice, che C ridimensiona automaticamente alle dimensioni di un elemento nella matrice. All'interno di un blocco `__asm`, vengono interpretate come operatore di indice di MASM, il che genera un offset dei byte non ridimensionato da qualsiasi oggetto dati o etichetta (non solo da una matrice). Nel codice riportato di seguito viene illustrata la differenza:  
  
```  
int array[10];  
  
__asm mov array[6], bx ;  Store BX at array+6 (not scaled)  
  
array[6] = 0;         /* Store 0 at array+24 (scaled) */  
```  
  
 Il primo riferimento a `array` non è ridimensionato, mentre il secondo lo è. Si noti che è possibile utilizzare il **tipo** operatore per ottenere un ridimensionamento basato su una costante. Ad esempio, le seguenti istruzioni sono equivalenti:  
  
```  
__asm mov array[6 * TYPE int], 0 ; Store 0 at array + 24  
  
array[6] = 0;                   /* Store 0 at array + 24 */  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)