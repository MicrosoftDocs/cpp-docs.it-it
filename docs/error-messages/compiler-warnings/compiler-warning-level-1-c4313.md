---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4313'
title: Avviso del compilatore (livello 1) C4313
ms.date: 11/04/2016
f1_keywords:
- C4313
helpviewer_keywords:
- C4313
ms.assetid: bcf64191-e2cf-452e-97b4-423fcec2d07c
ms.openlocfilehash: dbf609ebac3e94cb7f49494c815cb40414c9b510
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311656"
---
# <a name="compiler-warning-level-1-c4313"></a>Avviso del compilatore (livello 1) C4313

'function': 'format specifier' nella stringa di formato è in conflitto con l'argomento number di tipo 'type'

Esiste un conflitto tra il formato specificato e il valore che si sta passando. Ad esempio, si è passato un parametro a 64 bit a un identificatore di formato %d non qualificato, che prevede un parametro integer a 32 bit. Questo avviso è attivo solo quando il codice viene compilato per destinazioni a 64 bit.

## <a name="example"></a>Esempio

L'esempio di codice seguente genera l'errore C4313 quando viene eseguita la compilazione per una destinazione a 64 bit.

```cpp
// C4313.cpp
// Compile by using: cl /W1 C4313.cpp
#include <stdio.h>
int main() {
   int * pI = 0;
   printf("%d", pI);   // C4313 on 64-bit platform code
   // Try one of the following lines instead:
   // printf("%p\n", pI);
   // printf("%Id\n", pI);   // %I64d expects 64-bits of information
}
```
